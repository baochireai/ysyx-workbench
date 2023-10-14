import "DPI-C" function void set_invalid_inst();
`include "defines.v"

module ContrGen(
     // 1. inst
     input [`INSTWide-1:0] id_inst,
     // 2. ALU ctrl
     output reg [4:0] ALUct,//加法器加(b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出(b0001)
     output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
     output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
     output isTuncate,
     output isSext,    
     // 3. branch 
     output reg [2:0] Branch,
     // 4. mem op
     output MemWr,
     output [2:0] MemOP,      
     // 5. regs file wb
     output RegWr,//结果写回寄存器
     output [1:0] RegSrc,
     // 6. intr
     output isecall ,
     output ismret  ,
     output iscsr   ,
     // 7. ebreak inst
     output isebreak,
     // 8. imm gen
     output reg [`RegWidth-1:0] Imm
);

     wire [6:0] opcode=id_inst[6:0];
     wire [2:0] func3=id_inst[14:12];
     wire [6:0] func7=id_inst[31:25];

     // 1. inst type
     wire [2:0] Extop;
     MuxKeyInternal #(12,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
     7'b0010011,3'd2,//整数运算（寄存器-立即数） 类型I addi srai andi slti sltiu xori slli srli ori
     7'b0011011,3'd2,//整数运算（寄存器-立即数） 类型I addiw  slliw sraiw srliw    
     7'b0110011,3'd1,//整数运算（寄存器-寄存器） 类型R add sub and sltu or slt mul divu remu xor sll 乘除法funct7[0]==1
     7'b0111011,3'd1,//整数运算（寄存器-寄存器） 类型R addw sllw sraw mulw divw subw remw srlw divuw
     7'b0010111,3'd5,//整数运算（立即数） 类型为U 长立即数操作 auipc
     7'b0110111,3'd5,//整数运算（立即数） 类型为U 长立即数操作 lui    
     7'b0100011,3'd3,//存储器写指令 类型S sd sh sb sw
     7'b0000011,3'd2,//存储器读指令 类型I （寄存器-立即数）ld  lw lwu lbu lh lhu lb 
     7'b1100011,3'd4,//条件跳转 类型B beq bne bge blt bltu bgeu
     7'b1101111,3'd6,//无条件跳转 类型J jal
     7'b1100111,3'd2,//无条件跳转 类型I jalr
     7'b1110011,3'd2 //异常处理 类型I ecall ebreak csrrw csrrs csrc mret(rd为零) csrrsi csrrwi csrrci
     }));

     // 2. branch
     // 2.1 conditionalJump
     wire isconditionalJump = (Extop==3'd4);
     reg [2:0] BranchOpt;
     assign BranchOpt = func3&3'b101;//3'b010 pc+4
     // 2.2 no-conditional Jump
     wire isJal = (Extop==3'd6);
     wire isJalr = (opcode==7'b1100111);
     assign Branch = ({3{isconditionalJump}} & BranchOpt) | ({3{isJal}} & 3'b110) | ({3{isJalr}} & 3'b111) |
                      {3{~(isconditionalJump|isJal|isJalr)}} & 3'b010 ; 

     // 3. mem
     wire isMemW = (Extop==3'd3) ; //(opcode==7'b0100011) ; 
     wire isMemR = (opcode==7'b0000011) ;
     wire mem_req = isMemW | isMemR ;
     assign MemWr = isMemW;
     assign MemOP = mem_req ? {~func3[2],func3[1:0]} : 3'b011;//MemOP[2]:sign Memop[1:0]:size 3'b111 no operate
     
     // 4. reg file wb
     MuxKeyInternal #(4,3,1,1) isRegWr(.out(RegWr),.key(Extop),.default_out(1'b0),.lut({
     3'd1,1'b1,
     3'd2,1'b1,
     3'd5,1'b1,
     3'd6,1'b1
     }));
     assign RegSrc = ({2{isMemR}} & 2'd1) | ({2{IntrEn}} & 2'd2); //2'd0:alu

     // 5. Intr inst
     wire [11:0] csr = id_inst[31:20];
     wire IntrEn  = (opcode == 7'b1110011);
     assign isecall = ( ~ ( (|csr) || (|func3) ))&IntrEn;
     assign ismret  = (!(|func3))&(csr==12'b0011000_00010);
     assign iscsr   =  (|func3) & IntrEn ;
     // 6. ebreak 
     assign isebreak = IntrEn&(!(|func3))&(id_inst[`inst_rs2]==5'd1);

     // 7. Imm gen
     ImmGen ImmGenU(id_inst[`immBus],Extop,Imm);

     // 8. ALU ctrl
     wire isMul=((opcode==7'b0110011||opcode==7'b0111011)&&(func7[0]==1'b1));
     
     reg [4:0] IntALUct,MulALUct;
          //整数运算（加减、比较、位运算、移位运算） 无符号的全在b011处理了
     // insts operating in adder:
     // add sub (func3:000 func7[5]:sub/add)              -> {add_sub,adder} {func7[5],000} 
     // slt sltu (func3:010 011)         -> {sign,sub}  {func3[0],010}
     // condidtional jump     -> {sign,sub} {func3[1],010}
     assign IntALUct=(func3==3'b011)?5'b01010:{1'b0,func7[5]&((|func3)|(opcode[5])),func3};//func7[5] 逻辑算术/加减 func3[0]有无符号
          //整数运算（乘除法）
     assign MulALUct={1'b1,func3[0],func3};

     wire islui = (opcode==7'b0110111) ;
     wire isauipc = (opcode==7'b0010111) ;
     assign ALUct= (isauipc|isMemW|isMemR|isJal|isJalr)?5'b00000://加法
                         (isconditionalJump?{1'b0,func3[1],3'b010}://条件跳转  减法有无符号置位
                         (islui?5'b00011://直接输出B
                         (isMul?MulALUct:
                         (IntALUct))));

     assign ALUAsr=((Extop==3'd2)&(!isJalr))|(Extop==3'd1)|(Extop==3'd3)|(Extop==3'd4);//ALUAsr:1 Rs1 0 PC
     assign ALUBsr=(isJal|isJalr)?2'b10:(((Extop==3'd2)|(opcode[6:2]==5'b01101)|(opcode[6:2]==5'b00101)|(Extop==3'd3)|(!(|opcode[6:2])))?2'b00:
                    ((Extop==3'd1|Extop==3'd4)?2'b01:2'b11));//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
     assign isTuncate = opcode[3] && (~isJal);
     assign isSext = isTuncate;

endmodule

