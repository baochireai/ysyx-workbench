`include "defines.v"

module IFU(
    input clk,
    input resetn,
    input [`InstAddrBus-1:0] pc,
    //AXI-lite
    output reg ARVALID,
    output reg [`InstAddrBus-1:0] ARADDR,
    input ARREADY,

    output reg RREADY,
    input [`INSTBus-1:0] inst_i,
    input RVALID,
    // data to IDU
    output reg [`INSTBus-1:0] inst_o,
    // handshake to IDU
    output reg valid,
    input ready
);


always @(posedge clk ) begin
    if(resetn) begin
        ARVALID<=1'b0;
        ARADDR<='d0;
    end 
    // else if(ARVALID&ARREADY) begin //needn't wait arready vaild(ram is always waiting raddr)
    //     ARVALID<=1'b0;
    // end
    else begin
        ARVALID<=1'b1;
        ARADDR<=pc;
    end
end

// always @(posedge clk ) begin
//     if(resetn) begin
//         //RREADY<=1'b1;
//         inst_o<='d0;
//     end
//     else if(RVALID) begin
//         inst_o<=inst_i;
//         //RREADY<=1'b0;
//     end
//     else begin
//         inst_o<=inst_o;
//         //RREADY<=1'b1;
//     end
// end

assign inst_o=inst_i;

assign RREADY=1'b1;//always ready for data(inst_o can be processed in one cycle)

endmodule