import "DPI-C" function void set_invalid_inst();
module ContrGen(
    input[6:0] opcode,
    input [2:0] func3,
    input [6:0] func7,
    output reg [4:0] ALUct,//加法器加(b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、异或、逻辑或、逻辑与、直接输出(b0001)
    output [2:0] Extop,//六种指令格式立即数
    output RegWr,//结果写回寄存器
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    output reg [2:0] Branch,
    output MemWr,
    output [2:0] MemOP,
    output MemtoReg,
    output isTuncate,
    output isSext
);

    MuxKeyInternal #(11,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
    7'b0010011,3'd2,//addi srai andi slti sltiu xori slli srli ori
    7'b0000011,3'd2,//ld  lw lwu lbu lh lhu lb
    7'b0110011,3'd1,//add sub and sltu or slt mul divu remu xor sll
    7'b0010111,3'd5,//auipc
    7'b0110111,3'd5,//lui
    7'b1101111,3'd6,//jal
    7'b1100111,3'd2,//jalr
    7'b0100011,3'd3,//sd sh sb sw
    7'b1100011,3'd4,//beq bne bge blt bltu bgeu
    7'b0111011,3'd1,//addw sllw sraw mulw divw subw remw srlw divuw
    7'b0011011,3'd2//addiw  slliw sraiw srliw
    }));

    MuxKeyInternal #(4,3,1,1) isRegWr(.out(RegWr),.key(Extop),.default_out(1'b0),.lut({
    3'd1,1'b1,
    3'd2,1'b1,
    3'd5,1'b1,
    3'd6,1'b1
    //3'd7,1'b1
    }));

    always @(*) begin
        casez ({func7,func3,opcode})
            17'bzzzzzzz_000_0010011:begin//addi
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0010111:begin //auipc
                ALUct=5'b00000;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0110111:begin //lui
                ALUct=5'b00011;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_1101111:begin //jal
                ALUct=5'b00000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd1;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;//无条件跳转PC目标
            end
            17'bzzzzzzz_000_1100111:begin //jalr
                ALUct=5'b00000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd2;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;//无条件跳转寄存器目标 
            end
            17'bzzzzzzz_011_0100011:begin //sd
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b100;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0000011:begin //ld
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b100;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0110011:begin //add
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_000_0110011:begin //sub
                ALUct=5'b01000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0010011:begin //sltiu
                ALUct=5'b01010;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_1100011:begin //beq
                ALUct=5'b01000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd4;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_1100011:begin //bne
                ALUct=5'b01000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd5;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0000011:begin //lw
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b101;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_110_0000011:begin //lwu
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b001;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0111011:begin //addw
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_001_0100011:begin //sh
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b010;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_101_0010011:begin//srai
                ALUct=5'b01101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0000011:begin //lbu
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b011;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_111_0010011:begin //andi
                ALUct=5'b00111;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_001_0111011:begin//sllw
                ALUct=5'b00001;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_111_0110011:begin //and
                ALUct=5'b00111;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_011_0110011:begin //sltu
                ALUct=5'b01010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0010011:begin //xori
                ALUct=5'b00100;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_101_0111011:begin//sraw
                ALUct=5'b01101;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_110_0110011:begin //or
                ALUct=5'b00110;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0100011:begin //sb
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b011;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0011011:begin //addiw
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_101_1100011:begin //bge
                ALUct=5'b00010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd6;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_1100011:begin //blt
                ALUct=5'b00010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd7;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0100011:begin //sw
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b001;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_000_0111011:begin //mulw
                ALUct=5'b10001;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_100_0111011:begin //divw
                ALUct=5'b10010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_000_0111011:begin //subw
                ALUct=5'b01000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_110_0111011:begin //remw
                ALUct=5'b10000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_110_1100011:begin //bltu
                ALUct=5'b01010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd7;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_010_0110011:begin //slt
                ALUct=5'b00010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_0000011:begin //lh
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b110;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_101_0000011:begin //lhu
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b010;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0010011:begin//slli
                ALUct=5'b00001;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0010011:begin//srli
                ALUct=5'b00101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0011011:begin//slliw
                ALUct=5'b00001;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_101_0011011:begin//sraiw
                ALUct=5'b01101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_000_0110011:begin //mul
                ALUct=5'b10001;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0011011:begin//srliw
                ALUct=5'b00101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_101_0111011:begin//srlw
                ALUct=5'b00101;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_111_1100011:begin //bgeu
                ALUct=5'b01010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd6;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_111_1100011:begin //bgeu
                ALUct=5'b01010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd6;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_101_0110011:begin //divu
                ALUct=5'b11010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_111_0110011:begin //remu
                ALUct=5'b11000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_101_0111011:begin //divuw
                ALUct=5'b11010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_100_0110011:begin //xor
                ALUct=5'b00100;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0000011:begin //lb
                ALUct=5'b00000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b111;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_110_0010011:begin //ori
                ALUct=5'b00110;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_001_0110011:begin//sll
                ALUct=5'b00001;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            default: begin
                ALUct=5'b00001;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;set_invalid_inst();
            end
        endcase
        end

endmodule

