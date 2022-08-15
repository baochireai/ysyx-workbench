module top(
    input clk,
    input rst,//高电平有效
    input [31:0] Inst,
    output [63:0] pc
);
    wire [63:0] R_rs1;
    wire [63:0] R_rs2;

    wire [3:0] ALUct;
    wire [2:0] Extop;
    wire RegWr;
    wire ALUAsr;
    wire ALUBsr;

    wire [63:0] Imm;

    wire [63:0] ALUres;

    PC PC(.clk(clk),.rst(rst),.pc(pc));

    RegisterFile RegisterFile(.rs1(Inst[19:15]),.rs2(Inst[24:20]),.waddr(Inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
                .clk(clk),.wdata(ALUres),.wen(RegWr));

    ContrGen ContrGen(.opcode(Inst[6:0]),.func3(Inst[14:12]),.func7(Inst[31:25]),
            .ALUct(ALUct),.Extop(Extop),.RegWr(RegWr),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr));
    
    ImmGen ImmGen(.Inst(Inst[31:7]),.Extop(Extop),.Imm(Imm));

    ALU ALU(.ALUAsr(ALUAsr),.PC(pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr),.Imm(Imm),.R_rs2(R_rs2),.ALUct(ALUct),.ALUres(ALUres));

endmodule

// export "DPI-C" task isEbreak;

// task isEbreak;
//     output bit IsEbreak;
//         IsEbreak = (Inst==32'h00100073)?1'b1:1'b0;
// endtask
