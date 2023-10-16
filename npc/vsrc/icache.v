/*
Cache 规格
- data array大小：4K
- tag array大小：21bit(tag),7bits(index),4bit(offset)
- 一个块的tag和标志位大小：
- 一个块的data大小：128bit
- 相联度：2
- 块总数：256（128*2way）
*/

module TagV_Regs #(
    WIDTH=22,
    DEPTH=128
)(
    input      clk,
    input      rst,
    input                         i_wen  ,
    input       [6:0]           i_raddr , // 7 bit, 128 depth.
    input       [6:0]             i_waddr,
    input       [WIDTH-1:0]  i_din  ,
    output      [WIDTH-1:0]  o_dout
);

    wire [WIDTH-1:0] tagv [DEPTH-1:0];
    wire [DEPTH-1:0] wen;
    genvar i;
    generate for(i = 0 ; i < 128; i = i + 1) begin : tagv_Reg_gen
        assign wen[i] = (i==i_waddr) && i_wen;
        Reg #(`TAG_V_D_WIDTH-1, 0) tag_regs(
            .clk(clk),
            .rst(rst),
            .din(i_din),
            .dout(tagv[i]),
            .wen(wen[i])
        );        
    end
    endgenerate
    
    assign o_dout = tagv[i_raddr];

endmodule 

