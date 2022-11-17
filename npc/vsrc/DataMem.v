// import "DPI-C" function void pmem_read(
//   input longint raddr, output longint rdata);
// import "DPI-C" function void pmem_write(
//   input longint waddr, input longint wdata, input byte wmask);

module DataMem(
    input clk,
    input [63:0] Addr,
    input [2:0] MemOP,//MemOP[1:0]:2'd3 1字节读写 2'd2 2字节读写 2'd1 4字节读写 2'd0 8字节读写 MemOP[2]是否带符号扩增 MemOP[2:0] 3'd0无操作
    input [63:0] DataIn,
    input WrEn,
    output [63:0] DataOut
);

    wire [7:0] wmask;    
    MuxKeyInternal #(4,2,8, 1) deMemOP (.out(wmask),.key(MemOP[1:0]),.default_out(8'd0),.lut({
        2'd3,8'b0000_0001,
        2'd2,8'b0000_0011,
        2'd1,8'b0000_1111,
        2'd0,8'b1111_1111
    }));
    
    wire isSign=MemOP[2];
    wire RdEn=|MemOP;

    reg [5:0] shift=({3'b000,Addr[2:0]}<<3);
    reg [127:0] data;
    reg [15:0] extmask;
    
    always @(*) begin
        data={64'd0,DataIn}<<shift;
        extmask={8'd0,wmask}<<Addr[2:0];
        if(RdEn==1'b1&&WrEn!=1'b1) begin
            pmem_read(Addr, data[63:0]);
            pmem_read(Addr+64'd8, data[127:64]);
            data=data>>shift;
        end
        else
            data=128'd0;

        if(WrEn==1'b1) begin
            pmem_write(Addr, data[63:0], extmask[7:0]);
            pmem_write(Addr+64'd8, data[127:64], extmask[15:8]);
        end
        
    end

    // always @(posedge clk) begin
        
    //     if(RdEn==1'b1&&WrEn!=1'b1) begin
    //         pmem_read(Addr, data[63:0]);
    //         pmem_read(Addr+64'd8, data[127:64]);
    //         data=data>>shift;
    //     end
    //     else
    //         data=128'd0;

    //     if(WrEn==1'b1) begin
    //         pmem_write(Addr, data[63:0], extmask[7:0]);
    //         pmem_write(Addr+64'd8, data[127:64], extmask[15:8]);
    //     end

    // end

    MuxKeyInternal #(4,2,64, 1) sext (.out(DataOut),.key(MemOP[1:0]),.default_out(64'd0),.lut({
        2'd0,data[63:0],
        2'd1,(isSign==1'b1)?({{32{data[31]}},data[31:0]}):{32'd0,data[31:0]},
        2'd2,(isSign==1'b1)?({{48{data[15]}},data[15:0]}):{48'd0,data[15:0]},
        2'd3,(isSign==1'b1)?({{56{data[7]}},data[7:0]}):{56'd0,data[7:0]}
    }));

endmodule
