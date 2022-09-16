// import "DPI-C" function void pmem_read(
//   input longint raddr, output longint rdata);
// import "DPI-C" function void pmem_write(
//   input longint waddr, input longint wdata, input byte wmask);

module DataMem(
    input [63:0] Addr,
    input [2:0] MemOP,//3'd1:读写八个字节
    input [63:0] DataIn,
    input WrEn,
    output [63:0] DataOut
);
    wire [7:0] wmask;
    
    MuxKeyInternal #(1,3,8, 1) deMemOP (.out(wmask),.key(MemOP),.default_out(8'd0),.lut({
        {3'd1,8'b1111_1111}
    }));
    
    wire [63:0] raddr =(MemOP==3'd0)?64'h0000000080000000:Addr;
    
    always @(*) begin
        pmem_read(raddr, DataOut);
        if (WrEn==1'b1);
            pmem_write(Addr, DataIn, wmask);
    end

endmodule
