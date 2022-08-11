`include "Reg.v"

module ysyx_22041329_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  output [DATA_WIDTH-1:0] rdata,
  input [ADDR_WIDTH-1:0] raddr,
  input ren
);
  
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];

  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

  ysyx_22041329_Reg #(DATA_WIDTH) readReg (clk,0,din(rf[raddr]),dout(rdata),wen(ren))

endmodule
