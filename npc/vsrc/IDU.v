`include "defines.v"
module IDU(
     input clk,
     input rst,
     //from ifu
     input [`INSTWide-1:0] id_inst,
     input [`RegWidth-1:0] id_pc,
     //from regs
     input [`RegWidth-1:0] R_rs1_i,
     input [`RegWidth-1:0] R_rs2_i,
    //from witf     
     input isRAW,
     input witf_full,
    //to EX
    output reg [4:0] ALUct,//加法器加(b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出(b0001)
    output reg [`RegWidth-1:0] Imm,
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    output [`INSTWide-1:0] inst_o,
    output [`RegWidth-1:0] pc_o,
    output [`RegWidth-1:0] R_rs1_o,
    output [`RegWidth-1:0] R_rs2_o,

    output reg [2:0] Branch,
    output MemWr,
    output [2:0] MemOP,
    output [1:0] RegSrc,
    output isTuncate,
    output isSext,
    output IntrEn,
    //to WB
    output RegWr,//结果写回寄存器
    //to regs
    output[`RegAddrBus] rs1,
    output[`RegAddrBus] rs2,
    //to witf
    output[`RegAddrBus] rd,
    output RegWr_d,


    //handshake from ifu
    input ifu_valid,
    output idu_ready,
    //handshake to exu
    output idu_valid,
    input exu_ready
);

//(reg有数据但是将被读取|没有数据)&(当前数据处理完毕)
assign idu_ready=((idu_valid&exu_ready)|(!idu_valid)) & (!witf_full&!isRAW);
//exu ready busy
//task finish busy(一周期内完成)
//ifu valid !valid
//witf WAR !WAR
//数据没被读取  数据被读取了或者reg没有数据但是来了新数据

wire idu_valid_next=(idu_valid&(!exu_ready)|//数据没被读取
                    (( (idu_valid&exu_ready)|(!idu_valid) )&( idu_ready&ifu_valid&(!isRAW)&(!witf_full))))?1'b1:1'b0;

Reg #(1,'d0) idu_valid_reg(clk,rst,idu_valid_next,idu_valid,1'b1);

//（reg有数据但将被读取|reg没数据）&（有新数据且没有数据冲突）
wire popline_wen=((idu_valid&exu_ready)|(!idu_valid))&(idu_valid&exu_ready&(!isRAW)&(!witf_full));

//pipeline reg
wire [4:0]  ALUct_d;
wire [`RegWidth-1:0] Imm_d;
wire ALUAsr_d;
wire [1:0] ALUBsr_d;

reg [2:0] Branch_d;
wire MemWr_d;
wire [2:0] MemOP_d;
wire [1:0] RegSrc_d;
wire isTuncate_d;
wire isSext_d;
wire IntrEn_d;

Reg #(`INSTWide,'d0) ex_Inst_reg(clk,rst,id_inst,inst_o,popline_wen);
Reg #(`RegWidth,'d0) ex_pc_reg(clk,rst,id_pc,pc_o,popline_wen);


Reg #(5,5'd0) ex_ALUct_reg(clk,rst,ALUct_d,ALUct,popline_wen);
Reg #(`RegWidth,'d0) ex_Imm_reg(clk,rst,Imm_d,Imm,popline_wen);
Reg #(1,'d0) ex_ALUAsr_reg(clk,rst,ALUAsr_d,ALUAsr,popline_wen);
Reg #(2,'d0) ex_ALUBsr_reg(clk,rst,ALUBsr_d,ALUBsr,popline_wen);
Reg #(1,1'b0) ex_isTuncate_reg(clk,rst,isTuncate_d,isTuncate,popline_wen);
Reg #(1,'b0) ex_isSext_reg(clk,rst,isSext_d,isSext,popline_wen);

Reg #(1,1'b0) ex_RegWr_reg(clk,rst,RegWr_d,RegWr,popline_wen);
Reg #(2,'d0) ex_RegSrc_reg(clk,rst,RegSrc_d,RegSrc,popline_wen);

Reg #(3,'d2) ex_Branch_reg(clk,rst,Branch_d,Branch,popline_wen);

Reg #(1,'d0) ex_MemWr_reg(clk,rst,MemWr_d,MemWr,popline_wen);
Reg #(3,'d0) ex_MemOP_reg(clk,rst,MemOP_d,MemOP,popline_wen);

Reg #(1,'b0) ex_IntrEn_reg(clk,rst,IntrEn_d,IntrEn,popline_wen);

Reg #(`RegWidth,'d0) ex_Rrs1_reg(clk,rst,R_rs1_i,R_rs1_o,popline_wen);
Reg #(`RegWidth,'d0) ex_Rrs2_reg(clk,rst,R_rs2_i,R_rs2_o,popline_wen);

ContrGen ContrGenU(.id_inst(id_inst),.ALUct(ALUct_d),.Imm(Imm_d),.RegWr(RegWr_d),.ALUAsr(ALUAsr_d),.ALUBsr(ALUBsr_d),
     .Branch(Branch_d),.MemOP(MemOP_d),.MemWr(MemWr_d),.RegSrc(RegSrc_d),.isTuncate(isTuncate_d),.isSext(isSext_d),.IntrEn(IntrEn_d));

assign rs1=id_inst[`inst_rs1];
assign rs2=id_inst[`inst_rs2];
assign rd=id_inst[`inst_rd];

endmodule

