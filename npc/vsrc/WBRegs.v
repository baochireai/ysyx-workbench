module WBRegs(
    input clk,
    input rst,

    // 1. input from pre stage 
    // 1.1 intr/csr
    input                   i_isecall ,
    input                   i_ismret  ,
    input                   i_iscsr   ,
    input                       clint_mtip,
    input   [`RegWidth-1:0]     R_rs1_i,
    // 1.2 regsfile wb
    input   [1:0]               RegSrc,
    input                       RegWr,
    input   [`RegWidth-1:0]     ALUres,
    input   [`RegWidth-1:0]     MemOut,
    // 1.3 inst&&pc
    input   [`RegWidth-1:0]     i_pc,
    input   [`INSTWide-1:0]     i_inst,

    // 2. outputs for wb
    // 2.1 intr/csr
    output                       o_isecall ,
    output                       o_ismret  ,
    output                       o_iscsr   ,
    output                       o_clint_mtip,
    output   [`RegWidth-1:0]     o_R_rs1,
    // 2.2 regsfile wb
    output   [1:0]               o_RegSrc,
    output                       o_RegWr,
    output   [`RegWidth-1:0]     o_ALUres,
    output   [`RegWidth-1:0]     o_MemOut,
    // 2.3 inst&&pc
    output   [`RegWidth-1:0]     o_wb_pc,
    output   [`INSTWide-1:0]     o_wb_inst,    

    // 3. handshake
    input                   lsu_to_wb_valid,
    input                   wb_ready,
    output                  wb_valid,
    output                  wb_allow_in         
);

    // 1. handshake
    assign wb_allow_in = (~wb_valid) || wb_ready ;
    Reg #(1,'d0) wb_valid_reg(clk,rst,lsu_to_wb_valid,wb_valid,wb_allow_in);
    
    // 2. pipeline regs
    wire popline_wen = lsu_to_wb_valid && wb_allow_in;

    Reg #(1 , 0) i_isecall_reg  (clk,rst, i_isecall  , o_isecall   ,wb_allow_in);
    Reg #(1 , 0) i_ismret_reg   (clk,rst, i_ismret   , o_ismret    ,wb_allow_in);
    Reg #(1 , 0) i_iscsr_reg    (clk,rst, i_iscsr    , o_iscsr     ,wb_allow_in);
    Reg #(1 , 0) clint_mtip_reg (clk,rst, clint_mtip , o_clint_mtip,wb_allow_in);
    Reg #(64, 0) R_rs1_i_reg    (clk,rst, R_rs1_i    , o_R_rs1     ,wb_allow_in);
    Reg #(2 , 0) RegSrc_reg     (clk,rst, RegSrc     , o_RegSrc    ,wb_allow_in);
    Reg #(1 , 0) RegWr_reg      (clk,rst, RegWr      , o_RegWr     ,wb_allow_in);
    Reg #(64, 0) ALUres_reg     (clk,rst, ALUres     , o_ALUres    ,wb_allow_in);
    Reg #(64, 0) MemOut_reg     (clk,rst, MemOut     , o_MemOut    ,wb_allow_in);
    Reg #(64, 0) i_pc_reg       (clk,rst, i_pc       , o_wb_pc     ,wb_allow_in);
    Reg #(32, 0) i_inst_reg     (clk,rst, i_inst     , o_wb_inst   ,wb_allow_in);


endmodule
