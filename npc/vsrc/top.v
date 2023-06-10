`include "defines.v"
import "DPI-C" function void setebreak();

module top(
    input clk,
    input rst,//高电平有效
    // input [31:0] Inst,
    output [31:0] Inst,
    output [63:0] pc
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

    wire ifu_is_jump;    
    wire [63:0] ifu_JumpPc;
    wire ifu_isIntrPC;
    wire [63:0] ifu_IntrPC;
    //handshakes
    wire ifu_arvalid;
    wire [`MemAddrBus-1:0] ifu_raddr;
    wire  ifu_ready;
    //RAM to IFU
    wire ram_arready;
    wire [`MemDataBus-1:0] ram_rdata;
    wire ram_rvalid;
    wire [1:0] ram_rresp;    


    // Write address channel signals
    wire [`MemAddrBus-1:0] AWADDR;
     wire AWVALID;
     wire AWREADY;

    // Write data channel signals
     wire [`MemDataBus-1:0] WDATA;//only 32bits or 64bits
     wire WVALID;
     wire WREADY;
    wire[7:0] WSTRB;//indicate which byte is write enabled.

    // Write response channel signals
    wire BVALID;
    wire [1:0] BRESP;//2'b00 正常访问成功 2'b01独占访问成功 2'b10 SLVERR 2'b11 DCERR互连解码错误
    wire BREADY;
    
    wire [`RegWidth-1:0] id_pc;
    wire [`INSTWide-1:0] id_inst;
    wire ifu_valid,ifu_ready,idu_valid,idu_ready,exu_valid,exu_ready,lsu_valid,lsu_ready,wb_valid,wb_ready;


    IFU IFU(.clk(clk),.rst(rst),.is_jump(ifu_is_jump),.JumpPc(ifu_JumpPc),.isIntrPC(ifu_isIntrPC),.IntrPC(ifu_IntrPC),
          .ARVALID(ifu_arvalid),.ARADDR(ifu_raddr),.ARREADY(ram_arready), .RREADY(ifu_ready),.inst_i(ram_rdata),.RVALID(ram_rvalid),
          .inst_o(id_inst),.pc_o(id_pc),
          .ifu_valid(ifu_valid),.ifu_ready(ifu_ready),.idu_ready(idu_ready),.wb_valid(wb_valid));
    
    ram_axi_lite ram_axi_lite_u(clk,rst,AWADDR,AWVALID,AWREADY,WDATA,WVALID,WREADY,WSTRB,BVALID,BRESP,BREADY,
                              ifu_raddr,ifu_arvalid,ram_arready,ram_rdata,ram_rresp,ram_rvalid,ifu_ready);

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
    //wire [`INSTWide-1:0] ex_inst;
    IDU IDU(.clk(clk),.rst(rst),.id_inst(id_inst),.id_pc(id_pc),.R_rs1_i(R_rs1),.R_rs2_i(R_rs2),.rs1(rs1),.rs2(rs2),.rd(rd),.RegWr_d(RegWr_d),.isRAW(isRAW),.witf_full(witf_full),.ALUct(exu_ALUct),.Imm(exu_Imm),
      .ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.inst_o(ex_inst),.pc_o(ex_pc),.R_rs1_o(ex_Rrs1),.R_rs2_o(ex_Rrs2),.RegWr(exu_RegWr),.Branch(exu_Branch),.MemOP(exu_MemOP),.MemWr(exu_MemWr),.RegSrc(exu_RegSrc),
      .isTuncate(exu_isTuncate),.isSext(exu_isSext),.IntrEn(exu_IntrEn),
      .idu_valid(idu_valid),.idu_ready(idu_ready),.exu_ready(exu_ready),.ifu_valid(ifu_valid));
    
    wire [`RegWidth-1:0]mem_Rrs1,mem_Rrs2;
    wire [2:0] mem_MemOP;
    wire mem_MemWr;
    wire mem_IntrEn;
    wire [1:0] lsu_RegSrc;
    wire lsu_Regwr;
    wire [`RegWidth-1:0] lsu_pc;
    wire [`INSTWide-1:0] lsu_inst;


    EXU EXU(.clk(clk),.rst(rst),.exu_inst(ex_inst),.exu_pc(ex_pc),.ALUAsr(exu_ALUAsr),.ALUBsr(exu_ALUBsr),.ALUct(exu_ALUct),
          .isTuncate(exu_isTuncate),.isSext(exu_isSext),.Regwr_i(exu_RegWr),.MemOP_i(exu_MemOP),.MemWr_i(exu_MemWr),.IntrEn(exu_IntrEn), .Branch(exu_Branch),.RegSrc(exu_RegSrc),
          .R_rs1(ex_Rrs1),.R_rs2(ex_Rrs2),.Imm(exu_Imm),
          .wb_ALUres(ALUres),.Regwr_o(lsu_Regwr),.R_rs1_o(mem_Rrs1),.R_rs2_o(mem_Rrs2),.MemOP_o(mem_MemOP),.MemWr_o(mem_MemWr),.IntrEn_o(mem_IntrEn),
          .NextPC(ifu_JumpPc),.is_jump(ifu_is_jump),.RegSrc_o(lsu_RegSrc),.inst_o(lsu_inst),.pc_o(lsu_pc),
          .idu_valid(idu_valid),.lsu_ready(lsu_ready),.exu_ready(exu_ready),.exu_valid(exu_valid));    

    wire wb_IntrEn;
    wire [1:0] wb_RegSrc;
    wire wb_RegWr;
    wire [`RegWidth-1:0] wb_pc;
    wire [`INSTWide-1:0] wb_inst;
    wire [`RegWidth-1:0] wb_ALUres;
    wire [`RegWidth-1:0] memout;
    wire [`RegWidth-1:0] wb_Rrs1;

    LSU LSU(.clk(clk),.rst(rst),.addr(ALUres),.wdata(mem_Rrs2),.MemOP(mem_MemOP),.we(mem_MemWr),.dataout(memout),.clint_mtip(clint_mtip),
            .IntrEn_i(mem_IntrEn),.RegWdata_src_i(lsu_RegSrc),.RegWr_i(lsu_Regwr),.lsu_inst(lsu_inst),.lsu_pc(lsu_pc),.R_rs1_i(mem_Rrs1),
            .IntrEn_o(wb_IntrEn),.RegWdata_src_o(wb_RegSrc),.RegWr_o(wb_RegWr),.inst_o(wb_inst),.pc_o(wb_pc),.R_rs1_o(wb_Rrs1),
            .ALUres_o(wb_ALUres),
            .lsu_valid(lsu_valid),.lsu_ready(lsu_ready),.wb_ready(wb_ready),.exu_valid(exu_valid));

    WB WB(.clk(clk),.rst(rst),.IntrEn(wb_IntrEn),.clint_mtip(clint_mtip),.Wdata_src(wb_RegSrc),.RegWr(wb_RegWr),.wb_pc(wb_pc),.wb_inst(wb_inst),
      .ALUres(wb_ALUres),.MemOut(memout),.R_rs1_i(wb_Rrs1),.isIntrPC(ifu_isIntrPC),.IntrPC(ifu_IntrPC),.rs1(rs1),.rs2(rs2),.R_rs1(R_rs1),.R_rs2(R_rs2),
      .lsu_valid(lsu_valid),.ifu_ready(ifu_ready),.wb_ready(wb_ready),.wb_valid(wb_valid));

    witf witf(.clk(clk),.rst(rst),.rs1(rs1),.rs2(rs2),.rd(rd),.isRAW(isRAW),.Regwr(RegWr_d),.isWB(wb_RegWr),.witf_full(witf_full),.witf_empty(witf_empty));

    always @(*) begin
        if (Inst==32'h00100073)
            setebreak();
    end

    assign Inst=wb_inst;
    assign pc=wb_pc;

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask
