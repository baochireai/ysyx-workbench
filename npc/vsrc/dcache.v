module decache(
    input clk,rst,
    // cpu(exu) <--> decache
    input req,
    input op,//0:read 1:write
    input [63:0] addr,
    input [1:0] size, //1,2,4,8
    input [7:0] wstrb,
    input [63:0] wdata,
    output req_ready,
    
    //decache <--> cpu(lsu)
    output [63:0] cache_data_o,
    output rvalid,
    //input lsu_allowin,//lsu can add one skid buffer(with valid signal), when lus is stalled cache_data_o can be store in buffer,and then the next cycle exu is stalled
    
    //decache <--> axi interface (read)
    output axi_rd_req,
    output [63:0] axi_rd_addr,
    output [2:0] axi_rd_type,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    input axi_rd_ready,
    input [63:0] axi_rdata,
    input axi_rlast,
    input axi_rvalid,

    //decache <--> sram(data array)
    output axi_wr_req,
    output [63:0] axi_wr_addr,
    output [127:0] axi_wdata,
    output [2:0] axi_wr_type,
    output [7:0] axi_wstrb,
    input axi_wr_ready
    //decaceh <--> data array(ram)
    input [127:0] din_way0;    
    input [127:0] din_way1;
    
    output [6:0] line_index;//line_index[6] for cascade chip select

    output cen_way0;//read / write clock enable
    output cen_way1;
    output data_wen;
    output [127:0] wdata_cache;
);

    //{tag,valid,dirty}
    reg [20:0] tags_way0[127:0];
    reg [20:0] tags_way1[127:0];

    reg [127:0] line_valid_way0;
    reg [127:0] line_valid_way1;

    reg [127:0] dirty_way0;
    reg [127:0] dirty_way1;
    //最近使用记录 用于选待替换cache line
    reg [127:0] recently_used_way;

    wire [20:0] tag_i=addr[31:7]
    wire [6:0] index_i=addr[10:4];

    //tag compare
    wire hit_way0=(tags_way0[index_i]==tag_i)&&line_valid_way0[index_i];
    wire hit_way1=(tags_way1[index_i]==tag_i)&&line_valid_way1[index_i];

    wire miss_hit=~(hit_way0||hit_way1);
    wire cache_hit=hit_way0||hit_way1;

    //uncache check
    wire uncache=(addr<'MEM_ADDR_START)&&(~(addr>=FLASH_ADDR_START&&addr<=FLASH_ADDR_END));

    //require buffer
    wire [31:0] addr_r;
    wire hit_way0_r,hit_way1_r,op_r;
    wire uncache_r;
    wire [63:0] wdata_r;
    wire [7:0] wstrb_r;

    Reg #(32, 32'd0) req_addr_buffer(.clk(clk),.rst(rst),.din(addr[31:0]),.dout(addr_r),.wen(rd_req&&req_ready));
    Reg #(1, 1'd0) req_hit0_buffer(.clk(clk),.rst(rst),.din(hit_way0),.dout(hit_way0_r),.wen(rd_req&&req_ready));
    Reg #(1, 1'd0) req_hit1_buffer(.clk(clk),.rst(rst),.din(hit_way1),.dout(hit_way1_r),.wen(rd_req&&req_ready));    
    Reg #(1, 1'd0) req_op_buffer(.clk(clk),.rst(rst),.din(op),.dout(op_r),.wen(rd_req&&req_ready));
    Reg #(1,1'd0) uncache_reg(.clk(clk),.rst(rst),.din(uncache),.dout(uncache_r),.wen(rd_req&&req_ready));
    Reg #(64,64'd0) wdata_reg(.clk(clk),.rst(rst),.din(wdata),.dout(wdata_r),.wen(rd_req&&req_ready));
    Reg #(8,8'd0) wstrb_reg(.clk(clk),.rst(rst),.din(wstrb),.dout(wstrb_r),.wen(rd_req&&req_ready));

    //write buffer
    wire wr_buffer_wen=cur_state==S_LOOKUP&&op_r;
    wire [63:0] din_way0_r,din_way1_r;
    Reg #(64,64'd0) din0_reg(.clk(clk),.rst(rst),.din(din_way0),.dout(din_way0_r),.wen(wr_buffer_wen));
    Reg #(64,64'd0) din1_reg(.clk(clk),.rst(rst),.din(din_way1),.dout(din_way1_r),.wen(wr_buffer_wen));

    wire index_r=addr_r[10:4];
    wire tag_r=addr_r[31:20];
    wire offset_r=addr_r[3:0];

    wire raw=(index_i[5:0]==index_r[5:0])&&op_r&&(hit_way1&&hit_way1_r||hit_way0&&hit_way0_r); //the same bank and way

    wire refill_waynum=~(line_valid_way0[index_r]&&line_valid_way1[index_r])?line_valid_way1[index_r]:(~recently_used_way[index_r]);;
    wire refill_dirty=(~refill_waynum)&&dirty_way0[index_r] || refill_waynum&&dirty_way1[index_r];

    parameter S_IDEL,S_LOOKUP,S_MISS,S_REPLACE,S_REFILL;
    /*
    S_LOOKUP:write/read cache hit
    S_MISS:wait axi_wready and check cacheline(to be refilled) dirty,if dirty then give write req
    S_REPLACE: gei axi read req and write axi_arready
    S_REFILL: wait axi_data and refill cache data array
    */
    reg [2:0] cur_state,next_state;

    always @(posedge clk) begin
        if(rst) begin
            cur_state<=S_IDEL;
        end
        else cur_state<=next_state;
    end    

    always @(*) begin
        case (cur_state)
            S_IDEL:
                if(req) begin
                    if(cache_hit) next_state <= S_LOOKUP;
                    else next_state<=S_MISS;
                end
                    next_state<=S_IDEL;
            S_LOOKUP:
                if(req) begin
                    if(raw)
                        next_state<=S_IDEL;
                    else if(cache_hit) next_state<=S_LOOKUP;
                    else next_state<=S_MISS;
                end
                else next_state<=S_IDEL;
            S_MISS://对于uncache写操作，要空走一圈状态(存在气泡)
                if(axi_wr_ready) begin
                    next_state<=S_REPLACE;
                end
                else next_state<=S_MISS;
            S_REPLACE:
                if(axi_rd_ready) begin
                    next_state<=S_REFILL;
                end
                else next_state<=S_REPLACE;
            S_REFILL:
                if(axi_rvalid&&axi_rlast) next_state<=S_IDEL;
                else next_state<=S_REFILL;
            default: 
                next_state<=S_IDEL;
        endcase
    end

    reg [127:0] mrdata;
    //axi read transaction
    assign axi_rd_addr=uncache?addr_r:addr_r&32'hffff_fff0;
    
    assign axi_rd_type=uncache{1'b0,size}:3'd4;

    always @(posedge clk) begin
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

    always @(posedge clk) begin
        if(rst||axi_rd_req&&axi_rd_ready) begin
            burst_count<=2'd0;
            mrdata<=128'd0;
        end
        else if((cur_state==S_REFILL)&&(axi_rvalid)) begin
            burst_count<=burst_count+1;
            mrdata[(burst_count+1)*64-1:burst_count*64]<=axi_rata;
        end
    end

    //axi write transaction
/*
    output axi_wr_req,
    output [63:0] axi_wr_addr,
    output [127:0] axi_wdata,
    output [2:0] axi_wr_type,
    output [7:0] axi_wstrb,
*/

    always @(posedge clk) begin
        if(rst) begin
            axi_wr_req<=1'b0;
        end
        else if(cur_state!=S_MISS&&next_state==S_MISS) begin
            axi_wr_req<=uncache_r?op_r:refill_dirty;
        end
        else if(axi_wr_req&&cur_state==S_MISS&&axi_wr_ready) begin
            axi_wr_req<=1'b0;
        end
        else
            axi_wr_req<=axi_wr_req;
    end

    assign axi_wr_addr = axi_rd_addr;

    assign axi_wr_type = uncache ? size : 3'd4;

    assign axi_wstrb = uncache ? (wstrb_r<<offset_r[2:0]) : 8'hff;

    assign axi_wdata=uncache ? {64'd0,wdata_r<<(offset_r[2:0]*8)} : (refill_waynum?din_way0_r:din_way1_r);//data array ram输出只保持一个周期

    assign req_ready=(cur_state==S_IDEL)||(cur_state==S_LOOKUP&&(~raw));

    wire [127:0] hit_data={64{cur_state==S_LOOKUP}}&{128{hit_way0_r}}&din_way0|{128{hit_way1_r}&din_way1};
    
    wire [127:0] rdata=cur_state==S_LOOKUP?din_way0:mrdata;

    assign cache_data_o=&hit_data|{64{cur_state==S_REFILL&&axi_rvalid&&axi_rlast}}&mrdata;

    assign cache_data_o=uncache?{64{cur_state==S_REFILL&&axi_rvalid&&axi_rlast}}&mrdata[63:0]:

                        
    assign rvalid = ((cur_state==S_LOOKUP)||(cur_state==S_REFILL&&axi_rvalid&&axi_rlast)) &&(~op_r);




endmodule