module ContrGen(
    input[6:0] opcode,
    input [2:0] func3,
    input [6:0] func7,
    output reg [3:0] ALUct,//加法器加、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出
    output [2:0] Extop,//六种指令格式立即数
    output RegWr,//结果写回寄存器
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg ALUBsr//ALUBsr->0:Imm ALUBsr->1:R_sr2
);

    MuxKeyInternal #(3,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
    7'b0010011,3'd2,
    7'b0000011,3'd2,
    7'b0110011,3'd1
    }));

    MuxKeyInternal #(2,3,1,1) isRegWr(.out(RegWr),.key(Extop),.default_out(1'b0),.lut({
    3'd1,1'b1,
    3'd2,1'b1
    }));

    always @(*) begin
        casez ({func7,func3,opcode})
            17'bzzzzzzz_000_0010011:begin
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=1'b1;
            end
            default: begin
                ALUct=4'b0001;ALUAsr=1'b0;ALUBsr=1'b0;
            end
        endcase
        end

endmodule

