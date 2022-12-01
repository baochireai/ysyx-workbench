import "DPI-C" function void setebreak();

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

module top(
    input clk,
    input rst,//高电平有效
    // input [31:0] Inst,
    output [31:0] Inst,
    output [63:0] pc
);
    wire [63:0] raddr,rdata,waddr,wdata;
    wire [7:0] wmask;

    always @(*) begin
        pmem_read(raddr, rdata);
        //pmem_write(waddr, wdata, wmask);
    end
    
    //wire [63:0] pc;
    //wire [31:0] Inst;
    
    assign raddr=pc;
    assign Inst=(pc[2:0]==3'd0)?rdata[31:0]:rdata[63:32];
    
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

    PC PC(.clk(clk),.rst(rst),.isIntrPC(isIntrPC),.NextPC(NextPC),.IntrPC(IntrPC),.pc(pc));
    

    GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero));
    RegisterFile RegisterFile(.rs1(Inst[19:15]),.rs2(Inst[24:20]),.waddr(Inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
                .clk(clk),.wdata(RegWdata),.wen(RegWr));

    wire isTuncate,isSext;
    ContrGen ContrGen(.opcode(Inst[6:0]),.func3(Inst[14:12]),.func7(Inst[31:25]),.ALUct(ALUct),.Extop(Extop),
      .RegWr(RegWr),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.Branch(Branch),.MemOP(MemOP),.MemWr(MemWr),.RegSrc(RegSrc),
      .isTuncate(isTuncate),.isSext(isSext),.IntrEn(IntrEn));
    
    ImmGen ImmGen(.Inst(Inst[31:7]),.Extop(Extop),.Imm(Imm));

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
