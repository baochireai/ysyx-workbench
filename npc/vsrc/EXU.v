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
    input Regwr_i,
    input [1:0] RegSrc,//写回地址    
    //ctrl from id to Mem
    input [2:0] MemOP_i,
    input MemWr_i,
    input IntrEn,    
    //ctrl from id to Branch
    input [2:0] Branch,
    //data    
    input [`RegWidth-1:0] R_rs1,
    input [`RegWidth-1:0] R_rs2,
    input [`RegWidth-1:0] Imm,
    //to WB
    output [`RegWidth-1:0] wb_ALUres,
    output Regwr_o,
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
    output [`RegWidth-1:0] pc_o,
    //handshakes
    input idu_valid,
    output exu_ready,
    input lsu_ready,
    output exu_valid
);
//(reg有数据但是将被读取|没有数据)&(当前数据处理完毕)
assign exu_ready=((exu_valid&lsu_ready)|(!exu_valid));

wire exu_valid_next=exu_valid&(!lsu_ready)|//数据没被读取
                    (( (exu_valid&lsu_ready)|(!exu_valid) )&( exu_ready&idu_valid));

Reg #(1,'d0) exu_valid_reg(clk,rst,exu_valid_next,exu_valid,1'b1);

//dcache_rw_ctrl



//（reg有数据但将被读取|reg没数据）&（有新数据且没有数据冲突）
wire popline_wen=((exu_valid&lsu_ready)|(!exu_valid))&(idu_valid&exu_ready);

wire [`RegWidth-1:0] ALUres;
wire Less,Zero;
// pipeline regs
Reg #(`RegWidth,'d0) wb_ALUres_reg(clk,rst,ALUres,wb_ALUres,popline_wen);
Reg #(`RegWidth,'d0) wb_R_rs2_reg(clk,rst,R_rs2,R_rs2_o,popline_wen);
Reg #(`RegWidth,'d0) wb_R_rs1_reg(clk,rst,R_rs1,R_rs1_o,popline_wen);

Reg #(3,'d0) wb_MemOP_reg(clk,rst,MemOP_i,MemOP_o,popline_wen);
Reg #(1,'d0) wb_MemWr_reg(clk,rst,MemWr_i,MemWr_o,popline_wen);
Reg #(1,'d0) wb_IntrEn_reg(clk,rst,IntrEn,IntrEn_o,popline_wen);

Reg #(`INSTWide,'d0) mem_Inst_reg(clk,rst,exu_inst,inst_o,popline_wen);
Reg #(`RegWidth,'d0) mem_pc_reg(clk,rst,exu_pc,pc_o,popline_wen);

Reg #(2,'d0) wb_RegSrc_reg(clk,rst,RegSrc,RegSrc_o,popline_wen);
Reg #(1,'d0) wb_Regwr_reg(clk,rst,Regwr_i,Regwr_o,popline_wen);



ALU ex_alu(.ALUAsr(ALUAsr),.PC(exu_pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr), .Imm(Imm),.R_rs2(R_rs2),
    .ALUct(ALUct),.isTuncate(isTuncate),.isSext(isSext),.ALUres(ALUres),.Less(Less),.Zero(Zero)
);

wire is_jump_d;
GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(exu_pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero),.is_jump(is_jump_d));

assign is_jump=is_jump_d&idu_valid&exu_ready;

endmodule