module icache(
    input clk,
    input rst,
    // 1. pre-if <--> cache
    input [`MemAddrBus-1:0] addr,
    input                   cache_req,
    output reg              req_ready,
    // 2. cache <--> ifu
    output [63:0]           cache_rdata,
    output                  cache_valid,

    // 3. icache <--> axi interface (read)
    output          axi_rd_req,
    output [31:0]   axi_rd_addr,
    output [2:0]    axi_rd_type,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    input           axi_rd_ready,
    input [63:0]    axi_rdata,
    input           axi_rlast,
    input           axi_rvalid,
    
    //icache <--> data array(ram) ram0 ram1 ->way0 | ram2 ram3 ->way1
  	output [5:0]    io_sram0_addr ,
  	output          io_sram0_cen  ,
  	output          io_sram0_wen  ,
  	output [127:0]  io_sram0_wmask,
  	output [127:0]  io_sram0_wdata,
  	input  [127:0]  io_sram0_rdata,

  	output [5:0]    io_sram1_addr ,
  	output          io_sram1_cen  ,
  	output          io_sram1_wen  ,
  	output [127:0]  io_sram1_wmask,
  	output [127:0]  io_sram1_wdata,
  	input  [127:0]  io_sram1_rdata,

  	output [5:0]    io_sram2_addr ,
  	output          io_sram2_cen  ,
  	output          io_sram2_wen  ,
  	output [127:0]  io_sram2_wmask,
  	output [127:0]  io_sram2_wdata,
  	input  [127:0]  io_sram2_rdata,

  	output [5:0]    io_sram3_addr ,
  	output          io_sram3_cen  ,
  	output          io_sram3_wen  ,
  	output [127:0]  io_sram3_wmask,
  	output [127:0]  io_sram3_wdata,
  	input  [127:0]  io_sram3_rdata,

    output          cache_hit_cnt,
    output          cache_req_cnt
);

    assign cache_hit_cnt = req_buffer_we&&cache_hit;
    assign cache_req_cnt = req_buffer_we;
    
    //{tag,valid}
    wire [1:0] tagv_wen ;
    wire [`TAG_V_D_WIDTH-2:0] tagv_wdata;
    reg [`TAG_V_D_WIDTH-2:0] tagv_rdata [1:0];

    genvar i;
    generate for(i = 0 ; i < 2; i = i + 1) begin : tag_regs_gen
        TagV_Regs tagv_regs(
            .clk(clk),
            .rst(rst),
            .i_wen(tagv_wen[i]),
            .i_waddr(index_r),
            .i_din (tagv_wdata),            
            .i_raddr(index_i), // 7 bit, 128 depth.
            .o_dout(tagv_rdata[i])
        );
    end
    endgenerate

    wire line_valid_way0 = tagv_rdata[0][0];
    wire line_valid_way1 = tagv_rdata[1][0];

    wire [20:0] tags_way0 = tagv_rdata[0][21:1];
    wire [20:0] tags_way1 = tagv_rdata[1][21:1];

    //最近使用记录 用于选待替换cache line
    reg [127:0] recently_used_wens,recently_used_way;
    wire recently_used_wen;
    wire curent_way;

    generate for(i = 0 ; i < 128; i = i + 1) begin : recently_used_regs_gen
        assign recently_used_wens[i] = (i==index_i) && recently_used_wen;
        Reg #(1, 0) recently_used_reg(
            .clk(clk),
            .rst(rst),
            .din(curent_way),
            .dout(recently_used_way[i]),
            .wen(recently_used_wens[i])
        );          
    end
    endgenerate

    wire [20:0] tag_i=addr[31:11];
    wire [6:0] index_i=addr[10:4];

    //tag compare
    wire hit_way0=(tags_way0==tag_i)&&line_valid_way0;
    wire hit_way1=(tags_way1==tag_i)&&line_valid_way1;

    wire cache_miss = ~(hit_way0||hit_way1);
    wire cache_hit=hit_way0||hit_way1;

    //refill way choose

    wire refill_waynum = ~(line_valid_way0&&line_valid_way1)?line_valid_way0:(~recently_used_way[index_i]);

    //req buffer(data array has one cycle latency && is used when cache miss)
    reg [31:0] addr_r;
    reg hit_way0_r,hit_way1_r;
    reg refill_waynum_r;

    wire req_buffer_we = cache_req && req_ready;

    Reg #(`MemAddrBus, 32'd0) req_addr_buffer(.clk(clk),.rst(rst),.din(addr),.dout(addr_r),.wen(req_buffer_we));
    Reg #(1, 1'd0) req_hit0_buffer(.clk(clk),.rst(rst),.din(hit_way0),.dout(hit_way0_r),.wen(req_buffer_we));
    Reg #(1, 1'd0) req_hit1_buffer(.clk(clk),.rst(rst),.din(hit_way1),.dout(hit_way1_r),.wen(req_buffer_we));
    Reg #(1,0) refill_waynum_reg(.clk(clk),.rst(rst),.din(refill_waynum),.dout(refill_waynum_r),.wen(req_buffer_we));

    wire [6:0] index_r=addr_r[10:4];
    wire [20:0] tag_r=addr_r[31:11];
    wire [3:0] offset_r=addr_r[3:0];

    //FSM: IDEL READ MISS

    localparam [2:0] S_IDEL=3'b000,S_READ=3'b001,S_MISS=3'b010,S_DATA=3'b011,S_REFILL=3'b100;

    reg [2:0] cur_state,next_state;

    always @(posedge clk) begin
        if(rst) begin
            cur_state<=S_IDEL;   
        end
        else
            cur_state<=next_state;
    end

    always @(*) begin
        case (cur_state)
            S_IDEL:
                if(cache_hit&&cache_req)
                    next_state=S_READ;
                else if(cache_req&&cache_miss)
                    next_state=S_MISS;
                else next_state=S_IDEL;
            S_READ:
                if(cache_hit&&cache_req)
                    next_state = S_READ;
                else if(cache_miss&&cache_req)
                    next_state = S_MISS;
                else next_state = S_IDEL;
            S_MISS:
                if(axi_rd_ready) begin
                    next_state = S_DATA;
                end 
                else next_state = S_MISS;
            S_DATA:
                if(axi_rvalid&&axi_rlast) begin
                    next_state = S_REFILL;
                end
                else next_state = S_DATA;
            S_REFILL:
                next_state = S_IDEL ;   
            default:
                next_state = S_IDEL;
        endcase
    end
    //axi read transaction
    assign axi_rd_addr = addr_r & 32'hffff_fff0;
    assign axi_rd_type = 3'd4; //16bytes、
    assign axi_rd_req = (cur_state == S_MISS);

    reg [127:0] mrdata;

    reg [1:0] burst_count;

    always @(posedge clk) begin
        if(rst||axi_rd_req&&axi_rd_ready) begin
            burst_count<=2'd0;
            mrdata<=128'd0;
        end
        else if((cur_state==S_DATA)&&(axi_rvalid)) begin
            burst_count<=burst_count+1;
            mrdata[burst_count*64+:64] <= axi_rdata;
        end
    end

    //rdata && cache_valid    
    wire hit_rvalid = cur_state == S_READ;
    wire [127:0] hit_data = {128{hit_way0_r}} & din_way0 | {128{hit_way1_r}} & din_way1 ;
    wire [63:0] hit_rdata = {64{offset_r[3]}} & hit_data[127:64] | {64{~offset_r[3]}} & hit_data[63:0];

    wire miss_rvalid = (cur_state==S_REFILL) ;
    wire [63:0] miss_rdata = {64{offset_r[3]}} & mrdata[127:64] | ({64{~offset_r[3]}} & mrdata[63:0]); // 8字节对齐返回数据

    assign cache_rdata = {64{hit_rvalid}} & hit_rdata | {64{miss_rvalid}} & miss_rdata ;
    assign cache_valid = hit_rvalid | miss_rvalid;

    //cache ready
    assign req_ready = (cur_state==S_IDEL) | (cur_state==S_READ);    

    //tagv rw
    wire miss_tagv_wen = (cur_state==S_REFILL) ;
    assign tagv_wdata = {tag_r,1'b1};
    assign tagv_wen[0] = miss_tagv_wen && (~refill_waynum_r);
    assign tagv_wen[1] = miss_tagv_wen && refill_waynum_r;
    
    //recently_used_way write
    assign recently_used_wen = cache_req && req_ready;
    assign curent_way = cache_hit & hit_way1 | cache_miss & refill_waynum;
    
    //data array write(cache read miss write)
    
    wire [127:0] darray_wdata = mrdata ;

    wire [127:0] darray_wstrb = 128'hffff_ffff_ffff_ffff_ffff_ffff_ffff_ffff;

    wire darray_wen = (cur_state == S_REFILL);
    
    wire darray_wwaynum = refill_waynum_r ;

    wire [5:0] darray_waddr = index_r[5:0];  

    wire [3:0] io_sram_wcs;

    MuxKeyInternal #(4,2,4, 1) darray_sram_wenMux (.out(io_sram_wcs),.key({darray_wwaynum,index_r[6]}),.default_out(4'd0),.lut({
        2'b00,4'b0001,
        2'b01,4'b0010,
        2'b10,4'b0100,
        2'b11,4'b1000
    }));

    wire [3:0] io_sram_wcen = io_sram_wcs & {4{darray_wen}};

    //data array read
    wire darray_ren = cache_req && req_ready;

    wire [5:0] darray_raddr = index_i[5:0];  

    wire [3:0] io_sram_rcs = {index_i[6],~index_i[6],index_i[6],~index_i[6]} ;

    wire [3:0] io_sram_rce = {4{darray_ren}} & io_sram_rcs;

    assign io_sram0_addr = io_sram_wcen[0] ?  darray_waddr : darray_raddr;
    assign io_sram0_cen = io_sram_wcen [0] | io_sram_rce[0];
    assign io_sram0_wen = io_sram_wcen [0];
    assign io_sram0_wmask = darray_wstrb ;
    assign io_sram0_wdata = darray_wdata ;

    assign io_sram1_addr = io_sram_wcen[1] ?  darray_waddr : darray_raddr;
    assign io_sram1_cen = io_sram_wcen [1] | io_sram_rce[1];
    assign io_sram1_wen = io_sram_wcen [1];
    assign io_sram1_wmask = darray_wstrb ;
    assign io_sram1_wdata = darray_wdata ;

    assign io_sram2_addr = io_sram_wcen[2] ?  darray_waddr : darray_raddr;
    assign io_sram2_cen = io_sram_wcen [2] | io_sram_rce[2];
    assign io_sram2_wen = io_sram_wcen [2];
    assign io_sram2_wmask = darray_wstrb ;
    assign io_sram2_wdata = darray_wdata ;

    assign io_sram3_addr = io_sram_wcen[3] ?  darray_waddr : darray_raddr;
    assign io_sram3_cen = io_sram_wcen [3] | io_sram_rce[3];
    assign io_sram3_wen = io_sram_wcen [3];
    assign io_sram3_wmask = darray_wstrb ;
    assign io_sram3_wdata = darray_wdata ;


    wire [127:0] din_way0 = index_r[6] ? io_sram1_rdata : io_sram0_rdata;
    wire [127:0] din_way1 = index_r[6] ? io_sram3_rdata : io_sram2_rdata;
   
endmodule