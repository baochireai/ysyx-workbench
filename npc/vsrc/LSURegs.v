module LSURegs(
    input clk,
    input rst,

    // 1. inputs from exu
    // 1.1 mem ctrl
    input                   i_MemWr,
    input [2:0]             i_MemOP,//
    input [`RegWidth-1:0]   i_R_rs2,  //client wdata
    // 1.2 inst&pc
    input[`INSTWide-1:0]    i_inst,
    input[`RegWidth-1:0]    i_pc,    
    // 1.3 pipeline forward
    // 1.3.1 regsfile wdata
    input [`RegWidth-1:0]   i_ALUres,
    // 1.3.2 regfile wb ctrl
    input [1:0]             i_RegSrc,//alu/mem/csr
    input                   i_RegWr, 
    // 1.3.3 intr/csr
    input                   i_isecall ,
    input                   i_ismret  ,
    input                   i_iscsr   ,
    // 1.3.4 csr wdata
    input[`RegWidth-1:0]    i_R_rs1,  
    
    // 2. outputs for next stage 
    // 2.1 mem ctrl
    output                  o_MemWr,
    output [2:0]            o_MemOP,
    output [`RegWidth-1:0]   o_R_rs2,  //client wdata
    // 2.2 inst&pc
    output[`INSTWide-1:0]   o_inst,
    output[`RegWidth-1:0]   o_pc,   
    // 2.3 pipeline forward
    // 2.3.1 regsfile wdata
    output [`RegWidth-1:0]  o_ALUres,
    // 2.3.2 regfile wb ctrl
    output [1:0]            o_RegSrc,
    output                  o_RegWr,
    // 2.3.3 intr/csr
    output                   o_isecall ,
    output                   o_ismret  ,
    output                   o_iscsr   ,
    // 2.3.4 csr wdata
    output[`RegWidth-1:0]   o_R_rs1,
    
    // 3. handshakes
    input                   exu_to_lsu_valid,
    input                   lsu_ready,
    output                  lsu_valid,
    output                  lsu_allow_in  ,

    input pipeline_flush   
);

    // 1. handshake
    assign lsu_allow_in = (~lsu_valid) || lsu_ready ;
    Reg #(1,'d0) lsu_valid_reg(clk,rst|pipeline_flush,exu_to_lsu_valid,lsu_valid,lsu_allow_in);
    
    // 2. pipeline regs
    wire popline_wen = exu_to_lsu_valid && lsu_allow_in && (!pipeline_flush);

    Reg #(1 ,0) MemWr_reg  (clk,rst, i_MemWr   , o_MemWr  ,popline_wen);
    Reg #(3 ,0) MemOP_reg  (clk,rst, i_MemOP   , o_MemOP  ,popline_wen);
    Reg #(64,0) R_rs2_reg  (clk,rst, i_R_rs2   , o_R_rs2  ,popline_wen);
    Reg #(32,0) inst_reg   (clk,rst, i_inst    , o_inst   ,popline_wen);
    Reg #(64,0) pc_reg     (clk,rst, i_pc      , o_pc     ,popline_wen);
    Reg #(64,0) ALUres_reg (clk,rst, i_ALUres  , o_ALUres ,popline_wen);
    Reg #(2 ,0) RegSrc_reg (clk,rst, i_RegSrc  , o_RegSrc ,popline_wen);
    Reg #(1 ,0) RegWr_reg  (clk,rst, i_RegWr   , o_RegWr  ,popline_wen);
    Reg #(1 ,0) isecall_reg(clk,rst, i_isecall , o_isecall,popline_wen);
    Reg #(1 ,0) ismret_reg (clk,rst, i_ismret  , o_ismret ,popline_wen);
    Reg #(1 ,0) iscsr_reg  (clk,rst, i_iscsr   , o_iscsr  ,popline_wen);
    Reg #(64,0) R_rs1_reg  (clk,rst, i_R_rs1   , o_R_rs1  ,popline_wen);    

endmodule
