// AXI4 RAM module with AWIDTH=32 

import "DPI-C" function void pmem_read(
  input int raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input int waddr, input longint wdata, input byte wmask);

module ram_axi #(
    parameter AWIDTH = 32, // Address width
    parameter DWIDTH = 64, //Data width (only 32bits or 64bits)
    parameter DSIZE = 8
)(
    input clk,rst,

    output          o_axi_slave_arready,

    input           i_axi_slave_arvalid,
    input [31:0]    i_axi_slave_araddr ,
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
    input [31:0]    i_axi_slave_awaddr ,
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
    wire aw_hs = i_axi_slave_awvalid && o_axi_slave_awready ;
    wire w_hs  = i_axi_slave_wvalid  && o_axi_slave_wready  ;
    wire b_hs  = o_axi_slave_bvalid  && i_axi_slave_bready  ;
    wire ar_hs = i_axi_slave_arvalid && o_axi_slave_arready ;
    wire r_hs  = o_axi_slave_rvalid  && i_axi_slave_rready  ;
    wire w_done = w_hs && i_axi_slave_wlast ;
    wire r_done = r_hs && o_axi_slave_rlast ;    

    // read transaction 

    // read state machine
    localparam [1:0] R_STATE_IDEL = 2'b00 , R_STATE_ADDR = 2'b01 , R_STATE_READ = 2'b10 ;
    reg  [1:0] r_cur_state , r_next_state ;

    always @(posedge clk) begin
        if(rst) r_cur_state <= R_STATE_IDEL ;
        else r_cur_state <= r_next_state ;
    end

    always @(*) begin
        case(r_cur_state)
            R_STATE_IDEL: r_next_state = R_STATE_ADDR ;
            R_STATE_ADDR: begin
                if(ar_hs) r_next_state = R_STATE_READ ;
                else r_next_state = R_STATE_ADDR ;
            end
            R_STATE_READ: begin
                if(r_done) r_next_state = R_STATE_IDEL ;
                else r_next_state = R_STATE_READ ;
            end
            default:r_next_state = R_STATE_IDEL ;
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
    wire [31:0]   ar_addr ;
    wire [7:0]    ar_len  ;
    wire [2:0]    ar_size ;

    wire rd_req_buffer_wen = r_state_addr && ar_hs ;
    Reg #(
        .WIDTH(32 + 8 + 3), 
        .RESET_VAL(0)        
    ) axi_read_req_buffer(
        .clk(clk),.rst(rst),
        .din({i_axi_slave_araddr , i_axi_slave_arlen ,i_axi_slave_arsize}),
        .dout({ar_addr , ar_len , ar_size}),
        .wen(rd_req_buffer_wen)
    );

    // read transaction slave port
    assign o_axi_slave_arready = r_state_addr;

    assign o_axi_slave_rvalid  = r_state_read ;
    assign o_axi_slave_rlast   = r_transfer_cnt == ar_len ;
    assign o_axi_slave_rresp   = 2'b00 ;
    assign o_axi_slave_rdata   = ram_rdata ;
    assign o_axi_slave_rid     = 4'd0 ;

    // DPI-C read data ram 
    wire [31:0] ram_raddr ;
    reg [63:0] ram_rdata ;
    assign ram_raddr = ar_addr + ({24'd0,r_transfer_cnt} << 3);//ar_addr + r_transfer_cnt * 4 ;
    wire ram_ren = r_state_read ;
    
    always @(*) begin
        if(ram_ren) begin
            pmem_read(ram_raddr,ram_rdata);            
        end
        else ram_rdata = 64'd0;
    end

    // write transaction
    // write state machine
    localparam [1:0] W_STATE_IDEL = 2'b00 , W_STATE_ADDR = 2'b01 , W_STATE_DATA = 2'b10 , W_STATE_RESP = 2'b11;
    reg  [1:0] w_cur_state , w_next_state ;

    always @(posedge clk) begin
        if(rst) w_cur_state <= W_STATE_IDEL ;
        else w_cur_state <= w_next_state ;
    end

    always @(*) begin
        case(w_cur_state)
            W_STATE_IDEL: w_next_state = W_STATE_ADDR ;
            W_STATE_ADDR: begin
                if(aw_hs) w_next_state = W_STATE_DATA ;
                else w_next_state = R_STATE_ADDR ;
            end
            W_STATE_DATA: begin
                if(w_done) w_next_state = W_STATE_RESP ;
                else w_next_state = W_STATE_DATA ;
            end
            W_STATE_RESP: begin
                if(b_hs) w_next_state = W_STATE_IDEL;
                else w_next_state = W_STATE_RESP ;
            end
            default:w_next_state = R_STATE_IDEL ;
        endcase
    end

    wire w_state_addr = (w_cur_state==W_STATE_ADDR) ;
    wire w_state_data = (w_cur_state==W_STATE_DATA) ;
    wire w_state_resp = (w_cur_state==W_STATE_RESP) ;    

    // write transaction req buffer 
    wire [31:0]    aw_addr ;
    wire [7:0]     aw_len  ;
    wire [2:0]     aw_size ;    

    wire wr_req_buffer_wen = w_state_addr && aw_hs ;

    Reg #(
        .WIDTH(32 + 8 + 3), 
        .RESET_VAL(0)        
    ) axi_write_req_buffer(
        .clk(clk),.rst(rst),
        .din({i_axi_slave_awaddr , i_axi_slave_awlen ,i_axi_slave_awsize}),
        .dout({aw_addr , aw_len , aw_size}),
        .wen(wr_req_buffer_wen)
    );

    // Number of transfers
    reg [7:0] w_transfer_cnt ;
    always @(posedge clk) begin
        if(rst | aw_hs) begin
            w_transfer_cnt <= 8'd0;
        end
        else if (w_hs && w_transfer_cnt != aw_len) begin
            w_transfer_cnt <= w_transfer_cnt + 1 ;
        end
    end  
    
    // write transaction slave port

    // w
    assign o_axi_slave_wready = w_state_data ;
    
    // b
    assign o_axi_slave_bvalid = w_state_resp ;
    assign o_axi_slave_bresp  = 2'b00 ;
    assign o_axi_slave_bid    = 4'd0 ;
    
    // DPI-C write data ram
    wire [31:0] ram_waddr ;
    wire ram_wen ;
    assign ram_waddr = aw_addr + ({24'd0,w_transfer_cnt} << 3);
    assign ram_wen = w_hs ;

    always @(*) begin
        if(ram_wen) begin
            pmem_write(ram_waddr,i_axi_slave_wdata,i_axi_slave_wstrb);
        end
    end

endmodule