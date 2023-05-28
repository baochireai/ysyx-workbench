module PC(
    input clk,
    input rst,
    input isIntrPC,
    input [63:0] NextPC,
    input [63:0] IntrPC,
    output [63:0] pc,
    output [63:0] dpc
);

    assign dpc=isIntrPC?IntrPC:NextPC;
    Reg #(64, 64'h0000000080000000) NEXT_PC(.clk(clk),.rst(rst),.din(dpc),.dout(pc),.wen(1'b1));

endmodule
