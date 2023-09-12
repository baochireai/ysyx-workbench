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
    input [31:0]    icache_rd_addr ,
    input [2:0]     icache_rd_type ,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    output          icache_rd_ready,
    output [63:0]   icache_rdata   ,
    output          icache_rlast   ,
    output          icache_rvalid  ,    

    // 1.2 dcache <--> axi interface (read)
    input           dcache_rd_req  ,
    input [31:0]    dcache_rd_addr ,
    input [2:0]     dcache_rd_type ,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    output          dcache_rd_ready,
    output [63:0]   dcache_rdata   ,
    output          dcache_rlast   ,
    output          dcache_rvalid  ,

    // 1.3 dcache <--> axi interface (write)
    input           dcache_wr_req  ,
    input [31:0]    dcache_wr_addr ,
    input [127:0]   dcache_wdata   ,
    input [2:0]     dcache_wr_type ,
    input [7:0]     dcache_wstrb   ,//only uncache
    output          dcache_wr_ready,

    // 2. axi master
    // 2.1 ar
    input           i_axi_master_arready,

    output reg      o_axi_master_arvalid,
    output [31:0]   o_axi_master_araddr ,
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
    output [31:0]   o_axi_master_awaddr ,
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
    wire [31:0]    rd_addr ;
    wire [2:0]     rd_type ;//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    wire           rd_ready;
    wire [63:0]    rdata   ;
    wire           rlast   ;
    wire           rvalid  ;     

    wire           wr_req  ;
    wire [31:0]    wr_addr ;
    wire [127:0]   wdata   ;
    wire [2:0]     wr_type ;
    wire [7:0]     wstrb   ;
    wire           wr_ready;

    // icache && dcache status
    wire icache_rd_doing ;
    wire icache_rd_doing_set = icache_rd_req && icache_rd_ready ;
    wire icache_rd_doing_clr = icache_rlast && icache_rvalid ;
    wire icache_rd_doing_nxt = icache_rd_doing_set && (~icache_rd_doing_clr) ; // clr prior
    wire icache_rd_doing_wen = icache_rd_doing_set |    icache_rd_doing_clr  ;
    Reg #(1, 1'd0) icache_rd_doing_buffer(.clk(clk),.rst(rst),.din(icache_rd_doing_nxt),.dout(icache_rd_doing),.wen(icache_rd_doing_wen));

    wire dcache_rd_doing ;
    wire dcache_rd_doing_set = dcache_rd_req && dcache_rd_ready ;
    wire dcache_rd_doing_clr = dcache_rlast  && dcache_rvalid ;
    wire dcache_rd_doing_nxt = dcache_rd_doing_set && (~dcache_rd_doing_clr) ;
    wire dcache_rd_doing_wen = dcache_rd_doing_set |    dcache_rd_doing_clr ;
    Reg #(1, 1'd0) dcache_rd_doing_buffer(.clk(clk),.rst(rst),.din(dcache_rd_doing_nxt),.dout(dcache_rd_doing),.wen(dcache_rd_doing_wen));

    wire dcache_wr_doing ;
    wire dcache_wr_doing_set = dcache_wr_req && dcache_wr_ready ;
    wire dcache_wr_doing_clr = b_hs ; 
    wire dcache_wr_doing_nxt = dcache_wr_doing_set && (~dcache_wr_doing_clr) ;
    wire dcache_wr_doing_wen = dcache_wr_doing_set |    dcache_wr_doing_clr ;
    Reg #(1, 1'd0) dcache_wr_doing_buffer(.clk(clk),.rst(rst),.din(dcache_wr_doing_nxt),.dout(dcache_wr_doing),.wen(dcache_wr_doing_wen));

    // cache req src select 
    wire rd_channel_cache_choose = dcache_rd_req && (~icache_rd_doing) || dcache_rd_doing ;// | ~(icache_rd_req && (~dcache_rd_doing)) ; // 0: icache (default) 1: dcache (prior)
 
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
    
    assign wr_req  = dcache_wr_req ;
    assign wr_addr = dcache_wr_addr;
    assign wdata   = dcache_wdata  ;
    assign wr_type = dcache_wr_type;
    assign wstrb   = dcache_wstrb  ;

    assign dcache_wr_ready = wr_ready;

    // sram interface to axi
    // axi shake hands
    wire aw_hs = o_axi_master_awvalid && i_axi_master_awready ;
    wire w_hs  = o_axi_master_wvalid  && i_axi_master_wready  ;
    wire b_hs  = i_axi_master_bvalid  && o_axi_master_bready  ;
    wire ar_hs = o_axi_master_arvalid && i_axi_master_arready ;
    wire r_hs  = i_axi_master_rvalid  && o_axi_master_rready  ;
    wire w_done = w_hs && o_axi_master_wlast ;
    wire r_done = r_hs && i_axi_master_rlast ;

    // axi write transaction

    // write req buffer
    wire           r_wr_req  ;
    wire [31:0]    r_wr_addr ;
    wire [127:0]   r_wdata   ;
    wire [2:0]     r_wr_type ;
    wire [7:0]     r_wstrb   ;

    wire wr_req_buffer_wen = wr_req && wr_ready ;
    wire wr_req_buffer_clr = w_done ;
    Reg #(
        .WIDTH(1 + 32 + 128 + 3 + 8), 
        .RESET_VAL(0)        
    ) axi_write_req_buffer(
        .clk(clk),.rst(rst | wr_req_buffer_clr),
        .din({wr_req , wr_addr , wdata , wr_type , wstrb}),
        .dout({r_wr_req , r_wr_addr , r_wdata , r_wr_type , r_wstrb}),
        .wen(wr_req_buffer_wen)
    );

    // Number of transfers
    reg [7:0] w_transfer_cnt ;

    always @(posedge clk) begin
        if(rst | aw_hs) begin
            w_transfer_cnt <= 8'd0;
        end
        else if (w_hs && (w_transfer_cnt != w_transfer_len)) begin
            w_transfer_cnt <= w_transfer_cnt + 1 ;
        end
    end

    // write state machine
    localparam [1:0] W_STATE_IDEL = 2'b00 , W_STATE_ADDR = 2'b01 , W_STATE_DATA = 2'b10 , W_STATE_RESP = 2'b11 ;
    reg  [1:0] w_cur_state , w_next_state ;

    always @(*) begin
        case (w_cur_state)
            W_STATE_IDEL : w_next_state  =W_STATE_ADDR ;
            W_STATE_ADDR : begin
                if(aw_hs) w_next_state  = W_STATE_DATA ;
                else w_next_state  = W_STATE_ADDR ;
            end
            W_STATE_DATA : begin
                if(w_done) w_next_state  = W_STATE_RESP ;
                else w_next_state  = W_STATE_DATA ;
            end
            W_STATE_RESP : begin
                if(b_hs) w_next_state  = W_STATE_IDEL ;
                else w_next_state  = W_STATE_RESP ;
            end
            default: w_next_state  = W_STATE_IDEL ;
        endcase
    end

    always @(posedge clk) begin
        if(rst) begin
            w_cur_state <= W_STATE_IDEL ;
        end
        else w_cur_state <= w_next_state ;
    end
    
    // write transaction  master port
    wire w_state_addr = (w_cur_state==W_STATE_ADDR) ;
    wire w_state_data = (w_cur_state==W_STATE_DATA) ;
    wire w_state_resp = (w_cur_state==W_STATE_RESP) ;

    wire [7:0] w_transfer_len = (r_wr_type == 3'd4) ? 8'd1 : 8'd0 ;
    
    // aw
    assign o_axi_master_awvalid = r_wr_req && w_state_addr ; 
    assign o_axi_master_awaddr  = r_wr_addr ;
    assign o_axi_master_awid    = 4'd0 ;
    assign o_axi_master_awlen   = w_transfer_len ;
    assign o_axi_master_awsize  = {1'b0,r_wr_type[1:0]};
    assign o_axi_master_awburst = `AXI_BURST_TYPE_INCR;

    // w
    assign o_axi_master_wvalid = w_state_data ;
    assign o_axi_master_wdata  = r_wdata[64*w_transfer_cnt+:64] ;
    assign o_axi_master_wstrb  = r_wstrb ;
    assign o_axi_master_wlast  = ( w_transfer_cnt == w_transfer_len ) ;

    assign o_axi_master_bready = w_state_resp ;

    // sram-like port for cache
    assign wr_ready = ! dcache_wr_doing ;

    // axi read transaction 
    
    // cache read req buffer
    wire           r_rd_req  ;
    wire [31:0]    r_rd_addr ;
    wire [2:0]     r_rd_type ;

    wire rd_req_buffer_wen = rd_req && rd_ready ;
    wire rd_req_buffer_clr = r_done ;
    Reg #(
        .WIDTH(1 + 32 + 3), 
        .RESET_VAL(0)        
    ) axi_read_req_buffer(
        .clk(clk),.rst(rst | rd_req_buffer_clr),
        .din({rd_req , rd_addr , rd_type}),
        .dout({r_rd_req , r_rd_addr , r_rd_type}),
        .wen(rd_req_buffer_wen)
    );    

    // Number of transfers
    reg [7:0] r_transfer_cnt ;
    always @(posedge clk) begin
        if(rst | ar_hs) begin
            r_transfer_cnt <= 8'd0;
        end
        else if (r_hs && r_transfer_cnt != r_transfer_len) begin
            r_transfer_cnt <= r_transfer_cnt + 1 ;
        end
    end    

    // read state machine
    localparam [1:0] R_STATE_IDEL = 2'b00 , R_STATE_ADDR = 2'b01 , R_STATE_READ = 2'b10 ;
    reg  [1:0] r_cur_state , r_next_state ;

    always @(posedge clk) begin
        if(rst) r_cur_state <= R_STATE_IDEL ;
        else r_cur_state <= r_next_state ;
    end

    always @(*) begin
        case(r_cur_state)
            R_STATE_IDEL: r_next_state  = R_STATE_ADDR ;
            R_STATE_ADDR: begin
                if(ar_hs) r_next_state  = R_STATE_READ ;
                else r_next_state  = R_STATE_ADDR ;
            end
            R_STATE_READ: begin
                if(r_done) r_next_state  = R_STATE_IDEL ;
                else r_next_state  = R_STATE_READ ;
            end
            default:r_next_state  = R_STATE_IDEL ;
        endcase
    end

    // read transcation master port
    wire [7:0] r_transfer_len = (r_rd_type == 3'd4) ? 8'd1 : 8'd0 ;
    
    wire r_state_addr = (r_cur_state == R_STATE_ADDR);
    wire r_state_read = (r_cur_state == R_STATE_READ);

    assign o_axi_master_arvalid = r_rd_req && r_state_addr ;
    assign o_axi_master_araddr  = r_rd_addr ;
    assign o_axi_master_arid    = 4'd0 ;
    assign o_axi_master_arlen   = r_transfer_len ;
    assign o_axi_master_arsize  = {1'b0, r_rd_type[2] ? 2'b11 : r_rd_type[1:0]} ;
    assign o_axi_master_arburst = `AXI_BURST_TYPE_INCR ;

    assign o_axi_master_rready  = r_state_read ;
    
    // sram-like port for cache
    assign rd_ready = ~(icache_rd_doing | dcache_rd_doing) ;
    assign rdata    = i_axi_master_rdata  ;
    assign rlast    = i_axi_master_rlast  ;
    assign rvalid   = i_axi_master_rvalid ;


endmodule