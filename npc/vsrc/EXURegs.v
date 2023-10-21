module EXURegs(
    input clk,rst,
    
    // 1. inputs from id 

    // 1.1 ALU ctrl  
    input                   i_ALUAsr,
    input [1:0]             i_ALUBsr,
    input [4:0]             i_ALUct,
    input                   i_isTuncate,
    input                   i_isSext,

    // 1.2 branch ctrl 
    input [2:0]             i_Branch,

    // 1.3 mem op    
    input [2:0]             i_MemOP,
    input                   i_MemWr,
  
    // 1.4 regs wb    
    input                   i_RegWr,
    input [1:0]             i_RegSrc,//写回地址 

    // 1.5 intr inst
    input i_isecall ,
    input i_ismret  ,
    input i_iscsr   ,          
    // 1.6 operate data    
    input [`RegWidth-1:0]   i_R_rs1,
    input [`RegWidth-1:0]   i_R_rs2,//mem wdata
    input [`RegWidth-1:0]   i_Imm,
    input[`INSTWide-1:0]    i_exu_inst,
    input [`RegWidth-1:0]   i_exu_pc,  

    // 2. outputs for exu 

    // 2.1 ALU ctrl 
    output                   o_ALUAsr,
    output [1:0]             o_ALUBsr,
    output [4:0]             o_ALUct,
    output                   o_isTuncate,
    output                   o_isSext,

    // 2.2 branch ctrl 
    output [2:0]             o_Branch,

    // 2.3 mem op    
    output [2:0]             o_MemOP,
    output                   o_MemWr,

    // 2.4 regs wb    
    output                   o_RegWr,
    output [1:0]             o_RegSrc,//写回地址 

    // 2.5 intr insto_
    output                   o_isecall ,
    output                   o_ismret  ,
    output                   o_iscsr   ,

    // 2.6 operate data    
    output [`RegWidth-1:0]   o_R_rs1,
    output [`RegWidth-1:0]   o_R_rs2,//mem wdata
    output [`RegWidth-1:0]   o_Imm,
    output[`INSTWide-1:0]    o_exu_inst,
    output [`RegWidth-1:0]   o_exu_pc,  

    // 3. shake hands signal 
    // 3.1 id
    input id_to_exu_valid,
    output exu_allow_in,
    // 3.2 exu 
    input exu_ready,
    output exu_valid ,

    // 4. jump && intr flush pipeline
    // input is_jump,
    // input is_intr
    input pipeline_flush
);
    // 1. exu ready&valid shake hands signal gen
    assign exu_allow_in = (~exu_valid) || exu_ready ;
    Reg #(1,'d0) exu_valid_reg(clk,rst | pipeline_flush,id_to_exu_valid,exu_valid,exu_allow_in);

    // 2. pipeline regs
    wire popline_wen = id_to_exu_valid && exu_allow_in && (~pipeline_flush);

    Reg #(1 ,0) ALUAsr_reg   (clk,rst, i_ALUAsr     , o_ALUAsr      ,popline_wen);
    Reg #(2 ,0) ALUBsr_reg   (clk,rst, i_ALUBsr     , o_ALUBsr      ,popline_wen);
    Reg #(5 ,0) ALUct_reg    (clk,rst, i_ALUct      , o_ALUct       ,popline_wen);
    Reg #(1 ,0) isTuncate_reg(clk,rst, i_isTuncate  , o_isTuncate   ,popline_wen);
    Reg #(1 ,0) isSext_reg   (clk,rst, i_isSext     , o_isSext      ,popline_wen);
    Reg #(3 ,0) Branch_reg   (clk,rst, i_Branch     , o_Branch      ,popline_wen);
    Reg #(3 ,0) MemOP_reg    (clk,rst, i_MemOP      , o_MemOP       ,popline_wen);
    Reg #(1 ,0) MemWr_reg    (clk,rst, i_MemWr      , o_MemWr       ,popline_wen);
    Reg #(1 ,0) RegWr_reg    (clk,rst, i_RegWr      , o_RegWr       ,popline_wen);
    Reg #(2 ,0) RegSrc_reg   (clk,rst, i_RegSrc     , o_RegSrc      ,popline_wen);
    Reg #(1 ,0) isecall_reg  (clk,rst, i_isecall    , o_isecall     ,popline_wen);
    Reg #(1 ,0) ismret_reg   (clk,rst, i_ismret     , o_ismret      ,popline_wen);
    Reg #(1 ,0) iscsr_reg    (clk,rst, i_iscsr      , o_iscsr       ,popline_wen);
    Reg #(64,0) R_rs1_reg    (clk,rst, i_R_rs1      , o_R_rs1       ,popline_wen);
    Reg #(64,0) R_rs2_reg    (clk,rst, i_R_rs2      , o_R_rs2       ,popline_wen);
    Reg #(64,0) Imm_reg      (clk,rst, i_Imm        , o_Imm         ,popline_wen);
    Reg #(32,0) exu_inst_reg (clk,rst, i_exu_inst   , o_exu_inst    ,popline_wen);
    Reg #(64,0) exu_pc_reg   (clk,rst, i_exu_pc     , o_exu_pc      ,popline_wen);

    // 3. flush pipeline
    // wire pipeline_flush = is_jump | is_intr ;
    
endmodule
