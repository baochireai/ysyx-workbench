`include "defines.v"

module top(
    input clk,
    input rst,//高电平有效
    // input [31:0] Inst,
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
          .is_jump(exu_IsJump),.JumpPc(exu_JumpPc),
          //2. intr jump from wb
          .isIntrPC(ifu_isIntrPC),.IntrPC(ifu_IntrPC),
          //3. ebreak from id
          .isebreak(idu_isebreak),
          //4. cache inteface - icache fetch
          .cache_req(ifu_cache_req),.addr_inst(ifu_cache_addr),.cache_ready(icache_ready),
          //5. cache inteface - icache data
          .inst_i(icache_inst_o),.inst_valid(icache_valid),
          //6. output for next stage
          .inst_o(ifu_inst_o),.pc_o(ifu_pc_o),
          //7. pipe shake hands
          .id_allow_in(id_allow_in),if_ready_go(if_ready_go),.if_valid(if_valid)
    );
  
  /*------------IF-ID pipe Regs------------*/
    // 1. pipe regs
    wire [31:0] id_inst;
    wire [63:0] id_pc;
    // 2. shake hands
    wire id_allow_in,if_to_id_valid;

    IDRegs IDRegs(.clk(clk),.rst(rst),
        // 1. input from pre stage
        .i_pc(ifu_pc_o),.i_inst(ifu_inst_o),
        // 2. output to next satge
        .id_inst(id_inst),.id_pc(id_pc) ,
        // 3. pipe shake hands
        // 3.1 sh of pre stage
        .if_ready_go(if_ready_go),.if_valid(if_valid),.id_allow_in(id_allow_in),
        // 3.2 sh of next stage
        .id_ready(idu_ready),.id_valid(if_to_id_valid),
    );

  /*--------------------ID-----------------*/
    //from witf
    wire isRAW;
    wire witf_full,witf_empty;

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
    wire o_id_IntrEn;
    // 3.2 operate data for next stage
    wire [`RegWidth-1:0] o_id_Rrs1,o_id_Rrs2;
    wire [63:0] o_id_Imm;
    wire [`RegWidth-1:0] o_id_pc;
    wire [`INSTWide-1:0] o_id_inst;

    // 4. outputs for pre stage (ebreak inst)
    wire idu_isebreak;    

    // 6. shake hands
    wire idu_ready;
    wire id_to_exu_valid;

    IDU IDU(.clk(clk),.rst(rst),
      // 1. inputs from pre stage
      .id_inst(id_inst),.id_pc(id_pc),
      // 2. jump from exu
      .flush_pipeline(exu_IsJump),
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
      .IntrEn(o_id_IntrEn),    
      // 5.2 operate data 
      .Imm(o_id_Imm),.inst_o(o_id_inst),.pc_o(o_id_pc),.R_rs1_o(o_id_Rrs1),.R_rs2_o(o_id_Rrs2),
      // 6. outputs for pre stage(ebreak inst)
      .isebreak(idu_isebreak),
      // 7. shake hands
      .idu_valid(idu_valid),.idu_ready(idu_ready),.exu_allow_in(),.id_to_exu_valid(id_to_exu_valid)
    );
    
  /*--------------------ID to EXU Regs-----------------*/

    // 1. ALU ctrl 
    wire                   exu_ALUAsr,
    wire [1:0]             exu_ALUBsr,
    wire [4:0]             exu_ALUct,
    wire                   exu_isTuncate,
    wire                   exu_isSext,
    // 2. branch ctrl 
    wire [2:0]             exu_Branch,

    // 3. mem op    
    wire [2:0]             exu_MemOP_i,
    wire                   exu_MemWr_i,

    // 4. regs wb    
    wire                   exu_Regwr_i,
    wire [1:0]             exu_RegSrc,//写回地址 

    // 5. intr insto_
    wire                   exu_IntrEn,    
    // 6. operate data    
    wire [`RegWidth-1:0]   exu_R_rs1,
    wire [`RegWidth-1:0]   exu_R_rs2,//mem wdata
    wire [`RegWidth-1:0]   exu_Imm,
    wire [`INSTWide-1:0]   exu_inst,
    wire [`RegWidth-1:0]   exu_pc,  

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
      .i_MemOP_i(o_id_MemOP),.i_MemWr_i(o_id_MemWr),
      // 1.4 regs wb    
      .i_Regwr_i(o_id_RegWr),.i_RegSrc (o_id_RegSrc),
      // 1.5 intr inst
      .i_IntrEn(o_id_IntrEn),    
      // 1.6 operate data    
      .i_R_rs1(o_id_Rrs1),.i_R_rs2(o_id_Rrs2),.i_Imm(o_id_Imm),.i_exu_inst(o_id_inst),.i_exu_pc(o_id_pc),  

      // 2. outputs for exu 
      // 2.1 ALU ctrl 
      .o_ALUAsr(exu_ALUAsr),.o_ALUBsr(exu_ALUBsr),.o_ALUct(exu_ALUct),.o_isTuncate(exu_isTuncate),.o_isSext(exu_isSext),
      // 2.2 branch ctrl 
      .o_Branch(exu_Branch),
      // 2.3 mem op    
      .o_MemOP_i(exu_MemOP),.o_MemWr_i(exu_MemWr),
      // 2.4 regs wb    
      .o_Regwr_i(exu_RegWr),.o_RegSrc(exu_RegSrc),
      // 2.5 intr insto_
      .o_IntrEn(exu_IntrEn),    

      // 2.6 operate data    
      .o_R_rs1(exu_R_rs1),.o_R_rs2(exu_R_rs2),.o_Imm(exu_Imm),.o_exu_inst(exu_inst),.o_exu_pc(exu_pc),  

      // 3. shake hands signal 
      // 3.1 id
      .id_to_exu_valid(id_to_exu_valid),.exu_allow_in(exu_allow_in),
      // 3.2 exu 
      .exu_ready(exu_ready),.exu_valid(exu_valid) 
    );


  /*--------------------EXU-----------------*/

  // 1. decache req
  wire        o_exu_cache_req;
  wire        o_exu_cache_op;
  wire [1:0]  o_exu_cache_size;
  wire [63:0] o_exu_cache_addr;
  wire [63:0] o_exu_cache_wdata;
  wire [7:0]  o_exu_cache_wstrb;

  // 3. outputs for next stage 
  // 3.1 mem op(cache rdata process)
  wire [2:0]           o_exu_MemOP;
  wire                 o_exu_MemWr;
  // 3.2 alu res for reg wb(mem addr->cache req)
  wire [`RegWidth-1:0] o_exu_ALUres;
  // 3.3 reg wb
  wire                 o_exu_Regwr;
  wire [1:0]           o_exu_RegSrc;
  // 3.4 inst&pc
  wire[`INSTWide-1:0]  o_exu_inst;
  wire [`RegWidth-1:0] o_exu_pc;
  // 3.5 intr/csr
  wire                 o_exu_IntrEn;
  // 3.6 csr wdata
  wire [`RegWidth-1:0] o_exu_R_rs1; 

  // 4. outputs for pre stage
  // 4.1 for ifu 
  wire [`RegWidth-1:0] o_exu_NextPC;
  // 4.2 flush pipe
  wire                 o_exu_is_jump;
  
  // shake hands
  wire exu_ready ;
  wire exu_to_wb_valid ;   

  EXU EXU(.clk(clk),.rst(rst),
    // 1. inputs from pre stage 
    // 1.1 ctrl from id to ALU
    .ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.ALUct(exu_ALUct),.isTuncate(exu_isTuncate),.isSext(exu_isSext),
    // 1.2 branch ctrl 
    .Branch(exu_Branch),
    // 1.3 mem op    
    .MemOP_i(exu_MemOP),.MemWr_i(exu_MemWr),
    // 1.4 regs wb    
    .Regwr_i (exu_RegWr),.RegSrc_i(exu_RegSrc),
    // 1.5 intr inst
    .IntrEn_i(exu_IntrEn),    
    // 1.6 operate data    
    .R_rs1(exu_R_rs1),.R_rs2(exu_R_rs2),.Imm(exu_Imm),.exu_inst(exu_inst),.exu_pc(exu_pc),  

    // 2. decache req
    .req(o_exu_cache_req),.op(o_exu_cache_op),.size(o_exu_cache_size),.addr(o_exu_cache_addr),.wdata(o_exu_cache_wdata),.wstrb(o_exu_cache_wstrb),.cache_ready(cache_ready),

    // 3. outputs for next stage 
    // 3.1 mem op(cache rdata process)
    .MemOP(o_exu_MemOP),.MemWr(o_exu_MemWr),
    // 3.2 alu res for reg wb(mem addr->cache req)
    .ALUres(o_exu_ALUres),
    // 3.3 reg wb
    .Regwr (o_exu_Regwr),.RegSrc(o_exu_RegSrc),
    // 3.4 inst&pc
    .inst(o_exu_inst),.pc(o_exu_pc),
    // 3.5 intr/csr
    .IntrEn(o_exu_IntrEn),
    // 3.6 csr wdata
    .R_rs1(o_exu_R_rs1), 

    // 4. outputs for pre stage
    // 4.1 for ifu 
    .NextPC(o_exu_NextPC),
    // 4.2 flush pipe
    .is_jump(o_exu_is_jump),

    // 5. handshakes
    .exu_valid(exu_valid),.exu_ready(exu_ready),.wb_allow_in(wb_allow_in),.exu_to_lsu_valid(exu_to_lsu_valid) 
  ); 

    wire wb_IntrEn;
    wire [1:0] wb_RegSrc;
    wire wb_RegWr;
    wire [`RegWidth-1:0] wb_pc;
    wire [`INSTWide-1:0] wb_inst;
    wire [`RegWidth-1:0] wb_ALUres;
    wire [`RegWidth-1:0] memout;
    wire [`RegWidth-1:0] wb_Rrs1;
    wire witf_wb_en;

    LSU LSU(.clk(clk),.rst(rst),.addr(ALUres),.wdata(mem_Rrs2),.MemOP(mem_MemOP),.we(mem_MemWr),.dataout(memout),.clint_mtip(clint_mtip),
            .IntrEn_i(mem_IntrEn),.RegWdata_src_i(lsu_RegSrc),.RegWr_i(lsu_Regwr),.lsu_inst(lsu_inst),.lsu_pc(lsu_pc),.R_rs1_i(mem_Rrs1),
            .IntrEn_o(wb_IntrEn),.RegWdata_src_o(wb_RegSrc),.RegWr_o(wb_RegWr),.inst_o(wb_inst),.pc_o(wb_pc),.R_rs1_o(wb_Rrs1),
            .ALUres_o(wb_ALUres),
            .lsu_valid(lsu_valid),.lsu_ready(lsu_ready),.wb_ready(wb_ready),.exu_valid(exu_valid));

    WB WB(.clk(clk),.rst(rst),.IntrEn(wb_IntrEn),.clint_mtip(clint_mtip),.Wdata_src(wb_RegSrc),.RegWr(wb_RegWr),.wb_pc(wb_pc),.wb_inst(wb_inst),
      .ALUres(wb_ALUres),.MemOut(memout),.R_rs1_i(wb_Rrs1),.wb_en(witf_wb_en),.isIntrPC(ifu_isIntrPC),.IntrPC(ifu_IntrPC),.rs1(id_rs1),.rs2(id_rs2),.R_rs1(R_rs1),.R_rs2(R_rs2),
      .lsu_valid(lsu_valid),.ifu_ready(ifu_ready),.wb_ready(wb_ready),.wb_valid(wb_valid));

    witf witf(.clk(clk),.rst(rst),.rs1(id_rs1),.rs2(id_rs2),.rd(id_rd),.isRAW(isRAW),.disp_en(id_RegWr),.wb_en(witf_wb_en),.witf_full(witf_full),.witf_empty(witf_empty));

    assign Inst=wb_inst;
    assign pc=wb_pc;
    assign valid=lsu_valid;

RegisterFile RegisterFile(.rs1(rs1),.rs2(rs2),.waddr(wb_inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
            .clk(clk),.wdata(RegWdata),.wen(regfile_we));

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask
