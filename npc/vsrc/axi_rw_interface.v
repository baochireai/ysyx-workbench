// Burst types
`define AXI_BURST_TYPE_FIXED 2'b00
`define AXI_BURST_TYPE_INCR  2'b01
`define AXI_BURST_TYPE_WRAP  2'b10

module axi_rw_interface(
    input clk,
    input rst,

    // 1. master interface
    
    // 1.1 icache rd
    input           icache_rd_req  ,
    input [63:0]    icache_rd_addr ,
    input [2:0]     icache_rd_type ,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    output          icache_rd_ready,
    output [63:0]   icache_rdata   ,
    output          icache_rlast   ,
    output          icache_rvalid  ,    

    // 1.2 decache <--> axi interface (read)
    input           dcache_rd_req  ,
    input [63:0]    dcache_rd_addr ,
    input [2:0]     dcache_rd_type ,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    output          dcache_rd_ready,
    output [63:0]   dcache_rdata   ,
    output          dcache_rlast   ,
    output          dcache_rvalid  ,

    // 1.3 decache <--> axi interface (write)
    input           decache_wr_req  ,
    input [63:0]    decache_wr_addr ,
    input [127:0]   decache_wdata   ,
    input [2:0]     decache_wr_type ,
    input [7:0]     decache_wstrb   ,//only uncache
    output          decache_wr_ready,

    // 2. axi master
    // 2.1 ar
    input           i_axi_master_arready,

    output reg      o_axi_master_arvalid,
    output [63:0]   o_axi_master_araddr ,
    output [3:0]    o_axi_master_arid   ,
    output [7:0]    o_axi_master_arlen  ,
    output [2:0]    o_axi_master_arsize ,
    output [1:0]    o_axi_master_arburst,
    
    // 2.2 r
    output reg      o_axi_master_rready,

    input           i_axi_master_rvalid,
    input           i_axi_master_rlast ,
    input [1:0]     i_axi_master_rresp ,
    input [63:0]    i_axi_master_rdata ,
    input [3:0]     i_axi_master_rid   ,
    
    // 2.3 aw
    input           i_axi_master_awready,

    output reg      o_axi_master_awvalid,
    output [63:0]   o_axi_master_awaddr ,
    output [3:0]    o_axi_master_awid   ,
    output [7:0]    o_axi_master_awlen  ,
    output [2:0]    o_axi_master_awsize ,
    output [1:0]    o_axi_master_awburst,

    // 2.4 w
    input           i_axi_master_wready,

    output reg      o_axi_master_wvalid,
    output [63:0]   o_axi_master_wdata ,
    output [7:0]    o_axi_master_wstrb ,
    output          o_axi_master_wlast ,

    // 2.5 b
    output reg      o_axi_master_bready,

    input           i_axi_master_bvalid,
    input [1:0]     i_axi_master_bresp ,
    input [3:0]     i_axi_master_bid
);
    // arbiter(for dcache && icache rd req , dcache wr and icache rd can happen simultaneously)
    wire           rd_req  ;
    wire [63:0]    rd_addr ;
    wire [2:0]     rd_type ;//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    wire           rd_ready;
    wire [63:0]    rdata   ;
    wire           rlast   ;
    wire           rvalid  ;     

    wire           wr_req  ;
    wire [63:0]    wr_addr ;
    wire [127:0]   wdata   ;
    wire [2:0]     wr_type ;//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    wire [7:0]     wstrb   ;//only uncache
    wire           wr_ready;
    // icache && dcache status
    wire icache_rd_doing ;
    wire icache_rd_doing_set = icache_rd_req && icache_rd_ready ;
    wire icache_rd_doing_clr = icache_rlast && icache_rvalid ;
    wire icache_rd_doing_nxt = icache_rd_doing_set && (~icache_rd_doing_clr) ;
    wire icache_rd_doing_wen = icache_rd_doing_set |    icache_rd_doing_clr  ;
    Reg #(1, 1'd0) icache_rd_doing_buffer(.clk(clk),.rst(rst),.din(icache_rd_doing_nxt),.dout(icache_rd_doing),.wen(icache_rd_doing_wen));

    wire dcache_rd_doing ;//(only rd req)
    wire dcache_rd_doing_set = dcache_rd_req && dcache_rd_ready ;
    wire dcache_rd_doing_clr = dcache_rlast  && dcache_rvalid ;
    wire dcache_rd_doing_nxt = dcache_rd_doing_set && (~dcache_rd_doing_clr) ;
    wire dcache_rd_doing_wen = dcache_rd_doing_set |    dcache_rd_doing_clr ;
    Reg #(1, 1'd0) dcache_rd_doing_buffer(.clk(clk),.rst(rst),.din(dcache_rd_doing_nxt),.dout(dcache_rd_doing),.wen(dcache_rd_doing_wen));

    // cache req src select
    wire rd_channel_cache_choose = dcache_rd_req && (~icache_rd_doing) | ~(icache_rd_req && (~dcache_rd_doing)) ; // 0: icache 1: dcache (prior,default)
 
    assign rd_req   = rd_channel_cache_choose ? dcache_rd_req   : icache_rd_req   ; 
    assign rd_addr  = rd_channel_cache_choose ? dcache_rd_addr  : icache_rd_addr  ;
    assign rd_type  = rd_channel_cache_choose ? dcache_rd_type  : icache_rd_type  ;

    assign icache_rd_ready = rd_channel_cache_choose ? 0 : rd_ready ;
    assign icache_rdata    = rd_channel_cache_choose ? 0 : rdata    ;
    assign icache_rlast    = rd_channel_cache_choose ? 0 : rlast    ;
    assign icache_rvalid   = rd_channel_cache_choose ? 0 : rvalid   ;

    assign dcache_rd_ready = rd_channel_cache_choose ? rd_ready: 0 ;
    assign dcache_rdata    = rd_channel_cache_choose ? rdata   : 0 ;
    assign dcache_rlast    = rd_channel_cache_choose ? rlast   : 0 ;
    assign dcache_rvalid   = rd_channel_cache_choose ? rvalid  : 0 ;
    
    assign wr_req  = decache_wr_req ,
    assign wr_addr = decache_wr_addr,
    assign wdata   = decache_wdata  ,
    assign wr_type = decache_wr_type,
    assign wstrb   = decache_wstrb  ,

    assign decache_wr_ready = wr_ready;

    // sram interface to axi
    wire aw_hs = o_axi_master_arvalid && i_axi_master_arready ;
    wire w_hs  = o_axi_master_wvalid  && i_axi_master_wready  ;
    wire b_hs  = i_axi_master_bvalid  && o_axi_master_bready  ;
    wire ar_hs = o_axi_master_arvalid && i_axi_master_arready ;
    wire r_hs  = i_axi_master_rvalid  && o_axi_master_rready  ;
    wire w_done = w_hs && o_axi_master_wlast ;
    wire r_done = r_hs && i_axi_master_rlast ;
    // axi write transaction
    // Number of transfers
    reg [7:0] w_transfer_cnt,r_transfer_cnt;

    always @(posedge clk) begin
        if(rst | aw_hs) begin
            w_transfer_cnt <= 8'd0;
        end
        else if (w_hs && (w_transfer_cnt != w_transfer_len)) begin
            w_transfer_cnt <= w_transfer_cnt + 1 ;
        end
    end

    always @(posedge clk) begin
        if(rst | ar_hs) begin
            r_transfer_cnt <= 8'd0;
        end
        else if (r_hs) begin
            r_transfer_cnt <= r_transfer_cnt + 1 ;
        end
    end

    // write state machine
    localparam [1:0] W_STATE_IDEL = 2'b00 , W_STATE_ADDR = 2'b01 , W_STATE_DATA = 2'b10 , W_STATE_RESP = 2'b11 ;
    wire [1:0] w_next_state ;
    reg  [1:0] w_cur_state  ;

    always @(*) begin
        case (w_cur_state)
            W_STATE_IDEL : w_next_state <= W_STATE_ADDR ;
            W_STATE_ADDR : begin
                if(aw_hs) w_next_state <= W_STATE_DATA ;
                else w_next_state <= W_STATE_ADDR ;
            end
            W_STATE_DATA : begin
                if(w_done) w_next_state <= W_STATE_RESP ;
                else w_next_state <= W_STATE_DATA ;
            end
            W_STATE_RESP : begin
                if(b_hs) w_next_state <= W_STATE_IDEL ;
                else w_next_state <= W_STATE_RESP ;
            end
            default: 
        endcase
    end

    always @(posedge clk) begin
        if(rst) begin
            w_cur_state <= W_STATE_IDEL ;
        end
        else w_cur_state <= w_next_state ;
    end

    wire w_state_addr = (w_cur_state==W_STATE_ADDR) ;
    wire w_state_data = (w_cur_state==W_STATE_DATA) ;
    wire w_state_resp = (w_cur_state==W_STATE_RESP) ;

    wire w_transfer_len = (wr_type == 3'd4) ? 8'd1 : 8'd0

    assign o_axi_master_awvalid = wr_req && w_state_addr ;
    assign o_axi_master_awaddr  = wr_addr ;
    assign o_axi_master_awid    = 4'd0 ;
    assign o_axi_master_awlen   = ;
    assign o_axi_master_awsize  = {1'b1,wr_type[1:0]};
    assign o_axi_master_awburst = AXI_BURST_TYPE_INCR;

    assign o_axi_master_wvalid = w_state_data ;
    assign o_axi_master_wdata  = wdata[64*(w_transfer_cnt)-1:64*w_transfer_cnt] ;
    assign o_axi_master_wstrb  = wstrb ;
    assign o_axi_master_wlast  = ( w_transfer_cnt == w_transfer_len ) ;

    // axi read transaction 
    localparam [1:0] R_STATE_IDEL = 2'b00 , R_STATE_ADDR = 2'b01 , R_STATE_READ = 2'b10 ;
    wire [1:0] r_next_state ;
    reg  [1:0] r_cur_state ;

    wire r_state_addr = (r_cur_state == R_STATE_ADDR);
    wire r_state_read = (r_cur_state == R_STATE_READ);

endmodule