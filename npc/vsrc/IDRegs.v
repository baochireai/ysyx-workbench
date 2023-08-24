module IDRegs(
    input clk,rst,
    
    input if_ready_go,
    input if_valid,

    input [63:0] i_pc,
    input [31:0] i_inst,

    input id_ready,//id_ready_go&&exu_allow_in

    output id_valid,
    output [31:0] id_inst,
    output [63:0] id_pc ,

    output id_allow_in
);

    assign id_allow_in = (~id_valid) || id_ready ;//(id_ready_go && exu_allow_in);
    
    wire if_to_id_valid = if_ready_go && if_valid;

    Reg #(1,'d0) id_valid_reg(clk,rst|flush_pipeline|isebreak,if_to_id_valid,id_valid,id_allow_in);

    Reg #(`RegWidth, 64'h000000007ffffff8) id_pc_reg(.clk(clk),.rst(rst),.din(if_pc),.dout(pc_o),.wen(if_to_id_valid && id_allow_in));    
    
    Reg #(`INSTWide, 32'd0) id_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(popline_wen));    

endmodule