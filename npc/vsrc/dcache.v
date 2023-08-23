module TagVD_Regs #(
    WIDTH=23,
    DEPTH=128
)(
    input      clk,
    input      rst,
    input                         i_wen  ,
    input       [  6:0]           i_raddr , // 7 bit, 128 depth.
    input       [6:0]             i_waddr,
    input       [WIDTH-1:0]  i_din  ,
    output      [WIDTH-1:0]  o_dout
);

    wire [WIDTH-1:0] tagvd [DEPTH-1:0];
    wire [DEPTH-1:0] wen;
    genvar i;
    generate for(i = 0 ; i < 128; i = i + 1) begin : TagVD_Reg_gen
        assign wen[i] = (i==i_waddr) && i_wen;
        Reg #(`TAG_V_D_WIDTH, 0) tag_regs(
            .clk(clk),
            .rst(rst),
            .din(i_din),
            .dout(tagvd[i]),
            .wen(wen[i])
        );        
    end
    endgenerate
    
    assign o_dout = tagvd[i_raddr];

endmodule //TagVD_Regs

module decache(
    input clk,rst,
    // cpu(exu) <--> decache
    input req,
    input op,//0:read 1:write
    input [`MemAddrBus:0] addr,
    input [1:0] size, //1,2,4,8
    input [7:0] wstrb,
    input [63:0] wdata,
    output req_ready,
    
    //decache <--> cpu(lsu)
    output [63:0] cache_data_o,
    output cache_valid,
    //input lsu_allowin,//lsu can add one skid buffer(with valid signal), when lus is stalled cache_data_o can be store in buffer,and then the next cycle exu is stalled
    
    //decache <--> axi interface (read)
    output axi_rd_req,
    output [63:0] axi_rd_addr,
    output [2:0] axi_rd_type,//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    input axi_rd_ready,
    input [63:0] axi_rdata,
    input axi_rlast,
    input axi_rvalid,

    //decache <--> axi interface (write)
    output axi_wr_req,
    output [63:0] axi_wr_addr,
    output [127:0] axi_wdata,
    output [2:0] axi_wr_type,
    output [7:0] axi_wstrb,//only uncache
    input axi_wr_ready,
    
    //decaceh <--> data array(ram)
  	output [5:0] io_sram0_addr,//ram0 ram1 ->way0 | ram2 ram3 ->way1
  	output io_sram0_cen,
  	output io_sram0_wen,
  	output [127:0] io_sram0_wmask,
  	output [127:0] io_sram0_wdata,
  	input [127:0] io_sram0_rdata,

  	output [5:0] io_sram1_addr,
  	output io_sram1_cen,
  	output io_sram1_wen,
  	output [127:0] io_sram1_wmask,
  	output [127:0] io_sram1_wdata,
  	input [127:0] io_sram1_rdata,

  	output [5:0] io_sram2_addr,
  	output io_sram2_cen,
  	output io_sram2_wen,
  	output [127:0] io_sram2_wmask,
  	output [127:0] io_sram2_wdata,
  	input [127:0] io_sram2_rdata,

  	output [5:0] io_sram3_addr,
  	output io_sram3_cen,
  	output io_sram3_wen,
  	output [127:0] io_sram3_wmask,
  	output [127:0] io_sram3_wdata,
  	input [127:0] io_sram3_rdata    
);
    
    wire tagvd_wen [1:0];
    wire tagvd_wdata [`TAG_V_D_WIDTH-1:0];
    reg [`TAG_V_D_WIDTH-1:0] tagvd_rdata [1:0];

    genvar i;
    generate for(i = 0 ; i < 2; i = i + 1) begin : tag_regs_gen
        TagVD_Regs tagvd_regs(
            .clk(clk),
            .rst(rst),
            .i_wen(tagvd_wen[i]),
            .i_waddr(index_r),
            .i_din (tagvd_wdata),            
            .i_raddr(index_i), // 7 bit, 128 depth.
            .o_dout(tagvd_rdata[i])
        );
    end
    endgenerate

    wire line_valid_way0=tagvd_rdata[0][`VALID_BIT];
    wire line_valid_way1=tagvd_rdata[0][`VALID_BIT];

    wire dirty_way0=tagvd_rdata[0][`DIRTY_BIT];
    wire dirty_way1=tagvd_rdata[1][`DIRTY_BIT];

    //最近使用记录 用于选待替换cache line
    reg [127:0] recently_used_wens;
    wire recently_used_wen;
    wire curent_way;
    genvar i;
    generate for(i = 0 ; i < 128; i = i + 1) begin : recently_used_regs_gen
        assign recently_used_wen[i] = (i==index_i) && recently_used_wen;
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
    wire hit_way0=(tagvd_rdata[0][`TAG_BITS]==tag_i)&&line_valid_way0;
    wire hit_way1=(tagvd_rdata[1][`TAG_BITS]==tag_i)&&line_valid_way1;

    wire miss_hit=~(hit_way0||hit_way1);
    wire cache_hit=hit_way0||hit_way1;

    //uncache check
    wire uncache=( addr[31] != 1'b1 );

    wire refill_waynum=~(line_valid_way0&&line_valid_way1)?line_valid_way0:(~recently_used_way[index_i]);
    wire refill_dirty=(~refill_waynum)&&dirty_way0&&line_valid_way0 || refill_waynum&&dirty_way1&&line_valid_way1;

    //require buffer
    wire [31:0] addr_r;
    wire hit_way0_r,hit_way1_r,op_r;
    wire uncache_r;//没必要放req buffer中 addr_r[31]判断
    wire [63:0] wdata_r;
    wire [7:0] wstrb_r;
    wire refill_waynum_r,refill_dirty_r;
    wire req_buffer_we=req&&req_ready;

    Reg #(32, 32'd0) req_addr_buffer(.clk(clk),.rst(rst),.din(addr),.dout(addr_r),.wen(req_buffer_we));
    Reg #(1, 1'd0) req_hit0_buffer(.clk(clk),.rst(rst),.din(hit_way0),.dout(hit_way0_r),.wen(req_buffer_we));
    Reg #(1, 1'd0) req_hit1_buffer(.clk(clk),.rst(rst),.din(hit_way1),.dout(hit_way1_r),.wen(req_buffer_we));    
    Reg #(1, 1'd0) req_op_buffer(.clk(clk),.rst(rst),.din(op),.dout(op_r),.wen(req_buffer_we));
    Reg #(1,1'd0) uncache_reg(.clk(clk),.rst(rst),.din(uncache),.dout(uncache_r),.wen(req_buffer_we));
    Reg #(64,64'd0) wdata_reg(.clk(clk),.rst(rst),.din(wdata),.dout(wdata_r),.wen(req_buffer_we));
    Reg #(8,8'd0) wstrb_reg(.clk(clk),.rst(rst),.din(wstrb),.dout(wstrb_r),.wen(req_buffer_we));
    
    //miss buffer
    Reg #(1,0) refill_waynum_reg(.clk(clk),.rst(rst),.din(refill_waynum),.dout(refill_waynum_r),.wen(req_buffer_we));
    Reg #(1,0) refill_dirty_r_reg(.clk(clk),.rst(rst),.din(refill_dirty),.dout(refill_dirty_r),.wen(req_buffer_we));

    wire index_r=addr_r[10:4];
    wire tag_r=addr_r[31:11];
    wire offset_r=addr_r[3:0];

    wire raw=(index_i[6]==index_r[6])&&op_r&&(cur_state==S_LOOKUP); //the same bank(ignore waynum)
    //&&(hit_way1&&hit_way1_r||hit_way0&&hit_way0_r || miss_hit && refill_dirty && (refill_waynum&&hit_way1_r || (~refill_waynum&&hit_way0_r)));
    parameter S_IDEL=3'd0,S_LOOKUP=3'd1,S_MISS=3'd2,S_REPLACE=3'd3,S_REFILL=3'd4;
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
            S_MISS:
                if(axi_wr_ready) begin
                    if(uncache_r && op_r)   next_state <= S_IDEL;
                    else next_state<=S_REPLACE;
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

   //axi write transaction
/*
    output axi_wr_req,
    output [63:0] axi_wr_addr,
    output [127:0] axi_wdata,
    output [2:0] axi_wr_type,
    output [7:0] axi_wstrb,
*/

    assign axi_wr_req = (cur_state==S_MISS) && (uncache_r && op_r || (~uncache_r) && refill_dirty_r);

    assign axi_wr_addr = uncache_r? addr_r:addr_r&32'hffff_fff0;

    assign axi_wr_type = uncache_r? {1'b0,size} : 3'd4;

    assign axi_wstrb = {8{uncache_r}} && (wstrb_r<<offset_r[2:0]);

    assign axi_wdata = uncache_r ? {64'd0,wdata_r<<{offset_r[2:0],3'd0}} : (refill_waynum_r ? din_way0:din_way1);

    //axi read transaction

    assign axi_rd_addr = uncache_r? addr_r:addr_r&32'hffff_fff0;
    
    assign axi_rd_type = uncache_r ? {1'b0,size} : 3'd4;

    assign axi_rd_req = (cur_state==S_REPLACE) && ( uncache_r && (~op_r) || (~uncache_r) );

    reg [127:0] mrdata_align;

    reg [1:0] burst_count;

    always @(posedge clk) begin
        if(rst||axi_rd_req&&axi_rd_ready) begin
            burst_count<=2'd0;
            mrdata_align<=128'd0;
        end
        else if((cur_state==S_REFILL)&&(axi_rvalid)) begin//uncache  && cache miss
            burst_count<=burst_count+1;
            //when uncache,mrdata[63:0] is valid.while Cache miss,mrdata[127:0] is valid. 
            mrdata_align[(burst_count+1)*64-1:burst_count*64] <= axi_rata;
        end
    end

    // rdata 
    wire [127:0] hit_data = {128{hit_way0_r}} & din_way0 | {128{hit_way1_r}} & din_way1 ;
    wire [63:0] hit_rdata = hit_data >> {offset_r,3'd0};
    wire hit_rvalid = cur_state==S_LOOKUP && (~op_r);

    wire [63:0] cache_miss_rdata = mrdata_align >> {offset_r,3'd0};
    wire cache_miss_rvalid= (~uncache_r) && cur_state==S_REFILL  && axi_rvalid && axi_rlast && (~op_r);

    wire [63:0] uncache_rdata = mrdata_align >> {offset_r[2:0],3'd0};
    wire uncache_rvalid = uncache_r && cur_state==S_REFILL  && axi_rvalid && axi_rlast;

    assign cache_data_o= {64{hit_rvalid}} & hit_rdata | {64{cache_miss_rvalid}} & cache_miss_rdata | {64{uncache_rvalid}} & uncache_rdata;

    //cache valid
    wire cache_rvalid = hit_rvalid || cache_miss_rvalid || uncache_rvalid;

    wire cache_wvalid = op_r;

    wire cache_valid = cache_rvalid || cache_wvalid;
    //cache ready
    assign req_ready=(cur_state==S_IDEL)||(cur_state==S_LOOKUP&&(~raw));

    // tagvd rw
    wire [`TAG_V_D_WIDTH-1:0] hit_w_tagvd_wdata = {tag_r,1'b1,1'b1};//set dirty
    wire hit_w_tagvd_wen = (cur_state==S_LOOKUP) && op_r;

    wire [`TAG_V_D_WIDTH-1:0] miss_r_tagvd_wdata = {tag_r,1'b1,1'b0};
    wire miss_r_tagvd_wen = (cur_state==S_REFILL) && axi_rvalid && axi_rlast && (~op_r) && (~uncache_r);

    wire [`TAG_V_D_WIDTH-1:0] miss_w_tagvd_wdata = {tag_r,1'b1,1'b1}; 
    wire miss_w_tagvd_wen = (cur_state==S_REFILL) && axi_rvalid && axi_rlast && op_r && (~uncache_r);

    assign tagvd_wdata =    {`TAG_V_D_WIDTH{hit_w_tagvd_wen}} & hit_w_tagvd_wdata | 
                            {`TAG_V_D_WIDTH{miss_r_tagvd_wen}} & miss_r_tagvd_wdata |
                            {`TAG_V_D_WIDTH{miss_w_tagvd_wen}} & miss_w_tagvd_wdata;

    assign tagvd_wen[0] = hit_w_tagvd_wen && hit_way0_r || ( (miss_r_tagvd_wen || miss_w_tagvd_wen) && (~refill_waynum_r) );
    assign tagvd_wen[1] = hit_w_tagvd_wen && hit_way1_r || ( (miss_r_tagvd_wen || miss_w_tagvd_wen) && refill_waynum_r );

    //recently used regs rw
    assign recently_used_wen = req && req_ready;
    assign curent_way = cache_hit ? hit_way1 : refill_waynum;

    //data array write
    //1)hit write  
    wire [127:0] hit_w_darray_wdata = {64'd0 ,wdata_r} << {offset_r,3'd0};

    wire [63:0] bit_wstrb;

    MuxKeyInternal #(4,8,64, 1) MemWstrb_decode (.out(bit_wstrb),.key(wstrb_r),.default_out(64'd0),.lut({
        8'b0000_0001,64'h0000_000f,
        8'b0000_0011,64'h0000_00ff,
        8'b0000_1111,64'h0000_ffff,
        8'b1111_1111,64'hffff_ffff
    }));

    wire [127:0] hit_w_darray_wstrb = {64'd0,bit_wstrb} << {offset_r,3'd0};
    wire hit_w_darray_wen  = (cur_state==S_LOOKUP) && op_r;//hit write
    wire hit_w_darray_wwaynum = hit_way1_r;
     //2)cache read miss write
    wire [127:0] miss_r_darray_wdata = mrdata_align ;
    wire [127:0] miss_r_darray_wstrb = 128'hffff_ffff_ffff_ffff;
    
    wire miss_r_darray_wen = (cur_state==S_REFILL) && (~uncache_r) && axi_rvalid && axi_rlast && (~op_r);//cache read miss write
    wire miss_r_darray_wwaynum = refill_waynum_r ;
    //3) cache write miss write
    wire [127:0] miss_w_darray_wdata = mrdata_align & (~hit_w_darray_wstrb) | hit_w_darray_wdata & hit_w_darray_wstrb;
    wire [127:0] miss_w_darray_wstrb = 128'hffff_ffff_ffff_ffff;
    wire miss_w_darray_wen = (cur_state==S_REFILL) && (~uncache_r) && axi_rvalid && axi_rlast && op_r;//cache write miss write
    wire miss_w_darray_wwaynum = refill_waynum_r ;

    wire [127:0] darray_wdata = {128{hit_w_darray_wen}} & hit_w_darray_wdata |
                                {128{miss_r_darray_wen}} & miss_r_darray_wdata |
                                {128{miss_w_darray_wen}} & miss_w_darray_wdata ;
    wire [127:0] darray_wstrb = {128{hit_w_darray_wen}} & hit_w_darray_wstrb |
                                {128{miss_r_darray_wen}} & miss_r_darray_wstrb |
                                {128{miss_w_darray_wen}} & miss_w_darray_wstrb ;

    wire darray_wwaynum =   hit_w_darray_wen & hit_w_darray_wwaynum |
                            miss_r_darray_wen & miss_r_darray_wwaynum |
                            miss_w_darray_wen & miss_w_darray_wwaynum ;

    wire darray_wen = hit_w_darray_wen || miss_r_darray_wen || miss_w_darray_wen ;
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
    wire darray_ren = req && req_ready || axi_wr_req;

    wire [5:0] darray_raddr = axi_wr_req ? index_r[5:0] : index_i[5:0];

    wire [3:0] io_sram_rcs;//,io_sram_rcs_r;
    
    assign io_sram_rcs[0] = axi_wr_req ? ~index_i[6] : ~index_r[6];
    assign io_sram_rcs[1] = axi_wr_req ? index_i[6] : index_r[6];
    assign io_sram_rcs[2] = axi_wr_req ? ~index_i[6] : ~index_r[6];
    assign io_sram_rcs[3] = axi_wr_req ? index_i[6] : index_i[6];

    wire [3:0] io_sram_rce = io_sram_rcs & {4{darray_ren}} ;

    //Reg #(4, 4'd0) sram_rce_buffer(.clk(clk),.rst(rst),.din(io_sram_rcs),.dout(io_sram_rcs_r),.wen(1'b1));
    // data array interface 

    assign io_sram0_addr = io_sram_wcen[0] ?  darray_waddr : darray_raddr;
    assign io_sram0_cen = io_sram_wcen[0] | io_sram_rce[0];
    assign io_sram0_wen = io_sram_wcen[0];
    assign io_sram0_wmask = darray_wstrb ;
    assign io_sram0_wdata = darray_wdata ;

    assign io_sram1_addr = io_sram_wcen[1] ?  darray_waddr : darray_raddr;
    assign io_sram1_cen = io_sram_wcen[1] | io_sram_rce[1];
    assign io_sram1_wen = io_sram_wcen[1];
    assign io_sram1_wmask = darray_wstrb ;
    assign io_sram1_wdata = darray_wdata ;

    assign io_sram2_addr = io_sram_wcen[2] ?  darray_waddr : darray_raddr;
    assign io_sram2_cen = io_sram_wcen[2] | io_sram_rce[2];
    assign io_sram2_wen = io_sram_wcen[2];
    assign io_sram2_wmask = darray_wstrb ;
    assign io_sram2_wdata = darray_wdata ;

    assign io_sram3_addr = io_sram_wcen[3] ?  darray_waddr : darray_raddr;
    assign io_sram3_cen = io_sram_wcen[3] | io_sram_rce[3];
    assign io_sram3_wen = io_sram_wcen[3];
    assign io_sram3_wmask = darray_wstrb ;
    assign io_sram3_wdata = darray_wdata ;

    wire [127:0] din_way0 = (~index_r[6]) ? io_sram0_rdata : io_sram1_rdata;
    wire [127:0] din_way1 = (~index_r[6]) ? io_sram2_rdata : io_sram3_rdata;

endmodule