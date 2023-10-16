import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
  input clk,
  input rst,
  /* verilator lint_off UNUSED */
  // rd req from id
  input [ADDR_WIDTH-1:0] rs1,
  input [ADDR_WIDTH-1:0] rs2,
  // write req from wb
  input [ADDR_WIDTH-1:0] waddr,
  input [DATA_WIDTH-1:0] wdata,
  input wen,
  /* verilator lint_on UNUSED */
  // data out for id
  output [DATA_WIDTH-1:0] R_rs1,
  output [DATA_WIDTH-1:0] R_rs2
);
  
  reg [DATA_WIDTH-1:0] rf [31:0];

  initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量

  wire isw=(wen&&waddr!=5'd0);

  always @(posedge clk) begin
    if(rst) begin
      for(integer i=0 ; i<32 ; i=i+1) begin
        rf[i] <= 0;
      end
    end
    if (isw) rf[waddr] <= wdata;//waddr unused
  end
  assign R_rs1 = rf[rs1];
  assign R_rs2 = rf[rs2];
  
endmodule
