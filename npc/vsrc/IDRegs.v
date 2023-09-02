module IDRegs(
    input clk,rst,
    
    // 1. inputs from pre stage 
    input [63:0] i_pc,
    input [31:0] i_inst,

    // 2. outputs for nest stage
    output [31:0] id_inst,
    output [63:0] id_pc ,

    // 3. shake hands signal 
    // 3.1 ifu
    input if_ready_go,
    input if_valid,
    output id_allow_in,
    // 3.2 idu 
    input id_ready,//id_ready_go&&exu_allow_in
    output id_valid
);
    // 1. id ready&valid shake hands signal gen
    assign id_allow_in = (~id_valid) || id_ready ;//(id_ready_go && exu_allow_in);
    wire if_to_id_valid = if_ready_go && if_valid;
    Reg #(1,'d0) id_valid_reg(clk,rst|flush_pipeline|isebreak,if_to_id_valid,id_valid,id_allow_in);

    // 2. pipeline regs
    wire popline_wen = if_to_id_valid && id_allow_in;
    Reg #(`RegWidth, 64'h000000007ffffff8) id_pc_reg(.clk(clk),.rst(rst),.din(if_pc),.dout(pc_o),.wen(popline_wen));    
    Reg #(`INSTWide, 32'd0) id_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(popline_wen));    

endmodule