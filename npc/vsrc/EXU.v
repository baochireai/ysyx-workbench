module EXU(
    input clk,
    input rst,
    
    input[`INSTWide-1:0] exu_inst,
    input [`RegWidth-1:0] exu_pc,
    //ctrl from id to ALU
    input ALUAsr,
    input [1:0] ALUBsr,
    input [4:0] ALUct,
    input isTuncate,
    input isSext,
    //ctrl from id to Mem
    input [2:0] MemOP_i,
    input MemWr_i,
    input IntrEn,    
    //ctrl from id to Branch
    input [2:0] Branch,
    input [1:0] RegSrc,
    //data    
    input [`RegWidth-1:0] R_rs1,
    input [`RegWidth-1:0] R_rs2,
    input [`RegWidth-1:0] Imm,
    //to WB
    output [`RegWidth-1:0] wb_ALUres,
    //to Mem
    output [`RegWidth-1:0] R_rs2_o,
    output [`RegWidth-1:0] R_rs1_o,
    output [2:0] MemOP_o,
    output MemWr_o,
    output IntrEn_o,

    output [`RegWidth-1:0] NextPC,
    output is_jump,

    output [1:0] RegSrc_o,

    output[`INSTWide-1:0] inst_o,
    output [`RegWidth-1:0] pc_o
);

wire [`RegWidth-1:0] ALUres;
wire Less,Zero;
// pipeline regs
Reg #(`RegWidth,'d0) wb_ALUres_reg(clk,rst,ALUres,wb_ALUres,1'b1);
Reg #(`RegWidth,'d0) wb_R_rs2_reg(clk,rst,R_rs2,R_rs2_o,1'b1);
Reg #(`RegWidth,'d0) wb_R_rs1_reg(clk,rst,R_rs1,R_rs1_o,1'b1);

Reg #(3,'d0) wb_MemOP_reg(clk,rst,MemOP_i,MemOP_o,1'b1);
Reg #(1,'d0) wb_MemWr_reg(clk,rst,MemWr_i,MemWr_o,1'b1);
Reg #(1,'d0) wb_IntrEn_reg(clk,rst,IntrEn,IntrEn_o,1'b1);

Reg #(`INSTWide,'d0) mem_Inst_reg(clk,rst,exu_inst,inst_o,1'b1);
Reg #(`RegWidth,'d0) mem_pc_reg(clk,rst,exu_pc,pc_o,1'b1);

Reg #(2,'d0) wb_RegSrc_reg(clk,rst,RegSrc,RegSrc_o,1'b1);


ALU ex_alu(.ALUAsr(ALUAsr),.PC(exu_pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr), .Imm(Imm),.R_rs2(R_rs2),
    .ALUct(ALUct),.isTuncate(isTuncate),.isSext(isSext),.ALUres(ALUres),.Less(Less),.Zero(Zero)
);

GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(exu_pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero),.is_jump(is_jump));


endmodule