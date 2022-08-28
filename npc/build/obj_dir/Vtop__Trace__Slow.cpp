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
        tracep->declBit(c+227,"clk", false,-1);
        tracep->declBit(c+228,"rst", false,-1);
        tracep->declBus(c+229,"Inst", false,-1, 31,0);
        tracep->declQuad(c+230,"pc", false,-1, 63,0);
        tracep->declBit(c+227,"top clk", false,-1);
        tracep->declBit(c+228,"top rst", false,-1);
        tracep->declBus(c+229,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+230,"top pc", false,-1, 63,0);
        tracep->declQuad(c+46,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+232,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+48,"top ALUct", false,-1, 3,0);
        tracep->declBus(c+49,"top Extop", false,-1, 2,0);
        tracep->declBit(c+50,"top RegWr", false,-1);
        tracep->declBit(c+51,"top ALUAsr", false,-1);
        tracep->declBus(c+52,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+53,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+55,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+234,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+57,"top Branch", false,-1, 2,0);
        tracep->declBit(c+227,"top PC clk", false,-1);
        tracep->declBit(c+228,"top PC rst", false,-1);
        tracep->declQuad(c+234,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+230,"top PC pc", false,-1, 63,0);
        tracep->declBus(c+247,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+248,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+227,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+228,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+234,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+230,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+250,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+57,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+53,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+230,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+46,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declQuad(c+234,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+58,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+59,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+60,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+236,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+251,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+251,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+252,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+62,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+57,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+254,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declBus(c+255,"top GenNextPC dePCsrc lut", false,-1, 14,0);
        tracep->declBus(c+256,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+63,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+64,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+257,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+256,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+247,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+238,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+239,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+240,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+46,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+232,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+227,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+55,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+50,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+163+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+241,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+242,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+243,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+48,"top ContrGen ALUct", false,-1, 3,0);
        tracep->declBus(c+49,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+50,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+51,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+52,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+57,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBus(c+258,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+259,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+251,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+49,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+241,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+260,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+261,"top ContrGen deExtop lut", false,-1, 79,0);
        tracep->declBus(c+264,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+10+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+18+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+26+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+65,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+66,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+265,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+266,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+251,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+50,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+49,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+267,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+268,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+266,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+34+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+42+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+67,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+68,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+269,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+244,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+49,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+53,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+256,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+251,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+247,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+53,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+49,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+270,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+69,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+272,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+80+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+95+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+100+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+110,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+112,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+273,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+51,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+230,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+46,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+52,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+53,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+232,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+48,"top ALU ALUct", false,-1, 3,0);
        tracep->declQuad(c+55,"top ALU ALUres", false,-1, 63,0);
        tracep->declQuad(c+245,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+113,"top ALU ALUB", false,-1, 63,0);
        tracep->declBus(c+251,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+252,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+247,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+113,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+52,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+270,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+115,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+274,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+122+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+131+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+134+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+140,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+142,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+257,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+252,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+266,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+247,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+253,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+55,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+48,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+270,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+143,"top ALU deExtop lut", false,-1, 135,0);
        tracep->declBus(c+275,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+148+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+154+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+156+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+160,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+162,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+276,"top ALU deExtop i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp211;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__ALUct),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__Branch),3);
        tracep->fullBit(oldp+58,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                        >> 1U))));
        tracep->fullBit(oldp+59,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+60,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->top__DOT__Imm
                                     : 4ULL)),64);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+69,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+86,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+89,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+92,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullWData(oldp+115,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+122,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+125,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+128,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullWData(oldp+143,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),136);
        tracep->fullWData(oldp+148,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+151,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullBit(oldp+227,(vlSelf->clk));
        tracep->fullBit(oldp+228,(vlSelf->rst));
        tracep->fullIData(oldp+229,(vlSelf->Inst),32);
        tracep->fullQData(oldp+230,(vlSelf->pc),64);
        tracep->fullQData(oldp+232,(((0U == (0x1fU 
                                             & (vlSelf->Inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                                     [(0x1fU & (vlSelf->Inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+234,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+236,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+238,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+239,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+240,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+241,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+242,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+243,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+244,((vlSelf->Inst >> 7U)),25);
        tracep->fullQData(oldp+245,(((IData)(vlSelf->top__DOT__ALUAsr)
                                      ? vlSelf->top__DOT__R_rs1
                                      : vlSelf->pc)),64);
        tracep->fullIData(oldp+247,(0x40U),32);
        tracep->fullQData(oldp+248,(0x80000000ULL),64);
        tracep->fullBit(oldp+250,(1U));
        tracep->fullIData(oldp+251,(3U),32);
        tracep->fullIData(oldp+252,(2U),32);
        tracep->fullIData(oldp+253,(1U),32);
        tracep->fullCData(oldp+254,(1U),2);
        tracep->fullSData(oldp+255,(0x4eaU),15);
        tracep->fullIData(oldp+256,(5U),32);
        tracep->fullIData(oldp+257,(3U),32);
        tracep->fullIData(oldp+258,(8U),32);
        tracep->fullIData(oldp+259,(7U),32);
        tracep->fullCData(oldp+260,(0U),3);
        __Vtemp211[0U] = 0x77ece91bU;
        __Vtemp211[1U] = 0xa664bd6fU;
        __Vtemp211[2U] = 0x2681U;
        tracep->fullWData(oldp+261,(__Vtemp211),80);
        tracep->fullIData(oldp+264,(0xaU),32);
        tracep->fullIData(oldp+265,(8U),32);
        tracep->fullIData(oldp+266,(4U),32);
        tracep->fullBit(oldp+267,(0U));
        tracep->fullSData(oldp+268,(0x35bdU),16);
        tracep->fullIData(oldp+269,(4U),32);
        tracep->fullQData(oldp+270,(0ULL),64);
        tracep->fullIData(oldp+272,(0x43U),32);
        tracep->fullIData(oldp+273,(5U),32);
        tracep->fullIData(oldp+274,(0x42U),32);
        tracep->fullIData(oldp+275,(0x44U),32);
        tracep->fullIData(oldp+276,(2U),32);
    }
}
