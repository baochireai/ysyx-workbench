module clint(
    input clk,
    input rst,
    input [63:0] clint_din,
    input [63:0] clint_addr,
    input we,
    input re,
    //output [63:0] clint_mtime,
    output clint_mtip,
    output [63:0] clint_dout
);

    reg [63:0] mtime,mtimecmp;/**msip先不加入**/
    // 1. addr map
    wire ismtimecmp= (clint_addr==64'h200_4000) ;
    wire ismtime= (clint_addr==64'h200_BFF8) ;
    
    // 2. mtime&mtime write
    Reg #(64,64'hffff_ffff_ffff_ffff) mtimecmp_Reg(.clk(clk),.rst(rst),.din(clint_din),.dout(mtimecmp),.wen(we&ismtimecmp));

    wire mtime_we = we & ismtime;
    wire [63:0] mtime_next = mtime_we ? clint_din : (mtime+1);
    Reg #(64,64'd0) mtime_Reg(.clk(clk),.rst(rst),.din(mtime_next),.dout(mtime),.wen(1'b1));

    // 3. client reaad
    assign clint_dout=({64{re}})&(ismtime?mtime:(ismtimecmp?mtimecmp:64'd0));

    // 4. mtip
    assign clint_mtip=mtime>mtimecmp;

endmodule
