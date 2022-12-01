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
        tracep->declBit(c+700,"clk", false,-1);
        tracep->declBit(c+701,"rst", false,-1);
        tracep->declBus(c+702,"Inst", false,-1, 31,0);
        tracep->declQuad(c+703,"pc", false,-1, 63,0);
        tracep->declBit(c+700,"top clk", false,-1);
        tracep->declBit(c+701,"top rst", false,-1);
        tracep->declBus(c+702,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+703,"top pc", false,-1, 63,0);
        tracep->declQuad(c+703,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+82,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+730,"top waddr", false,-1, 63,0);
        tracep->declQuad(c+732,"top wdata", false,-1, 63,0);
        tracep->declBus(c+734,"top wmask", false,-1, 7,0);
        tracep->declQuad(c+84,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+86,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+88,"top ALUct", false,-1, 4,0);
        tracep->declBus(c+89,"top Extop", false,-1, 2,0);
        tracep->declBit(c+90,"top RegWr", false,-1);
        tracep->declBit(c+91,"top ALUAsr", false,-1);
        tracep->declBus(c+92,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+93,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+95,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+705,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+97,"top Branch", false,-1, 2,0);
        tracep->declBit(c+98,"top Less", false,-1);
        tracep->declBit(c+99,"top Zero", false,-1);
        tracep->declBus(c+100,"top MemOP", false,-1, 2,0);
        tracep->declBus(c+101,"top RegSrc", false,-1, 1,0);
        tracep->declBit(c+102,"top MemWr", false,-1);
        tracep->declQuad(c+103,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+105,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+107,"top isIntrPC", false,-1);
        tracep->declQuad(c+707,"top IntrPC", false,-1, 63,0);
        tracep->declBit(c+108,"top IntrEn", false,-1);
        tracep->declQuad(c+109,"top IntrOut", false,-1, 63,0);
        tracep->declBit(c+111,"top clint_mtip", false,-1);
        tracep->declBit(c+112,"top clint_we", false,-1);
        tracep->declBit(c+113,"top clint_re", false,-1);
        tracep->declQuad(c+114,"top clint_dout", false,-1, 63,0);
        tracep->declBit(c+116,"top isTuncate", false,-1);
        tracep->declBit(c+117,"top isSext", false,-1);
        tracep->declBit(c+700,"top PC clk", false,-1);
        tracep->declBit(c+701,"top PC rst", false,-1);
        tracep->declBit(c+107,"top PC isIntrPC", false,-1);
        tracep->declQuad(c+705,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+707,"top PC IntrPC", false,-1, 63,0);
        tracep->declQuad(c+703,"top PC pc", false,-1, 63,0);
        tracep->declQuad(c+709,"top PC dpc", false,-1, 63,0);
        tracep->declBus(c+735,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+736,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+701,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+709,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+703,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+738,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+97,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+93,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+703,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+84,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+98,"top GenNextPC Less", false,-1);
        tracep->declBit(c+99,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+705,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+118,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+119,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+120,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+711,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+739,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+741,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+122,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+97,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+743,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+123,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+744,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+125+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+132+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+139+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+146,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+147,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+745,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+744,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+735,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+713,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+714,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+715,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+84,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+86,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+700,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+105,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+90,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+148+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+716,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+717,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+718,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+88,"top ContrGen ALUct", false,-1, 4,0);
        tracep->declBus(c+89,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+90,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+91,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+92,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+97,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+102,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+100,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBus(c+101,"top ContrGen RegSrc", false,-1, 1,0);
        tracep->declBit(c+116,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+117,"top ContrGen isSext", false,-1);
        tracep->declBit(c+108,"top ContrGen IntrEn", false,-1);
        tracep->declBus(c+746,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+740,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+89,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+716,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+747,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+748,"top ContrGen deExtop lut", false,-1, 119,0);
        tracep->declBus(c+752,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+13+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+25+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+212,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+213,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+753,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen isIntr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isIntr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+108,"top ContrGen isIntr out", false,-1, 0,0);
        tracep->declBus(c+716,"top ContrGen isIntr key", false,-1, 6,0);
        tracep->declBus(c+754,"top ContrGen isIntr default_out", false,-1, 0,0);
        tracep->declBus(c+755,"top ContrGen isIntr lut", false,-1, 7,0);
        tracep->declBus(c+756,"top ContrGen isIntr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+37+i*1,"top ContrGen isIntr pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isIntr key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+39+i*1,"top ContrGen isIntr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+214,"top ContrGen isIntr lut_out", false,-1, 0,0);
        tracep->declBit(c+215,"top ContrGen isIntr hit", false,-1);
        tracep->declBus(c+757,"top ContrGen isIntr i", false,-1, 31,0);
        tracep->declBus(c+758,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+90,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+89,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+754,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+759,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+758,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+40+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+44+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+48+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+216,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+217,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+760,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+741,"top ContrGen RegSrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+739,"top ContrGen RegSrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+741,"top ContrGen RegSrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ContrGen RegSrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+101,"top ContrGen RegSrcMux out", false,-1, 1,0);
        tracep->declBus(c+716,"top ContrGen RegSrcMux key", false,-1, 6,0);
        tracep->declBus(c+761,"top ContrGen RegSrcMux default_out", false,-1, 1,0);
        tracep->declBus(c+762,"top ContrGen RegSrcMux lut", false,-1, 17,0);
        tracep->declBus(c+763,"top ContrGen RegSrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+52+i*1,"top ContrGen RegSrcMux pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+54+i*1,"top ContrGen RegSrcMux key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+56+i*1,"top ContrGen RegSrcMux data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+218,"top ContrGen RegSrcMux lut_out", false,-1, 1,0);
        tracep->declBit(c+219,"top ContrGen RegSrcMux hit", false,-1);
        tracep->declBus(c+764,"top ContrGen RegSrcMux i", false,-1, 31,0);
        tracep->declBus(c+719,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+89,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+93,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+744,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+93,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+89,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+765,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+220,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+767,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+231+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+246+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+251+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+261,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+263,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+768,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+91,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+703,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+84,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+92,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+93,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+86,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+88,"top ALU ALUct", false,-1, 4,0);
        tracep->declBit(c+116,"top ALU isTuncate", false,-1);
        tracep->declBit(c+117,"top ALU isSext", false,-1);
        tracep->declQuad(c+95,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+98,"top ALU Less", false,-1);
        tracep->declBit(c+99,"top ALU Zero", false,-1);
        tracep->declQuad(c+264,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+266,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+268,"top ALU US_S", false,-1);
        tracep->declBit(c+269,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+268,"top ALU A_L", false,-1);
        tracep->declBit(c+270,"top ALU L_R", false,-1);
        tracep->declQuad(c+271,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+273,"top ALU Carry", false,-1);
        tracep->declBit(c+274,"top ALU Overflow", false,-1);
        tracep->declBit(c+275,"top ALU lessS", false,-1);
        tracep->declBit(c+276,"top ALU lessUS", false,-1);
        tracep->declQuad(c+277,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+279,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+281,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+283,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+285,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+287,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+289,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+291,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+740,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+266,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+92,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+293,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+769,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+300+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+309+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+312+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+318,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+320,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+770,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+264,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+266,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+269,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+271,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+273,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+274,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+99,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+321,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+735,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+264,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+323,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+268,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+270,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+116,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+277,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+324,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+758,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+277,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+325,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+326,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+335+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+347+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+351+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+359,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+361,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+760,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU diver NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU diver KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU diver DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU diver HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+287,"top ALU diver out", false,-1, 63,0);
        tracep->declBus(c+362,"top ALU diver key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU diver default_out", false,-1, 63,0);
        tracep->declArray(c+363,"top ALU diver lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU diver PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+372+i*3,"top ALU diver pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+384+i*1,"top ALU diver key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+388+i*2,"top ALU diver data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+396,"top ALU diver lut_out", false,-1, 63,0);
        tracep->declBit(c+398,"top ALU diver hit", false,-1);
        tracep->declBus(c+760,"top ALU diver i", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU remer NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top ALU remer KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU remer DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU remer HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+289,"top ALU remer out", false,-1, 63,0);
        tracep->declBus(c+399,"top ALU remer key", false,-1, 1,0);
        tracep->declQuad(c+765,"top ALU remer default_out", false,-1, 63,0);
        tracep->declArray(c+400,"top ALU remer lut", false,-1, 263,0);
        tracep->declBus(c+769,"top ALU remer PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+409+i*3,"top ALU remer pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+421+i*1,"top ALU remer key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+425+i*2,"top ALU remer data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+433,"top ALU remer lut_out", false,-1, 63,0);
        tracep->declBit(c+435,"top ALU remer hit", false,-1);
        tracep->declBus(c+760,"top ALU remer i", false,-1, 31,0);
        tracep->declBus(c+772,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+758,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+291,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+436,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+765,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+437,"top ALU deExtop lut", false,-1, 747,0);
        tracep->declBus(c+773,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+461+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+494+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+505+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+527,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+529,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+774,"top ALU deExtop i", false,-1, 31,0);
        tracep->declBit(c+700,"top DataMem clk", false,-1);
        tracep->declQuad(c+95,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+100,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+86,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+102,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+103,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBit(c+112,"top DataMem clint_we", false,-1);
        tracep->declBit(c+113,"top DataMem clint_re", false,-1);
        tracep->declBit(c+530,"top DataMem clint_en", false,-1);
        tracep->declBus(c+531,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+532,"top DataMem isSign", false,-1);
        tracep->declBit(c+533,"top DataMem RdEn", false,-1);
        tracep->declBus(c+534,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+535,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+539,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+758,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+756,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+531,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+540,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+775,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+776,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+752,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+58+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+62+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+66+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+541,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+542,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+760,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+758,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+103,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+540,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+765,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+543,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+769,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+552+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+564+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+568+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+576,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+578,"top DataMem sext hit", false,-1);
        tracep->declBus(c+760,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+740,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+105,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+101,"top RegWsrcMux key", false,-1, 1,0);
        tracep->declQuad(c+765,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+579,"top RegWsrcMux lut", false,-1, 197,0);
        tracep->declBus(c+769,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+586+i*3,"top RegWsrcMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+595+i*1,"top RegWsrcMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+598+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+604,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+606,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+770,"top RegWsrcMux i", false,-1, 31,0);
        tracep->declBit(c+700,"top IntrUnit clk", false,-1);
        tracep->declBit(c+108,"top IntrUnit IntrEn", false,-1);
        tracep->declBit(c+111,"top IntrUnit clint_mtip", false,-1);
        tracep->declQuad(c+703,"top IntrUnit pc", false,-1, 63,0);
        tracep->declQuad(c+84,"top IntrUnit R_rs1", false,-1, 63,0);
        tracep->declBus(c+713,"top IntrUnit zimm", false,-1, 4,0);
        tracep->declBus(c+720,"top IntrUnit csr", false,-1, 11,0);
        tracep->declBus(c+717,"top IntrUnit func3", false,-1, 2,0);
        tracep->declBit(c+107,"top IntrUnit isIntrPC", false,-1);
        tracep->declQuad(c+707,"top IntrUnit IntrPC", false,-1, 63,0);
        tracep->declQuad(c+109,"top IntrUnit dout", false,-1, 63,0);
        tracep->declQuad(c+607,"top IntrUnit mepc", false,-1, 63,0);
        tracep->declQuad(c+609,"top IntrUnit mtvec", false,-1, 63,0);
        tracep->declQuad(c+611,"top IntrUnit mstatus", false,-1, 63,0);
        tracep->declQuad(c+613,"top IntrUnit mie", false,-1, 63,0);
        tracep->declQuad(c+765,"top IntrUnit mip", false,-1, 63,0);
        tracep->declQuad(c+721,"top IntrUnit mcase", false,-1, 63,0);
        tracep->declBit(c+778,"top IntrUnit isCSRw", false,-1);
        tracep->declBit(c+615,"top IntrUnit mstatus_MIE", false,-1);
        tracep->declBit(c+616,"top IntrUnit mie_MTIE", false,-1);
        tracep->declBit(c+617,"top IntrUnit timer_irq", false,-1);
        tracep->declBit(c+618,"top IntrUnit irq_raise", false,-1);
        tracep->declBit(c+619,"top IntrUnit mip_MTIP", false,-1);
        tracep->declBit(c+620,"top IntrUnit isecall", false,-1);
        tracep->declQuad(c+621,"top IntrUnit eNo", false,-1, 63,0);
        tracep->declBit(c+623,"top IntrUnit ismret", false,-1);
        tracep->declBit(c+723,"top IntrUnit ismtvec", false,-1);
        tracep->declBit(c+624,"top IntrUnit ismepc", false,-1);
        tracep->declBit(c+625,"top IntrUnit ismcase", false,-1);
        tracep->declBit(c+626,"top IntrUnit ismstatus", false,-1);
        tracep->declBit(c+724,"top IntrUnit ismie", false,-1);
        tracep->declBit(c+725,"top IntrUnit ismip", false,-1);
        tracep->declQuad(c+627,"top IntrUnit csrWData", false,-1, 63,0);
        tracep->declQuad(c+726,"top IntrUnit mepcIn", false,-1, 63,0);
        tracep->declQuad(c+629,"top IntrUnit mcaseIn", false,-1, 63,0);
        tracep->declBit(c+631,"top IntrUnit mstatus_MPIE", false,-1);
        tracep->declQuad(c+632,"top IntrUnit mstatusIn", false,-1, 63,0);
        tracep->declBus(c+741,"top IntrUnit CSRwEn NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top IntrUnit CSRwEn KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit CSRwEn DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top IntrUnit CSRwEn HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+621,"top IntrUnit CSRwEn out", false,-1, 63,0);
        tracep->declBus(c+634,"top IntrUnit CSRwEn key", false,-1, 1,0);
        tracep->declQuad(c+765,"top IntrUnit CSRwEn default_out", false,-1, 63,0);
        tracep->declArray(c+779,"top IntrUnit CSRwEn lut", false,-1, 131,0);
        tracep->declBus(c+769,"top IntrUnit CSRwEn PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+70+i*3,"top IntrUnit CSRwEn pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+76+i*1,"top IntrUnit CSRwEn key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+78+i*2,"top IntrUnit CSRwEn data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+635,"top IntrUnit CSRwEn lut_out", false,-1, 63,0);
        tracep->declBit(c+637,"top IntrUnit CSRwEn hit", false,-1);
        tracep->declBus(c+764,"top IntrUnit CSRwEn i", false,-1, 31,0);
        tracep->declBus(c+771,"top IntrUnit scrDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+740,"top IntrUnit scrDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit scrDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+742,"top IntrUnit scrDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+627,"top IntrUnit scrDataSrc out", false,-1, 63,0);
        tracep->declBus(c+717,"top IntrUnit scrDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+765,"top IntrUnit scrDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+638,"top IntrUnit scrDataSrc lut", false,-1, 401,0);
        tracep->declBus(c+767,"top IntrUnit scrDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+651+i*3,"top IntrUnit scrDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+669+i*1,"top IntrUnit scrDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+675+i*2,"top IntrUnit scrDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+687,"top IntrUnit scrDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+689,"top IntrUnit scrDataSrc hit", false,-1);
        tracep->declBus(c+784,"top IntrUnit scrDataSrc i", false,-1, 31,0);
        tracep->declBus(c+735,"top IntrUnit mtvecReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mtvecReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit mtvecReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mtvecReg rst", false,-1);
        tracep->declQuad(c+627,"top IntrUnit mtvecReg din", false,-1, 63,0);
        tracep->declQuad(c+609,"top IntrUnit mtvecReg dout", false,-1, 63,0);
        tracep->declBit(c+728,"top IntrUnit mtvecReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mepcReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mepcReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit mepcReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mepcReg rst", false,-1);
        tracep->declQuad(c+726,"top IntrUnit mepcReg din", false,-1, 63,0);
        tracep->declQuad(c+607,"top IntrUnit mepcReg dout", false,-1, 63,0);
        tracep->declBit(c+690,"top IntrUnit mepcReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mcaseReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mcaseReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit mcaseReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mcaseReg rst", false,-1);
        tracep->declQuad(c+629,"top IntrUnit mcaseReg din", false,-1, 63,0);
        tracep->declQuad(c+721,"top IntrUnit mcaseReg dout", false,-1, 63,0);
        tracep->declBit(c+691,"top IntrUnit mcaseReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mstatusReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+785,"top IntrUnit mstatusReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit mstatusReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mstatusReg rst", false,-1);
        tracep->declQuad(c+632,"top IntrUnit mstatusReg din", false,-1, 63,0);
        tracep->declQuad(c+611,"top IntrUnit mstatusReg dout", false,-1, 63,0);
        tracep->declBit(c+692,"top IntrUnit mstatusReg wen", false,-1);
        tracep->declBus(c+735,"top IntrUnit mieReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+765,"top IntrUnit mieReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit mieReg clk", false,-1);
        tracep->declBit(c+754,"top IntrUnit mieReg rst", false,-1);
        tracep->declQuad(c+627,"top IntrUnit mieReg din", false,-1, 63,0);
        tracep->declQuad(c+613,"top IntrUnit mieReg dout", false,-1, 63,0);
        tracep->declBit(c+729,"top IntrUnit mieReg wen", false,-1);
        tracep->declBit(c+700,"top clintU clk", false,-1);
        tracep->declQuad(c+86,"top clintU clint_din", false,-1, 63,0);
        tracep->declQuad(c+95,"top clintU clint_addr", false,-1, 63,0);
        tracep->declBit(c+112,"top clintU we", false,-1);
        tracep->declBit(c+113,"top clintU re", false,-1);
        tracep->declBit(c+111,"top clintU clint_mtip", false,-1);
        tracep->declQuad(c+114,"top clintU clint_dout", false,-1, 63,0);
        tracep->declQuad(c+693,"top clintU mtime", false,-1, 63,0);
        tracep->declQuad(c+695,"top clintU mtimecmp", false,-1, 63,0);
        tracep->declBit(c+697,"top clintU ismtimecmp", false,-1);
        tracep->declBit(c+698,"top clintU ismtime", false,-1);
        tracep->declBus(c+735,"top clintU mtimecmp_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+787,"top clintU mtimecmp_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+700,"top clintU mtimecmp_Reg clk", false,-1);
        tracep->declBit(c+754,"top clintU mtimecmp_Reg rst", false,-1);
        tracep->declQuad(c+86,"top clintU mtimecmp_Reg din", false,-1, 63,0);
        tracep->declQuad(c+695,"top clintU mtimecmp_Reg dout", false,-1, 63,0);
        tracep->declBit(c+699,"top clintU mtimecmp_Reg wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp873;
    VlWide<3>/*95:0*/ __Vtemp874;
    VlWide<3>/*95:0*/ __Vtemp875;
    VlWide<3>/*95:0*/ __Vtemp876;
    VlWide<3>/*95:0*/ __Vtemp877;
    VlWide<3>/*95:0*/ __Vtemp880;
    VlWide<3>/*95:0*/ __Vtemp881;
    VlWide<3>/*95:0*/ __Vtemp882;
    VlWide<3>/*95:0*/ __Vtemp883;
    VlWide<3>/*95:0*/ __Vtemp884;
    VlWide<4>/*127:0*/ __Vtemp886;
    VlWide<5>/*159:0*/ __Vtemp887;
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
        tracep->fullWData(oldp+70,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+73,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0]),2);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1]),2);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__R_rs2),64);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__ALUct),5);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__Branch),3);
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__Less));
        tracep->fullBit(oldp+99,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__MemOP),3);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__RegSrc),2);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__MemWr));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__MemOut),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__RegWdata),64);
        tracep->fullBit(oldp+107,((((IData)(vlSelf->top__DOT__IntrEn) 
                                    & (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)) 
                                   | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__IntrEn));
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__IntrOut),64);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__clint_mtip));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__clint_we));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__clint_re));
        tracep->fullQData(oldp+114,(((- (QData)((IData)(vlSelf->top__DOT__clint_re))) 
                                     & ((0x200bff8ULL 
                                         == vlSelf->top__DOT__ALUres)
                                         ? vlSelf->top__DOT__clintU__DOT__mtime
                                         : ((0x2004000ULL 
                                             == vlSelf->top__DOT__ALUres)
                                             ? vlSelf->top__DOT__clintU__DOT__mtimecmp
                                             : 0ULL)))),64);
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__isTuncate));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__isSext));
        tracep->fullBit(oldp+118,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                         >> 1U))));
        tracep->fullBit(oldp+119,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+120,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->top__DOT__Imm
                                      : 4ULL)),64);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+214,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__hit));
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+231,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+234,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+237,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+240,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+243,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+246,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+248,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+268,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+270,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp873, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp874, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp875, __Vtemp873, __Vtemp874);
        VL_EXTEND_WI(65,1, __Vtemp876, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp877, __Vtemp875, __Vtemp876);
        tracep->fullBit(oldp+273,((1U & __Vtemp877[2U])));
        tracep->fullBit(oldp+274,((((1U & (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
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
        tracep->fullBit(oldp+275,((1U & ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
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
        VL_EXTEND_WQ(65,64, __Vtemp880, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp881, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp882, __Vtemp880, __Vtemp881);
        VL_EXTEND_WI(65,1, __Vtemp883, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp884, __Vtemp882, __Vtemp883);
        tracep->fullBit(oldp+276,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp884[2U])))));
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+279,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+281,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+283,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+285,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ALU__DOT__DIV),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ALU__DOT__REM),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+293,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+300,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+306,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+309,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+320,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+323,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+324,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+326,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+335,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+341,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+344,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key),2);
        tracep->fullWData(oldp+363,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut),264);
        tracep->fullWData(oldp+372,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+375,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+378,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+381,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+384,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0]),2);
        tracep->fullCData(oldp+385,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1]),2);
        tracep->fullCData(oldp+386,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2]),2);
        tracep->fullCData(oldp+387,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3]),2);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out),64);
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit));
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key),2);
        tracep->fullWData(oldp+400,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut),264);
        tracep->fullWData(oldp+409,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+412,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+415,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+418,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+421,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0]),2);
        tracep->fullCData(oldp+422,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1]),2);
        tracep->fullCData(oldp+423,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2]),2);
        tracep->fullCData(oldp+424,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3]),2);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out),64);
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit));
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key),4);
        tracep->fullWData(oldp+437,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),748);
        tracep->fullWData(oldp+461,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+464,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+467,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+473,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+476,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+479,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+485,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        tracep->fullWData(oldp+488,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        tracep->fullCData(oldp+494,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+495,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullCData(oldp+496,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        tracep->fullCData(oldp+497,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        tracep->fullCData(oldp+498,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        tracep->fullCData(oldp+500,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        tracep->fullCData(oldp+501,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        tracep->fullCData(oldp+502,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        tracep->fullCData(oldp+503,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+529,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__DataMem__DOT__clint_en));
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+532,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+533,(vlSelf->top__DOT__DataMem__DOT__RdEn));
        tracep->fullCData(oldp+534,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+535,(vlSelf->top__DOT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+539,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+540,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
        tracep->fullCData(oldp+541,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+542,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+543,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+552,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+555,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+558,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+561,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+564,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+565,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+566,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+567,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+568,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+570,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+572,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+576,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+579,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),198);
        tracep->fullWData(oldp+586,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+589,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+597,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2]),2);
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__IntrUnit__DOT__mepc),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__IntrUnit__DOT__mtvec),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__IntrUnit__DOT__mstatus),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__IntrUnit__DOT__mie),64);
        tracep->fullBit(oldp+615,((1U & (IData)((vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+616,((1U & (IData)((vlSelf->top__DOT__IntrUnit__DOT__mie 
                                                 >> 7U)))));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__IntrUnit__DOT__timer_irq));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__IntrUnit__DOT__irq_raise));
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__IntrUnit__DOT__mip_MTIP));
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__IntrUnit__DOT__isecall));
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__IntrUnit__DOT__eNo),64);
        tracep->fullBit(oldp+623,(vlSelf->top__DOT__IntrUnit__DOT__ismret));
        tracep->fullBit(oldp+624,(vlSelf->top__DOT__IntrUnit__DOT__ismepc));
        tracep->fullBit(oldp+625,(vlSelf->top__DOT__IntrUnit__DOT__ismcase));
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__IntrUnit__DOT__ismstatus));
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__IntrUnit__DOT__csrWData),64);
        tracep->fullQData(oldp+629,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                      ? vlSelf->top__DOT__IntrUnit__DOT__eNo
                                      : vlSelf->top__DOT__IntrUnit__DOT__csrWData)),64);
        tracep->fullBit(oldp+631,((1U & (IData)((vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                 >> 7U)))));
        tracep->fullQData(oldp+632,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                      ? ((0xffffffffffffff00ULL 
                                          & vlSelf->top__DOT__IntrUnit__DOT__mstatus) 
                                         | (QData)((IData)(
                                                           ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                         >> 3U)) 
                                                                << 7U)) 
                                                            | ((0x70U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                            >> 4U)) 
                                                                   << 4U)) 
                                                               | (7U 
                                                                  & (IData)(vlSelf->top__DOT__IntrUnit__DOT__mstatus)))))))
                                      : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                          ? ((0xffffffffffffff00ULL 
                                              & vlSelf->top__DOT__IntrUnit__DOT__mstatus) 
                                             | (QData)((IData)(
                                                               (0x80U 
                                                                | ((0x70U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                                >> 4U)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                                >> 7U)) 
                                                                          << 3U)) 
                                                                      | (7U 
                                                                         & (IData)(vlSelf->top__DOT__IntrUnit__DOT__mstatus))))))))
                                          : vlSelf->top__DOT__IntrUnit__DOT__csrWData))),64);
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__CSRwEn__key),2);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out),64);
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit));
        tracep->fullWData(oldp+638,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut),402);
        tracep->fullWData(oldp+651,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+654,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+657,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+660,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+663,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+666,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+671,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+672,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+673,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+674,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[5]),3);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[3]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[4]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[5]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit));
        tracep->fullBit(oldp+690,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc) 
                                    & (IData)(vlSelf->top__DOT__IntrEn)) 
                                   | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
        tracep->fullBit(oldp+691,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase) 
                                    & (IData)(vlSelf->top__DOT__IntrEn)) 
                                   | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
        tracep->fullBit(oldp+692,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismstatus) 
                                    & (IData)(vlSelf->top__DOT__IntrEn)) 
                                   | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__clintU__DOT__mtime),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__clintU__DOT__mtimecmp),64);
        tracep->fullBit(oldp+697,((0x2004000ULL == vlSelf->top__DOT__ALUres)));
        tracep->fullBit(oldp+698,((0x200bff8ULL == vlSelf->top__DOT__ALUres)));
        tracep->fullBit(oldp+699,(((IData)(vlSelf->top__DOT__clint_we) 
                                   & (0x2004000ULL 
                                      == vlSelf->top__DOT__ALUres))));
        tracep->fullBit(oldp+700,(vlSelf->clk));
        tracep->fullBit(oldp+701,(vlSelf->rst));
        tracep->fullIData(oldp+702,(vlSelf->Inst),32);
        tracep->fullQData(oldp+703,(vlSelf->pc),64);
        tracep->fullQData(oldp+705,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+707,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                      ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                      : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                          ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                          : vlSelf->pc))),64);
        tracep->fullQData(oldp+709,(((((IData)(vlSelf->top__DOT__IntrEn) 
                                       & (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))
                                      ? ((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
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
        tracep->fullQData(oldp+711,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+713,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+714,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+715,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+716,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+717,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+718,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+719,((vlSelf->Inst >> 7U)),25);
        tracep->fullSData(oldp+720,((vlSelf->Inst >> 0x14U)),12);
        tracep->fullQData(oldp+721,(vlSelf->top__DOT__IntrUnit__DOT__mcase),64);
        tracep->fullBit(oldp+723,((0x305U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+724,((0x304U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+725,((0x344U == (vlSelf->Inst 
                                              >> 0x14U))));
        tracep->fullQData(oldp+726,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                      ? vlSelf->pc : vlSelf->top__DOT__IntrUnit__DOT__csrWData)),64);
        tracep->fullBit(oldp+728,(((0x305U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrEn))));
        tracep->fullBit(oldp+729,(((0x304U == (vlSelf->Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__IntrEn))));
        tracep->fullQData(oldp+730,(vlSelf->top__DOT__waddr),64);
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+734,(vlSelf->top__DOT__wmask),8);
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
        __Vtemp886[0U] = 0x1d936b9aU;
        __Vtemp886[1U] = 0xece91bc7U;
        __Vtemp886[2U] = 0x64bd6f77U;
        __Vtemp886[3U] = 0x2681a6U;
        tracep->fullWData(oldp+748,(__Vtemp886),120);
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
        tracep->fullBit(oldp+778,(vlSelf->top__DOT__IntrUnit__DOT__isCSRw));
        __Vtemp887[0U] = 7U;
        __Vtemp887[1U] = 0x80000000U;
        __Vtemp887[2U] = 0x2eU;
        __Vtemp887[3U] = 0U;
        __Vtemp887[4U] = 4U;
        tracep->fullWData(oldp+779,(__Vtemp887),132);
        tracep->fullIData(oldp+784,(6U),32);
        tracep->fullQData(oldp+785,(0xa00001800ULL),64);
        tracep->fullQData(oldp+787,(0xffffffffffffffffULL),64);
    }
}
