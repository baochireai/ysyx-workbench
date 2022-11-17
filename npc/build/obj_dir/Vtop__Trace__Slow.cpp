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
        tracep->declBit(c+699,"clk", false,-1);
        tracep->declBit(c+700,"rst", false,-1);
        tracep->declBus(c+701,"Inst", false,-1, 31,0);
        tracep->declQuad(c+702,"pc", false,-1, 63,0);
        tracep->declBit(c+699,"top clk", false,-1);
        tracep->declBit(c+700,"top rst", false,-1);
        tracep->declBus(c+701,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+702,"top pc", false,-1, 63,0);
        tracep->declQuad(c+702,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+79,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+724,"top waddr", false,-1, 63,0);
        tracep->declQuad(c+726,"top wdata", false,-1, 63,0);
        tracep->declBus(c+728,"top wmask", false,-1, 7,0);
        tracep->declQuad(c+81,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+83,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+85,"top ALUct", false,-1, 4,0);
        tracep->declBus(c+86,"top Extop", false,-1, 2,0);
        tracep->declBit(c+87,"top RegWr", false,-1);
        tracep->declBit(c+88,"top ALUAsr", false,-1);
        tracep->declBus(c+89,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+90,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+92,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+704,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+94,"top Branch", false,-1, 2,0);
        tracep->declBit(c+95,"top Less", false,-1);
        tracep->declBit(c+96,"top Zero", false,-1);
        tracep->declBus(c+97,"top MemOP", false,-1, 2,0);
        tracep->declBus(c+98,"top RegSrc", false,-1, 1,0);
        tracep->declBit(c+99,"top MemWr", false,-1);
        tracep->declQuad(c+100,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+102,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+104,"top isIntrPC", false,-1);
        tracep->declQuad(c+706,"top IntrPC", false,-1, 63,0);
        tracep->declBit(c+105,"top IntrEn", false,-1);
        tracep->declQuad(c+106,"top IntrOut", false,-1, 63,0);
        tracep->declBit(c+108,"top isTuncate", false,-1);
        tracep->declBit(c+109,"top isSext", false,-1);
        tracep->declBit(c+699,"top PC clk", false,-1);
        tracep->declBit(c+700,"top PC rst", false,-1);
        tracep->declBit(c+104,"top PC isIntrPC", false,-1);
        tracep->declQuad(c+704,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+706,"top PC IntrPC", false,-1, 63,0);
        tracep->declQuad(c+702,"top PC pc", false,-1, 63,0);
        tracep->declQuad(c+708,"top PC dpc", false,-1, 63,0);
        tracep->declBus(c+729,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+730,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+699,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+700,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+708,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+702,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+732,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+94,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+90,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+702,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+81,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+95,"top GenNextPC Less", false,-1);
        tracep->declBit(c+96,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+704,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+110,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+111,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+112,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+710,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+733,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+114,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+94,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+737,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+115,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+738,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+117+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+124+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+131+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+138,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+139,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+739,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+738,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+729,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+712,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+713,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+714,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+81,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+83,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+699,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+102,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+87,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+140+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+715,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+716,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+717,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+85,"top ContrGen ALUct", false,-1, 4,0);
        tracep->declBus(c+86,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+87,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+88,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+89,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+94,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+99,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+97,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBus(c+98,"top ContrGen RegSrc", false,-1, 1,0);
        tracep->declBit(c+108,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+109,"top ContrGen isSext", false,-1);
        tracep->declBit(c+105,"top ContrGen IntrEn", false,-1);
        tracep->declBus(c+740,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+733,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+734,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+86,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+715,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+741,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+742,"top ContrGen deExtop lut", false,-1, 119,0);
        tracep->declBus(c+746,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+13+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+25+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+204,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+205,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+747,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen isIntr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+733,"top ContrGen isIntr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen isIntr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen isIntr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+105,"top ContrGen isIntr out", false,-1, 0,0);
        tracep->declBus(c+715,"top ContrGen isIntr key", false,-1, 6,0);
        tracep->declBus(c+748,"top ContrGen isIntr default_out", false,-1, 0,0);
        tracep->declBus(c+749,"top ContrGen isIntr lut", false,-1, 7,0);
        tracep->declBus(c+750,"top ContrGen isIntr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+37+i*1,"top ContrGen isIntr pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isIntr key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+39+i*1,"top ContrGen isIntr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+206,"top ContrGen isIntr lut_out", false,-1, 0,0);
        tracep->declBit(c+207,"top ContrGen isIntr hit", false,-1);
        tracep->declBus(c+751,"top ContrGen isIntr i", false,-1, 31,0);
        tracep->declBus(c+752,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+87,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+86,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+748,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+753,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+752,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+40+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+44+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+48+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+208,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+209,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+754,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+735,"top ContrGen RegSrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+733,"top ContrGen RegSrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ContrGen RegSrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ContrGen RegSrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+98,"top ContrGen RegSrcMux out", false,-1, 1,0);
        tracep->declBus(c+715,"top ContrGen RegSrcMux key", false,-1, 6,0);
        tracep->declBus(c+755,"top ContrGen RegSrcMux default_out", false,-1, 1,0);
        tracep->declBus(c+756,"top ContrGen RegSrcMux lut", false,-1, 17,0);
        tracep->declBus(c+757,"top ContrGen RegSrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+52+i*1,"top ContrGen RegSrcMux pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+54+i*1,"top ContrGen RegSrcMux key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+56+i*1,"top ContrGen RegSrcMux data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+210,"top ContrGen RegSrcMux lut_out", false,-1, 1,0);
        tracep->declBit(c+211,"top ContrGen RegSrcMux hit", false,-1);
        tracep->declBus(c+758,"top ContrGen RegSrcMux i", false,-1, 31,0);
        tracep->declBus(c+718,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+86,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+90,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+738,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+90,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+86,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+759,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+212,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+761,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+223+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+238+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+243+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+253,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+255,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+762,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+88,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+702,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+81,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+89,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+90,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+83,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+85,"top ALU ALUct", false,-1, 4,0);
        tracep->declBit(c+108,"top ALU isTuncate", false,-1);
        tracep->declBit(c+109,"top ALU isSext", false,-1);
        tracep->declQuad(c+92,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+95,"top ALU Less", false,-1);
        tracep->declBit(c+96,"top ALU Zero", false,-1);
        tracep->declQuad(c+256,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+258,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+260,"top ALU US_S", false,-1);
        tracep->declBit(c+261,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+260,"top ALU A_L", false,-1);
        tracep->declBit(c+262,"top ALU L_R", false,-1);
        tracep->declQuad(c+263,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+265,"top ALU Carry", false,-1);
        tracep->declBit(c+266,"top ALU Overflow", false,-1);
        tracep->declBit(c+267,"top ALU lessS", false,-1);
        tracep->declBit(c+268,"top ALU lessUS", false,-1);
        tracep->declQuad(c+269,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+271,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+273,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+275,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+277,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+279,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+281,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+283,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+734,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+258,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+89,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+759,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+285,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+763,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+292+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+301+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+304+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+310,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+312,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+764,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+256,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+258,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+261,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+263,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+265,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+266,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+96,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+313,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+729,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+765,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+256,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+315,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+260,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+262,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+108,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+269,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+316,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+752,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+269,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+317,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+759,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+318,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+763,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+327+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+339+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+343+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+351,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+353,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+754,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+752,"top ALU diver NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU diver KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU diver DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ALU diver HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+279,"top ALU diver out", false,-1, 63,0);
        tracep->declBus(c+354,"top ALU diver key", false,-1, 1,0);
        tracep->declQuad(c+759,"top ALU diver default_out", false,-1, 63,0);
        tracep->declArray(c+355,"top ALU diver lut", false,-1, 263,0);
        tracep->declBus(c+763,"top ALU diver PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+364+i*3,"top ALU diver pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+376+i*1,"top ALU diver key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+380+i*2,"top ALU diver data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+388,"top ALU diver lut_out", false,-1, 63,0);
        tracep->declBit(c+390,"top ALU diver hit", false,-1);
        tracep->declBus(c+754,"top ALU diver i", false,-1, 31,0);
        tracep->declBus(c+752,"top ALU remer NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU remer KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU remer DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ALU remer HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+281,"top ALU remer out", false,-1, 63,0);
        tracep->declBus(c+391,"top ALU remer key", false,-1, 1,0);
        tracep->declQuad(c+759,"top ALU remer default_out", false,-1, 63,0);
        tracep->declArray(c+392,"top ALU remer lut", false,-1, 263,0);
        tracep->declBus(c+763,"top ALU remer PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+401+i*3,"top ALU remer pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+413+i*1,"top ALU remer key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+417+i*2,"top ALU remer data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+425,"top ALU remer lut_out", false,-1, 63,0);
        tracep->declBit(c+427,"top ALU remer hit", false,-1);
        tracep->declBus(c+754,"top ALU remer i", false,-1, 31,0);
        tracep->declBus(c+766,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+752,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+283,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+428,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+759,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+429,"top ALU deExtop lut", false,-1, 747,0);
        tracep->declBus(c+767,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+453+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+486+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+497+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+519,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+521,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+768,"top ALU deExtop i", false,-1, 31,0);
        tracep->declBit(c+699,"top DataMem clk", false,-1);
        tracep->declQuad(c+92,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+97,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+83,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+99,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+100,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBus(c+522,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+523,"top DataMem isSign", false,-1);
        tracep->declBit(c+524,"top DataMem RdEn", false,-1);
        tracep->declBus(c+525,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+526,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+530,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+752,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+750,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+522,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+531,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+769,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+770,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+746,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+58+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+62+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+66+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+532,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+533,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+754,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+752,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+100,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+531,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+759,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+534,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+763,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+543+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+555+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+559+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+567,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+569,"top DataMem sext hit", false,-1);
        tracep->declBus(c+754,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+734,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+102,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+98,"top RegWsrcMux key", false,-1, 1,0);
        tracep->declQuad(c+759,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+570,"top RegWsrcMux lut", false,-1, 197,0);
        tracep->declBus(c+763,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+577+i*3,"top RegWsrcMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+586+i*1,"top RegWsrcMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+589+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+595,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+597,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+764,"top RegWsrcMux i", false,-1, 31,0);
        tracep->declBit(c+699,"top IntrUnit clk", false,-1);
        tracep->declBit(c+105,"top IntrUnit IntrEn", false,-1);
        tracep->declQuad(c+702,"top IntrUnit pc", false,-1, 63,0);
        tracep->declQuad(c+81,"top IntrUnit R_rs1", false,-1, 63,0);
        tracep->declBus(c+719,"top IntrUnit csr", false,-1, 11,0);
        tracep->declBus(c+716,"top IntrUnit func3", false,-1, 2,0);
        tracep->declBit(c+104,"top IntrUnit isIntrPC", false,-1);
        tracep->declQuad(c+706,"top IntrUnit IntrPC", false,-1, 63,0);
        tracep->declQuad(c+106,"top IntrUnit dout", false,-1, 63,0);
        tracep->declQuad(c+598,"top IntrUnit mepc", false,-1, 63,0);
        tracep->declQuad(c+600,"top IntrUnit mcase", false,-1, 63,0);
        tracep->declQuad(c+602,"top IntrUnit mtvec", false,-1, 63,0);
        tracep->declQuad(c+604,"top IntrUnit mstatus", false,-1, 63,0);
        tracep->declBit(c+606,"top IntrUnit isCSRw", false,-1);
        tracep->declBit(c+607,"top IntrUnit isecall", false,-1);
        tracep->declQuad(c+608,"top IntrUnit eNo", false,-1, 63,0);
        tracep->declBit(c+610,"top IntrUnit ismret", false,-1);
        tracep->declBit(c+720,"top IntrUnit ismtvec", false,-1);
        tracep->declBit(c+611,"top IntrUnit ismepc", false,-1);
        tracep->declBit(c+612,"top IntrUnit ismcase", false,-1);
        tracep->declBit(c+721,"top IntrUnit ismstatus", false,-1);
        tracep->declQuad(c+613,"top IntrUnit mcaseData", false,-1, 63,0);
        tracep->declQuad(c+615,"top IntrUnit mepcData", false,-1, 63,0);
        tracep->declQuad(c+617,"top IntrUnit csrData", false,-1, 63,0);
        tracep->declBus(c+734,"top IntrUnit CSRwEn NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit CSRwEn KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top IntrUnit CSRwEn DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top IntrUnit CSRwEn HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+606,"top IntrUnit CSRwEn out", false,-1, 0,0);
        tracep->declBus(c+716,"top IntrUnit CSRwEn key", false,-1, 2,0);
        tracep->declBus(c+748,"top IntrUnit CSRwEn default_out", false,-1, 0,0);
        tracep->declBus(c+772,"top IntrUnit CSRwEn lut", false,-1, 11,0);
        tracep->declBus(c+752,"top IntrUnit CSRwEn PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+70+i*1,"top IntrUnit CSRwEn pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+73+i*1,"top IntrUnit CSRwEn key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+76+i*1,"top IntrUnit CSRwEn data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+619,"top IntrUnit CSRwEn lut_out", false,-1, 0,0);
        tracep->declBit(c+620,"top IntrUnit CSRwEn hit", false,-1);
        tracep->declBus(c+764,"top IntrUnit CSRwEn i", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit mcaseDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit mcaseDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top IntrUnit mcaseDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top IntrUnit mcaseDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+613,"top IntrUnit mcaseDataSrc out", false,-1, 63,0);
        tracep->declBus(c+716,"top IntrUnit mcaseDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+759,"top IntrUnit mcaseDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+621,"top IntrUnit mcaseDataSrc lut", false,-1, 200,0);
        tracep->declBus(c+761,"top IntrUnit mcaseDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+628+i*3,"top IntrUnit mcaseDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+637+i*1,"top IntrUnit mcaseDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+640+i*2,"top IntrUnit mcaseDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+646,"top IntrUnit mcaseDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+648,"top IntrUnit mcaseDataSrc hit", false,-1);
        tracep->declBus(c+764,"top IntrUnit mcaseDataSrc i", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit mepcDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit mepcDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top IntrUnit mepcDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top IntrUnit mepcDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+615,"top IntrUnit mepcDataSrc out", false,-1, 63,0);
        tracep->declBus(c+716,"top IntrUnit mepcDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+759,"top IntrUnit mepcDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+649,"top IntrUnit mepcDataSrc lut", false,-1, 200,0);
        tracep->declBus(c+761,"top IntrUnit mepcDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+656+i*3,"top IntrUnit mepcDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+665+i*1,"top IntrUnit mepcDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+668+i*2,"top IntrUnit mepcDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+674,"top IntrUnit mepcDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+676,"top IntrUnit mepcDataSrc hit", false,-1);
        tracep->declBus(c+764,"top IntrUnit mepcDataSrc i", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit scrDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+734,"top IntrUnit scrDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+729,"top IntrUnit scrDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+736,"top IntrUnit scrDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+617,"top IntrUnit scrDataSrc out", false,-1, 63,0);
        tracep->declBus(c+716,"top IntrUnit scrDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+759,"top IntrUnit scrDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+677,"top IntrUnit scrDataSrc lut", false,-1, 133,0);
        tracep->declBus(c+761,"top IntrUnit scrDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+682+i*3,"top IntrUnit scrDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+688+i*1,"top IntrUnit scrDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+690+i*2,"top IntrUnit scrDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+694,"top IntrUnit scrDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+696,"top IntrUnit scrDataSrc hit", false,-1);
        tracep->declBus(c+758,"top IntrUnit scrDataSrc i", false,-1, 31,0);
        tracep->declBus(c+729,"top IntrUnit mtvecReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top IntrUnit mtvecReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top IntrUnit mtvecReg clk", false,-1);
        tracep->declBit(c+748,"top IntrUnit mtvecReg rst", false,-1);
        tracep->declQuad(c+617,"top IntrUnit mtvecReg din", false,-1, 63,0);
        tracep->declQuad(c+602,"top IntrUnit mtvecReg dout", false,-1, 63,0);
        tracep->declBit(c+722,"top IntrUnit mtvecReg wen", false,-1);
        tracep->declBus(c+729,"top IntrUnit mepcReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top IntrUnit mepcReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top IntrUnit mepcReg clk", false,-1);
        tracep->declBit(c+748,"top IntrUnit mepcReg rst", false,-1);
        tracep->declQuad(c+615,"top IntrUnit mepcReg din", false,-1, 63,0);
        tracep->declQuad(c+598,"top IntrUnit mepcReg dout", false,-1, 63,0);
        tracep->declBit(c+697,"top IntrUnit mepcReg wen", false,-1);
        tracep->declBus(c+729,"top IntrUnit mcaseReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top IntrUnit mcaseReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top IntrUnit mcaseReg clk", false,-1);
        tracep->declBit(c+748,"top IntrUnit mcaseReg rst", false,-1);
        tracep->declQuad(c+613,"top IntrUnit mcaseReg din", false,-1, 63,0);
        tracep->declQuad(c+600,"top IntrUnit mcaseReg dout", false,-1, 63,0);
        tracep->declBit(c+698,"top IntrUnit mcaseReg wen", false,-1);
        tracep->declBus(c+729,"top IntrUnit mstatusReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top IntrUnit mstatusReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+699,"top IntrUnit mstatusReg clk", false,-1);
        tracep->declBit(c+748,"top IntrUnit mstatusReg rst", false,-1);
        tracep->declQuad(c+617,"top IntrUnit mstatusReg din", false,-1, 63,0);
        tracep->declQuad(c+604,"top IntrUnit mstatusReg dout", false,-1, 63,0);
        tracep->declBit(c+723,"top IntrUnit mstatusReg wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp890;
    VlWide<3>/*95:0*/ __Vtemp891;
    VlWide<3>/*95:0*/ __Vtemp892;
    VlWide<3>/*95:0*/ __Vtemp893;
    VlWide<3>/*95:0*/ __Vtemp894;
    VlWide<3>/*95:0*/ __Vtemp897;
    VlWide<3>/*95:0*/ __Vtemp898;
    VlWide<3>/*95:0*/ __Vtemp899;
    VlWide<3>/*95:0*/ __Vtemp900;
    VlWide<3>/*95:0*/ __Vtemp901;
    VlWide<4>/*127:0*/ __Vtemp903;
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
        tracep->fullSData(oldp+52,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+53,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
        tracep->fullSData(oldp+58,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+59,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+60,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+61,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0]),3);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1]),3);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[2]),3);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0]));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1]));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[2]));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__R_rs2),64);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__ALUct),5);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__Branch),3);
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__Less));
        tracep->fullBit(oldp+96,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__MemOP),3);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__RegSrc),2);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__MemWr));
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__MemOut),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__RegWdata),64);
        tracep->fullBit(oldp+104,(((IData)(vlSelf->top__DOT__IntrEn) 
                                   & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__IntrEn));
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__IntrOut),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__isTuncate));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__isSext));
        tracep->fullBit(oldp+110,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                         >> 1U))));
        tracep->fullBit(oldp+111,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+112,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->top__DOT__Imm
                                      : 4ULL)),64);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__hit));
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+223,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+226,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+229,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+235,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+238,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+239,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+240,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+241,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+260,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+262,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp890, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp891, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp892, __Vtemp890, __Vtemp891);
        VL_EXTEND_WI(65,1, __Vtemp893, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp894, __Vtemp892, __Vtemp893);
        tracep->fullBit(oldp+265,((1U & __Vtemp894[2U])));
        tracep->fullBit(oldp+266,((((1U & (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
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
        tracep->fullBit(oldp+267,((1U & ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
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
        VL_EXTEND_WQ(65,64, __Vtemp897, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp898, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp899, __Vtemp897, __Vtemp898);
        VL_EXTEND_WI(65,1, __Vtemp900, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp901, __Vtemp899, __Vtemp900);
        tracep->fullBit(oldp+268,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp901[2U])))));
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+271,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+273,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+275,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+277,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ALU__DOT__DIV),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ALU__DOT__REM),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+285,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+292,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+295,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+298,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+301,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+303,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+315,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullCData(oldp+317,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+318,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+327,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+330,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+333,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+339,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+340,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key),2);
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut),264);
        tracep->fullWData(oldp+364,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+367,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+370,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+373,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0]),2);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1]),2);
        tracep->fullCData(oldp+378,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2]),2);
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3]),2);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out),64);
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit));
        tracep->fullCData(oldp+391,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key),2);
        tracep->fullWData(oldp+392,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut),264);
        tracep->fullWData(oldp+401,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+404,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+407,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+410,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+413,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0]),2);
        tracep->fullCData(oldp+414,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1]),2);
        tracep->fullCData(oldp+415,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2]),2);
        tracep->fullCData(oldp+416,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3]),2);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out),64);
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit));
        tracep->fullCData(oldp+428,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key),4);
        tracep->fullWData(oldp+429,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),748);
        tracep->fullWData(oldp+453,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+456,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+459,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+462,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+465,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+471,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+474,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+477,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        tracep->fullWData(oldp+480,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        tracep->fullWData(oldp+483,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        tracep->fullCData(oldp+486,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+487,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullCData(oldp+488,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        tracep->fullCData(oldp+489,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        tracep->fullCData(oldp+490,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        tracep->fullCData(oldp+491,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        tracep->fullCData(oldp+493,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        tracep->fullCData(oldp+494,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        tracep->fullCData(oldp+496,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+521,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+523,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+524,((0U != (IData)(vlSelf->top__DOT__MemOP))));
        tracep->fullCData(oldp+525,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+526,(vlSelf->top__DOT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+530,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+531,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+533,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+534,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+543,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+546,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+549,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+552,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+555,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+556,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+557,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+558,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+569,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+570,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),198);
        tracep->fullWData(oldp+577,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+583,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+586,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2]),2);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__IntrUnit__DOT__mepc),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__IntrUnit__DOT__mcase),64);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__IntrUnit__DOT__mtvec),64);
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__IntrUnit__DOT__mstatus),64);
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__IntrUnit__DOT__isCSRw));
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__IntrUnit__DOT__isecall));
        tracep->fullQData(oldp+608,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                      ? 0xbULL : 0xefffffffffffffffULL)),64);
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__IntrUnit__DOT__ismret));
        tracep->fullBit(oldp+611,(vlSelf->top__DOT__IntrUnit__DOT__ismepc));
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__IntrUnit__DOT__ismcase));
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__IntrUnit__DOT__mcaseData),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__IntrUnit__DOT__mepcData),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__IntrUnit__DOT__csrData),64);
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out));
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit));
        tracep->fullWData(oldp+621,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut),201);
        tracep->fullWData(oldp+628,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+631,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+634,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+637,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+639,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[2]),3);
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+646,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit));
        tracep->fullWData(oldp+649,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut),201);
        tracep->fullWData(oldp+656,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+659,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+662,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+666,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[2]),3);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+676,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit));
        tracep->fullWData(oldp+677,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut),134);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+685,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+688,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+689,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1]),3);
        tracep->fullQData(oldp+690,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+694,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit));
        tracep->fullBit(oldp+697,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+698,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+699,(vlSelf->clk));
        tracep->fullBit(oldp+700,(vlSelf->rst));
        tracep->fullIData(oldp+701,(vlSelf->Inst),32);
        tracep->fullQData(oldp+702,(vlSelf->pc),64);
        tracep->fullQData(oldp+704,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+706,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                      ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                      : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                          ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                          : vlSelf->pc))),64);
        tracep->fullQData(oldp+708,((((IData)(vlSelf->top__DOT__IntrEn) 
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
        tracep->fullQData(oldp+710,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+712,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+713,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+714,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+715,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+716,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+717,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+718,((vlSelf->Inst >> 7U)),25);
        tracep->fullSData(oldp+719,((vlSelf->Inst >> 0x14U)),12);
        tracep->fullBit(oldp+720,((0x305U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+721,((0x300U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+722,(((0x305U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullBit(oldp+723,(((0x300U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->fullQData(oldp+724,(vlSelf->top__DOT__waddr),64);
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+728,(vlSelf->top__DOT__wmask),8);
        tracep->fullIData(oldp+729,(0x40U),32);
        tracep->fullQData(oldp+730,(0x80000000ULL),64);
        tracep->fullBit(oldp+732,(1U));
        tracep->fullIData(oldp+733,(7U),32);
        tracep->fullIData(oldp+734,(3U),32);
        tracep->fullIData(oldp+735,(2U),32);
        tracep->fullIData(oldp+736,(1U),32);
        tracep->fullCData(oldp+737,(1U),2);
        tracep->fullIData(oldp+738,(5U),32);
        tracep->fullIData(oldp+739,(7U),32);
        tracep->fullIData(oldp+740,(0xcU),32);
        tracep->fullCData(oldp+741,(0U),3);
        __Vtemp903[0U] = 0x1d936b9aU;
        __Vtemp903[1U] = 0xece91bc7U;
        __Vtemp903[2U] = 0x64bd6f77U;
        __Vtemp903[3U] = 0x2681a6U;
        tracep->fullWData(oldp+742,(__Vtemp903),120);
        tracep->fullIData(oldp+746,(0xaU),32);
        tracep->fullIData(oldp+747,(0xcU),32);
        tracep->fullBit(oldp+748,(0U));
        tracep->fullCData(oldp+749,(0xe7U),8);
        tracep->fullIData(oldp+750,(8U),32);
        tracep->fullIData(oldp+751,(1U),32);
        tracep->fullIData(oldp+752,(4U),32);
        tracep->fullSData(oldp+753,(0x35bdU),16);
        tracep->fullIData(oldp+754,(4U),32);
        tracep->fullCData(oldp+755,(0U),2);
        tracep->fullIData(oldp+756,(0x1bceU),18);
        tracep->fullIData(oldp+757,(9U),32);
        tracep->fullIData(oldp+758,(2U),32);
        tracep->fullQData(oldp+759,(0ULL),64);
        tracep->fullIData(oldp+761,(0x43U),32);
        tracep->fullIData(oldp+762,(5U),32);
        tracep->fullIData(oldp+763,(0x42U),32);
        tracep->fullIData(oldp+764,(3U),32);
        tracep->fullIData(oldp+765,(6U),32);
        tracep->fullIData(oldp+766,(0xbU),32);
        tracep->fullIData(oldp+767,(0x44U),32);
        tracep->fullIData(oldp+768,(0xbU),32);
        tracep->fullCData(oldp+769,(0U),8);
        tracep->fullQData(oldp+770,(0xc060343cffULL),40);
        tracep->fullSData(oldp+772,(0x350U),12);
        tracep->fullIData(oldp+773,(0U),32);
    }
}
