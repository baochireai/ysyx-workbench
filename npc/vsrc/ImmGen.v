module ImmGen(
    input [31:7] Inst,
    input [2:0] Extop,//指令格式
    output [63:0] Imm
);

    //3'd1 Imm_R
    MuxKeyInternal #(5,3,64,1) isRegWr(.out(Imm),.key(Extop),.default_out(64'd0),.lut({
    3'd2,{{52{Inst[31]}},Inst[31:20]},//Imm_I
    3'd3,{{52{Inst[31]}},Inst[31:25],Inst[11:7]},//Imm_S
    3'd4,{{51{Inst[31]}},Inst[31:31],Inst[7:7],Inst[30:25],Inst[11:8],1'b0},//Imm_B
    3'd5,{{32{Inst[31]}},Inst[31:12],12'd0},//Imm_U
    3'd6,{{43{Inst[31]}},Inst[31:31],Inst[19:12],Inst[20:20],Inst[30:21],1'b0}///Imm_J
    }));

endmodule
