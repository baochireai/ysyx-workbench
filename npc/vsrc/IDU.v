`include "defines.v"
import "DPI-C" function void setebreak();
module IDU(
    input clk,
    input rst,
    
    // 1. inputs from pre stage(ifu)
    input [`INSTWide-1:0] id_inst,
    input [`RegWidth-1:0] id_pc,

    // 2. jump from exu
    input flush_pipeline,
    
    // 3. register files read
    // 3.1 reg data in 
    input [`RegWidth-1:0] R_rs1_i,
    input [`RegWidth-1:0] R_rs2_i,
    // 3.2 reg index out
    output[`RegAddrBus] rs1,
    output[`RegAddrBus] rs2,

    // 4. witf for raw     
    // 4.1 raw check && fifo full
    input isRAW,
    input witf_full,
    // 4.2 disp inst info
    output[`RegAddrBus] rd,//rs1&&rs2 reuse signals of register file
    output disp_en,

    // 5. outputs for next stage
    // 5.1 ctrl sginals
    // 5.1.1 ALU opcode
    output reg [4:0] ALUct,//加法器加(b0000)、加法器减、移位（左移、逻辑右移、逻辑左移）、乘除、异或、逻辑或、逻辑与、直接输出(b0001)
    output reg ALUAsr,//ALUAsr->0:PC ALUAsr->1:R_sr1
    output reg [1:0] ALUBsr,//ALUBsr->0:Imm ALUBsr->1:R_sr2 ALUBsr->2:4
    output isTuncate,
    output isSext,    
    // 5.1.2 branch opcode
    output reg [2:0] Branch,
    // 5.1.3 mem opcode
    output MemWr,
    output [2:0] MemOP,//size 
    // 5.1.4 registers write ctrl
    output RegWr,
    output [1:0] RegSrc,
    // 5.1.5 indicate interrupt inst
    output IntrEn,    
    // 5.2 operate data
    output reg [`RegWidth-1:0] Imm,    
    output [`INSTWide-1:0] inst_o,
    output [`RegWidth-1:0] pc_o,
    output [`RegWidth-1:0] R_rs1_o,
    output [`RegWidth-1:0] R_rs2_o,

    // 6. outputs for pre stage(ebreak inst)
    output isebreak,
    
    // 7. shake hands
    // 7.1 ifu2id regs
    input id_valid,
    output id_ready,
    // 7.2 id2exu regs
    output id_to_exu_valid,
    input exu_allowin

);

    // 1. shake hands 
    wire id_ready_go = (!witf_full & (!isRAW|flush_pipeline));
    assign id_ready = (~id_valid) | (id_ready_go & exu_allow_in);
    assign id_to_exu_valid = id_ready_go && id_valid ;

    // 2. regs file read && witf inst info
    assign rs1=id_inst[`inst_rs1];
    assign rs2=id_inst[`inst_rs2];

    // 3. disp inst info for witf
    assign rd=id_inst[`inst_rd];
    assign disp_en = RegWr & (!flush_pipeline) & (id_to_exu_valid && exu_allow_in) & (rd!=5'd0); //0号寄存器不用管
    
    // 4. ctrl signal gen
    ContrGen ContrGenU(.id_inst(id_inst),
        .ALUct(ALUct),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),.isTuncate(isTuncate),.isSext(isSext),
        .Branch(Branch),
        .MemOP(MemOP),.MemWr(MemWr),
        .RegWr(RegWr),.RegSrc(RegSrc),
        .IntrEn(IntrEn),
        .isebreak(isebreak),
        .Imm(Imm));

    // 5. operate date gen        
    assign inst_o = id_inst;
    assign pc_o = id_pc;
    assign R_rs1_o = R_rs1;
    assign R_rs2_o = R_rs2; 


    always @(*) begin
        if (isebreak&id_valid)
            setebreak();
    end

endmodule

