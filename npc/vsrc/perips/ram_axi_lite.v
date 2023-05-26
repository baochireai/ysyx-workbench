// AXI4-Lite RAM module with AWIDTH=32 
module ram_axi_lite #(
    parameter AWIDTH = 32, // Address width
    parameter DWIDTH = 32, //Data width (only 32bits or 64bits)
    parameter DSIZE = 4
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
    output reg RRESP,
    output reg RVALID,
    input wire RREADY
);

reg [DWIDTH-1:0] mem[(1<<AWADDR)-1:0];
reg [AWIDTH-1:0] waddr,raddr;
reg [DSIZE-1:0] wstrb;
reg wdata_done;
wire raddr_done;
intergrate i;

//write address
always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        awaddr<='d0;
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
always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        WREADY<=1'b1;
        wdata_done<=1'b0;
    end
    else if(WVALID&WREADY) begin//write data to memory
        for(i=0;i<DSIZE;i=i+1)begin
            if(wstrb[i])
                mem[waddr][i*8+:8]<=WDATA[i*8+:8];
        end
        WREADY<=1'b0;
        wdata_done<=1'b1;
    end
    else
        WREADY<=1'b1;
        wdata_done<=1'b0;    
end

//write respose
always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        BRESP<=2'b00;
        BVALID<=1'b0;
    end
    else if(wdata_done) begin
        BRESP<=2'b00;
        BVALID<=1'b1;
    end
    else if(BVALID&BREADY)//wait for handshake and then clear valid sign.
        BVALID<=1'b0;
        BRESP<=BRESP;
    else
        BRESP<=BRESP;
        BVALID<=BVALID;
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        raddr<='d0;
        ARREADY<=1'b1;
        raddr_done<=1'b0;
    end
    else if(ARVALID&ARREADY) begin
        raddr<=ARADDR;
        ARREADY<=1'b0;
        raddr_done<=1'b1;
    end
    else begin
        ARREADY<=1'b1;
        raddr_done<=1'b0;
    end
end

//read data
always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        RDATA<='d0;
        RVALID<=1'b0;
        RRESP<=2'b00;
    end
    else if(raddr_done) begin
        RDATA<=mem[raddr];
        RRESP<=2'b00;
        RVALID<=1'b1;
    end
    else if(RVALID&RREADY)//should wait rready vaild,then invalid rvalid and change dataout.
        RVALID<=1'b0;
    else
        RVALID<=RVALID;
end

endmodule

