//桶形移位寄存器
module BarrelShifter #(DATA_LEN=64,SHT_LEN=6)(
    input [DATA_LEN-1:0] din,
    input [SHT_LEN-1:0] shamtin,
    input A_L,
    input L_R,
    input isTuncate,
    output [DATA_LEN-1:0] dout
);

    wire [SHT_LEN-1:0] shamt=shamtin&(isTuncate?6'b011111:6'b111111);

    wire[DATA_LEN-1:0] sra=$signed(din)>>>shamt;

    MuxKeyInternal #(4,2,DATA_LEN,1) ShifterMux(.out(dout),.key({A_L,L_R}),.default_out(64'd0),.lut({
        2'b01,din<<shamt,//逻辑左移
        2'b00,isTuncate?{32'd0,din[31:0]>>shamt}:din>>shamt,//逻辑右移
        2'b11,din<<<shamt,//算术左移
        2'b10,isTuncate?({{32{din[31]}},din[31:0]}>>shamt):sra//算术右移    ($signed(din<<2))>>>4; ( $signed(B) ) >>> A;
    }));


endmodule
