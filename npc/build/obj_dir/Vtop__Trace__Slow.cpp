// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+691,"clk", false,-1);
        tracep->declBit(c+692,"rst", false,-1);
        tracep->declBus(c+693,"Inst", false,-1, 31,0);
        tracep->declQuad(c+694,"pc", false,-1, 63,0);
        tracep->declBit(c+691,"top clk", false,-1);
        tracep->declBit(c+692,"top rst", false,-1);
        tracep->declBus(c+693,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+694,"top pc", false,-1, 63,0);
        tracep->declQuad(c+694,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+73,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+716,"top waddr", false,-1, 63,0);
        tracep->declQuad(c+718,"top wdata", false,-1, 63,0);
        tracep->declBus(c+720,"top wmask", false,-1, 7,0);
        tracep->declQuad(c+75,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+77,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+79,"top ALUct", false,-1, 4,0);
        tracep->declBus(c+80,"top Extop", false,-1, 2,0);
        tracep->declBit(c+81,"top RegWr", false,-1);
        tracep->declBit(c+82,"top ALUAsr", false,-1);
        tracep->declBus(c+83,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+84,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+86,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+696,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+88,"top Branch", false,-1, 2,0);
        tracep->declBit(c+89,"top Less", false,-1);
        tracep->declBit(c+90,"top Zero", false,-1);
        tracep->declBus(c+91,"top MemOP", false,-1, 2,0);
        tracep->declBus(c+92,"top RegSrc", false,-1, 1,0);
        tracep->declBit(c+93,"top MemWr", false,-1);
        tracep->declQuad(c+94,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+96,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+98,"top isIntrPC", false,-1);
        tracep->declQuad(c+698,"top IntrPC", false,-1, 63,0);
        tracep->declBit(c+99,"top IntrEn", false,-1);
        tracep->declQuad(c+100,"top IntrOut", false,-1, 63,0);
        tracep->declBit(c+102,"top isTuncate", false,-1);
        tracep->declBit(c+103,"top isSext", false,-1);
        tracep->declBit(c+691,"top PC clk", false,-1);
        tracep->declBit(c+692,"top PC rst", false,-1);
        tracep->declBit(c+98,"top PC isIntrPC", false,-1);
        tracep->declQuad(c+696,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+698,"top PC IntrPC", false,-1, 63,0);
        tracep->declQuad(c+694,"top PC pc", false,-1, 63,0);
        tracep->declQuad(c+700,"top PC dpc", false,-1, 63,0);
        tracep->declBus(c+721,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+722,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+691,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+692,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+700,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+694,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+724,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+88,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+84,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+694,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+75,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+89,"top GenNextPC Less", false,-1);
        tracep->declBit(c+90,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+696,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+104,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+105,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+106,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+702,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+725,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+727,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+108,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+88,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+729,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+109,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+730,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+111+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+118+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+125+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+132,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+133,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+731,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+730,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+721,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+704,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+705,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+706,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+75,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+77,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+691,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+96,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+81,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+134+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+707,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+708,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+709,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+79,"top ContrGen ALUct", false,-1, 4,0);
        tracep->declBus(c+80,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+81,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+82,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+83,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+88,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+93,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+91,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBus(c+92,"top ContrGen RegSrc", false,-1, 1,0);
        tracep->declBit(c+102,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+103,"top ContrGen isSext", false,-1);
        tracep->declBit(c+99,"top ContrGen IntrEn", false,-1);
        tracep->declBus(c+732,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+725,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+726,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+80,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+707,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+733,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+734,"top ContrGen deExtop lut", false,-1, 119,0);
        tracep->declBus(c+738,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+13+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+25+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+198,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+199,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+739,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen isIntr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+725,"top ContrGen isIntr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen isIntr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen isIntr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+99,"top ContrGen isIntr out", false,-1, 0,0);
        tracep->declBus(c+707,"top ContrGen isIntr key", false,-1, 6,0);
        tracep->declBus(c+740,"top ContrGen isIntr default_out", false,-1, 0,0);
        tracep->declBus(c+741,"top ContrGen isIntr lut", false,-1, 7,0);
        tracep->declBus(c+742,"top ContrGen isIntr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+37+i*1,"top ContrGen isIntr pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isIntr key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+39+i*1,"top ContrGen isIntr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+200,"top ContrGen isIntr lut_out", false,-1, 0,0);
        tracep->declBit(c+201,"top ContrGen isIntr hit", false,-1);
        tracep->declBus(c+743,"top ContrGen isIntr i", false,-1, 31,0);
        tracep->declBus(c+744,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+81,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+80,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+740,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+745,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+744,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+40+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+44+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+48+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+202,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+203,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+746,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+710,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+80,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+84,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+730,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+84,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+80,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+747,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+204,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+749,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+215+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+230+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+235+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+245,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+247,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+750,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+82,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+694,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+75,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+83,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+84,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+77,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+79,"top ALU ALUct", false,-1, 4,0);
        tracep->declBit(c+102,"top ALU isTuncate", false,-1);
        tracep->declBit(c+103,"top ALU isSext", false,-1);
        tracep->declQuad(c+86,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+89,"top ALU Less", false,-1);
        tracep->declBit(c+90,"top ALU Zero", false,-1);
        tracep->declQuad(c+248,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+250,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+252,"top ALU US_S", false,-1);
        tracep->declBit(c+253,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+252,"top ALU A_L", false,-1);
        tracep->declBit(c+254,"top ALU L_R", false,-1);
        tracep->declQuad(c+255,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+257,"top ALU Carry", false,-1);
        tracep->declBit(c+258,"top ALU Overflow", false,-1);
        tracep->declBit(c+259,"top ALU lessS", false,-1);
        tracep->declBit(c+260,"top ALU lessUS", false,-1);
        tracep->declQuad(c+261,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+263,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+265,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+267,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+269,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+271,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+273,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+275,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+726,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+250,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+83,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+747,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+277,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+751,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+284+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+293+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+296+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+302,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+304,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+752,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+248,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+250,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+253,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+255,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+257,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+258,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+90,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+305,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+721,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+753,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+248,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+307,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+252,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+254,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+102,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+261,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+308,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+744,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+261,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+309,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+747,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+310,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+751,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+319+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+331+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+335+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+343,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+345,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+746,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+744,"top ALU diver NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top ALU diver KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU diver DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ALU diver HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+271,"top ALU diver out", false,-1, 63,0);
        tracep->declBus(c+346,"top ALU diver key", false,-1, 1,0);
        tracep->declQuad(c+747,"top ALU diver default_out", false,-1, 63,0);
        tracep->declArray(c+347,"top ALU diver lut", false,-1, 263,0);
        tracep->declBus(c+751,"top ALU diver PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+356+i*3,"top ALU diver pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+368+i*1,"top ALU diver key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+372+i*2,"top ALU diver data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+380,"top ALU diver lut_out", false,-1, 63,0);
        tracep->declBit(c+382,"top ALU diver hit", false,-1);
        tracep->declBus(c+746,"top ALU diver i", false,-1, 31,0);
        tracep->declBus(c+744,"top ALU remer NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top ALU remer KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU remer DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ALU remer HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+273,"top ALU remer out", false,-1, 63,0);
        tracep->declBus(c+383,"top ALU remer key", false,-1, 1,0);
        tracep->declQuad(c+747,"top ALU remer default_out", false,-1, 63,0);
        tracep->declArray(c+384,"top ALU remer lut", false,-1, 263,0);
        tracep->declBus(c+751,"top ALU remer PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+393+i*3,"top ALU remer pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+405+i*1,"top ALU remer key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+409+i*2,"top ALU remer data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+417,"top ALU remer lut_out", false,-1, 63,0);
        tracep->declBit(c+419,"top ALU remer hit", false,-1);
        tracep->declBus(c+746,"top ALU remer i", false,-1, 31,0);
        tracep->declBus(c+754,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+744,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+275,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+420,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+747,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+421,"top ALU deExtop lut", false,-1, 747,0);
        tracep->declBus(c+755,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+445+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+478+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+489+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+511,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+513,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+756,"top ALU deExtop i", false,-1, 31,0);
        tracep->declQuad(c+86,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+91,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+77,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+93,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+94,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBus(c+514,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+515,"top DataMem isSign", false,-1);
        tracep->declBit(c+516,"top DataMem RdEn", false,-1);
        tracep->declBus(c+517,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+518,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+522,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+744,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+514,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+523,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+757,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+758,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+738,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+52+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+56+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+60+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+524,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+525,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+746,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+744,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+94,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+523,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+747,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+526,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+751,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+535+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+547+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+551+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+559,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+561,"top DataMem sext hit", false,-1);
        tracep->declBus(c+746,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+726,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+727,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+96,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+92,"top RegWsrcMux key", false,-1, 1,0);
        tracep->declQuad(c+747,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+562,"top RegWsrcMux lut", false,-1, 197,0);
        tracep->declBus(c+751,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+569+i*3,"top RegWsrcMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+578+i*1,"top RegWsrcMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+581+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+587,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+589,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+752,"top RegWsrcMux i", false,-1, 31,0);
        tracep->declBit(c+691,"top IntrUnit clk", false,-1);
        tracep->declBit(c+99,"top IntrUnit IntrEn", false,-1);
        tracep->declQuad(c+694,"top IntrUnit pc", false,-1, 63,0);
        tracep->declQuad(c+75,"top IntrUnit R_rs1", false,-1, 63,0);
        tracep->declBus(c+711,"top IntrUnit csr", false,-1, 11,0);
        tracep->declBus(c+708,"top IntrUnit func3", false,-1, 2,0);
        tracep->declBit(c+98,"top IntrUnit isIntrPC", false,-1);
        tracep->declQuad(c+698,"top IntrUnit IntrPC", false,-1, 63,0);
        tracep->declQuad(c+100,"top IntrUnit dout", false,-1, 63,0);
        tracep->declQuad(c+590,"top IntrUnit mepc", false,-1, 63,0);
        tracep->declQuad(c+592,"top IntrUnit mcase", false,-1, 63,0);
        tracep->declQuad(c+594,"top IntrUnit mtvec", false,-1, 63,0);
        tracep->declQuad(c+596,"top IntrUnit mstatus", false,-1, 63,0);
        tracep->declBit(c+598,"top IntrUnit isCSRw", false,-1);
        tracep->declBit(c+599,"top IntrUnit isecall", false,-1);
        tracep->declQuad(c+600,"top IntrUnit eNo", false,-1, 63,0);
        tracep->declBit(c+602,"top IntrUnit ismret", false,-1);
        tracep->declBit(c+712,"top IntrUnit ismtvec", false,-1);
        tracep->declBit(c+603,"top IntrUnit ismepc", false,-1);
        tracep->declBit(c+604,"top IntrUnit ismcase", false,-1);
        tracep->declBit(c+713,"top IntrUnit ismstatus", false,-1);
        tracep->declQuad(c+605,"top IntrUnit mcaseData", false,-1, 63,0);
        tracep->declQuad(c+607,"top IntrUnit mepcData", false,-1, 63,0);
        tracep->declQuad(c+609,"top IntrUnit csrData", false,-1, 63,0);
        tracep->declBus(c+726,"top IntrUnit CSRwEn NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit CSRwEn KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top IntrUnit CSRwEn DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top IntrUnit CSRwEn HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+598,"top IntrUnit CSRwEn out", false,-1, 0,0);
        tracep->declBus(c+708,"top IntrUnit CSRwEn key", false,-1, 2,0);
        tracep->declBus(c+740,"top IntrUnit CSRwEn default_out", false,-1, 0,0);
        tracep->declBus(c+760,"top IntrUnit CSRwEn lut", false,-1, 11,0);
        tracep->declBus(c+744,"top IntrUnit CSRwEn PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+64+i*1,"top IntrUnit CSRwEn pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+67+i*1,"top IntrUnit CSRwEn key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+70+i*1,"top IntrUnit CSRwEn data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+611,"top IntrUnit CSRwEn lut_out", false,-1, 0,0);
        tracep->declBit(c+612,"top IntrUnit CSRwEn hit", false,-1);
        tracep->declBus(c+752,"top IntrUnit CSRwEn i", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit mcaseDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit mcaseDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top IntrUnit mcaseDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top IntrUnit mcaseDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+605,"top IntrUnit mcaseDataSrc out", false,-1, 63,0);
        tracep->declBus(c+708,"top IntrUnit mcaseDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+747,"top IntrUnit mcaseDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+613,"top IntrUnit mcaseDataSrc lut", false,-1, 200,0);
        tracep->declBus(c+749,"top IntrUnit mcaseDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+620+i*3,"top IntrUnit mcaseDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+629+i*1,"top IntrUnit mcaseDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+632+i*2,"top IntrUnit mcaseDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+638,"top IntrUnit mcaseDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+640,"top IntrUnit mcaseDataSrc hit", false,-1);
        tracep->declBus(c+752,"top IntrUnit mcaseDataSrc i", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit mepcDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit mepcDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top IntrUnit mepcDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top IntrUnit mepcDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+607,"top IntrUnit mepcDataSrc out", false,-1, 63,0);
        tracep->declBus(c+708,"top IntrUnit mepcDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+747,"top IntrUnit mepcDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+641,"top IntrUnit mepcDataSrc lut", false,-1, 200,0);
        tracep->declBus(c+749,"top IntrUnit mepcDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+648+i*3,"top IntrUnit mepcDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+657+i*1,"top IntrUnit mepcDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+660+i*2,"top IntrUnit mepcDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+666,"top IntrUnit mepcDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+668,"top IntrUnit mepcDataSrc hit", false,-1);
        tracep->declBus(c+752,"top IntrUnit mepcDataSrc i", false,-1, 31,0);
        tracep->declBus(c+727,"top IntrUnit scrDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+726,"top IntrUnit scrDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+721,"top IntrUnit scrDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+728,"top IntrUnit scrDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+609,"top IntrUnit scrDataSrc out", false,-1, 63,0);
        tracep->declBus(c+708,"top IntrUnit scrDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+747,"top IntrUnit scrDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+669,"top IntrUnit scrDataSrc lut", false,-1, 133,0);
        tracep->declBus(c+749,"top IntrUnit scrDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+674+i*3,"top IntrUnit scrDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+680+i*1,"top IntrUnit scrDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+682+i*2,"top IntrUnit scrDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+686,"top IntrUnit scrDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+688,"top IntrUnit scrDataSrc hit", false,-1);
        tracep->declBus(c+761,"top IntrUnit scrDataSrc i", false,-1, 31,0);
        tracep->declBus(c+721,"top IntrUnit mtvecReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+762,"top IntrUnit mtvecReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top IntrUnit mtvecReg clk", false,-1);
        tracep->declBit(c+740,"top IntrUnit mtvecReg rst", false,-1);
        tracep->declQuad(c+609,"top IntrUnit mtvecReg din", false,-1, 63,0);
        tracep->declQuad(c+594,"top IntrUnit mtvecReg dout", false,-1, 63,0);
        tracep->declBit(c+714,"top IntrUnit mtvecReg wen", false,-1);
        tracep->declBus(c+721,"top IntrUnit mepcReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+762,"top IntrUnit mepcReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top IntrUnit mepcReg clk", false,-1);
        tracep->declBit(c+740,"top IntrUnit mepcReg rst", false,-1);
        tracep->declQuad(c+607,"top IntrUnit mepcReg din", false,-1, 63,0);
        tracep->declQuad(c+590,"top IntrUnit mepcReg dout", false,-1, 63,0);
        tracep->declBit(c+689,"top IntrUnit mepcReg wen", false,-1);
        tracep->declBus(c+721,"top IntrUnit mcaseReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+762,"top IntrUnit mcaseReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top IntrUnit mcaseReg clk", false,-1);
        tracep->declBit(c+740,"top IntrUnit mcaseReg rst", false,-1);
        tracep->declQuad(c+605,"top IntrUnit mcaseReg din", false,-1, 63,0);
        tracep->declQuad(c+592,"top IntrUnit mcaseReg dout", false,-1, 63,0);
        tracep->declBit(c+690,"top IntrUnit mcaseReg wen", false,-1);
        tracep->declBus(c+721,"top IntrUnit mstatusReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+762,"top IntrUnit mstatusReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+691,"top IntrUnit mstatusReg clk", false,-1);
        tracep->declBit(c+740,"top IntrUnit mstatusReg rst", false,-1);
        tracep->declQuad(c+609,"top IntrUnit mstatusReg din", false,-1, 63,0);
        tracep->declQuad(c+596,"top IntrUnit mstatusReg dout", false,-1, 63,0);
        tracep->declBit(c+715,"top IntrUnit mstatusReg wen", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp886;
    VlWide<3>/*95:0*/ __Vtemp887;
    VlWide<3>/*95:0*/ __Vtemp888;
    VlWide<3>/*95:0*/ __Vtemp889;
    VlWide<3>/*95:0*/ __Vtemp890;
    VlWide<3>/*95:0*/ __Vtemp893;
    VlWide<3>/*95:0*/ __Vtemp894;
    VlWide<3>/*95:0*/ __Vtemp895;
    VlWide<3>/*95:0*/ __Vtemp896;
    VlWide<3>/*95:0*/ __Vtemp897;
    VlWide<4>/*127:0*/ __Vtemp899;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        tracep->fullSData(oldp+9,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
        tracep->fullSData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list[0]));
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullSData(oldp+52,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+53,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+54,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+55,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0]),3);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1]),3);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[2]),3);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0]));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1]));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[2]));
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__R_rs2),64);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__ALUct),5);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__Branch),3);
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__Less));
        tracep->fullBit(oldp+90,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+91,(vlSelf->top__DOT__MemOP),3);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__RegSrc),2);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__MemWr));
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__MemOut),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__RegWdata),64);
        tracep->fullBit(oldp+98,(((IData)(vlSelf->top__DOT__IntrEn) 
                                  & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                     | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__IntrEn));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__IntrOut),64);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__isTuncate));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__isSext));
        tracep->fullBit(oldp+104,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                         >> 1U))));
        tracep->fullBit(oldp+105,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+106,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->top__DOT__Imm
                                      : 4ULL)),64);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+115,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+199,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+215,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+218,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+221,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+224,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+227,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+232,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+233,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+234,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+254,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp886, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp887, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp888, __Vtemp886, __Vtemp887);
        VL_EXTEND_WI(65,1, __Vtemp889, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp890, __Vtemp888, __Vtemp889);
        tracep->fullBit(oldp+257,((1U & __Vtemp890[2U])));
        tracep->fullBit(oldp+258,((((1U & (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                      >> 0x3fU)))) 
                                   & ((1U & (IData)(
                                                    (vlSelf->top__DOT__ALU__DOT__adder 
                                                     >> 0x3fU))) 
                                      != (1U & (IData)(
                                                       (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                        >> 0x3fU)))))));
        tracep->fullBit(oldp+259,((1U & ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
                                                  >> 0x3fU)) 
                                         ^ (((1U & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                             == (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ALU__DOT__adder 
                                                           >> 0x3fU))) 
                                               != (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
        VL_EXTEND_WQ(65,64, __Vtemp893, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp894, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp895, __Vtemp893, __Vtemp894);
        VL_EXTEND_WI(65,1, __Vtemp896, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp897, __Vtemp895, __Vtemp896);
        tracep->fullBit(oldp+260,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp897[2U])))));
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+263,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+265,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+267,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+269,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ALU__DOT__DIV),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__ALU__DOT__REM),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+277,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+284,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+287,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+290,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+294,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+307,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+308,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullCData(oldp+309,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+322,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+331,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+332,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+333,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+346,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key),2);
        tracep->fullWData(oldp+347,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut),264);
        tracep->fullWData(oldp+356,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+359,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+365,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0]),2);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1]),2);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2]),2);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3]),2);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out),64);
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit));
        tracep->fullCData(oldp+383,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key),2);
        tracep->fullWData(oldp+384,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut),264);
        tracep->fullWData(oldp+393,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+396,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+399,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+402,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0]),2);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1]),2);
        tracep->fullCData(oldp+407,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2]),2);
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3]),2);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out),64);
        tracep->fullBit(oldp+419,(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit));
        tracep->fullCData(oldp+420,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key),4);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),748);
        tracep->fullWData(oldp+445,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+448,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+451,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+454,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+457,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+460,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+463,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+466,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+469,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        tracep->fullWData(oldp+472,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        tracep->fullWData(oldp+475,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        tracep->fullCData(oldp+478,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+479,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullCData(oldp+480,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        tracep->fullCData(oldp+481,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        tracep->fullCData(oldp+482,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        tracep->fullCData(oldp+483,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        tracep->fullCData(oldp+484,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        tracep->fullCData(oldp+485,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        tracep->fullCData(oldp+486,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        tracep->fullCData(oldp+487,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        tracep->fullCData(oldp+488,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+513,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+515,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+516,((0U != (IData)(vlSelf->top__DOT__MemOP))));
        tracep->fullCData(oldp+517,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+518,(vlSelf->top__DOT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+522,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+523,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
        tracep->fullCData(oldp+524,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+525,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+526,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+535,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+538,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+541,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+547,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+549,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+550,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+561,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+562,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),198);
        tracep->fullWData(oldp+569,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+575,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2]),2);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__IntrUnit__DOT__mepc),64);
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__IntrUnit__DOT__mcase),64);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__IntrUnit__DOT__mtvec),64);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__IntrUnit__DOT__mstatus),64);
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__IntrUnit__DOT__isCSRw));
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__IntrUnit__DOT__isecall));
        tracep->fullQData(oldp+600,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                      ? 0xbULL : 0xefffffffffffffffULL)),64);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__IntrUnit__DOT__ismret));
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__IntrUnit__DOT__ismepc));
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__IntrUnit__DOT__ismcase));
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__IntrUnit__DOT__mcaseData),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__IntrUnit__DOT__mepcData),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__IntrUnit__DOT__csrData),64);
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out));
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit));
        tracep->fullWData(oldp+613,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut),201);
        tracep->fullWData(oldp+620,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+623,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+626,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+629,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+630,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+631,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[2]),3);
        tracep->fullQData(oldp+632,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+634,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+636,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit));
        tracep->fullWData(oldp+641,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut),201);
        tracep->fullWData(oldp+648,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+651,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+654,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+658,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+659,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[2]),3);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit));
        tracep->fullWData(oldp+669,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut),134);
        tracep->fullWData(oldp+674,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+677,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+680,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+681,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1]),3);
        tracep->fullQData(oldp+682,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+684,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+686,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit));
        tracep->fullBit(oldp+689,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+690,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+691,(vlSelf->clk));
        tracep->fullBit(oldp+692,(vlSelf->rst));
        tracep->fullIData(oldp+693,(vlSelf->Inst),32);
        tracep->fullQData(oldp+694,(vlSelf->pc),64);
        tracep->fullQData(oldp+696,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+698,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                      ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                      : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                          ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                          : vlSelf->pc))),64);
        tracep->fullQData(oldp+700,((((IData)(vlSelf->top__DOT__IntrEn) 
                                      & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                         | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))
                                      ? ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                          ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                              ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                              : vlSelf->pc))
                                      : (0xfffffffffffffffeULL 
                                         & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                              ? vlSelf->top__DOT__Imm
                                              : 4ULL) 
                                            + ((1U 
                                                & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                ? vlSelf->pc
                                                : vlSelf->top__DOT__R_rs1))))),64);
        tracep->fullQData(oldp+702,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+704,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+705,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+706,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+707,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+708,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+709,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+710,((vlSelf->Inst >> 7U)),25);
        tracep->fullSData(oldp+711,((vlSelf->Inst >> 0x14U)),12);
        tracep->fullBit(oldp+712,((0x305U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+713,((0x300U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+714,(((0x305U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+715,(((0x300U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullQData(oldp+716,(vlSelf->top__DOT__waddr),64);
        tracep->fullQData(oldp+718,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__wmask),8);
        tracep->fullIData(oldp+721,(0x40U),32);
        tracep->fullQData(oldp+722,(0x80000000ULL),64);
        tracep->fullBit(oldp+724,(1U));
        tracep->fullIData(oldp+725,(7U),32);
        tracep->fullIData(oldp+726,(3U),32);
        tracep->fullIData(oldp+727,(2U),32);
        tracep->fullIData(oldp+728,(1U),32);
        tracep->fullCData(oldp+729,(1U),2);
        tracep->fullIData(oldp+730,(5U),32);
        tracep->fullIData(oldp+731,(7U),32);
        tracep->fullIData(oldp+732,(0xcU),32);
        tracep->fullCData(oldp+733,(0U),3);
        __Vtemp899[0U] = 0x1d9368daU;
        __Vtemp899[1U] = 0xece91bc7U;
        __Vtemp899[2U] = 0x64bd6f77U;
        __Vtemp899[3U] = 0x2681a6U;
        tracep->fullWData(oldp+734,(__Vtemp899),120);
        tracep->fullIData(oldp+738,(0xaU),32);
        tracep->fullIData(oldp+739,(0xcU),32);
        tracep->fullBit(oldp+740,(0U));
        tracep->fullCData(oldp+741,(0xe7U),8);
        tracep->fullIData(oldp+742,(8U),32);
        tracep->fullIData(oldp+743,(1U),32);
        tracep->fullIData(oldp+744,(4U),32);
        tracep->fullSData(oldp+745,(0x35bdU),16);
        tracep->fullIData(oldp+746,(4U),32);
        tracep->fullQData(oldp+747,(0ULL),64);
        tracep->fullIData(oldp+749,(0x43U),32);
        tracep->fullIData(oldp+750,(5U),32);
        tracep->fullIData(oldp+751,(0x42U),32);
        tracep->fullIData(oldp+752,(3U),32);
        tracep->fullIData(oldp+753,(6U),32);
        tracep->fullIData(oldp+754,(0xbU),32);
        tracep->fullIData(oldp+755,(0x44U),32);
        tracep->fullIData(oldp+756,(0xbU),32);
        tracep->fullCData(oldp+757,(0U),8);
        tracep->fullQData(oldp+758,(0xc060343cffULL),40);
        tracep->fullSData(oldp+760,(0x350U),12);
        tracep->fullIData(oldp+761,(2U),32);
        tracep->fullIData(oldp+762,(0U),32);
    }
}
