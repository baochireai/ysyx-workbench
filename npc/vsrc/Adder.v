module Adder #(DATA_LEN=64)(
    input [DATA_LEN-1:0] A,
    input [DATA_LEN-1:0] B,
    input Cin,
    output reg [DATA_LEN-1:0] Result,
    output Carry,
    output Overflow,
    output zero
);

wire [DATA_LEN-1:0] t_no_Cin;

assign t_no_Cin = {DATA_LEN{ Cin }}^B;
assign {Carry,Result} = A + t_no_Cin + {{(DATA_LEN-1){1'b0}},Cin};
assign Overflow = (A[DATA_LEN-1] == t_no_Cin[DATA_LEN-1]) && (Result [DATA_LEN-1] != A[DATA_LEN-1]);

assign zero = ~(| Result);

endmodule