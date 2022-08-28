module ALU(
    input ALUAsr,
    input [63:0] PC,
    input [63:0] R_rs1,
    input [1:0] ALUBsr,
    input [63:0] Imm,
    input [63:0] R_rs2,
    input [3:0] ALUct,
    output [63:0] ALUres
);

    wire [63:0] ALUA,ALUB;
    assign ALUA=ALUAsr?R_rs1:PC;
    
    MuxKeyInternal #(3,2,64,1) deALUBsr(.out(ALUB),.key(ALUBsr),.default_out(64'd0),.lut({
    2'b00,Imm,//加法
    2'b01,R_rs2,//直接输出
    2'b10,64'd4
    }));


    MuxKeyInternal #(2,4,64,1) deExtop(.out(ALUres),.key(ALUct),.default_out(64'd0),.lut({
    4'b0000,ALUA+ALUB,//加法
    4'b0001,ALUB//直接输出
    }));

endmodule
