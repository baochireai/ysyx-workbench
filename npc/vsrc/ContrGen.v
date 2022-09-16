import "DPI-C" function void set_invalid_inst();
module ContrGen(
    input[6:0] opcode,
    input [2:0] func3,
    input [6:0] func7,
    output reg [3:0] ALUct,//加法器加(4'b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出(4'b0001)
    output [2:0] Extop,//六种指令格式立即数
    output RegWr,//结果写回寄存器
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    output reg [2:0] Branch,
    output MemWr,
    output [2:0] MemOP,
    output MemtoReg
);

    MuxKeyInternal #(9,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
    7'b0010011,3'd2,//addi
    7'b0000011,3'd2,//ld 
    7'b0110011,3'd1,//add sub
    7'b0010111,3'd5,//auipc
    7'b0110111,3'd5,//lui
    7'b1101111,3'd6,//jal
    7'b1100111,3'd2,//jalr
    7'b0100011,3'd3,//sd
    7'b1100011,3'd4//beq bne
    }));

    MuxKeyInternal #(4,3,1,1) isRegWr(.out(RegWr),.key(Extop),.default_out(1'b0),.lut({
    3'd1,1'b1,
    3'd2,1'b1,
    3'd5,1'b1,
    3'd6,1'b1
    }));

    always @(*) begin
        casez ({func7,func3,opcode})
            17'bzzzzzzz_000_0010011:begin//addi
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_zzz_0010111:begin //auipc
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_zzz_0110111:begin //lui
                ALUct=4'b0001;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_zzz_1101111:begin //jal
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd1;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;//无条件跳转PC目标
            end
            17'bzzzzzzz_000_1100111:begin //jalr
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd2;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;//无条件跳转寄存器目标 
            end
            17'bzzzzzzz_011_0100011:begin //sd
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'd1;MemtoReg=1'b0;
            end
            17'bzzzzzzz_011_0000011:begin //ld
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd1;MemtoReg=1'b1;
            end
            17'b0000000_000_0110011:begin //add
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'b0100000_000_0110011:begin //sub
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_011_0010011:begin //sltiu
                ALUct=4'b1010;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_000_1100011:begin //beq
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd4;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            17'bzzzzzzz_001_1100011:begin //bne
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd5;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;
            end
            default: begin
                ALUct=4'b0001;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;set_invalid_inst();
            end
        endcase
        end

endmodule

