module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);

  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end

  // reg rst_r1,rst_r2;
  // always @(posedge clk or posedge rst) begin
  //   if(rst) begin
  //       rst_r1<=1;
  //       rst_r2<=1;
  //   end
  //   else begin
  //       rst_r1<=0;
  //       rst_r2<=rst_r1;
  //   end
  // end

  // always @(posedge clk or posedge rst_r2) begin
  //   if (rst_r2) dout <= RESET_VAL;
  //   else if (wen) dout <= din;
  // end


endmodule

// module Reg #(WIDTH = 1, RESET_VAL = 0) (
//   input clk,
//   input rst,
//   input [WIDTH-1:0] din,
//   output reg [WIDTH-1:0] dout,
//   input wen
// );
//   initial begin
//     dout=RESET_VAL;
//   end

//   always @(posedge clk) begin
//     if (rst) dout <= RESET_VAL;
//     else if (wen) dout <= din;
//   end

// endmodule


