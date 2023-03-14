module GenNextPC(
    input [2:0] Branch,//Branch 3'd0：dpc=pc+4; 3'd1:dpc=pc+imm 3'd2:dpc=imm+R_rs1 3'd4:相等 3'd5:不相等 3'd6:大于等于 3'd7:小于
    ////Branch 3'd0：等于; 3'd1:不等于 3'd2:dpc=pc+4; 3'd4:小于 3'd5:大于等于 3'd6:dpc=pc+imm（jal） 3'd7:dpc=imm+R_rs1（jalr）
    input [63:0] imm,
    input [63:0] PC,
    input [63:0] R_rs1,
    /* verilator lint_off UNUSED */
    input Less,
    input Zero,
    /* verilator lint_on UNUSED */
    output [63:0] NextPC
);

    wire PCAsrc,PCBsrc;

    MuxKeyInternal #(7,3,2,1) dePCsrc(.out({PCAsrc,PCBsrc}),.key(Branch),.default_out(2'b01),.lut({
        3'd0,((Zero==1)?2'b11:2'b01) ,
        3'd1,((Zero==1)?2'b01:2'b11) ,
        3'd2,2'b01 ,//01
        3'd4,((Less==1)?2'b11:2'b01),
        3'd5,((Less==1)?2'b01:2'b11),
        3'd6,2'b11 ,//11
        3'd7,2'b10
    }));
    
    wire [63:0] Asrc=PCAsrc?imm:64'd4;//PCAsrc 1->imm 0->4
    wire [63:0] Bsrc=PCBsrc?PC:R_rs1; //PCBsrc 1->PC 0->R_rs1

    assign NextPC=(Asrc+Bsrc)&64'hffffffff_ffff_fffe;//最后一位置零

endmodule
