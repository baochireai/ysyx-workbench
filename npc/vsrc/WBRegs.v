module WBRegs(
    input clk,
    input rst,

    // 1. input from pre stage 
    // 1.1 intr/csr
    input                       IntrEn,
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
    output                       o_IntrEn,
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

    Reg #(
        .WIDTH(1+1+`RegWidth+2+1+`RegWidth+`RegWidth+`RegWidth+`INSTWide), 
        .RESET_VAL(0)
    ) exu_to_lus_pipeline_regs (
        .clk(clk),
        .rst(rst),
        .din({  IntrEn,clint_mtip,R_rs1_i,
                RegSrc,RegWr,ALUres,MemOut,
                i_pc,i_inst}),
        .dout({ o_IntrEn,o_clint_mtip,o_R_rs1,
                o_RegSrc,o_RegWr,o_ALUres,o_MemOut,
                o_wb_pc,o_wb_inst }),
        .wen(popline_wen)
    );    



endmodule