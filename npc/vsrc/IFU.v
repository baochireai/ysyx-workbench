`include "defines.v"

module IFU(
    input clk,
    input rst,
    
    //1. jump inst from exu
    input is_jump,
    input [`RegWidth-1:0] JumpPc,
    
    //2. intr jump from wb
    input isIntrPC,
    input [`RegWidth-1:0] IntrPC,

    //3. ebreak from id
    input isebreak,

    //4. cache inteface

    //4.1 cache req
    output cache_req,
    output [`MemAddrBus-1:0] addr_inst,
    input cache_ready,

    //4.1 cache data
    input cache_valid,
    input [`INSTWide-1:0] inst_i,

    //5. output for post stage(idu)
    output reg [`INSTWide-1:0] inst_o,
    output reg [63:0] pc_o,
    output if_valid,

    //5. pipe shake hands
    input id_allow_in,
    output if_ready_go
);

    wire [`RegWidth-1:0] prefetch_pc;
    wire [`RegWidth-1:0] if_pc;

    //next PC Generate
    assign prefetch_pc=isIntrPC?IntrPC:(is_jump?JumpPc:if_pc+4);

    //inst fetch req
    assign cache_req = (~ifu_valid) || if_ready_go && id_allow_in;
    assign addr_inst=prefetch_pc[31:0];
    wire Cache_req_hs=cache_req&&cache_ready;
    wire pre_if_ready_go = Cache_req_hs ;//set cache req only when if_allow_in == 1
    
    //pre-if 2 if regs
    wire if_valid ;
    wire if_allow_in = (~ifu_valid) || if_ready_go && id_allow_in;
    wire preif_2_if_valid = pre_if_ready_go ;    
    Reg #(`RegWidth, 64'h000000007ffffffc) if_pc_reg(.clk(clk),.rst(rst),.din(prefetch_pc),.dout(if_pc),.wen(preif_2_if_valid&&if_allow_in));
    Reg #( 1, 1'b1) if_valid_reg(.clk(clk),.rst(rst),.din(preif_2_if_valid ),.dout(if_valid),.wen(if_allow_in));

    //inst fetch
    assign if_ready_go = cache_valid || inst_buffer_valid;
    wire [`INSTWide-1:0] inst=(if_pc[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];

    //inst buffer when id stall (i_cache_data only keeps one cycle)
    wire inst_buffer_valid_set = (~id_allow_in) && cache_valid ;
    wire inst_buffer_valid_clr = id_allow_in ;
    wire inst_buffer_valid_next = inst_buffer_valid_set || ~(inst_buffer_valid_clr) ;
    wire inst_buffer_valid_we = inst_buffer_valid_set || inst_buffer_valid_clr ;
    Reg #(`INSTWide, 32'd0) inst_Buffer(.clk(clk),.rst(rst),.din(inst),.dout(inst_buffer),.wen(inst_buffer_valid_set));
    Reg #(1, 1'd0) inst_buffer_valid_r(.clk(clk),.rst(rst),.din(inst_buffer_valid_next),.dout(inst_buffer_valid),.wen(inst_buffer_valid_we));   
    assign inst_o = inst_buffer_valid ? inst_buffer : inst ;

endmodule