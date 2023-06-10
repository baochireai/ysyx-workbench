// AXI4-Lite RAM module with AWIDTH=32 

import "DPI-C" function void pmem_read(
  input int raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input int waddr, input longint wdata, input byte wmask);

module ram_axi_lite #(
    parameter AWIDTH = 32, // Address width
    parameter DWIDTH = 64, //Data width (only 32bits or 64bits)
    parameter DSIZE = 8
)(
    // AXI4-Lite interface signals
    input wire clk,
    input wire resetn,

    // Write address channel signals
    input wire [AWIDTH-1:0] AWADDR,
    input wire AWVALID,
    output reg AWREADY,

    // Write data channel signals
    input wire [DWIDTH-1:0] WDATA,//only 32bits or 64bits
    input wire WVALID,
    output reg WREADY,
    input[DSIZE-1:0] WSTRB,//indicate which byte is write enabled.

    // Write response channel signals
    output reg BVALID,
    output reg [1:0] BRESP,//2'b00 正常访问成功 2'b01独占访问成功 2'b10 SLVERR 2'b11 DCERR互连解码错误
    input wire BREADY,

    // Read address channel signals
    input wire [AWIDTH-1:0] ARADDR,
    input wire ARVALID,
    output reg ARREADY,

    // Read data channel signals
    output reg [DWIDTH-1:0] RDATA,
    output reg[1:0] RRESP,
    output reg RVALID,
    input wire RREADY
);

reg [DWIDTH-1:0] mem[(1<<AWIDTH)-1:0];
reg [AWIDTH-1:0] waddr,raddr;
reg [DSIZE-1:0] wstrb;
reg wdata_done;
wire raddr_done;

integer i;

initial begin
    for(i=0;i<(1<<AWADDR)-1;i=i+1)
        mem[i]='d0;
end

//write address
always @(posedge clk ) begin
    if(resetn) begin
        waddr<='d0;
        AWREADY<=1'b1;
    end
    else if(AWVALID&AWREADY) begin
        waddr<=AWADDR;
        wstrb<=WSTRB;
        AWREADY<=1'b0;
    end
    else
        AWREADY<=1'b1;
end

//write data
always @(posedge clk ) begin
    if(resetn) begin
        WREADY<=1'b1;
        wdata_done<=1'b0;
    end
    else if(WVALID&WREADY) begin//write data to memory
        // for(i=0;i<DSIZE;i=i+1)begin
        //     if(wstrb[i])
        //         mem[waddr][i*8+:8]<=WDATA[i*8+:8];
        // end
        pmem_write(waddr,WDATA,WSTRB);
        WREADY<=1'b0;
        wdata_done<=1'b1;
    end
    else begin
        WREADY<=1'b1;
        wdata_done<=1'b0;    
    end
end

//write respose
always @(posedge clk ) begin
    if(resetn) begin
        BRESP<=2'b00;
        BVALID<=1'b0;
    end
    else if(wdata_done) begin
        BRESP<=2'b00;
        BVALID<=1'b1;
    end
    else if(BVALID&BREADY) begin//wait for handshake and then clear valid sign.
        BVALID<=1'b0;
        BRESP<=BRESP;
    end
    else begin
        BRESP<=BRESP;
        BVALID<=BVALID;
    end
end

// always @(posedge clk ) begin
//     if(resetn) begin
//         raddr<='d0;
//         ARREADY<=1'b1;
//         raddr_done<=1'b0;
//     end
//     else if(ARVALID&ARREADY) begin
//         raddr<=ARADDR;
//         //ARREADY<=1'b0;  one cycle read latency
//         raddr_done<=1'b1;
//     end
//     else begin
//         ARREADY<=1'b1;
//         raddr_done<=1'b0;
//     end
// end

assign ARREADY=1'b1;//one cycle read latency so keep ready
wire [DWIDTH-1:0] RDATA_d;
//read data
always @(posedge clk ) begin
    if(resetn) begin
        RDATA_d<='d0;
        RVALID<=1'b0;
        RRESP<=2'b00;
    end
    else if(ARVALID&&ARREADY) begin
        pmem_read(ARADDR,RDATA_d);
        RRESP<=2'b00;
        RVALID<=1'b1;
    end
    else if(RVALID&RREADY)//should wait rready vaild,then invalid rvalid and change dataout.
        RVALID<=1'b0;
        RDATA_d<=RDATA_d;
    else begin
        RVALID<=RVALID;
        RDATA_d<=RDATA_d;
        //RDATA<=RDATA;
    end
end

assign RDATA=RDATA_d;

endmodule

