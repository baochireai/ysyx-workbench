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
    output reg req_ready,
//cache <--> ifu
    input ifu_allowin,
    output [`INSTWide-1:0] inst_o,
    output inst_valid,
//cache <--> data array
    input [127:0] din_way0;    
    input [127:0] din_way1;
    
    output [6:0] line_index;//line_index[6] for cascade chip select

    output cen_way0;//read / write clock enable
    output cen_way1;
    output data_wen;
    output [127:0] wdata_cache;
    //output [127:0] wstrb_cache;

//cache <--> axi_interface
    output axi_rd_req,//every read transisaction is cache line
    output [31:0] axi_rd_addr,
    input axi_rd_ready,
    input axi_rvalid,
    input axi_rlast,
    input [1:0] axi_rresp,
    input [63:0] axi_rata
);

    //{tag,valid}
    reg [20:0] tags_way0[127:0];
    reg [20:0] tags_way1[127:0];

    reg [127:0] line_valid_way0;
    reg [127:0] line_valid_way1;
    //最近使用记录 用于选待替换cache line
    reg [127:0] recently_used_way;

    wire [20:0] tag_i=addr[31:7];
    wire [6:0] index_i=addr[10:4];

    //tag compare
    wire hit_way0=(tags_way0[index_i]==tag_i)&&line_valid_way0[index_i];
    wire hit_way1=(tags_way1[index_i]==tag_i)&&line_valid_way1[index_i];

    wire miss_hit=~(hit_way0||hit_way1);
    wire cache_hit=hit_way0||hit_way1;
    //req buffer(data array has one cycle latency && is used when cache miss)
    reg [31:0] addr_r;
    reg hit_way0_r,hit_way1_r;

    Reg #(`MemAddrBus, 32'd0) req_addr_buffer(.clk(clk),.rst(rst),.din(addr),.dout(addr_r),.wen(rd_req&&req_ready));
    Reg #(1, 1'd0) req_hit0_buffer(.clk(clk),.rst(rst),.din(hit_way0),.dout(hit_way0_r),.wen(rd_req&&req_ready));
    Reg #(1, 1'd0) req_hit1_buffer(.clk(clk),.rst(rst),.din(hit_way1),.dout(hit_way1_r),.wen(rd_req&&req_ready));

    wire index_r=addr_r[10:4];
    wire tag_r=addr_r[31:20];
    wire offset_r=addr_r[3:0];

    //FSM: IDEL READ MISS

    parameter S_IDEL=2'b00,S_READ=2'b01,S_MISS=2'b10;

    reg [1:0] cur_state,next_state;

    always @(clk) begin
        if(rst) begin
            cur_state<=S_IDEL;   
        end
            cur_state<=next_state;
    end

    always @(*) begin
        case (cur_state)
            S_IDEL:
                if(cache_hit&&rd_req)
                    next_state<=S_READ;
                else if(rd_req&&cache_miss)
                    next_state<=S_MISS;
                else next_state<=S_IDEL;
            S_READ:
                if(cache_hit&&rd_req)
                    next_state<=S_READ;
                else if(cache_miss&&rd_req)
                    next_state<=S_MISS;
                else next_state<=S_IDEL;
            S_MISS:
                if(axi_rvalid&&axi_rlast) begin
                    next_state<=S_IDEL;
                end 
                else next_state<=S_MISS;
            default:
                next_state<=S_IDEL;
        endcase
    end

    assign axi_rd_addr=addr_r&32'hffff_fff0;
    
    always @(clk) begin
        if(rst) begin
            axi_rd_req<=1'b0;
        end
        else if(cur_state!=S_MISS&&next_state==S_MISS) begin
            axi_rd_req<=1'b1;
        end
        else if(axi_rd_req&&axi_rd_ready) begin
            axi_rd_req<=1'b0;
        end
        else
            axi_rd_req<=axi_rd_req;
    end

    reg [127:0] mrdata;

    reg [1:0] burst_count;

    always @(clk) begin
        if(rst||axi_rd_req&&axi_rd_ready) begin
            burst_count<=2'd0;
            mrdata<=128'd0;
        end
        else if((cur_state==S_MISS)&&(axi_rvalid)) begin
            burst_count<=burst_count+1;
            mrdata[(burst_count+1)*64-1:burst_count*64]=axi_rata;
        end
    end

    always @(clk) begin
        if(rst) begin
            for(int i=0;i<128;i=i+1) begin
                tags_way0[i]<=21'd0;
                tags_way1[i]<=21'd0;
                line_valid_way0[i]<=1'b0;
                line_valid_way1[i]<=1'b0;
            end
        end
        else if(cur_state==S_MISS&&axi_rvalid&&axi_rlast) begin
            tags_way0[index_r]<=tag_r;
            line_valid_way0[index_r]<=1'b1;
        end
    end

    always @(clk) begin
        if(rst) begin
            for(int i=0;i<128;i=i+1) recently_used_way[i]<=1'b0;
        end
        else if(cur_state==S_READ) begin
            recently_used_way[index_r]<=hit_way1_r;
        end
        else if(cur_state==S_MISS&&axi_rvalid&&axi_rlast) begin
            recently_used_way[index_r]<=refill_waynum;
        end
    end

    assign req_ready=~(cur_state==S_MISS);
    
    wire [127:0] cache_rdata={128{hit_way0_r}}&din_way0|{128{hit_way1_r}}&din_way1;

    wire [127:0] rdata={128{(cur_state==S_READ)}}&cache_rdata|{128{cur_state==S_MISS}}&mrdata;

    assign inst_o={32{offset_r[3:2]==2'b00}}&rdata[31:0]|{32{offset_r[3:2]==2'b01}}&rdata[63:32]|
                        {32{offset_r[3:2]==2'b10}}&rdata[95:64]|{32{offset_r[3:2]==2'b01}}&rdata[127:96];
    
    assign inst_valid=(stage==S_READ)||(stage==S_MISS&&axi_rvalid&&axi_rlast);

    wire refill_waynum;//0:way0 1:way1
    assign refill_waynum=~(line_valid_way0[index_r]&&line_valid_way1[index_r])?line_valid_way1[index_r]:(~recently_used_way[index_r]);

    assign cen_way0=(state==S_MISS)?(axi_rvalid&&axi_rlast&&(~refill_waynum)):rd_req;
    assign cen_way1=(state==S_MISS)?(axi_rvalid&&axi_rlast&&refill_waynum):rd_req;

    assign line_index=(state==S_MISS)?index_r:index_i;

    assign data_wen=(state==S_MISS)&&(axi_rvalid&&axi_rlast);

    assign wdata_cache=mrdata;


endmodule