`include "defines.v"

module top(
    input clk,
    input rst,//高电平有效
    // difftest
    output [31:0] Inst,
    output [63:0] pc,
    output valid
);

  /*------------IF----------------*/

    // 1. cache req
    wire ifu_cache_req;
    wire [31:0] ifu_cache_addr;
    // 2. ifu outputs
    wire [`RegWidth-1:0] ifu_pc_o;
    wire [`INSTWide-1:0] ifu_inst_o;
    // 3. shake hands to next stage
    wire if_ready_go,if_valid;

    IFU IFU(.clk(clk),.rst(rst), 
          //1. jump inst from exu  
          .is_jump(jump),.JumpPc(jumppc),
          .ctrl_stall(stall_if),.pipeline_flush(flush_if),
          //3. cache inteface - icache fetch
          .cache_req(ifu_cache_req),.addr_inst(ifu_cache_addr),.cache_ready(icache_req_ready),
          //4. cache inteface - icache data
          .inst_i(icache_rdata),.cache_valid(icache_valid),
          //5. output for next stage
          .inst_o(ifu_inst_o),.pc_o(ifu_pc_o),
          //6. pipe shake hands
          .id_allow_in(id_allow_in),.if_ready_go(if_ready_go),.if_valid(if_valid)
    );
  
  /*------------icache----------------*/

  // icache req ready for preif
  wire icache_req_ready;
  // icache data for if
  wire [63:0]           icache_rdata;
  wire                  icache_valid;
  // axi rd req
  wire          icache_axi_rd_req;
  wire [31:0]   icache_axi_rd_addr;
  wire [2:0]    icache_axi_rd_type;  

  //icache <--> data array(ram) ram0 ram1 ->way0 | ram2 ram3 ->way1
  wire [5:0]    icache_sram_addr  [3:0];
  wire [3:0]    icache_sram_cen        ;
  wire [3:0]    icache_sram_wen        ;
  wire [127:0]  icache_sram_wmask [3:0];
  wire [127:0]  icache_sram_wdata [3:0];

  icache icache(.clk(clk),.rst(rst), 
    // 1. pre-if <--> cache
    .addr(ifu_cache_addr),
    .cache_req(ifu_cache_req),
    .req_ready(icache_req_ready),
    // 2. cache <--> ifu
    .cache_rdata(icache_rdata),
    .cache_valid(icache_valid),

    // 3. icache <--> axi interface (read)
    .axi_rd_req  (icache_axi_rd_req),
    .axi_rd_addr (icache_axi_rd_addr),
    .axi_rd_type (icache_axi_rd_type),//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
    .axi_rd_ready(axi_icache_rd_ready),
    .axi_rdata   (axi_icache_rdata),
    .axi_rlast   (axi_icache_rlast),
    .axi_rvalid  (axi_icache_rvalid),
      
    // 4. icache <--> data array(ram) ram0 ram1 ->way0 | ram2 ram3 ->way1
  	.io_sram0_addr (icache_sram_addr [0]),
  	.io_sram0_cen  (icache_sram_cen  [0]),
  	.io_sram0_wen  (icache_sram_wen  [0]),
  	.io_sram0_wmask(icache_sram_wmask[0]),
  	.io_sram0_wdata(icache_sram_wdata[0]),
  	.io_sram0_rdata(sram_icache_rdata[0]),

  	.io_sram1_addr (icache_sram_addr [1]),
  	.io_sram1_cen  (icache_sram_cen  [1]),
  	.io_sram1_wen  (icache_sram_wen  [1]),
  	.io_sram1_wmask(icache_sram_wmask[1]),
  	.io_sram1_wdata(icache_sram_wdata[1]),
  	.io_sram1_rdata(sram_icache_rdata[1]),

  	.io_sram2_addr (icache_sram_addr [2]),
  	.io_sram2_cen  (icache_sram_cen  [2]),
  	.io_sram2_wen  (icache_sram_wen  [2]),
  	.io_sram2_wmask(icache_sram_wmask[2]),
  	.io_sram2_wdata(icache_sram_wdata[2]),
  	.io_sram2_rdata(sram_icache_rdata[2]),

  	.io_sram3_addr (icache_sram_addr [3]),
  	.io_sram3_cen  (icache_sram_cen  [3]),
  	.io_sram3_wen  (icache_sram_wen  [3]),
  	.io_sram3_wmask(icache_sram_wmask[3]),
  	.io_sram3_wdata(icache_sram_wdata[3]),
  	.io_sram3_rdata(sram_icache_rdata[3])    
  );

  /*------------axi-interface(icache,dcache)------------*/
  
  // 1. master interface
  
  // 1.1 icache rd
  wire          axi_icache_rd_ready;
  wire [63:0]   axi_icache_rdata   ;
  wire          axi_icache_rlast   ;
  wire          axi_icache_rvalid  ;    

  // 1.2 dcache <--> axi interface (read)
  wire          axi_dcache_rd_ready;
  wire [63:0]   axi_dcache_rdata   ;
  wire          axi_dcache_rlast   ;
  wire          axi_dcache_rvalid  ;

  // 1.3 dcache <--> axi interface (write)
  wire          axi_dcache_wr_ready;

  // 2. axi master
  // 2.1 ar
  wire          axi_master_arvalid;
  wire [31:0]   axi_master_araddr ;
  wire [3:0]    axi_master_arid   ;
  wire [7:0]    axi_master_arlen  ;
  wire [2:0]    axi_master_arsize ;
  wire [1:0]    axi_master_arburst;
  
  // 2.2 r
  wire          axi_master_rready;
  
  // 2.3 aw
  wire          axi_master_awvalid;
  wire [31:0]   axi_master_awaddr ;
  wire [3:0]    axi_master_awid   ;
  wire [7:0]    axi_master_awlen  ;
  wire [2:0]    axi_master_awsize ;
  wire [1:0]    axi_master_awburst;

  // 2.4 w
  wire          axi_master_wvalid;
  wire [63:0]   axi_master_wdata ;
  wire [7:0]    axi_master_wstrb ;
  wire          axi_master_wlast ;

  // 2.5 b
  wire          axi_master_bready;

  axi_rw_interface axi_rw_interface(.clk(clk),.rst(rst),

      // 1. master interface
      
      // 1.1 icache rd
      .icache_rd_req  (icache_axi_rd_req),
      .icache_rd_addr (icache_axi_rd_addr),
      .icache_rd_type (icache_axi_rd_type),//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
      .icache_rd_ready(axi_icache_rd_ready),
      .icache_rdata   (axi_icache_rdata),
      .icache_rlast   (axi_icache_rlast),
      .icache_rvalid  (axi_icache_rvalid),    

      // 1.2 dcache <--> axi interface (read)
      .dcache_rd_req  (dcache_axi_rd_req),
      .dcache_rd_addr (dcache_axi_rd_addr),
      .dcache_rd_type (dcache_axi_rd_type),//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
      .dcache_rd_ready(axi_dcache_rd_ready),
      .dcache_rdata   (axi_dcache_rdata),
      .dcache_rlast   (axi_dcache_rlast),
      .dcache_rvalid  (axi_dcache_rvalid),

      // 1.3 dcache <--> axi interface (write)
      .dcache_wr_req  (dcache_axi_wr_req),
      .dcache_wr_addr (dcache_axi_wr_addr),
      .dcache_wdata   (dcache_axi_wdata),
      .dcache_wr_type (dcache_axi_wr_type),
      .dcache_wstrb   (dcache_axi_wstrb),//only uncache
      .dcache_wr_ready(axi_dcache_wr_ready),

      // 2. axi master
      // 2.1 ar
      .i_axi_master_arready(axi_slave_arready),
      .o_axi_master_arvalid(axi_master_arvalid),
      .o_axi_master_araddr (axi_master_araddr),
      .o_axi_master_arid   (axi_master_arid),
      .o_axi_master_arlen  (axi_master_arlen),
      .o_axi_master_arsize (axi_master_arsize),
      .o_axi_master_arburst(axi_master_arburst),
      
      // 2.2 r
      .o_axi_master_rready(axi_master_rready),
      .i_axi_master_rvalid(axi_slave_rvalid),
      .i_axi_master_rlast (axi_slave_rlast ),
      .i_axi_master_rresp (axi_slave_rresp ),
      .i_axi_master_rdata (axi_slave_rdata ),
      .i_axi_master_rid   (axi_slave_rid   ),
      
      // 2.3 aw
      .i_axi_master_awready(axi_slave_awready),
      .o_axi_master_awvalid(axi_master_awvalid),
      .o_axi_master_awaddr (axi_master_awaddr),
      .o_axi_master_awid   (axi_master_awid),
      .o_axi_master_awlen  (axi_master_awlen),
      .o_axi_master_awsize (axi_master_awsize),
      .o_axi_master_awburst(axi_master_awburst),

      // 2.4 w
      .i_axi_master_wready(axi_slave_wready),
      .o_axi_master_wvalid(axi_master_wvalid),
      .o_axi_master_wdata (axi_master_wdata),
      .o_axi_master_wstrb (axi_master_wstrb),
      .o_axi_master_wlast (axi_master_wlast),

      // 2.5 b
      .o_axi_master_bready(axi_master_bready),
      .i_axi_master_bvalid(axi_slave_bvalid),
      .i_axi_master_bresp (axi_slave_bresp ),
      .i_axi_master_bid   (axi_slave_bid   )
  );


  /*------------IF-ID pipe Regs------------*/
    // 1. pipe regs
    wire [31:0] id_inst;
    wire [63:0] id_pc;
    // 2. shake hands
    wire id_allow_in,idu_valid;

    IDRegs IDRegs(.clk(clk),.rst(rst),
        // 1. input from pre stage
        .i_pc(ifu_pc_o),.i_inst(ifu_inst_o),
        .pipeline_flush(flush_id),
        // 2. output to next satge
        .id_inst(id_inst),.id_pc(id_pc) ,
        // 3. pipe shake hands
        // 3.1 sh of pre stage
        .if_ready_go(if_ready_go),.if_valid(if_valid),.id_allow_in(id_allow_in),
        // 3.2 sh of next stage
        .id_ready(idu_ready),.id_valid(idu_valid),
        // 4. jump && intr flush pipeline
        //.is_jump(o_exu_is_jump),.is_intr(o_wb_isIntrPC),
        // 5. ebreak from id
        .isebreak(idu_isebreak)
    );

  /*--------------------ID-----------------*/

    // 1. regs read && witf
    wire [4:0] id_rs1;
    wire [4:0] id_rs2;

    // 2. inst write back info for witf 
    wire id_RegWr;//to wirf
    wire [`RegAddrBus] id_rd;

    // 3. outputs for next stage  
    // 3.1 ctrl signals
    // 3.1.1 ALU
    wire [4:0] o_id_ALUct;
    wire o_id_ALUAsr;
    wire [1:0] o_id_ALUBsr;
    wire o_id_isTuncate,o_id_isSext;
    // 3.1.2 branch
    wire [2:0] o_id_Branch;
    // 3.1.3 mem
    wire [2:0] o_id_MemOP;
    wire o_id_MemWr;
    // 3.1.4 reg 
    wire o_id_RegWr;
    wire [1:0] o_id_RegSrc;
    // 3.1.5 intr inst
    wire o_id_isecall ;
    wire o_id_ismret  ;
    wire o_id_iscsr   ;  

    // 3.2 operate data for next stage
    wire [`RegWidth-1:0] o_id_Rrs1,o_id_Rrs2;
    wire [63:0] o_id_Imm;
    wire [`RegWidth-1:0] o_id_pc;
    wire [`INSTWide-1:0] o_id_inst;

    // 4. outputs for pre stage (ebreak inst)
    wire idu_isebreak;    

    // 5. shake hands
    wire idu_ready;
    wire id_to_exu_valid;

    IDU IDU(.clk(clk),.rst(rst),
      // 1. inputs from pre stage
      .id_inst(id_inst),.id_pc(id_pc),
      // 2. jump from exu
      .pipeline_flush(flush_id),
      // 3. register files read      
      .R_rs1_i(R_rs1),.R_rs2_i(R_rs2),.rs1(id_rs1),.rs2(id_rs2),
      // 4. witf for raw     
      .rd(id_rd),.disp_en(id_RegWr),.isRAW(isRAW),.witf_full(witf_full),
      // 5. outputs for next stage
      // 5.1 ctrl signals
      // 5.1.1 ALU     
      .ALUct(o_id_ALUct),.ALUAsr(o_id_ALUAsr),.ALUBsr(o_id_ALUBsr),.isTuncate(o_id_isTuncate),.isSext(o_id_isSext),
      // 5.1.2  branch
      .Branch(o_id_Branch),
      // 5.1.3 mem 
      .MemOP(o_id_MemOP),.MemWr(o_id_MemWr),
      // 5.1.4 regs
      .RegWr(o_id_RegWr),.RegSrc(o_id_RegSrc),
      // 5.1.5 intr inst 
      .isecall(o_id_isecall),.ismret(o_id_ismret),.iscsr(o_id_iscsr),
      // 5.2 operate data 
      .Imm(o_id_Imm),.inst_o(o_id_inst),.pc_o(o_id_pc),.R_rs1_o(o_id_Rrs1),.R_rs2_o(o_id_Rrs2),
      // 6. outputs for pre stage(ebreak inst)
      .isebreak(idu_isebreak),
      // 7. shake hands
      .id_valid(idu_valid),.id_ready(idu_ready),.exu_allow_in(exu_allow_in),.id_to_exu_valid(id_to_exu_valid)
    );
    
  /*--------------------ID to EXU Regs-----------------*/

    // 1. ALU ctrl 
    wire                   exu_ALUAsr   ;
    wire [1:0]             exu_ALUBsr   ;
    wire [4:0]             exu_ALUct    ;
    wire                   exu_isTuncate;
    wire                   exu_isSext   ;
    // 2. branch ctrl 
    wire [2:0]             exu_Branch   ;

    // 3. mem op    
    wire [2:0]             exu_MemOP;
    wire                   exu_MemWr;

    // 4. regs wb    
    wire                   exu_RegWr;
    wire [1:0]             exu_RegSrc ;//写回地址 

    // 5. intr insto_
    wire exu_isecall ;
    wire exu_ismret  ;
    wire exu_iscsr   ;     
    // 6. operate data    
    wire [`RegWidth-1:0]   exu_R_rs1;
    wire [`RegWidth-1:0]   exu_R_rs2;//mem wdata
    wire [`RegWidth-1:0]   exu_Imm  ;
    wire [`INSTWide-1:0]   exu_inst ;
    wire [`RegWidth-1:0]   exu_pc   ;  

    // 7. shake hands
    wire                   exu_valid;
    wire                   exu_allow_in;

    EXURegs ID_to_EXU_Regs(.clk(clk),.rst(rst),
      // 1. inputs from id 
      // 1.1 ALU ctrl  
      .i_ALUAsr(o_id_ALUAsr),.i_ALUBsr(o_id_ALUBsr),.i_ALUct(o_id_ALUct),.i_isTuncate(o_id_isTuncate),.i_isSext(o_id_isSext),
      // 1.2 branch ctrl 
      .i_Branch(o_id_Branch),
      // 1.3 mem op    
      .i_MemOP(o_id_MemOP),.i_MemWr(o_id_MemWr),
      // 1.4 regs wb    
      .i_RegWr(o_id_RegWr),.i_RegSrc (o_id_RegSrc),
      // 1.5 intr inst
      .i_isecall(o_id_isecall),.i_ismret(o_id_ismret),.i_iscsr(o_id_iscsr),
      // 1.6 operate data    
      .i_R_rs1(o_id_Rrs1),.i_R_rs2(o_id_Rrs2),.i_Imm(o_id_Imm),.i_exu_inst(o_id_inst),.i_exu_pc(o_id_pc),  

      // 2. outputs for exu 
      // 2.1 ALU ctrl 
      .o_ALUAsr(exu_ALUAsr),.o_ALUBsr(exu_ALUBsr),.o_ALUct(exu_ALUct),.o_isTuncate(exu_isTuncate),.o_isSext(exu_isSext),
      // 2.2 branch ctrl 
      .o_Branch(exu_Branch),
      // 2.3 mem op    
      .o_MemOP(exu_MemOP),.o_MemWr(exu_MemWr),
      // 2.4 regs wb    
      .o_RegWr(exu_RegWr),.o_RegSrc(exu_RegSrc),
      // 2.5 intr insto_
      .o_isecall(exu_isecall),.o_ismret(exu_ismret),.o_iscsr(exu_iscsr),

      // 2.6 operate data    
      .o_R_rs1(exu_R_rs1),.o_R_rs2(exu_R_rs2),.o_Imm(exu_Imm),.o_exu_inst(exu_inst),.o_exu_pc(exu_pc),  

      // 3. shake hands signal 
      // 3.1 id
      .id_to_exu_valid(id_to_exu_valid),.exu_allow_in(exu_allow_in),
      // 3.2 exu 
      .exu_ready(exu_ready),.exu_valid(exu_valid) ,
      
      // 4. jump && intr flush pipeline
      // .is_jump(o_exu_is_jump),
      // .is_intr(o_wb_isIntrPC) 
      .pipeline_flush(flush_exu | o_exu_is_jump)     
    );


  /*--------------------EXU-----------------*/

  // 1. dcache req
  wire        o_exu_cache_req;
  wire        o_exu_cache_op;
  wire [1:0]  o_exu_cache_size;
  wire [63:0] o_exu_cache_addr;
  wire [63:0] o_exu_cache_wdata;
  wire [7:0]  o_exu_cache_wstrb;

  // 2. outputs for next stage 
  // 2.1 mem op(cache rdata process)
  wire [2:0]           o_exu_MemOP;
  wire                 o_exu_MemWr;
  wire [`RegWidth-1:0] o_exu_R_rs2;  //client wdata
  // 2.2 alu res for reg wb(mem addr->cache req)
  wire [`RegWidth-1:0] o_exu_ALUres;
  // 2.3 reg wb
  wire                 o_exu_Regwr;
  wire [1:0]           o_exu_RegSrc;
  // 2.4 inst&pc
  wire[`INSTWide-1:0]  o_exu_inst;
  wire [`RegWidth-1:0] o_exu_pc;
  // 2.5 intr/csr
  wire                 o_exu_isecall ;
  wire                 o_exu_ismret  ;
  wire                 o_exu_iscsr   ;  
  // 2.6 csr wdata
  wire [`RegWidth-1:0] o_exu_R_rs1; 

  // 3. outputs for pre stage
  // 3.1 for ifu 
  wire [`RegWidth-1:0] o_exu_NextPC;
  // 3.2 flush pipe
  wire                 o_exu_is_jump;
  
  // shake hands
  wire exu_ready ;
  wire exu_to_lsu_valid ;   

  EXU EXU(.clk(clk),.rst(rst),
    // 1. inputs from pre stage 
    // 1.1 ctrl from id to ALU
    .ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.ALUct(exu_ALUct),.isTuncate(exu_isTuncate),.isSext(exu_isSext),
    // 1.2 branch ctrl 
    .Branch(exu_Branch),
    // 1.3 mem op    
    .MemOP_i(exu_MemOP),.MemWr_i(exu_MemWr),
    // 1.4 regs wb    
    .RegWr_i(exu_RegWr),.RegSrc_i(exu_RegSrc),
    // 1.5 intr inst
    .i_isecall(exu_isecall),.i_ismret(exu_ismret),.i_iscsr(exu_iscsr),
    .stall_exu_store(stall_exu_store),
    // 1.6 operate data    
    .R_rs1(exu_R_rs1),.R_rs2(exu_R_rs2),.Imm(exu_Imm),.exu_inst(exu_inst),.exu_pc(exu_pc),  

    // 2. dcache req
    .req(o_exu_cache_req),.op(o_exu_cache_op),.size(o_exu_cache_size),.addr(o_exu_cache_addr),.wdata(o_exu_cache_wdata),.wstrb(o_exu_cache_wstrb),.cache_ready(dcache_req_ready),

    // 3. outputs for next stage 
    // 3.1 mem op(cache rdata process)
    .MemOP(o_exu_MemOP),.MemWr(o_exu_MemWr),.o_R_rs2(o_exu_R_rs2),
    // 3.2 alu res for reg wb(mem addr->cache req)
    .ALUres(o_exu_ALUres),
    // 3.3 reg wb
    .Regwr (o_exu_Regwr),.RegSrc(o_exu_RegSrc),
    // 3.4 inst&pc
    .inst(o_exu_inst),.pc(o_exu_pc),
    // 3.5 intr/csr
    .o_isecall(o_exu_isecall),.o_ismret(o_exu_ismret),.o_iscsr(o_exu_iscsr),
    // 3.6 csr wdata
    .o_R_rs1(o_exu_R_rs1), 

    // 4. outputs for pre stage
    // 4.1 for ifu 
    .NextPC(o_exu_NextPC),
    // 4.2 flush pipe
    .is_jump(o_exu_is_jump),

    // 5. handshakes
    .exu_valid(exu_valid),.exu_ready(exu_ready),.lsu_allow_in(lsu_allow_in),.exu_to_lsu_valid(exu_to_lsu_valid),
    
    .pipeline_flush(flush_exu)
  ); 

  /*--------------------EXU to LSU Regs-----------------*/

  // 1. outputs for next stage 
  // 1.1 mem ctrl
  wire                   lsu_MemWr;
  wire [2:0]             lsu_MemOP;
  wire [`RegWidth-1:0]   lsu_R_rs2;
  // 1.2 inst&pc
  wire [`INSTWide-1:0]   lsu_inst;
  wire [`RegWidth-1:0]   lsu_pc;   
  // 1.3 pipeline forward
  // 1.3.1 regsfile wdata
  wire [`RegWidth-1:0]   lsu_ALUres;
  // 1.3.2 regfile wb ctrl
  wire [1:0]             lsu_RegSrc;
  wire                   lsu_RegWr;
  // 1.3.3 intr/csr
  wire lsu_isecall ;
  wire lsu_ismret  ;
  wire lsu_iscsr   ; 
  // 1.3.4 csr wdata
  wire [`RegWidth-1:0]   lsu_R_rs1;

  // 2. shake hands    
  wire lsu_valid;
  wire lsu_allow_in;

  LSURegs EXU_to_LSU_Regs(.clk(clk),.rst(rst),
    // 1. inputs from exu
    // 1.1 mem ctrl
    .i_MemWr(o_exu_MemWr),.i_MemOP(o_exu_MemOP),.i_R_rs2(o_exu_R_rs2),
    // 1.2 inst&pc
    .i_inst(o_exu_inst),.i_pc(o_exu_pc),    
    // 1.3 pipeline forward
    // 1.3.1 regsfile wdata
    .i_ALUres(o_exu_ALUres),
    // 1.3.2 regfile wb ctrl
    .i_RegSrc(o_exu_RegSrc),.i_RegWr(o_exu_Regwr), 
    // 1.3.3 intr/csr
    .i_isecall (o_exu_isecall),.i_ismret(o_exu_ismret),.i_iscsr(o_exu_iscsr),
    // 1.3.4 csr wdata
    .i_R_rs1(o_exu_R_rs1),  
    
    // 2. outputs for next stage 
    // 2.1 mem ctrl
    .o_MemWr(lsu_MemWr),.o_MemOP(lsu_MemOP),.o_R_rs2(lsu_R_rs2),
    // 2.2 inst&pc
    .o_inst(lsu_inst),.o_pc(lsu_pc),   
    // 2.3 pipeline forward
    // 2.3.1 regsfile wdata
    .o_ALUres(lsu_ALUres),
    // 2.3.2 regfile wb ctrl
    .o_RegSrc(lsu_RegSrc),.o_RegWr (lsu_RegWr),
    // 2.3.3 intr/csr
    .o_isecall(lsu_isecall),.o_ismret(lsu_ismret),.o_iscsr(lsu_iscsr),
    // 2.3.4 csr wdata
    .o_R_rs1(lsu_R_rs1),
    
    // 3. handshakes
    .exu_to_lsu_valid(exu_to_lsu_valid),.lsu_ready(lsu_ready),.lsu_valid(lsu_valid),.lsu_allow_in(lsu_allow_in),
    .pipeline_flush(flush_lsu)
);

  /*--------------------dcache-----------------*/
  // cpu(exu) <--> dcache
  wire                  dcache_req_ready;
  
  //dcache <--> cpu(lsu)
  wire [63:0]   dcache_data_o;
  wire          dcache_valid ;
  
  //dcache <--> axi interface (read)
  wire          dcache_axi_rd_req ;
  wire [31:0]   dcache_axi_rd_addr;
  wire [2:0]    dcache_axi_rd_type;//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line

  //dcache <--> axi interface (write)
  wire          dcache_axi_wr_req ;
  wire [31:0]   dcache_axi_wr_addr;
  wire [127:0]  dcache_axi_wdata  ;
  wire [2:0]    dcache_axi_wr_type;
  wire [7:0]    dcache_axi_wstrb  ;//only uncache
  
  //dcache <--> data array(ram) data array(ram) ram0 ram1 ->way0 | ram2 ram3 ->way1
  wire [5:0]    dcache_sram_addr  [3:0];
  wire [3:0]    dcache_sram_cen        ;
  wire [3:0]    dcache_sram_wen        ;
  wire [127:0]  dcache_sram_wmask [3:0];
  wire [127:0]  dcache_sram_wdata [3:0];


  dcache dcache(.clk(clk),.rst(rst),
      // cpu(exu) <--> dcache
      .req  (o_exu_cache_req),
      .op   (o_exu_cache_op),//0:read 1:write
      .addr (o_exu_cache_addr[31:0]),
      .size (o_exu_cache_size), //1,2,4,8
      .wstrb(o_exu_cache_wstrb),
      .wdata(o_exu_cache_wdata),
      .req_ready(dcache_req_ready),
      
      //dcache <--> cpu(lsu)
      .cache_data_o(dcache_data_o),
      .cache_valid (dcache_valid),
      
      //dcache <--> axi interface (read)
      .axi_rd_req  (dcache_axi_rd_req),
      .axi_rd_addr (dcache_axi_rd_addr),
      .axi_rd_type (dcache_axi_rd_type),//3'd0:1Byte 3'd1:2B 3'd2:4B 3'd3:8B 3'd4:cache line
      .axi_rd_ready(axi_dcache_rd_ready),
      .axi_rdata   (axi_dcache_rdata),
      .axi_rlast   (axi_dcache_rlast),
      .axi_rvalid  (axi_dcache_rvalid),

      //dcache <--> axi interface (write)
      .axi_wr_req  (dcache_axi_wr_req),
      .axi_wr_addr (dcache_axi_wr_addr),
      .axi_wdata   (dcache_axi_wdata),
      .axi_wr_type (dcache_axi_wr_type),
      .axi_wstrb   (dcache_axi_wstrb),//only uncache
      .axi_wr_ready(axi_dcache_wr_ready),
      
      //dcache <--> data array(ram) data array(ram) ram0 ram1 ->way0 | ram2 ram3 ->way1
  	  .io_sram0_addr (dcache_sram_addr [0]),
  	  .io_sram0_cen  (dcache_sram_cen  [0]),
  	  .io_sram0_wen  (dcache_sram_wen  [0]),
  	  .io_sram0_wmask(dcache_sram_wmask[0]),
  	  .io_sram0_wdata(dcache_sram_wdata[0]),
  	  .io_sram0_rdata(sram_dcache_rdata[0]),
  
  	  .io_sram1_addr (dcache_sram_addr [1]),
  	  .io_sram1_cen  (dcache_sram_cen  [1]),
  	  .io_sram1_wen  (dcache_sram_wen  [1]),
  	  .io_sram1_wmask(dcache_sram_wmask[1]),
  	  .io_sram1_wdata(dcache_sram_wdata[1]),
  	  .io_sram1_rdata(sram_dcache_rdata[1]),
  
  	  .io_sram2_addr (dcache_sram_addr [2]),
  	  .io_sram2_cen  (dcache_sram_cen  [2]),
  	  .io_sram2_wen  (dcache_sram_wen  [2]),
  	  .io_sram2_wmask(dcache_sram_wmask[2]),
  	  .io_sram2_wdata(dcache_sram_wdata[2]),
  	  .io_sram2_rdata(sram_dcache_rdata[2]),
  
  	  .io_sram3_addr (dcache_sram_addr [3]),
  	  .io_sram3_cen  (dcache_sram_cen  [3]),
  	  .io_sram3_wen  (dcache_sram_wen  [3]),
  	  .io_sram3_wmask(dcache_sram_wmask[3]),
  	  .io_sram3_wdata(dcache_sram_wdata[3]),
  	  .io_sram3_rdata(sram_dcache_rdata[3])    
  );
  /*--------------------LSU-----------------*/

    // 1. outputs for next stage

    // 1.1 mem out 
    wire [`RegWidth-1:0]   o_lsu_memout;

    // 1.2 clint(timer)
    wire                   o_lsu_clint_mtip;    

    // 1.3 pipeline forward

    // 1.3.1 regsfile wdata
    wire [`RegWidth-1:0]   o_lsu_ALUres;
    // 1.3.2 regfile wb ctrl
    wire [1:0]             o_lsu_RegSrc;
    wire                   o_lsu_RegWr; 
    // 1.3.3 intr/csr
    wire                   o_lsu_IntrEn;
    // 1.3.4 csr wdata
    wire[`RegWidth-1:0]    o_lsu_R_rs1;   
    // 1.3.5 inst&pc
    wire[`INSTWide-1:0]    o_lsu_inst;
    wire[`RegWidth-1:0]    o_lsu_pc;

    // 2. shake hands
    wire lsu_to_wb_valid;
    wire lsu_ready;

  LSU LSU(.clk(clk),.rst(rst),

    // 1. cache
    .cache_rvalid(dcache_valid),.cache_rdata(dcache_data_o),

    // 2. inputs from pre stage    
    // 2.1 mem ctrl
    .i_MemWr(lsu_MemWr),.i_MemOP(lsu_MemOP),.i_R_rs2(lsu_R_rs2),//
    // 2.2 inst&pc
    .lsu_inst(lsu_inst),.lsu_pc(lsu_pc),    
    // 2.3 pipeline forward
    // 2.3.1 regsfile wdata
    .i_ALUres(lsu_ALUres),
    // 2.3.2 regfile wb ctrl
    .i_RegSrc(lsu_RegSrc),.i_RegWr(lsu_RegWr), 
    // 2.3.3 intr/csr
    //.i_IntrEn(lsu_IntrEn),
    // 2.3.4 csr wdata
    .i_R_rs1(lsu_R_rs1),   
    
    // mie from wb
    .mstatus_MIE(o_wb_mstatus_MIE),
    
    // 3. outputs for next stage
    
    // 3.1 mem out 
    .memout(o_lsu_memout),
    
    // 3.2 clint(timer)
    .clint_mtip(o_lsu_clint_mtip),    
    
    // 3.3 pipeline forward
    
    // 3.3.1 regsfile wdata
    . o_ALUres(o_lsu_ALUres),
    // 3.3.2 regfile wb ctrl
    .o_RegSrc(o_lsu_RegSrc),. o_RegWr(o_lsu_RegWr), 
    // 3.3.3 intr/csr
    //. o_IntrEn(o_lsu_IntrEn),
    // 3.3.4 csr wdata
    .o_R_rs1(o_lsu_R_rs1),   
    // 3.3.5 inst&pc
    .inst_o(o_lsu_inst),.pc_o(o_lsu_pc),
    
    // 4. handshakes
    .lsu_valid(lsu_valid),.lsu_ready(lsu_ready),.lsu_to_wb_valid(lsu_to_wb_valid),.wb_allowin(wb_allow_in),
    .pipeline_flush(flush_lsu)
  );

  /*--------------------LSU to WB Regs-----------------*/

    // 1. outputs for wb
    // 1.1 intr/csr
    wire                       wb_isecall ;
    wire                       wb_ismret  ;
    wire                       wb_iscsr   ; 
    wire                       wb_clint_mtip;
    wire   [`RegWidth-1:0]     wb_R_rs1;
    // 1.2 regsfile wb
    wire   [1:0]               wb_RegSrc;
    wire                       wb_RegWr;
    wire   [`RegWidth-1:0]     wb_ALUres;
    wire   [`RegWidth-1:0]     wb_MemOut;
    // 1.3 inst&&pc
    wire   [`RegWidth-1:0]     wb_pc;
    wire   [`INSTWide-1:0]     wb_inst;    

    // 2. shake hands
    wire wb_valid;
    wire wb_allow_in;

  WBRegs LSU_to_WB_Regs(.clk(clk),.rst(rst),
    // 1. input from pre stage 
    // 1.1 intr/csr
    .i_isecall (lsu_isecall),.i_ismret(lsu_ismret),.i_iscsr(lsu_iscsr),
    .clint_mtip(o_lsu_clint_mtip),
    .R_rs1_i   (o_lsu_R_rs1),
    // 1.2 regsfile wb
    .RegSrc(o_lsu_RegSrc),
    .RegWr    (o_lsu_RegWr),
    .ALUres   (o_lsu_ALUres),
    .MemOut   (o_lsu_memout),
    // 1.3 inst&&pc
    .i_pc  (o_lsu_pc),
    .i_inst(o_lsu_inst),

    // 2. outputs for wb
    // 2.1 intr/csr
    .o_isecall(wb_isecall),.o_ismret(wb_ismret),.o_iscsr(wb_iscsr),
    .o_clint_mtip(wb_clint_mtip),
    .o_R_rs1     (wb_R_rs1),
    // 2.2 regsfile wb
    .o_RegSrc(wb_RegSrc),
    .o_RegWr (wb_RegWr),
    .o_ALUres(wb_ALUres),
    .o_MemOut(wb_MemOut),
    // 2.3 inst&&pc
    .o_wb_pc  (wb_pc),
    .o_wb_inst(wb_inst),    

    // 3. handshake
    .lsu_to_wb_valid(lsu_to_wb_valid),
    .wb_ready(wb_ready),
    .wb_valid(wb_valid),
    .wb_allow_in(wb_allow_in)         
);

  /*--------------------WB-----------------*/

  // 1. to witf (raw)
  wire                      o_wb_witf_pop_en;
  
  // 2. to preif 
  wire                      o_wb_isIntrPC;
  wire  [`RegWidth-1:0]     o_wb_IntrPC;
  wire                      o_wb_mstatus_MIE;
  // 3. reg wb
  wire                      o_wb_RegWr_en;
  wire  [`RegAddrBus]   o_wb_RegWaddr;
  wire  [`RegWidth-1:0]     o_wb_RegWdata;

  // 4. shake hands
  wire                wb_ready;

 WB WB(.clk(clk),.rst(rst),

    // 1. input from pre stage 
    // 1.1 intr/csr
    .i_isecall(wb_isecall),.i_ismret(wb_ismret),.i_iscsr(wb_iscsr),
    .clint_mtip(wb_clint_mtip),
    .R_rs1_i   (wb_R_rs1),
    // 1.2 regsfile wb
    .RegSrc(wb_RegSrc),
    .RegWr (wb_RegWr),
    .ALUres(wb_ALUres),
    .MemOut(wb_MemOut),
    // 1.3 inst&&pcs
    .wb_pc  (wb_pc),
    .wb_inst(wb_inst),
    
    // 2. to witf (raw)
    .witf_pop_en(o_wb_witf_pop_en),
    
    // 3. to preif 
    .isIntrPC   (o_wb_isIntrPC),
    .IntrPC     (o_wb_IntrPC),
    .mstatus_MIE(o_wb_mstatus_MIE),

    // 4. reg wb
    .o_RegWr_en(o_wb_RegWr_en),
    .o_RegWaddr(o_wb_RegWaddr),
    .o_RegWdata(o_wb_RegWdata),

    // 5. handshakes
    .wb_valid(wb_valid),
    .wb_ready(wb_ready)
  );

  /*---------------pipeflush ctrl----------*/
  wire          flush_if        ;
  wire          flush_id        ;
  wire          flush_exu       ;
  wire          flush_lsu       ;
  wire          flush_witf      ;
  wire          stall_if        ;
  wire          stall_exu_store ;
  wire          jump            ;
  wire  [63:0]  jumppc          ;

  pipeline_ctrl pipeline_ctrl( 
    .wb_intr(o_wb_isIntrPC),
    .exu_jump(o_exu_is_jump),
    .pc_intr(o_wb_IntrPC),
    .pc_jump(o_exu_NextPC),
    .excep_id(o_id_isecall | o_id_ismret),
    .excep_exu((exu_isecall | exu_ismret)&exu_valid),
    .excep_lsu((lsu_isecall | lsu_ismret)&lsu_valid),
    .lsu_mtip(o_lsu_clint_mtip),
    .flush_if(flush_if),
    .flush_id(flush_id),
    .flush_exu(flush_exu),
    .flush_lsu(flush_lsu),
    .flush_witf(flush_witf),
    .stall_if(stall_if),
    .stall_exu_store(stall_exu_store),
    .jump(jump),
    .jumppc(jumppc)
  );

  /*---------RegisterFile(IDU,WB)------------*/
  
  wire [`RegWidth-1:0] R_rs1;
  wire [`RegWidth-1:0] R_rs2;

  RegisterFile RegisterFile(.clk(clk),.rst(rst),
    // rd request from id
    .rs1(id_rs1),.rs2(id_rs2),
    // write req from wb
    .waddr(o_wb_RegWaddr),.wdata(o_wb_RegWdata),.wen(o_wb_RegWr_en),      
    // data out for id
    .R_rs1(R_rs1),.R_rs2(R_rs2)
  );

  /*---------witf(IDU,WB)------------*/

  wire isRAW,witf_full,witf_empty;

  witf witf(.clk(clk),.rst(rst),
      // 1. disp inst info form id
      .disp_en(id_RegWr),.rs1(id_rs1),.rs2(id_rs2),.rd(id_rd),
      // 2. raw check for id
      .isRAW(isRAW),.witf_full(witf_full),.witf_empty(witf_empty),
      // 3. finish wb to pop inst
      .wb_en(o_wb_witf_pop_en),
      .flush_witf(flush_witf)
  );

  //--------------ram-axi--------------//
  
  wire          axi_slave_arready;

  wire          axi_slave_rvalid;
  wire          axi_slave_rlast ;
  wire [1:0]    axi_slave_rresp ;
  wire [63:0]   axi_slave_rdata ;
  wire [3:0]    axi_slave_rid   ;

  wire          axi_slave_awready;

  wire          axi_slave_wready;

  wire          axi_slave_bvalid;
  wire [1:0]    axi_slave_bresp ;
  wire [3:0]    axi_slave_bid   ;

  ram_axi #(
    .AWIDTH(32), // Address width
    .DWIDTH(64), //Data width (only 32bits or 64bits)
    .DSIZE (8 ) 
  ) ram_axi (.clk(clk),.rst(rst),
    .o_axi_slave_arready(axi_slave_arready),

    .i_axi_slave_arvalid(axi_master_arvalid),
    .i_axi_slave_araddr (axi_master_araddr ),
    .i_axi_slave_arid   (axi_master_arid   ),
    .i_axi_slave_arlen  (axi_master_arlen  ),
    .i_axi_slave_arsize (axi_master_arsize ),
    .i_axi_slave_arburst(axi_master_arburst),
    
    // r
    .i_axi_slave_rready(axi_master_rready),

    .o_axi_slave_rvalid(axi_slave_rvalid),
    .o_axi_slave_rlast (axi_slave_rlast ),
    .o_axi_slave_rresp (axi_slave_rresp ),
    .o_axi_slave_rdata (axi_slave_rdata ),
    .o_axi_slave_rid   (axi_slave_rid   ),
    
    // aw
    .o_axi_slave_awready(axi_slave_awready),

    .i_axi_slave_awvalid(axi_master_awvalid),
    .i_axi_slave_awaddr (axi_master_awaddr ),
    .i_axi_slave_awid   (axi_master_awid   ),
    .i_axi_slave_awlen  (axi_master_awlen  ),
    .i_axi_slave_awsize (axi_master_awsize ),
    .i_axi_slave_awburst(axi_master_awburst),

    // w
    .o_axi_slave_wready(axi_slave_wready),

    .i_axi_slave_wvalid(axi_master_wvalid),
    .i_axi_slave_wdata (axi_master_wdata ),
    .i_axi_slave_wstrb (axi_master_wstrb ),
    .i_axi_slave_wlast (axi_master_wlast ),

    // b
    .i_axi_slave_bready(axi_master_bready),

    .o_axi_slave_bvalid(axi_slave_bvalid),
    .o_axi_slave_bresp (axi_slave_bresp ),
    .o_axi_slave_bid   (axi_slave_bid)
);

  //------------cache data array(ram)------------//
  
  wire  [127:0]  sram_icache_rdata [3:0];
  
  genvar i ;
  generate
    for( i = 0 ; i < 4 ; i = i + 1) begin
      S011HD1P_X32Y2D128_BW icache_data_array(
          .Q(sram_icache_rdata[i]), 
          .CLK(clk), 
          .CEN(~icache_sram_cen[i]), 
          .WEN(~icache_sram_wen[i]), 
          .BWEN(~icache_sram_wmask[i]),
          .A(icache_sram_addr[i]), 
          .D(icache_sram_wdata[i])
      );      
    end
  endgenerate

 
  wire  [127:0]  sram_dcache_rdata [3:0];  

  generate
    for( i = 0 ; i < 4 ; i = i + 1) begin
      S011HD1P_X32Y2D128_BW dcache_data_array(
          .Q(sram_dcache_rdata[i]), 
          .CLK(clk), 
          .CEN(~dcache_sram_cen[i]), 
          .WEN(~dcache_sram_wen[i]), 
          .BWEN(~dcache_sram_wmask[i]),
          .A(dcache_sram_addr[i]), 
          .D(dcache_sram_wdata[i])
      );      
    end
  endgenerate
  
  assign Inst=wb_inst;
  assign pc=wb_pc;
  assign valid=wb_valid;

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask