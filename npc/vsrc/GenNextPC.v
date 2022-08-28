module GenNextPC(
    input [2:0] Branch,
    input [63:0] imm,
    input [63:0] PC,
    input [63:0] R_rs1,
    output [63:0] NextPC
);

    wire PCAsrc,PCBsrc;

    MuxKeyInternal #(3,3,2,1) dePCsrc(.out({PCAsrc,PCBsrc}),.key(Branch),.default_out(2'b01),.lut({
        3'd0,2'b01,
        3'd1,2'b11,
        3'd2,2'b10
    }));
    
    wire [63:0] Asrc=PCAsrc?imm:64'd4;//PCAsrc 1->imm 0->4
    wire [63:0] Bsrc=PCBsrc?PC:R_rs1; //PCBsrc 1->PC 0->R_rs1

    assign NextPC=(Asrc+Bsrc)&64'hffffffff_ffff_fffe;//最后一位置零

endmodule
