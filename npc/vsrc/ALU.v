module ALU(
    input ALUAsr,
    input [63:0] PC,
    input [63:0] R_rs1,
    input ALUBsr,
    input [63:0] Imm,
    input [63:0] R_rs2,
    input [3:0] ALUct,
    output [63:0] ALUres
);

    wire [63:0] ALUA,ALUB;
    assign ALUA=ALUAsr?R_rs1:PC;
    assign ALUB=ALUBsr?R_rs2:Imm;

    MuxKeyInternal #(1,4,64,1) deExtop(.out(ALUres),.key(ALUct),.default_out(64'd0),.lut({
    4'b0000,ALUA+ALUB
    }));

endmodule
