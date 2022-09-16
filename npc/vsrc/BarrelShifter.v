//桶形移位寄存器
module BarrelShifter #(DATA_LEN=64,SHT_LEN=6)(
    input [DATA_LEN-1:0] din,
    input [SHT_LEN-1:0] shamt,
    input A_L,
    input L_R,
    output [DATA_LEN-1:0] dout
);

    MuxKeyInternal #(4,2,DATA_LEN,1) ShifterMux(.out(dout),.key({A_L,L_R}),.default_out(64'd0),.lut({
        2'b00,din<<shamt,//算术左移
        2'b01,din>>shamt,//算术右移
        2'b10,din<<<shamt,//逻辑左移
        2'b11,din>>>shamt//逻辑右移
    }));


endmodule