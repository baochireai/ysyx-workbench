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
        tracep->declBit(c+726,"clk", false,-1);
        tracep->declBit(c+727,"rst", false,-1);
        tracep->declBus(c+728,"Inst", false,-1, 31,0);
        tracep->declQuad(c+729,"pc", false,-1, 63,0);
        tracep->declBit(c+726,"top clk", false,-1);
        tracep->declBit(c+727,"top rst", false,-1);
        tracep->declBus(c+82,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+83,"top pc", false,-1, 63,0);
        tracep->declQuad(c+83,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+85,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+89,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+91,"top ALUct", false,-1, 4,0);
        tracep->declBus(c+92,"top Extop", false,-1, 2,0);
        tracep->declBit(c+93,"top RegWr", false,-1);
        tracep->declBit(c+94,"top ALUAsr", false,-1);
        tracep->declBus(c+95,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+96,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+98,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+100,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+102,"top Branch", false,-1, 2,0);
        tracep->declQuad(c+733,"top waddr", false,-1, 63,0);
        tracep->declBit(c+103,"top Less", false,-1);
        tracep->declBit(c+104,"top Zero", false,-1);
        tracep->declBus(c+105,"top MemOP", false,-1, 2,0);
        tracep->declBus(c+106,"top RegSrc", false,-1, 1,0);
        tracep->declBit(c+107,"top MemWr", false,-1);
        tracep->declQuad(c+108,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+110,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+112,"top isIntrPC", false,-1);
        tracep->declQuad(c+113,"top IntrPC", false,-1, 63,0);
        tracep->declBit(c+115,"top IntrEn", false,-1);
        tracep->declQuad(c+116,"top IntrOut", false,-1, 63,0);
        tracep->declBit(c+118,"top clint_mtip", false,-1);
        tracep->declBit(c+119,"top clint_we", false,-1);
        tracep->declBit(c+120,"top clint_re", false,-1);
        tracep->declQuad(c+121,"top clint_dout", false,-1, 63,0);
        tracep->declBit(c+123,"top isTuncate", false,-1);
        tracep->declBit(c+124,"top isSext", false,-1);
        tracep->declBit(c+726,"top PC clk", false,-1);
        tracep->declBit(c+727,"top PC rst", false,-1);
        tracep->declBit(c+112,"top PC isIntrPC", false,-1);
        tracep->declQuad(c+100,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+113,"top PC IntrPC", false,-1, 63,0);
        tracep->declQuad(c+83,"top PC pc", false,-1, 63,0);
        tracep->declQuad(c+125,"top PC dpc", false,-1, 63,0);
        tracep->declBus(c+735,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+736,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+727,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+125,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+83,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+738,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+102,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+96,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+83,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+87,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+103,"top GenNextPC Less", false,-1);
        tracep->declBit(c+104,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+100,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+127,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+128,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+129,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+131,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+739,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+741,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+133,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+102,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+743,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+134,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+744,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+136+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+143+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+150+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+157,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+158,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+745,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+744,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+735,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+159,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+160,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+161,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+87,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+89,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+726,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+110,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+93,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+162+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+226,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+227,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+228,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+91,"top ContrGen ALUct", false,-1, 4,0);
        tracep->declBus(c+92,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+93,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+94,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+95,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+102,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+107,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+105,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBus(c+106,"top ContrGen RegSrc", false,-1, 1,0);
        tracep->declBit(c+123,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+124,"top ContrGen isSext", false,-1);
        tracep->declBit(c+115,"top ContrGen IntrEn", false,-1);
        tracep->declBus(c+746,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+740,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+92,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+226,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+747,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+748,"top ContrGen deExtop lut", false,-1, 119,0);
        tracep->declBus(c+752,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+13+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+25+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+229,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+230,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+753,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen isIntr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+115,"top ContrGen isIntr out", false,-1, 0,0);
        tracep->declBus(c+226,"top ContrGen isIntr key", false,-1, 6,0);
        tracep->declBus(c+754,"top ContrGen isIntr default_out", false,-1, 0,0);
        tracep->declBus(c+755,"top ContrGen isIntr lut", false,-1, 7,0);
        tracep->declBus(c+756,"top ContrGen isIntr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+37+i*1,"top ContrGen isIntr pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isIntr key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+39+i*1,"top ContrGen isIntr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+231,"top ContrGen isIntr lut_out", false,-1, 0,0);
        tracep->declBit(c+232,"top ContrGen isIntr hit", false,-1);
        tracep->declBus(c+757,"top ContrGen isIntr i", false,-1, 31,0);
        tracep->declBus(c+758,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+93,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+92,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+754,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+759,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+758,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+40+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+44+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+48+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+233,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+234,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+760,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+741,"top ContrGen RegSrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen RegSrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+741,"top ContrGen RegSrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen RegSrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+106,"top ContrGen RegSrcMux out", false,-1, 1,0);
        tracep->declBus(c+226,"top ContrGen RegSrcMux key", false,-1, 6,0);
        tracep->declBus(c+761,"top ContrGen RegSrcMux default_out", false,-1, 1,0);
        tracep->declBus(c+762,"top ContrGen RegSrcMux lut", false,-1, 17,0);
        tracep->declBus(c+763,"top ContrGen RegSrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+52+i*1,"top ContrGen RegSrcMux pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+54+i*1,"top ContrGen RegSrcMux key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+56+i*1,"top ContrGen RegSrcMux data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+235,"top ContrGen RegSrcMux lut_out", false,-1, 1,0);
        tracep->declBit(c+236,"top ContrGen RegSrcMux hit", false,-1);
        tracep->declBus(c+764,"top ContrGen RegSrcMux i", false,-1, 31,0);
        tracep->declBus(c+237,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+92,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+96,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+744,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+96,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+92,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+765,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+238,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+767,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+249+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+264+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+269+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+279,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+281,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+768,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+94,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+83,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+87,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+95,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+96,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+89,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+91,"top ALU ALUct", false,-1, 4,0);
        tracep->declBit(c+123,"top ALU isTuncate", false,-1);
        tracep->declBit(c+124,"top ALU isSext", false,-1);
        tracep->declQuad(c+98,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+103,"top ALU Less", false,-1);
        tracep->declBit(c+104,"top ALU Zero", false,-1);
        tracep->declQuad(c+282,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+284,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+286,"top ALU US_S", false,-1);
        tracep->declBit(c+287,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+286,"top ALU A_L", false,-1);
        tracep->declBit(c+288,"top ALU L_R", false,-1);
        tracep->declQuad(c+289,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+291,"top ALU Carry", false,-1);
        tracep->declBit(c+292,"top ALU Overflow", false,-1);
        tracep->declBit(c+293,"top ALU lessS", false,-1);
        tracep->declBit(c+294,"top ALU lessUS", false,-1);
        tracep->declQuad(c+295,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+297,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+299,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+301,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+303,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+305,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+307,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+309,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+740,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+284,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+95,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+311,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+769,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+318+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+327+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+330+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+336,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+338,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+770,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+282,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+284,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+287,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+289,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+291,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+292,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+104,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+339,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+735,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+282,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+341,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+286,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+288,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+123,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+295,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+342,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+758,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+295,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+343,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+344,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+353+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+365+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+369+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+377,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+379,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+760,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU diver NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU diver KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU diver DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU diver HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+305,"top ALU diver out", false,-1, 63,0);
        tracep->declBus(c+380,"top ALU diver key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU diver default_out", false,-1, 63,0);
        tracep->declArray(c+381,"top ALU diver lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU diver PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+390+i*3,"top ALU diver pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+402+i*1,"top ALU diver key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+406+i*2,"top ALU diver data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+414,"top ALU diver lut_out", false,-1, 63,0);
        tracep->declBit(c+416,"top ALU diver hit", false,-1);
        tracep->declBus(c+760,"top ALU diver i", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU remer NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU remer KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU remer DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU remer HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+307,"top ALU remer out", false,-1, 63,0);
        tracep->declBus(c+417,"top ALU remer key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU remer default_out", false,-1, 63,0);
        tracep->declArray(c+418,"top ALU remer lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU remer PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+427+i*3,"top ALU remer pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+439+i*1,"top ALU remer key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+443+i*2,"top ALU remer data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+451,"top ALU remer lut_out", false,-1, 63,0);
        tracep->declBit(c+453,"top ALU remer hit", false,-1);
        tracep->declBus(c+760,"top ALU remer i", false,-1, 31,0);
        tracep->declBus(c+772,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+309,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+454,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+765,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+455,"top ALU deExtop lut", false,-1, 747,0);
        tracep->declBus(c+773,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+479+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+512+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+523+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+545,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+547,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+774,"top ALU deExtop i", false,-1, 31,0);
        tracep->declBit(c+726,"top DataMem clk", false,-1);
        tracep->declQuad(c+98,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+105,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+89,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+107,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+108,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBit(c+119,"top DataMem clint_we", false,-1);
        tracep->declBit(c+120,"top DataMem clint_re", false,-1);
        tracep->declBit(c+548,"top DataMem clint_en", false,-1);
        tracep->declBus(c+549,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+550,"top DataMem isSign", false,-1);
        tracep->declBit(c+551,"top DataMem RdEn", false,-1);
        tracep->declBus(c+552,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+553,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+557,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+758,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+756,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+549,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+558,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+775,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+776,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+752,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+58+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+62+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+66+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+559,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+560,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+760,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+758,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+108,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+558,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+765,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+561,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+769,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+570+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+582+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+586+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+594,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+596,"top DataMem sext hit", false,-1);
        tracep->declBus(c+760,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+740,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+110,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+106,"top RegWsrcMux key", false,-1, 1,0);
        tracep->declQuad(c+765,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+597,"top RegWsrcMux lut", false,-1, 197,0);
        tracep->declBus(c+769,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+604+i*3,"top RegWsrcMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+613+i*1,"top RegWsrcMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+616+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+622,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+624,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+770,"top RegWsrcMux i", false,-1, 31,0);
        tracep->declBit(c+726,"top clintU clk", false,-1);
        tracep->declQuad(c+89,"top clintU clint_din", false,-1, 63,0);
        tracep->declQuad(c+98,"top clintU clint_addr", false,-1, 63,0);
        tracep->declBit(c+119,"top clintU we", false,-1);
        tracep->declBit(c+120,"top clintU re", false,-1);
        tracep->declBit(c+118,"top clintU clint_mtip", false,-1);
        tracep->declQuad(c+121,"top clintU clint_dout", false,-1, 63,0);
        tracep->declQuad(c+625,"top clintU mtime", false,-1, 63,0);
        tracep->declQuad(c+627,"top clintU mtimecmp", false,-1, 63,0);
        tracep->declBit(c+629,"top clintU ismtimecmp", false,-1);
        tracep->declBit(c+630,"top clintU ismtime", false,-1);
        tracep->declBus(c+735,"top clintU mtimecmp_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+778,"top clintU mtimecmp_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top clintU mtimecmp_Reg clk", false,-1);
        tracep->declBit(c+754,"top clintU mtimecmp_Reg rst", false,-1);
        tracep->declQuad(c+89,"top clintU mtimecmp_Reg din", false,-1, 63,0);
        tracep->declQuad(c+627,"top clintU mtimecmp_Reg dout", false,-1, 63,0);
        tracep->declBit(c+631,"top clintU mtimecmp_Reg wen", false,-1);
        tracep->declBit(c+726,"top IntrUnit clk", false,-1);
        tracep->declBit(c+115,"top IntrUnit IntrEn", false,-1);
        tracep->declBit(c+118,"top IntrUnit clint_mtip", false,-1);
        tracep->declQuad(c+83,"top IntrUnit pc", false,-1, 63,0);
        tracep->declQuad(c+87,"top IntrUnit R_rs1", false,-1, 63,0);
        tracep->declBus(c+159,"top IntrUnit zimm", false,-1, 4,0);
        tracep->declBus(c+632,"top IntrUnit csr", false,-1, 11,0);
        tracep->declBus(c+227,"top IntrUnit func3", false,-1, 2,0);
        tracep->declBit(c+112,"top IntrUnit isIntrPC", false,-1);
        tracep->declQuad(c+113,"top IntrUnit IntrPC", false,-1, 63,0);
        tracep->declQuad(c+116,"top IntrUnit dout", false,-1, 63,0);
        tracep->declQuad(c+633,"top IntrUnit mepc", false,-1, 63,0);
        tracep->declQuad(c+635,"top IntrUnit mtvec", false,-1, 63,0);
        tracep->declQuad(c+637,"top IntrUnit mstatus", false,-1, 63,0);
        tracep->declQuad(c+639,"top IntrUnit mie", false,-1, 63,0);
        tracep->declQuad(c+765,"top IntrUnit mip", false,-1, 63,0);
        tracep->declQuad(c+731,"top IntrUnit mcase", false,-1, 63,0);
        tracep->declBit(c+780,"top IntrUnit isCSRw", false,-1);
        tracep->declBit(c+641,"top IntrUnit mstatus_MIE", false,-1);
        tracep->declBit(c+642,"top IntrUnit mie_MTIE", false,-1);
        tracep->declBit(c+643,"top IntrUnit timer_irq", false,-1);
        tracep->declBit(c+644,"top IntrUnit irq_raise", false,-1);
        tracep->declBit(c+645,"top IntrUnit mip_MTIP", false,-1);
        tracep->declBit(c+646,"top IntrUnit isecall", false,-1);
        tracep->declQuad(c+647,"top IntrUnit eNo", false,-1, 63,0);
        tracep->declBit(c+649,"top IntrUnit ismret", false,-1);
        tracep->declBit(c+650,"top IntrUnit ismtvec", false,-1);
        tracep->declBit(c+651,"top IntrUnit ismepc", false,-1);
        tracep->declBit(c+652,"top IntrUnit ismcase", false,-1);
        tracep->declBit(c+653,"top IntrUnit ismstatus", false,-1);
        tracep->declBit(c+654,"top IntrUnit ismie", false,-1);
        tracep->declBit(c+655,"top IntrUnit ismip", false,-1);
        tracep->declQuad(c+656,"top IntrUnit csrWData", false,-1, 63,0);
        tracep->declQuad(c+658,"top IntrUnit mepcIn", false,-1, 63,0);
        tracep->declQuad(c+660,"top IntrUnit mcaseIn", false,-1, 63,0);
        tracep->declBit(c+662,"top IntrUnit mstatus_MPIE", false,-1);
        tracep->declQuad(c+663,"top IntrUnit mstatusIn", false,-1, 63,0);
        tracep->declBus(c+741,"top IntrUnit CSRwEn NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top IntrUnit CSRwEn KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit CSRwEn DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top IntrUnit CSRwEn HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+647,"top IntrUnit CSRwEn out", false,-1, 63,0);
        tracep->declBus(c+665,"top IntrUnit CSRwEn key", false,-1, 1,0);
        tracep->declQuad(c+765,"top IntrUnit CSRwEn default_out", false,-1, 63,0);
        tracep->declArray(c+781,"top IntrUnit CSRwEn lut", false,-1, 131,0);
        tracep->declBus(c+769,"top IntrUnit CSRwEn PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+70+i*3,"top IntrUnit CSRwEn pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+76+i*1,"top IntrUnit CSRwEn key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+78+i*2,"top IntrUnit CSRwEn data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+666,"top IntrUnit CSRwEn lut_out", false,-1, 63,0);
        tracep->declBit(c+668,"top IntrUnit CSRwEn hit", false,-1);
        tracep->declBus(c+764,"top IntrUnit CSRwEn i", false,-1, 31,0);
        tracep->declBus(c+771,"top IntrUnit scrDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top IntrUnit scrDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit scrDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top IntrUnit scrDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+656,"top IntrUnit scrDataSrc out", false,-1, 63,0);
        tracep->declBus(c+227,"top IntrUnit scrDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+765,"top IntrUnit scrDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+669,"top IntrUnit scrDataSrc lut", false,-1, 401,0);
        tracep->declBus(c+767,"top IntrUnit scrDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+682+i*3,"top IntrUnit scrDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+700+i*1,"top IntrUnit scrDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+706+i*2,"top IntrUnit scrDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+718,"top IntrUnit scrDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+720,"top IntrUnit scrDataSrc hit", false,-1);
        tracep->declBus(c+786,"top IntrUnit scrDataSrc i", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit mtvecReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mtvecReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top IntrUnit mtvecReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mtvecReg rst", false,-1);
        tracep->declQuad(c+656,"top IntrUnit mtvecReg din", false,-1, 63,0);
        tracep->declQuad(c+635,"top IntrUnit mtvecReg dout", false,-1, 63,0);
        tracep->declBit(c+721,"top IntrUnit mtvecReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mepcReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mepcReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top IntrUnit mepcReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mepcReg rst", false,-1);
        tracep->declQuad(c+658,"top IntrUnit mepcReg din", false,-1, 63,0);
        tracep->declQuad(c+633,"top IntrUnit mepcReg dout", false,-1, 63,0);
        tracep->declBit(c+722,"top IntrUnit mepcReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mcaseReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mcaseReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top IntrUnit mcaseReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mcaseReg rst", false,-1);
        tracep->declQuad(c+660,"top IntrUnit mcaseReg din", false,-1, 63,0);
        tracep->declQuad(c+731,"top IntrUnit mcaseReg dout", false,-1, 63,0);
        tracep->declBit(c+723,"top IntrUnit mcaseReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mstatusReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+787,"top IntrUnit mstatusReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top IntrUnit mstatusReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mstatusReg rst", false,-1);
        tracep->declQuad(c+663,"top IntrUnit mstatusReg din", false,-1, 63,0);
        tracep->declQuad(c+637,"top IntrUnit mstatusReg dout", false,-1, 63,0);
        tracep->declBit(c+724,"top IntrUnit mstatusReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mieReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mieReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+726,"top IntrUnit mieReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mieReg rst", false,-1);
        tracep->declQuad(c+656,"top IntrUnit mieReg din", false,-1, 63,0);
        tracep->declQuad(c+639,"top IntrUnit mieReg dout", false,-1, 63,0);
        tracep->declBit(c+725,"top IntrUnit mieReg wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+7,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+8,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        tracep->fullSData(oldp+9,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
        tracep->fullSData(oldp+10,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
        tracep->fullSData(oldp+11,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
        tracep->fullSData(oldp+12,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
        tracep->fullCData(oldp+13,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+14,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+15,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+18,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+19,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+20,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+21,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        tracep->fullCData(oldp+22,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
        tracep->fullCData(oldp+23,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
        tracep->fullCData(oldp+24,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
        tracep->fullCData(oldp+25,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+26,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+28,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+29,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+30,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        tracep->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
        tracep->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
        tracep->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
        tracep->fullCData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
        tracep->fullBit(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
        tracep->fullCData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullSData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
        tracep->fullCData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
        tracep->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
        tracep->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
        tracep->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
        tracep->fullSData(oldp+58,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+59,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+60,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+61,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        tracep->fullCData(oldp+62,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        tracep->fullCData(oldp+63,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        tracep->fullCData(oldp+65,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        tracep->fullCData(oldp+66,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullCData(oldp+67,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        tracep->fullCData(oldp+68,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        tracep->fullCData(oldp+69,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        tracep->fullWData(oldp+70,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+73,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+76,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
        tracep->fullCData(oldp+77,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
        tracep->fullQData(oldp+78,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
        tracep->fullQData(oldp+80,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__top.Inst),32);
        tracep->fullQData(oldp+83,(vlSymsp->TOP__top.pc),64);
        tracep->fullQData(oldp+85,(vlSymsp->TOP__top.__PVT__rdata),64);
        tracep->fullQData(oldp+87,(vlSymsp->TOP__top.__PVT__R_rs1),64);
        tracep->fullQData(oldp+89,(vlSymsp->TOP__top.__PVT__R_rs2),64);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__top.__PVT__ALUct),5);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__top.__PVT__Extop),3);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__top.__PVT__RegWr));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__top.__PVT__ALUAsr));
        tracep->fullCData(oldp+95,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
        tracep->fullQData(oldp+96,(vlSymsp->TOP__top.__PVT__Imm),64);
        tracep->fullQData(oldp+98,(vlSymsp->TOP__top.__PVT__ALUres),64);
        tracep->fullQData(oldp+100,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSymsp->TOP__top.__PVT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSymsp->TOP__top.pc
                                          : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
        tracep->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__Branch),3);
        tracep->fullBit(oldp+103,(vlSymsp->TOP__top.__PVT__Less));
        tracep->fullBit(oldp+104,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+105,(vlSymsp->TOP__top.__PVT__MemOP),3);
        tracep->fullCData(oldp+106,(vlSymsp->TOP__top.__PVT__RegSrc),2);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__top.__PVT__MemWr));
        tracep->fullQData(oldp+108,(vlSymsp->TOP__top.__PVT__MemOut),64);
        tracep->fullQData(oldp+110,(vlSymsp->TOP__top.__PVT__RegWdata),64);
        tracep->fullBit(oldp+112,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                    & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullQData(oldp+113,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                      : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                          ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                          : vlSymsp->TOP__top.pc))),64);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__top.__PVT__IntrEn));
        tracep->fullQData(oldp+116,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__top.__PVT__clint_mtip));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__top.__PVT__clint_we));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__top.__PVT__clint_re));
        tracep->fullQData(oldp+121,(((- (QData)((IData)(vlSymsp->TOP__top.__PVT__clint_re))) 
                                     & ((0x200bff8ULL 
                                         == vlSymsp->TOP__top.__PVT__ALUres)
                                         ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtime
                                         : ((0x2004000ULL 
                                             == vlSymsp->TOP__top.__PVT__ALUres)
                                             ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp
                                             : 0ULL)))),64);
        tracep->fullBit(oldp+123,(vlSymsp->TOP__top.__PVT__isTuncate));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__top.__PVT__isSext));
        tracep->fullQData(oldp+125,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                       & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                      ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                          ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                          : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                              ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                              : vlSymsp->TOP__top.pc))
                                      : (0xfffffffffffffffeULL 
                                         & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                              ? vlSymsp->TOP__top.__PVT__Imm
                                              : 4ULL) 
                                            + ((1U 
                                                & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                ? vlSymsp->TOP__top.pc
                                                : vlSymsp->TOP__top.__PVT__R_rs1))))),64);
        tracep->fullBit(oldp+127,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                         >> 1U))));
        tracep->fullBit(oldp+128,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+129,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSymsp->TOP__top.__PVT__Imm
                                      : 4ULL)),64);
        tracep->fullQData(oldp+131,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSymsp->TOP__top.pc
                                      : vlSymsp->TOP__top.__PVT__R_rs1)),64);
        tracep->fullCData(oldp+133,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+134,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+136,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+137,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+138,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+139,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+140,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+141,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+142,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+143,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+144,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+145,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+146,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+147,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+148,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+149,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+150,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+151,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+152,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+153,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+154,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+155,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+156,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+157,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+158,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullCData(oldp+159,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+160,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+161,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 7U))),5);
        tracep->fullQData(oldp+162,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+164,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+166,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+168,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+170,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+172,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+174,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+176,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+178,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+180,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+182,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+184,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+186,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+188,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+190,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+192,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+194,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+196,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+198,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+200,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+202,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+204,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+206,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+208,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+210,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+212,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+214,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+216,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+218,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+220,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+222,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+224,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+226,((0x7fU & vlSymsp->TOP__top.Inst)),7);
        tracep->fullCData(oldp+227,((7U & (vlSymsp->TOP__top.Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+228,((vlSymsp->TOP__top.Inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+229,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+230,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
        tracep->fullBit(oldp+232,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
        tracep->fullBit(oldp+233,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+234,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullCData(oldp+235,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        tracep->fullBit(oldp+236,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
        tracep->fullIData(oldp+237,((vlSymsp->TOP__top.Inst 
                                     >> 7U)),25);
        tracep->fullWData(oldp+238,(vlSymsp->TOP__top.ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+249,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+252,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+255,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+258,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+261,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+264,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+265,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+266,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+267,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+268,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+269,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+271,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+273,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+275,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+277,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+279,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+281,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+282,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+284,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+286,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+287,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+288,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
        tracep->fullQData(oldp+289,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp2, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp3, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
        VL_EXTEND_WI(65,1, __Vtemp5, (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
        tracep->fullBit(oldp+291,((1U & __Vtemp6[2U])));
        tracep->fullBit(oldp+292,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                      >> 0x3fU)))) 
                                   & ((1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                     >> 0x3fU))) 
                                      != (1U & (IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                        >> 0x3fU)))))));
        tracep->fullBit(oldp+293,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                  >> 0x3fU)) 
                                         ^ (((1U & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                             == (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                           >> 0x3fU))) 
                                               != (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
        VL_EXTEND_WQ(65,64, __Vtemp9, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp10, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp11, __Vtemp9, __Vtemp10);
        VL_EXTEND_WI(65,1, __Vtemp12, (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
        tracep->fullBit(oldp+294,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp13[2U])))));
        tracep->fullQData(oldp+295,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+297,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     ^ vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+299,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     | vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+301,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+303,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     * vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+305,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
        tracep->fullQData(oldp+307,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
        tracep->fullQData(oldp+309,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+311,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+318,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+321,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+324,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+327,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+328,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+330,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+332,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+334,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+336,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+339,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+341,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+342,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullCData(oldp+343,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+344,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+353,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+356,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+359,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+362,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+365,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+366,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+368,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+369,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+371,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+373,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+375,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+377,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+379,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+380,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
        tracep->fullWData(oldp+381,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__lut),264);
        tracep->fullWData(oldp+390,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+393,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+396,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+399,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+402,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
        tracep->fullCData(oldp+403,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
        tracep->fullCData(oldp+404,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
        tracep->fullCData(oldp+405,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
        tracep->fullQData(oldp+406,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
        tracep->fullQData(oldp+408,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
        tracep->fullQData(oldp+410,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
        tracep->fullQData(oldp+412,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
        tracep->fullQData(oldp+414,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
        tracep->fullBit(oldp+416,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
        tracep->fullCData(oldp+417,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__key),2);
        tracep->fullWData(oldp+418,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__lut),264);
        tracep->fullWData(oldp+427,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+430,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+433,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+436,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+439,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
        tracep->fullCData(oldp+440,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
        tracep->fullCData(oldp+441,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
        tracep->fullCData(oldp+442,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
        tracep->fullQData(oldp+443,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
        tracep->fullQData(oldp+445,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
        tracep->fullQData(oldp+447,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
        tracep->fullQData(oldp+449,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
        tracep->fullQData(oldp+451,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
        tracep->fullBit(oldp+453,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
        tracep->fullCData(oldp+454,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
        tracep->fullWData(oldp+455,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__lut),748);
        tracep->fullWData(oldp+479,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+482,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+485,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+488,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+491,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+494,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+497,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+500,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+503,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        tracep->fullWData(oldp+506,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        tracep->fullWData(oldp+509,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        tracep->fullCData(oldp+512,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+513,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullCData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        tracep->fullCData(oldp+515,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        tracep->fullCData(oldp+516,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        tracep->fullCData(oldp+517,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        tracep->fullCData(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        tracep->fullCData(oldp+519,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        tracep->fullCData(oldp+520,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        tracep->fullCData(oldp+521,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        tracep->fullCData(oldp+522,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        tracep->fullQData(oldp+523,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+525,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+527,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+529,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+531,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+533,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+535,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+537,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+539,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        tracep->fullQData(oldp+541,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        tracep->fullQData(oldp+543,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        tracep->fullQData(oldp+545,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+547,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+548,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
        tracep->fullCData(oldp+549,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+550,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+551,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
        tracep->fullCData(oldp+552,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+553,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+557,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+558,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
        tracep->fullCData(oldp+559,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+560,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+561,(vlSymsp->TOP__top.DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+570,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+573,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+576,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+579,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+583,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+584,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+585,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+586,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+588,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+590,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+592,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+594,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+596,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+597,(vlSymsp->TOP__top.__Vcellinp__RegWsrcMux__lut),198);
        tracep->fullWData(oldp+604,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+607,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+610,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+613,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+614,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+615,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
        tracep->fullQData(oldp+616,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+618,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+620,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+622,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+624,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
        tracep->fullQData(oldp+625,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
        tracep->fullQData(oldp+627,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
        tracep->fullBit(oldp+629,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        tracep->fullBit(oldp+630,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        tracep->fullBit(oldp+631,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                   & (0x2004000ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres))));
        tracep->fullSData(oldp+632,((vlSymsp->TOP__top.Inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+633,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
        tracep->fullQData(oldp+635,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
        tracep->fullQData(oldp+637,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
        tracep->fullQData(oldp+639,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
        tracep->fullBit(oldp+641,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+642,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                                 >> 7U)))));
        tracep->fullBit(oldp+643,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
        tracep->fullBit(oldp+644,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
        tracep->fullBit(oldp+645,(vlSymsp->TOP__top__IntrUnit.__PVT__mip_MTIP));
        tracep->fullBit(oldp+646,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
        tracep->fullQData(oldp+647,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
        tracep->fullBit(oldp+649,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
        tracep->fullBit(oldp+650,((0x305U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+651,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
        tracep->fullBit(oldp+652,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
        tracep->fullBit(oldp+653,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
        tracep->fullBit(oldp+654,((0x304U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+655,((0x344U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullQData(oldp+656,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
        tracep->fullQData(oldp+658,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top.pc
                                      : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        tracep->fullQData(oldp+660,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                      : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        tracep->fullBit(oldp+662,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                 >> 7U)))));
        tracep->fullQData(oldp+663,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? ((0xffffffffffffff00ULL 
                                          & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                         | (QData)((IData)(
                                                           ((0x80U 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                         >> 3U)) 
                                                                << 7U)) 
                                                            | ((0x70U 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                            >> 4U)) 
                                                                   << 4U)) 
                                                               | (7U 
                                                                  & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus)))))))
                                      : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                          ? ((0xffffffffffffff00ULL 
                                              & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                             | (QData)((IData)(
                                                               (0x80U 
                                                                | ((0x70U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                                >> 4U)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                                >> 7U)) 
                                                                          << 3U)) 
                                                                      | (7U 
                                                                         & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus))))))))
                                          : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData))),64);
        tracep->fullCData(oldp+665,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
        tracep->fullQData(oldp+666,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        tracep->fullBit(oldp+668,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
        tracep->fullWData(oldp+669,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__scrDataSrc__lut),402);
        tracep->fullWData(oldp+682,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+685,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+688,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+691,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+694,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+697,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+700,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+701,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+702,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+703,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+704,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+705,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
        tracep->fullQData(oldp+706,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+708,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+710,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+712,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        tracep->fullQData(oldp+714,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        tracep->fullQData(oldp+716,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
        tracep->fullQData(oldp+718,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+720,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
        tracep->fullBit(oldp+721,(((0x305U == (vlSymsp->TOP__top.Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        tracep->fullBit(oldp+722,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+723,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+724,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+725,(((0x304U == (vlSymsp->TOP__top.Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        tracep->fullBit(oldp+726,(vlSelf->clk));
        tracep->fullBit(oldp+727,(vlSelf->rst));
        tracep->fullIData(oldp+728,(vlSelf->Inst),32);
        tracep->fullQData(oldp+729,(vlSelf->pc),64);
        tracep->fullQData(oldp+731,(vlSymsp->TOP__top__IntrUnit.mcase),64);
        tracep->fullQData(oldp+733,(vlSymsp->TOP__top.__PVT__waddr),64);
        tracep->fullIData(oldp+735,(0x40U),32);
        tracep->fullQData(oldp+736,(0x80000000ULL),64);
        tracep->fullBit(oldp+738,(1U));
        tracep->fullIData(oldp+739,(7U),32);
        tracep->fullIData(oldp+740,(3U),32);
        tracep->fullIData(oldp+741,(2U),32);
        tracep->fullIData(oldp+742,(1U),32);
        tracep->fullCData(oldp+743,(1U),2);
        tracep->fullIData(oldp+744,(5U),32);
        tracep->fullIData(oldp+745,(7U),32);
        tracep->fullIData(oldp+746,(0xcU),32);
        tracep->fullCData(oldp+747,(0U),3);
        __Vtemp15[0U] = 0x1d936b9aU;
        __Vtemp15[1U] = 0xece91bc7U;
        __Vtemp15[2U] = 0x64bd6f77U;
        __Vtemp15[3U] = 0x2681a6U;
        tracep->fullWData(oldp+748,(__Vtemp15),120);
        tracep->fullIData(oldp+752,(0xaU),32);
        tracep->fullIData(oldp+753,(0xcU),32);
        tracep->fullBit(oldp+754,(0U));
        tracep->fullCData(oldp+755,(0xe7U),8);
        tracep->fullIData(oldp+756,(8U),32);
        tracep->fullIData(oldp+757,(1U),32);
        tracep->fullIData(oldp+758,(4U),32);
        tracep->fullSData(oldp+759,(0x35bdU),16);
        tracep->fullIData(oldp+760,(4U),32);
        tracep->fullCData(oldp+761,(0U),2);
        tracep->fullIData(oldp+762,(0x1bceU),18);
        tracep->fullIData(oldp+763,(9U),32);
        tracep->fullIData(oldp+764,(2U),32);
        tracep->fullQData(oldp+765,(0ULL),64);
        tracep->fullIData(oldp+767,(0x43U),32);
        tracep->fullIData(oldp+768,(5U),32);
        tracep->fullIData(oldp+769,(0x42U),32);
        tracep->fullIData(oldp+770,(3U),32);
        tracep->fullIData(oldp+771,(6U),32);
        tracep->fullIData(oldp+772,(0xbU),32);
        tracep->fullIData(oldp+773,(0x44U),32);
        tracep->fullIData(oldp+774,(0xbU),32);
        tracep->fullCData(oldp+775,(0U),8);
        tracep->fullQData(oldp+776,(0xc060343cffULL),40);
        tracep->fullQData(oldp+778,(0xffffffffffffffffULL),64);
        tracep->fullBit(oldp+780,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
        __Vtemp16[0U] = 7U;
        __Vtemp16[1U] = 0x80000000U;
        __Vtemp16[2U] = 0x2eU;
        __Vtemp16[3U] = 0U;
        __Vtemp16[4U] = 4U;
        tracep->fullWData(oldp+781,(__Vtemp16),132);
        tracep->fullIData(oldp+786,(6U),32);
        tracep->fullQData(oldp+787,(0xa00001800ULL),64);
    }
}
