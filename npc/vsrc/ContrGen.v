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
    output MemtoReg,
    output isTuncate,
    output isSext
);

    MuxKeyInternal #(11,7,3,1) deExtop(.out(Extop),.key(opcode),.default_out(3'd0),.lut({
    7'b0010011,3'd2,//addi srai andi slti sltiu xori slli srli
    7'b0000011,3'd2,//ld  lw lwu lbu lh lhu
    7'b0110011,3'd1,//add sub and sltu or slt mul
    7'b0010111,3'd5,//auipc
    7'b0110111,3'd5,//lui
    7'b1101111,3'd6,//jal
    7'b1100111,3'd2,//jalr
    7'b0100011,3'd3,//sd sh sb sw
    7'b1100011,3'd4,//beq bne bge blt bltu bgeu
    7'b0111011,3'd1,//addw sllw sraw mulw divw subw remw srlw
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
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0010111:begin //auipc
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_0110111:begin //lui
                ALUct=4'b0011;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_zzz_1101111:begin //jal
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd1;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;//无条件跳转PC目标
            end
            17'bzzzzzzz_000_1100111:begin //jalr
                ALUct=4'b0000;ALUAsr=1'b0;ALUBsr=2'd2;Branch=3'd2;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;//无条件跳转寄存器目标 
            end
            17'bzzzzzzz_011_0100011:begin //sd
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b100;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0000011:begin //ld
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b100;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0110011:begin //add
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_000_0110011:begin //sub
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_011_0010011:begin //sltiu
                ALUct=4'b1010;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_1100011:begin //beq
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd4;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_1100011:begin //bne
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd5;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0000011:begin //lw
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b101;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_110_0000011:begin //lwu
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b001;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_000_0111011:begin //addw
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_001_0100011:begin //sh
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b010;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_101_0010011:begin//srai
                ALUct=4'b1101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0000011:begin //lbu
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b011;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_111_0010011:begin //andi
                ALUct=4'b0111;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_001_0111011:begin//sllw
                ALUct=4'b0001;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_111_0110011:begin //and
                ALUct=4'b0111;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_011_0110011:begin //sltu
                ALUct=4'b1010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_0010011:begin //xori
                ALUct=4'b0100;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0100000_101_0111011:begin//sraw
                ALUct=4'b1101;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_110_0110011:begin //or
                ALUct=4'b0110;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0100011:begin //sb
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b011;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_000_0011011:begin //addiw
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_101_1100011:begin //bge
                ALUct=4'b0010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd6;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_100_1100011:begin //blt
                ALUct=4'b0010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd7;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_010_0100011:begin //sw
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b1;MemOP=3'b001;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000001_000_0111011:begin //mulw
                ALUct=4'b1110;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_100_0111011:begin //divw
                ALUct=4'b1111;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_000_0111011:begin //subw
                ALUct=4'b1000;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_110_0111011:begin //remw
                ALUct=4'b1100;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_110_1100011:begin //bltu
                ALUct=4'b1010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd7;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b0000000_010_0110011:begin //slt
                ALUct=4'b0010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_001_0000011:begin //lh
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b110;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'bzzzzzzz_101_0000011:begin //lhu
                ALUct=4'b0000;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'b010;MemtoReg=1'b1;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0010011:begin//slli
                ALUct=4'b0001;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0010011:begin//srli
                ALUct=4'b0101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_001_0011011:begin//slliw
                ALUct=4'b0001;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0100000_101_0011011:begin//sraiw
                ALUct=4'b1101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000001_000_0110011:begin //mul
                ALUct=4'b1110;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'b000;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            17'b000000z_101_0011011:begin//srliw
                ALUct=4'b0101;ALUAsr=1'b1;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'b0000000_101_0111011:begin//srlw
                ALUct=4'b0101;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b1;isSext=1'b1;
            end
            17'bzzzzzzz_111_1100011:begin //bgeu
                ALUct=4'b1010;ALUAsr=1'b1;ALUBsr=2'd1;Branch=3'd6;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;
            end
            default: begin
                ALUct=4'b0001;ALUAsr=1'b0;ALUBsr=2'd0;Branch=3'd0;MemWr=1'b0;MemOP=3'd0;MemtoReg=1'b0;isTuncate=1'b0;isSext=1'b0;set_invalid_inst();
            end
        endcase
        end

endmodule

