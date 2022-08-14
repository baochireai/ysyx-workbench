module PC(
    input clk,
    input rst,
    output [63:0] pc
);

    Reg #(64, 64'h0000000080000000) NEXT_PC(.clk(clk),.rst(rst),.din(pc+64'd4),.dout(pc),.wen(1'b1));

endmodule
