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
        pmem_write(waddr, wdata, wmask);
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
    wire MemtoReg,MemWr;
    wire [63:0] MemOut;

    wire [63:0] RegWdata;

    PC PC(.clk(clk),.rst(rst),.NextPC(NextPC),.pc(pc));

    GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero));

    RegisterFile RegisterFile(.rs1(Inst[19:15]),.rs2(Inst[24:20]),.waddr(Inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
                .clk(clk),.wdata(RegWdata),.wen(RegWr));

    wire isTuncate,isSext;
    ContrGen ContrGen(.opcode(Inst[6:0]),.func3(Inst[14:12]),.func7(Inst[31:25]),.ALUct(ALUct),.Extop(Extop),
      .RegWr(RegWr),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.Branch(Branch),.MemOP(MemOP),.MemWr(MemWr),.MemtoReg(MemtoReg),
      .isTuncate(isTuncate),.isSext(isSext));
    
    ImmGen ImmGen(.Inst(Inst[31:7]),.Extop(Extop),.Imm(Imm));

    ALU ALU(.ALUAsr(ALUAsr),.PC(pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr),.Imm(Imm),.R_rs2(R_rs2),.ALUct(ALUct),
            .ALUres(ALUres),.Less(Less),.Zero(Zero),.isTuncate(isTuncate),.isSext(isSext));
    
    DataMem DataMem(.Addr(ALUres),.MemOP(MemOP),.DataIn(R_rs2),.WrEn(MemWr),.DataOut(MemOut));

    MuxKeyInternal #(2,1,64,1) RegWsrcMux(.out(RegWdata),.key(MemtoReg),.default_out(64'd0),.lut({
        1'b1,MemOut,
        1'b0,ALUres
    }));

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
