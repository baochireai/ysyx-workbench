module clint(
    input clk,
    input [63:0] clint_din,
    input [63:0] clint_addr,
    input we,
    input re,
    //output [63:0] clint_mtime,
    output clint_mtip,
    output [63:0] clint_dout
);
    /**msip先不加入**/
    reg [63:0] mtime,mtimecmp;

    wire ismtimecmp=(clint_addr==64'h200_4000)?1'b1:1'b0;
    wire ismtime=(clint_addr==64'h200_BFF8)?1'b1:1'b0;
    
    Reg #(64,64'hffff_ffff_ffff_ffff) mtimecmp_Reg(.clk(clk),.rst(1'b0),.din(clint_din),.dout(mtimecmp),.wen(we&ismtimecmp));

    //计时器
    initial begin
        mtime=64'd0;
    end

    always @(posedge clk) begin
        if (we&ismtime) mtime <= clint_din;
        else
            mtime<=mtime+64'd1;
    end

    assign clint_dout=({64{re}})&(ismtime?mtime:(ismtimecmp?mtimecmp:64'd0));

    assign clint_mtip=mtime>mtimecmp;


endmodule