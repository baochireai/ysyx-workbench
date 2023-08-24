`include "defines.v"

module top(
    input clk,
    input rst,//高电平有效
    // input [31:0] Inst,
    output [31:0] Inst,
    output [63:0] pc,
    output valid
);
    
    wire [63:0] R_rs1;
    wire [63:0] R_rs2;

    wire [2:0] Extop;


    wire [63:0] ALUres;

    wire [63:0] waddr;
    
    wire Less,Zero;

    wire [63:0] MemOut;

    wire [63:0] RegWdata;



    wire IntrEn;

    wire [63:0] IntrOut;

    wire clint_mtip;

    wire clint_we,clint_re;

    wire [63:0] clint_dout;


    //IDU to regs
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire [`RegAddrBus] rd;

    wire RegWr_d;//to wirf
    
    wire ifu_isIntrPC;
    wire [63:0] ifu_IntrPC;
    //handshakes
    wire [`MemAddrBus-1:0] ifu_raddr;
    wire  ifu_ready;

    
    wire idu_valid,idu_ready,exu_valid,exu_ready,lsu_valid,lsu_ready,wb_valid,wb_ready;


    wire icache_ready;

    wire ifu_fetch_ready,icache_valid;
    wire [31:0] icache_inst_o;


  /*------------IF----------------*/

    //cache req
    wire ifu_cache_req;
    wire [31:0] ifu_cache_addr;
    // ifu outputs
    wire [`RegWidth-1:0] ifu_pc_o;
    wire [`INSTWide-1:0] ifu_inst_o;
    //shake hands to next stage
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
          .id_allow_in(id_allow_in),if_ready_go(if_ready_go),.if_valid(if_valid));
  
  /*------------IF-ID pipe Regs------------*/

    wire [31:0] id_inst;
    wire [63:0] id_pc;
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
    wire exu_isTuncate,exu_isSext;
    wire [`RegWidth-1:0] ex_Rrs1,ex_Rrs2;
    wire exu_IntrEn;
    wire [4:0] exu_ALUct;
    wire [63:0] exu_Imm;
    wire exu_ALUAsr;
    wire [1:0] exu_ALUBsr;
    wire [`RegWidth-1:0] ex_pc;
    wire [`INSTWide-1:0] ex_inst;
    wire exu_RegWr;
    wire [2:0] exu_Branch;
    wire [2:0] exu_MemOP;
    wire exu_MemWr;
    wire [1:0] exu_RegSrc;
    //from witf
    wire isRAW;
    wire witf_full,witf_empty;
    wire idu_isebreak;
    //wire [`INSTWide-1:0] ex_inst;
    IDU IDU(.clk(clk),.rst(rst),.id_inst(id_inst),.id_pc(id_pc),.flush_pipeline(exu_IsJump),.R_rs1_i(R_rs1),.R_rs2_i(R_rs2),.rs1(rs1),.rs2(rs2),.rd(rd),
      .disp_en(RegWr_d),.isRAW(isRAW),.witf_full(witf_full),.ALUct(exu_ALUct),.Imm(exu_Imm),.ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.inst_o(ex_inst),
      .pc_o(ex_pc),.R_rs1_o(ex_Rrs1),.R_rs2_o(ex_Rrs2),.RegWr(exu_RegWr),.Branch(exu_Branch),.MemOP(exu_MemOP),.MemWr(exu_MemWr),.RegSrc(exu_RegSrc),.isebreak(idu_isebreak),
  .isTuncate(exu_isTuncate),.isSext(exu_isSext),.IntrEn(exu_IntrEn),.idu_valid(idu_valid),.idu_ready(idu_ready),.exu_ready(exu_ready),.ifu_valid(if_to_id_valid));
    
    wire [`RegWidth-1:0]mem_Rrs1,mem_Rrs2;
    wire [2:0] mem_MemOP;
    wire mem_MemWr;
    wire mem_IntrEn;
    wire [1:0] lsu_RegSrc;
    wire lsu_Regwr;
    wire [`RegWidth-1:0] lsu_pc;
    wire [`INSTWide-1:0] lsu_inst;
    
    wire exu_IsJump; 
    wire [63:0] exu_JumpPc;

    EXU EXU(.clk(clk),.rst(rst),.exu_inst(ex_inst),.exu_pc(ex_pc),.ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.ALUct(exu_ALUct),
          .isTuncate(exu_isTuncate),.isSext(exu_isSext),.Regwr_i(exu_RegWr),.MemOP_i(exu_MemOP),.MemWr_i(exu_MemWr),.IntrEn(exu_IntrEn), .Branch(exu_Branch),.RegSrc(exu_RegSrc),
          .R_rs1(ex_Rrs1),.R_rs2(ex_Rrs2),.Imm(exu_Imm),
          .wb_ALUres(ALUres),.Regwr_o(lsu_Regwr),.R_rs1_o(mem_Rrs1),.R_rs2_o(mem_Rrs2),.MemOP_o(mem_MemOP),.MemWr_o(mem_MemWr),.IntrEn_o(mem_IntrEn),
          .NextPC(exu_JumpPc),.is_jump(exu_IsJump),.RegSrc_o(lsu_RegSrc),.inst_o(lsu_inst),.pc_o(lsu_pc),
          .idu_valid(idu_valid),.lsu_ready(lsu_ready),.exu_ready(exu_ready),.exu_valid(exu_valid));    

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
      .ALUres(wb_ALUres),.MemOut(memout),.R_rs1_i(wb_Rrs1),.wb_en(witf_wb_en),.isIntrPC(ifu_isIntrPC),.IntrPC(ifu_IntrPC),.rs1(rs1),.rs2(rs2),.R_rs1(R_rs1),.R_rs2(R_rs2),
      .lsu_valid(lsu_valid),.ifu_ready(ifu_ready),.wb_ready(wb_ready),.wb_valid(wb_valid));

    witf witf(.clk(clk),.rst(rst),.rs1(rs1),.rs2(rs2),.rd(rd),.isRAW(isRAW),.disp_en(RegWr_d),.wb_en(witf_wb_en),.witf_full(witf_full),.witf_empty(witf_empty));

    assign Inst=wb_inst;
    assign pc=wb_pc;
    assign valid=lsu_valid;

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask
