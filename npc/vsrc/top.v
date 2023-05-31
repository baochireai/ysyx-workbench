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
    /* verilator lint_off PINMISSING */
    IFU IFU(.clk(clk),.rst(rst),.is_jump(is_jump),.JumpPc(NextPC),.isIntrPC(isIntrPC),.IntrPC(IntrPC),.ARVALID(ifu_arvalid),.ARADDR(ifu_raddr),.ARREADY(ram_arready),
            .RREADY(ifu_ready),.inst_i(ram_rdata),.RVALID(ram_rvalid),.inst_o(Inst),.pc_o(pc));
    /* verilator lint_on PINMISSING */            
    
    ram_axi_lite ram_axi_lite_u(clk,rst,AWADDR,AWVALID,AWREADY,WDATA,WVALID,WREADY,WSTRB,BVALID,BRESP,BREADY,
                              ifu_raddr,ifu_arvalid,ram_arready,ram_rdata,ram_rresp,ram_rvalid,ifu_ready);

    wire isTuncate,isSext;
    ContrGen ContrGen(.id_inst(Inst),.ALUct(ALUct),.Imm(Imm),
      .RegWr(RegWr),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.Branch(Branch),.MemOP(MemOP),.MemWr(MemWr),.RegSrc(RegSrc),
      .isTuncate(isTuncate),.isSext(isSext),.IntrEn(IntrEn));
      
    GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero),.is_jump(is_jump));
    RegisterFile RegisterFile(.rs1(Inst[19:15]),.rs2(Inst[24:20]),.waddr(Inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
                .clk(clk),.wdata(RegWdata),.wen(RegWr));

    ALU ALU(.ALUAsr(ALUAsr),.PC(pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr),.Imm(Imm),.R_rs2(R_rs2),.ALUct(ALUct),
            .ALUres(ALUres),.Less(Less),.Zero(Zero),.isTuncate(isTuncate),.isSext(isSext));
    
    DataMem DataMem(.clk(clk),.Addr(ALUres),.MemOP(MemOP),.DataIn(R_rs2),.WrEn(MemWr),.DataOut(MemOut),.clint_we(clint_we),.clint_re(clint_re));

    MuxKeyInternal #(3,2,64,1) RegWsrcMux(.out(RegWdata),.key(RegSrc),.default_out(64'd0),.lut({
        2'd0,ALUres,
        2'd1,clint_re?clint_dout:MemOut,//clint memory map
        2'd2,IntrOut
    }));

    Intr IntrUnit(.clk(clk),.IntrEn(IntrEn),.clint_mtip(clint_mtip),.pc(pc),.R_rs1(R_rs1),.zimm(Inst[19:15]),.csr(Inst[31:20]),.func3(Inst[14:12]),
      .isIntrPC(isIntrPC),.IntrPC(IntrPC),.dout(IntrOut));

    clint clintU(.clk(clk),.clint_din(R_rs2),.clint_addr(ALUres),.we(clint_we),.re(clint_re),
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
