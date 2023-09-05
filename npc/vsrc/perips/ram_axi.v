// AXI4 RAM module with AWIDTH=32 

import "DPI-C" function void pmem_read(
  input int raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input int waddr, input longint wdata, input byte wmask);

module ram_axi_lite #(
    parameter AWIDTH = 32, // Address width
    parameter DWIDTH = 64, //Data width (only 32bits or 64bits)
    parameter DSIZE = 8
)(
    output          o_axi_slave_arready,

    input           i_axi_slave_arvalid,
    input [63:0]    i_axi_slave_araddr ,
    input [3:0]     i_axi_slave_arid   ,
    input [7:0]     i_axi_slave_arlen  ,
    input [2:0]     i_axi_slave_arsize ,
    input [1:0]     i_axi_slave_arburst,
    
    // r
    input           i_axi_slave_rready,

    output          o_axi_slave_rvalid,
    output          o_axi_slave_rlast ,
    output [1:0]    o_axi_slave_rresp ,
    output [63:0]   o_axi_slave_rdata ,
    output [3:0]    o_axi_slave_rid   ,
    
    // aw
    output          o_axi_slave_awready,

    input           i_axi_slave_awvalid,
    input [63:0]    i_axi_slave_awaddr ,
    input [3:0]     i_axi_slave_awid   ,
    input [7:0]     i_axi_slave_awlen  ,
    input [2:0]     i_axi_slave_awsize ,
    input [1:0]     i_axi_slave_awburst,

    // w
    output          o_axi_slave_wready,

    input           i_axi_slave_wvalid,
    input [63:0]    i_axi_slave_wdata ,
    input [7:0]     i_axi_slave_wstrb ,
    input           i_axi_slave_wlast ,

    // b
    input           i_axi_slave_bready,

    output          o_axi_slave_bvalid,
    output [1:0]    o_axi_slave_bresp ,
    output [3:0]    o_axi_slave_bid
);

    // axi shake hands
    wire aw_hs = i_axi_slave_arvalid && o_axi_slave_arready ;
    wire w_hs  = i_axi_slave_wvalid  && o_axi_slave_wready  ;
    wire b_hs  = o_axi_slave_bvalid  && i_axi_slave_bready  ;
    wire ar_hs = i_axi_slave_arvalid && o_axi_slave_arready ;
    wire r_hs  = o_axi_slave_rvalid  && i_axi_slave_rready  ;
    wire w_done = w_hs && i_axi_slave_wlast ;
    wire r_done = r_hs && o_axi_slave_rlast ;    

    // read/write transaction status
    wire rd_doing ;
    wire rd_doing_set = ar_hs ;
    wire rd_doing_clr = r_done ;
    wire rd_doing_nxt = rd_doing_set && (~rd_doing_clr) ; // clr prior
    wire rd_doing_wen = rd_doing_set | rd_doing_clr  ;
    Reg #(1, 1'd0) rd_doing_buffer(.clk(clk),.rst(rst),.din(rd_doing_nxt),.dout(rd_doing),.wen(rd_doing_wen));

    wire wr_doing ;
    wire wr_doing_set = aw_hs ;
    wire wr_doing_clr = b_hs ;
    wire wr_doing_nxt = wr_doing_set && (~wr_doing_clr) ; // clr prior
    wire wr_doing_wen = wr_doing_set ||   wr_doing_clr  ;
    Reg #(1, 1'd0) wr_doing_buffer(.clk(clk),.rst(rst),.din(wr_doing_nxt),.dout(wr_doing),.wen(wr_doing_wen));

    // read transaction 
    reg [63:0]   ar_addr ,
    reg [7:0]    ar_len  ,
    reg [2:0]    ar_size ,

    // read state machine
    localparam [1:0] R_STATE_IDEL = 2'b00 , R_STATE_ADDR = 2'b01 , R_STATE_READ = 2'b11 ;
    wire [1:0] r_next_state ;
    reg  [1:0] r_cur_state ;

    always @(posedge clk) begin
        if(rst) r_cur_state <= R_STATE_IDEL ;
        else r_cur_state <= r_next_state ;
    end

    always @(*) begin
        case(r_cur_state)
            R_STATE_IDEL: r_next_state <= R_STATE_ADDR ;
            R_STATE_ADDR: begin
                if(aw_hs) r_next_state <= R_STATE_READ ;
                else r_next_state <= R_STATE_ADDR ;
            end
            R_STATE_READ: begin
                if(r_done) r_next_state <= R_STATE_IDEL ;
                else r_next_state <= R_STATE_IDEL ;
            end
            default:r_next_state <= R_STATE_IDEL ;
        endcase
    end

    wire r_state_addr = (r_cur_state == R_STATE_ADDR);
    wire r_state_read = (r_cur_state == R_STATE_READ);

    // Number of transfers
    reg [7:0] r_transfer_cnt ;
    always @(posedge clk) begin
        if(rst | ar_hs) begin
            r_transfer_cnt <= 8'd0;
        end
        else if (r_hs && r_transfer_cnt != ar_len) begin
            r_transfer_cnt <= r_transfer_cnt + 1 ;
        end
    end  

    // rd req bufffer
    wire rd_req_buffer_wen = r_state_addr && ar_hs ;
    Reg #(
        .WIDTH(64 + 8 + 3), 
        .RESET_VAL(0)        
    ) axi_read_req_buffer(
        .clk(clk),.rst(rst),
        .din({i_axi_slave_araddr , i_axi_slave_arlen ,i_axi_slave_arsize}),
        .dout({ar_addr , ar_len , ar_size}),
        .wen(req_buffer_wen)
    );

    // read transaction slave port
    assign o_axi_slave_arready = ~(rd_doing)  ;

    assign o_axi_slave_rvalid  = r_state_read ;
    assign o_axi_slave_rlast   = r_transfer_cnt == ar_len ;
    assign o_axi_slave_rresp   = 2'b00 ;
    assign o_axi_slave_rdata   = ram_rdata ;
    assign o_axi_slave_rid     = 4'd0 ;

    // DPI-C data ram 
    wire [63:0] ram_raddr , ram_rdata;
    assign ram_raddr = ar_addr + r_transfer_cnt << 2;//ar_addr + r_transfer_cnt * 4 ;
    always @(*) begin
        pmem_read(ram_raddr[31:0],ram_rdata);
    end

endmodule

