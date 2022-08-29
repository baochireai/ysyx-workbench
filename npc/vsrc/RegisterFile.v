import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
    /* verilator lint_off UNUSED */
  input [ADDR_WIDTH-1:0] rs1,
  input [ADDR_WIDTH-1:0] rs2,
  input [ADDR_WIDTH-1:0] waddr,
  /* verilator lint_on UNUSED */
  output [DATA_WIDTH-1:0] R_rs1,
  output [DATA_WIDTH-1:0] R_rs2,
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input wen
);
  
  reg [DATA_WIDTH-1:0] rf [31:0];

  initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量

  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;//waddr unused
  end
  //0号寄存器特性实现方式
  assign R_rs1=(rs1==0)?0:rf[rs1];
  assign R_rs2=(rs2==0)?0:rf[rs2];

  //不能实现0号寄存器特性
  // assign rf[0]={DATA_WIDTH{1'b0}};
  // assign R_rs1=rf[rs1];
  // assign R_rs2=rf[rs2];

endmodule
