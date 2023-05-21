import "DPI-C" function void set_invalid_inst();
module ContrGen(
    input[6:0] opcode,
    input [2:0] func3,
    input [6:0] func7,
    output reg [4:0] ALUct,//加法器加(b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出(b0001)
    output [2:0] Extop,//六种指令格式立即数
    output RegWr,//结果写回寄存器
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    output reg [2:0] Branch,
    output MemWr,
    output [2:0] MemOP,
    output [1:0] RegSrc,
    output isTuncate,
    output isSext,
    output IntrEn
);

    //指令类型
    MuxKeyInternal #(12,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
    7'b0010011,3'd2,//整数运算（寄存器-立即数） 类型I addi srai andi slti sltiu xori slli srli ori
    7'b0011011,3'd2,//整数运算（寄存器-立即数，字操作） 类型I addiw  slliw sraiw srliw    
    
    7'b0110011,3'd1,//整数运算（寄存器-寄存器） 类型R add sub and sltu or slt mul divu remu xor sll 乘除法funct7[0]==1
    7'b0111011,3'd1,//整数运算（寄存器-寄存器，字操作） 类型R addw sllw sraw mulw divw subw remw srlw divuw

    7'b0010111,3'd5,//整数运算（立即数） 类型为U 长立即数操作 auipc
    7'b0110111,3'd5,//整数运算（立即数） 类型为U 长立即数操作 lui    

    7'b0100011,3'd3,//存储器写指令 sd sh sb sw

    7'b0000011,3'd2,//存储器读指令 ld  lw lwu lbu lh lhu lb
    
    7'b1100011,3'd4,//条件跳转 beq bne bge blt bltu bgeu

    7'b1101111,3'd6,//无条件跳转 jal
    7'b1100111,3'd2,//jalr

    7'b1110011,3'd2//异常处理 ecall ebreak csrrw csrrs csrc mret(rd为零) csrrsi csrrwi csrrci
    }));

    //跳转方式
    wire isconditionalJump=(Extop==3'd4)?1'b1:1'b0;
    reg [2:0] BranchOpt;
    assign BranchOpt=func3&3'b101;//3'b010 pc+4

    wire isJal=(Extop==3'd6)?1'b1:1'b0;
    wire isJalr=(opcode==7'b1100111)?1'b1:1'b0;

    assign Branch=isconditionalJump?BranchOpt:(isJal?3'b110:(isJalr?3'b111:3'b010));
    //ALU控制信号译码

    wire isMul=((opcode==7'b0110011||opcode==7'b0111011)&&(func7[0]==1'b1))?1'b1:1'b0;

    reg [4:0] IntALUct,MulALUct;
        //整数运算（加减、比较、位运算、移位运算） 无符号的全在b011处理了
    assign IntALUct=(func3==3'b011)?5'b01010:{1'b0,func7[5]&((|func3)|(opcode[5])),func3};
        //整数运算（乘除法）
    assign MulALUct={1'b1,func3[0],func3};//func7[5] 逻辑算术 func3[0]有无符号

    wire islui=(opcode==7'b0110111)?1'b1:1'b0;
    wire isauipc=(opcode==7'b0010111)?1'b1:1'b0;
    wire isMemW=(opcode==7'b0100011)?1'b1:1'b0;
    wire isMemR=(opcode==7'b0000011)?1'b1:1'b0;

    assign ALUct=(isauipc|isMemW|isMemR|isJal|isJalr)?5'b00000://加法
                    (isconditionalJump?{1'b0,func3[1],3'b010}://条件跳转  减法有无符号置位
                    (islui?5'b00011://直接输出B
                    (isMul?MulALUct:
                    (IntALUct))));


    MuxKeyInternal #(1,7,1,1) isIntr(.out(IntrEn),.key(opcode),.default_out(1'b0),.lut({
    7'b1110011,1'b1//ecall mret csrrw csrrsb1
    }));

    MuxKeyInternal #(4,3,1,1) isRegWr(.out(RegWr),.key(Extop),.default_out(1'b0),.lut({
    3'd1,1'b1,
    3'd2,1'b1,
    3'd5,1'b1,
    3'd6,1'b1
    //3'd7,1'b1
    }));

    // wire isMem=Extop==3'd3;
    // wire isExcpDate=opcode==7'b0011011;
    // assign RegSrc=isMem?2'd1:isExcpDate?2'd2:2'd0;//读存储或者异常处理指令
    MuxKeyInternal #(2,7,2,1) RegSrcMux(.out(RegSrc),.key(opcode),.default_out(2'd0),.lut({
    7'b0000011,2'd1,                                                     
    7'b1110011,2'd2//Intr中csr的值
    }));
    //assign RegSrc=(Extop==3'd3)?2'd1:(opcode==7'b0011011)?2'd2:2'd0;

    //ALUAsr  1:R_rs1 0:PC
    // MuxKeyInternal #(,3,1,1) deALUAsr(.out(ALUAsr),.key(Extop),.default_out(1'b1),.lut({
    // 3'd2,2',                                                     
    // 7'b1110011,2'd2
    // }));

    assign ALUAsr=((Extop==3'd2)&(!isJalr))|(Extop==3'd1)|(Extop==3'd3)|(Extop==3'd4);//ALUAsr:1 Rs1 0 PC

    assign ALUBsr=((Extop==3'd2)|(opcode[6:2]==5'b01101)|(opcode[6:2]==5'b00101)|(Extop==3'd3)|(!(|opcode[6:2])))?2'b00:
                    ((Extop==3'd1|Extop==3'd4)?2'b01:
                    ((isJal|isJalr)?2'b10:2'b11));
    assign ALUBsr=(isJal|isJalr)?2'b10:(((Extop==3'd2)|(opcode[6:2]==5'b01101)|(opcode[6:2]==5'b00101)|(Extop==3'd3)|(!(|opcode[6:2])))?2'b00:
                  ((Extop==3'd1|Extop==3'd4)?2'b01:2'b11));
//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    always @(*) begin
        casez ({func7,func3,opcode})
            17'bzzzzzzz_000_0010011:begin//addi 
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0010111:begin //auipc
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0110111:begin //lui
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_1101111:begin //jal
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;//无条件跳转PC目标
            end
            17'bzzzzzzz_000_1100111:begin //jalr
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;//无条件跳转寄存器目标 
            end
            17'bzzzzzzz_011_0100011:begin //sd
                 MemWr=1'b1;MemOP=3'b100;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0000011:begin //ld
                 MemWr=1'b0;MemOP=3'b100;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0110011:begin //add
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_000_0110011:begin //sub
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0010011:begin //sltiu
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_1100011:begin //beq
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_1100011:begin //bne
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0000011:begin //lw
                 MemWr=1'b0;MemOP=3'b101;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_110_0000011:begin //lwu
                 MemWr=1'b0;MemOP=3'b001;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0111011:begin //addw
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_001_0100011:begin //sh
                 MemWr=1'b1;MemOP=3'b010;isTuncate=1'b0;isSext=1'b0;
            end
            17'b010000z_101_0010011:begin//srai
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0000011:begin //lbu
                 MemWr=1'b0;MemOP=3'b011;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_111_0010011:begin //andi
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_001_0111011:begin//sllw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_111_0110011:begin //and
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_011_0110011:begin //sltu
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0010011:begin //xori
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_101_0111011:begin//sraw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_110_0110011:begin //or
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0100011:begin //sb
                 MemWr=1'b1;MemOP=3'b011;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0011011:begin //addiw
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_101_1100011:begin //bge
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_1100011:begin //blt
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0100011:begin //sw
                 MemWr=1'b1;MemOP=3'b001;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_000_0111011:begin //mulw
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_100_0111011:begin //divw
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_000_0111011:begin //subw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_110_0111011:begin //remw
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_110_1100011:begin //bltu
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_010_0110011:begin //slt
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_0000011:begin //lh
                 MemWr=1'b0;MemOP=3'b110;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_101_0000011:begin //lhu
                 MemWr=1'b0;MemOP=3'b010;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0010011:begin//slli
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0010011:begin//srli
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0011011:begin//slliw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_101_0011011:begin//sraiw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_000_0110011:begin //mul
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0011011:begin//srliw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_101_0111011:begin//srlw
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_111_1100011:begin //bgeu
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_111_1100011:begin //bgeu
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_101_0110011:begin //divu
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_111_0110011:begin //remu
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_101_0111011:begin //divuw
                ; MemWr=1'b0;MemOP=3'b000;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_100_0110011:begin //xor
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0000011:begin //lb
                 MemWr=1'b0;MemOP=3'b111;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_110_0010011:begin //ori
                 MemWr=1'b0;MemOP=3'b000;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_001_0110011:begin//sll
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;
            end
            // 17'b0000000_000_1110011:begin//ecall
            //      MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;            
            // end
            // 17'b0011000_000_1110011:begin//mret
            //      MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;            
            // end
            // 17'bzzzzzzz_001_1110011:begin//csrrw
            //      MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;            
            // end
            // 17'bzzzzzzz_010_1110011:begin//csrrs 
            //      MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;            
            // end
            17'bzzzzzzz_zzz_1110011:begin//ecall mret scrrw csrrs csrrsi
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;            
            end            
            default: begin
                 MemWr=1'b0;MemOP=3'd0;isTuncate=1'b0;isSext=1'b0;set_invalid_inst();
            end
        endcase
        end

endmodule

