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

    Reg #(
        .WIDTH(1+3+`RegWidth+`INSTWide+`RegWidth+`RegWidth+2+1+1+1+1+`RegWidth), 
        .RESET_VAL(0)
    ) exu_to_lus_pipeline_regs (
        .clk(clk),
        .rst(rst),
        .din({  i_MemWr,i_MemOP,i_R_rs2,
                i_inst,i_pc,
                i_ALUres,
                i_RegSrc,i_RegWr,
                i_isecall,i_ismret,i_iscsr,
                i_R_rs1}),
        .dout({ o_MemWr,o_MemOP,o_R_rs2,
                o_inst,o_pc,
                o_ALUres,
                o_RegSrc,o_RegWr,
                o_isecall,o_ismret,o_iscsr,
                o_R_rs1}),
        .wen(popline_wen)
    );    

endmodule