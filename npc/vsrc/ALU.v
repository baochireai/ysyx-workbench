module ALU(
    // 1. ctlr signals
    input [4:0] ALUct, //ALU[4] 乘除法 ALU[3] sign
    input ALUAsr,//ALUAsr 0:PC 1:R_rs1
    input [1:0] ALUBsr, //ALUBsr 2'b00:Imm 2'b01:R_rs2 2'b10:64'd4
    input isTuncate,
    input isSext,
    // 2. operate data
    input [63:0] PC,
    input [63:0] R_rs1,
    input [63:0] Imm,
    input [63:0] R_rs2,
    // 3. outputs
    // 3.1 mem addr/regs wdata
    output [63:0] ALUres,
    // 3.2 conditionalJump
    output Less,
    output Zero
);

    // 1. operate data decode
    wire [63:0] ALUA,ALUB;
    assign ALUA=ALUAsr?R_rs1:PC;
    MuxKeyInternal #(3,2,64,1) deALUBsr(.out(ALUB),.key(ALUBsr),.default_out(64'd0),.lut({
    2'b00,Imm,
    2'b01,R_rs2,
    2'b10,64'd4
    }));

    // 2. alu opcode decode
    wire US_S = ALUct[3];//有无符号
    wire Sub_Add = ALUct[2:0]==3'b010|| (ALUct[2:0]==3'b000&&ALUct[3]==1'b1) ;
    wire A_L = ALUct[3];//算术/逻辑
    wire L_R = (ALUct[2:0]==3'b001);//左移/右移(ALUct[2:0]==101)

    // 3. adder
    wire [63:0] adder;
    wire Carry,Overflow;
    wire lessS;
    wire lessUS;
    Adder #(64) Adder(.A(ALUA),.B(ALUB),.Cin(Sub_Add),.Result(adder),.Carry(Carry),.Overflow(Overflow),.zero(Zero));
    assign lessS=adder[63]^Overflow;//比较大小 减法结果最高位^溢出位
    assign lessUS=Sub_Add^Carry;//如果最高位有借位（Carry==1），
    assign Less=US_S?lessUS:lessS;

    // 4. shift
    wire [63:0] shift;
    BarrelShifter #(64,6) BarrelShifter(.din(ALUA),.shamtin(ALUB[5:0]),.A_L(A_L),.L_R(L_R),.isTuncate(isTuncate),.dout(shift));
    
    // 5. bit operate
    wire [63:0] XOR=ALUA^ALUB;
    wire [63:0] OR=ALUA|ALUB;
    wire [63:0] AND=ALUA&ALUB;

    // 6. mul
    wire [63:0] MUL ;
    wire [63:0] MULH;

    //assign MUL = ALUA*ALUB;
    
    mul  #(
        .W(64)
    ) mul_u(
    //   .i_mulw  (1'b0),
    //   .i_x_sign(1'b1),
    //   .i_y_sign(1'b1),
      .i_x     (ALUA),
      .i_y     (ALUB),
      .o_hi_res(MULH),
      .o_lw_res(MUL)
    
    );

    // 7. DIV
    wire [63:0] DIV;
    MuxKeyInternal #(4,2,64,1) diver(.out(DIV),.key({US_S,isTuncate}),.default_out(64'd0),.lut({
        2'b10,ALUA/ALUB,//divu
        2'b00,$signed(ALUA)/$signed(ALUB),//div
        2'b01,{32'd0,$signed(ALUA[31:0])/$signed(ALUB[31:0])},//divw
        2'b11,{32'd0,ALUA[31:0]/ALUB[31:0]}//divuw
    }));

    // 8. REM
    wire [63:0] REM;
    MuxKeyInternal #(4,2,64,1) remer(.out(REM),.key({US_S,isTuncate}),.default_out(64'd0),.lut({
        2'b10,ALUA%ALUB,//remu
        2'b00,$signed(ALUA)%$signed(ALUA),//rem
        2'b01,{32'd0,$signed(ALUA[31:0])%$signed(ALUB[31:0])},//remw
        2'b11,{32'd0,ALUA[31:0]%ALUB[31:0]}//remuw
    }));

    // 9. res output mux
    wire [63:0] ALUout;
    MuxKeyInternal #(16,4,64,1) deExtop(.out(ALUout),.key({ALUct[4],ALUct[2:0]}),.default_out(64'd0),.lut({
        4'd0,adder,
        4'd1,shift,
        4'd2,{63'd0,Less},
        4'd3,ALUB,
        4'd4,XOR,//((ALUct[3]==1'b1)?REM:
        4'd5,shift,
        4'd6,OR, //((ALUct[3]==1'b1)?MUL:
        4'd7,AND,//((ALUct[3]==1'b1)?DIV:
        4'd8,MUL,//10xx     
        4'd9,MUL,
        4'd10,MUL,   
        4'd11,MUL,
        4'd12,DIV,//110x
        4'd13,DIV,
        4'd14,REM,//111x
        4'd15,REM        
    }));

    // 10. truncate && sext
    assign ALUres=isTuncate?((isSext==1'b1)?{{32{ALUout[31]}},ALUout[31:0]}:{32'd0,ALUout[31:0]}):ALUout;

endmodule
