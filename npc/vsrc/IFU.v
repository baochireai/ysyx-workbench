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

    //3. cache inteface

    //3.1 cache req
    output cache_req,
    output [`MemAddrBus-1:0] addr_inst,
    input cache_ready,

    //3.1 cache data
    input cache_valid,
    input [63:0] inst_i,

    //4. output for post stage(idu)
    output reg [`INSTWide-1:0] inst_o,
    output reg [63:0] pc_o,

    //5. pipe shake hands
    input id_allow_in,
    output if_ready_go,
    output if_valid
);

    wire [`RegWidth-1:0] prefetch_pc;
    wire [`RegWidth-1:0] if_pc;

    // 1. next PC Generate
    // 1.1 jump skid buffer
    wire is_jump_r ;
    wire [`RegWidth-1:0] JumpPc_r;
    wire is_jump_set = is_jump && (~cache_ready) ;
    wire is_jump_clr = (~is_jump) && is_jump_r && cache_ready ;
    wire is_jump_nxt = is_jump_set || (~is_jump_clr) ;
    wire is_jump_wen = is_jump_set || is_jump_clr ;
    Reg #( 1, 1'b0) is_jump_reg(.clk(clk),.rst(rst),.din(is_jump_nxt ),.dout(is_jump_r),.wen(is_jump_wen));
    Reg #(`RegWidth, 64'd0) JumpPc_Buffer(.clk(clk),.rst(rst),.din(JumpPc),.dout(JumpPc_r),.wen(is_jump_set));

    // 1.2 next pc
    assign prefetch_pc =  isIntrPC  ? IntrPC   : 
                        ( is_jump   ? JumpPc   : 
                        ( is_jump_r ? JumpPc_r :
                                      if_pc+4  ));

    // 2. inst fetch req
    assign cache_req = (~if_valid) || if_ready_go && id_allow_in || pipeline_flush;
    assign addr_inst=prefetch_pc[31:0];
    wire Cache_req_hs=cache_req&&cache_ready;
    wire pre_if_ready_go = Cache_req_hs ;//set cache req only when if_allow_in == 1
    
    // 3. pre-if_to_if regs
    wire if_allow_in = (~if_valid) || if_ready_go && id_allow_in || pipeline_flush;
    wire preif_2_if_valid = pre_if_ready_go ;    
    Reg #(`RegWidth, 64'h000000007ffffffc) if_pc_reg(.clk(clk),.rst(rst),.din(prefetch_pc),.dout(if_pc),.wen(preif_2_if_valid&&if_allow_in));
    Reg #( 1, 1'b0) if_valid_reg(.clk(clk),.rst(rst),.din(preif_2_if_valid ),.dout(if_valid),.wen(if_allow_in));

    // 4. inst fetch

    // 4.1 icache
    wire [`INSTWide-1:0] inst=(if_pc[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];

    // 4.2 inst buffer when id stall (i_cache_data only keeps one cycle)
    wire inst_buffer_valid;
    wire [`INSTWide-1:0] inst_buffer;
    wire inst_buffer_valid_set = (~id_allow_in) && cache_valid ;
    wire inst_buffer_valid_clr = id_allow_in ;
    wire inst_buffer_valid_next = inst_buffer_valid_set || ~(inst_buffer_valid_clr) ;
    wire inst_buffer_valid_we = inst_buffer_valid_set || inst_buffer_valid_clr ;
    Reg #(`INSTWide, 32'd0) inst_Buffer(.clk(clk),.rst(rst),.din(inst),.dout(inst_buffer),.wen(inst_buffer_valid_set));
    Reg #(1, 1'd0) inst_buffer_valid_r(.clk(clk),.rst(rst | pipeline_flush),.din(inst_buffer_valid_next),.dout(inst_buffer_valid),.wen(inst_buffer_valid_we));   
    
    assign inst_o = inst_buffer_valid ? inst_buffer : inst ;
    assign pc_o   = if_pc ;

    // 5. shake hands signal
    assign if_ready_go = cache_valid || inst_buffer_valid;

    // 6. jump && intr flush pipeline regs
    wire pipeline_flush = is_jump || isIntrPC ;

endmodule