`include "defines.v"
import "DPI-C" function void setebreak();

module top(
    input clk,
    input rst,//高电平有效
    // input [31:0] Inst,
    output [31:0] Inst,
    output [63:0] pc
);
    //IF取值
    // wire [63:0] raddr,rdata;
    // assign raddr=pc;
    // always @(*) begin
    //     pmem_read(raddr[31:0], rdata);
    // end
    
    wire [63:0] R_rs1;
    wire [63:0] R_rs2;

    wire [4:0] ALUct;
    wire [2:0] Extop;
    wire RegWr;
    wire ALUAsr;
    wire [1:0] ALUBsr;

    wire [63:0] Imm;

    wire [63:0] ALUres;

    wire [63:0] NextPC;

    wire [2:0] Branch;
    wire [63:0] waddr;
    
    wire Less,Zero;

    wire [2:0] MemOP;
    wire [1:0] RegSrc;
    wire MemWr;
    wire [63:0] MemOut;

    wire [63:0] RegWdata;

    wire isIntrPC;

    wire [63:0] IntrPC;

    wire IntrEn;

    wire [63:0] IntrOut;

    wire clint_mtip;

    wire clint_we,clint_re;

    wire [63:0] clint_dout;

    //IFU to RAM
    wire ifu_arvalid;
    wire [`MemAddrBus-1:0] ifu_raddr;
    wire  ifu_ready;
    //IFU to ID

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
    wire is_jump;
    wire [`RegWidth-1:0] id_pc;
    wire [`INSTWide-1:0] id_inst;

    wire [`RegWidth-1:0] ex_pc;
    wire [`INSTWide-1:0] ex_inst;

    //IDU to regs
    wire [4:0] rs1;
    wire [4:0] rs2;
    /* verilator lint_off PINMISSING */
    IFU IFU(.clk(clk),.rst(rst),.is_jump(is_jump),.JumpPc(NextPC),.isIntrPC(isIntrPC),.IntrPC(IntrPC),.ARVALID(ifu_arvalid),.ARADDR(ifu_raddr),.ARREADY(ram_arready),
            .RREADY(ifu_ready),.inst_i(ram_rdata),.RVALID(ram_rvalid),.inst_o(id_inst),.pc_o(id_pc));
    /* verilator lint_on PINMISSING */            
    
    ram_axi_lite ram_axi_lite_u(clk,rst,AWADDR,AWVALID,AWREADY,WDATA,WVALID,WREADY,WSTRB,BVALID,BRESP,BREADY,
                              ifu_raddr,ifu_arvalid,ram_arready,ram_rdata,ram_rresp,ram_rvalid,ifu_ready);

    wire isTuncate,isSext;
    //wire [`INSTWide-1:0] ex_inst;
    /* verilator lint_off PINMISSING */
    IDU IDU(.clk(clk),.rst(rst),.id_inst(id_inst),.id_pc(id_pc),.R_rs1_i(R_rs1),.R_rs2_i(R_rs2),.rs1(rs1),.rs2(rs2),.ALUct(ALUct),.Imm(Imm),
      .ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.inst_o(ex_inst),.pc_o(ex_pc),.RegWr(RegWr),.Branch(Branch),.MemOP(MemOP),.MemWr(MemWr),.RegSrc(RegSrc),
      .isTuncate(isTuncate),.isSext(isSext),.IntrEn(IntrEn));
    /* verilator lint_on PINMISSING */
    
    wire [`RegWidth-1:0]mem_Rrs1,mem_Rrs2;
    wire [2:0] mem_MemOP;
    wire mem_MemWr;
    wire mem_IntrEn;
    wire [1:0] BW_RegSrc;

    EXU EXU(.clk(clk),.rst(rst),.exu_inst(ex_inst),.exu_pc(ex_pc),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.ALUct(ALUct),
          .isTuncate(isTuncate),.isSext(isSext),.MemOP_i(MemOP),.MemWr_i(MemWr),.IntrEn(IntrEn), .Branch(Branch),.RegSrc(RegSrc),
          .R_rs1(R_rs1),.R_rs2(R_rs2),.Imm(Imm),
          .wb_ALUres(ALUres),.R_rs1_o(mem_Rrs1),.R_rs2_o(mem_Rrs2),.MemOP_o(mem_MemOP),.MemWr_o(mem_MemWr),.IntrEn_o(mem_IntrEn),
          .NextPC(NextPC),.is_jump(is_jump),.RegSrc_o(BW_RegSrc),.inst_o(Inst),.pc_o(pc));    

    RegisterFile RegisterFile(.rs1(rs1),.rs2(rs2),.waddr(Inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
                .clk(clk),.wdata(RegWdata),.wen(RegWr));

    
    DataMem DataMem(.clk(clk),.Addr(ALUres),.MemOP(mem_MemOP),.DataIn(mem_Rrs2),.WrEn(mem_MemWr),.DataOut(MemOut),.clint_we(clint_we),.clint_re(clint_re));

    MuxKeyInternal #(3,2,64,1) RegWsrcMux(.out(RegWdata),.key(BW_RegSrc),.default_out(64'd0),.lut({
        2'd0,ALUres,
        2'd1,clint_re?clint_dout:MemOut,//clint memory map
        2'd2,IntrOut
    }));

    Intr IntrUnit(.clk(clk),.IntrEn(mem_IntrEn),.clint_mtip(clint_mtip),.pc(pc),.R_rs1(mem_Rrs1),.zimm(Inst[19:15]),.csr(Inst[31:20]),.func3(Inst[14:12]),
      .isIntrPC(isIntrPC),.IntrPC(IntrPC),.dout(IntrOut));

    clint clintU(.clk(clk),.clint_din(mem_Rrs2),.clint_addr(ALUres),.we(clint_we),.re(clint_re),
                 .clint_mtip(clint_mtip),.clint_dout(clint_dout));
    always @(*) begin
        if (Inst==32'h00100073)
            setebreak();
    end

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask
