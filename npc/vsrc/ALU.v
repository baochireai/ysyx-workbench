module ALU(
    input ALUAsr,//ALUAsr 0:PC 1:R_rs1
    input [63:0] PC,
    input [63:0] R_rs1,
    input [1:0] ALUBsr, //ALUBsr 2'b00:Imm 2'b01:R_rs2 2'b10:64'd4
    input [63:0] Imm,
    input [63:0] R_rs2,
    input [3:0] ALUct,
    output [63:0] ALUres,
    output Less,
    output Zero
);

    /*操作数解码*/
    wire [63:0] ALUA,ALUB;
    assign ALUA=ALUAsr?R_rs1:PC;
    
    MuxKeyInternal #(3,2,64,1) deALUBsr(.out(ALUB),.key(ALUBsr),.default_out(64'd0),.lut({
    2'b00,Imm,//加法
    2'b01,R_rs2,//直接输出
    2'b10,64'd4
    }));

    //ALU操作码解码
    wire US_S=ALUct[3];//有无符号
    wire Sub_Add=(ALUct[2:0]==3'b010|ALUct[3:0]==4'b1000)?1'b1:1'b0;//尚未解码
    wire A_L=ALUct[3];//算术/逻辑
    wire L_R=(ALUct[2:0]==3'b001)?1'b1:1'b0;//左移/右移(ALUct[2:0]==101)

    /*加法器*/
    wire [63:0] adder;
    wire Carry,Overflow;
    wire lessS;
    wire lessUS;
    Adder #(64) Adder(.A(ALUA),.B(ALUB),.Cin(Sub_Add),.Result(adder),.Carry(Carry),.Overflow(Overflow),.zero(Zero));
    assign lessS=adder[63]^Overflow;//比较大小
    assign lessUS=Sub_Add^Carry;
    assign Less=US_S?lessUS:lessS;

    /*移位*/
    wire [63:0] shift;
    BarrelShifter #(64,6) BarrelShifter(.din(ALUA),.shamt(ALUB[5:0]),.A_L(A_L),.L_R(L_R),.dout(shift));
    
    /*位操作还是逻辑*/
    wire [63:0] XOR;
    wire [63:0] OR;
    wire [63:0] AND;
    assign XOR=ALUA^ALUB;
    assign OR=ALUA|ALUB;
    assign AND=ALUA&ALUB;

    MuxKeyInternal #(8,3,64,1) deExtop(.out(ALUres),.key(ALUct[2:0]),.default_out(64'd0),.lut({
        3'd0,adder,
        3'd1,shift,
        3'd2,{63'd0,Less},
        3'd3,ALUB,
        3'd4,XOR,
        3'd5,shift,
        3'd6,OR,
        3'd7,AND
    }));

endmodule
