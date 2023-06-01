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
    output[4:0] rs1,
    output[4:0] rs2,


    //handshake from ifu
    input ifu_valid,
    output idu_ready,
    //handshake to exu
    output idu_valid,
    input ifu_ready
);

assign idu_ready=1'b1;
assign idu_valid=1'b1;


//pipeline reg
wire [4:0]  ALUct_d;
wire [`RegWidth-1:0] Imm_d;
wire ALUAsr_d;
wire [1:0] ALUBsr_d;

wire RegWr_d;//结果写回寄存器
reg [2:0] Branch_d;
wire MemWr_d;
wire [2:0] MemOP_d;
wire [1:0] RegSrc_d;
wire isTuncate_d;
wire isSext_d;
wire IntrEn_d;

Reg #(`INSTWide,'d0) ex_Inst_reg(clk,rst,id_inst,inst_o,1'b1);
Reg #(`RegWidth,'d0) ex_pc_reg(clk,rst,id_pc,pc_o,1'b1);


Reg #(5,5'd0) ex_ALUct_reg(clk,rst,ALUct_d,ALUct,1'b1);
Reg #(`RegWidth,'d0) ex_Imm_reg(clk,rst,Imm_d,Imm,1'b1);
Reg #(1,'d0) ex_ALUAsr_reg(clk,rst,ALUAsr_d,ALUAsr,1'b1);
Reg #(2,'d0) ex_ALUBsr_reg(clk,rst,ALUBsr_d,ALUBsr,1'b1);
Reg #(1,1'b0) ex_isTuncate_reg(clk,rst,isTuncate_d,isTuncate,1'b1);
Reg #(1,'b0) ex_isSext_reg(clk,rst,isSext_d,isSext,1'b1);

Reg #(1,1'b0) ex_RegWr_reg(clk,rst,RegWr_d,RegWr,1'b1);
Reg #(2,'d0) ex_RegSrc_reg(clk,rst,RegSrc_d,RegSrc,1'b1);

Reg #(3,'d2) ex_Branch_reg(clk,rst,Branch_d,Branch,1'b1);

Reg #(1,'d0) ex_MemWr_reg(clk,rst,MemWr_d,MemWr,1'b1);
Reg #(3,'d0) ex_MemOP_reg(clk,rst,MemOP_d,MemOP,1'b1);

Reg #(1,'b0) ex_IntrEn_reg(clk,rst,IntrEn_d,IntrEn,1'b1);

Reg #(`RegWidth,'d0) ex_Rrs1_reg(clk,rst,R_rs1_i,R_rs1_o,1'b1);
Reg #(`RegWidth,'d0) ex_Rrs2_reg(clk,rst,R_rs2_i,R_rs2_o,1'b1);

ContrGen ContrGenU(.id_inst(id_inst),.ALUct(ALUct_d),.Imm(Imm_d),.RegWr(RegWr_d),.ALUAsr(ALUAsr_d),.ALUBsr(ALUBsr_d),
     .Branch(Branch_d),.MemOP(MemOP_d),.MemWr(MemWr_d),.RegSrc(RegSrc_d),.isTuncate(isTuncate_d),.isSext(isSext_d),.IntrEn(IntrEn_d));

assign rs1=id_inst[19:15];
assign rs2=id_inst[24:20];

endmodule

