/*
Cache 规格
- data array大小：4K
- tag array大小：21bit(tag),7bits(index),4bit(offset)
- 一个块的tag和标志位大小：
- 一个块的data大小：128bit
- 相联度：2
- 块总数：256（128*2way）
*/
module icache(
    input clk,
    input rst,
//pre-if <--> cache
    input ['MemAddrBus-1:0] addr,
    input rd_req,
    output req_ready,
//cache <--> ifu
    input ifu_allowin,
    output [`INSTWide-1:0] inst,
    output inst_valid,
//cache <--> data array
    input [127:0] din_way0;    
    input [127:0] din_way1;
    
    output [6:0] line_index;//line_index[6] for cascade chip select
    output cen_way0;
    output cen_way1;
    output [127:0] wdata_cache;
    output [127:0] wstrb_cache;

//cache <--> axi_interface
    output axi_rd_req,//every read transisaction is cache line
    output [31:0] axi_rd_addr,
    input axi_rvalid,
    input axi_rlast,
    input [1:0] axi_rresp,
    input [63:0] axi_rata
);






endmodule