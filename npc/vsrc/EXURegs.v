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
    input                   i_IntrEn,    

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
    output                   o_IntrEn,    

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
    input is_jump,
    input is_intr
);
    // 1. exu ready&valid shake hands signal gen
    assign exu_allow_in = (~exu_valid) || exu_ready ;
    Reg #(1,'d0) exu_valid_reg(clk,rst | flush_pipeline,id_to_exu_valid,exu_valid,exu_allow_in);

    // 2. pipeline regs
    wire popline_wen = id_to_exu_valid && exu_allow_in && (~flush_pipeline);

    Reg #(
        .WIDTH(1+2+5+1+1+3+3+1+1+2+1+`RegWidth+`RegWidth+`RegWidth+`INSTWide+`RegWidth), 
        .RESET_VAL(0)
    ) id_to_exu_pipeline_regs (
        .clk(clk),
        .rst(rst),
        .din({  i_ALUAsr,i_ALUBsr,i_ALUct,i_isTuncate,i_isSext,
                i_Branch,
                i_MemOP,i_MemWr,
                i_RegWr,i_RegSrc,
                i_IntrEn,
                i_R_rs1,i_R_rs2,i_Imm,i_exu_inst,i_exu_pc}),
        .dout({ o_ALUAsr,o_ALUBsr,o_ALUct,o_isTuncate,o_isSext,
                o_Branch,
                o_MemOP,o_MemWr,
                o_RegWr,o_RegSrc,
                o_IntrEn,
                o_R_rs1,o_R_rs2,o_Imm,o_exu_inst,o_exu_pc}),
        .wen(popline_wen)
    );    

    // 3. flush pipeline
    wire flush_pipeline = is_jump | is_intr ;
    
endmodule