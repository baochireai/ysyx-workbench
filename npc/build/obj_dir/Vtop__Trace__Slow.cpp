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
        tracep->declBit(c+144,"clk", false,-1);
        tracep->declBit(c+145,"rst", false,-1);
        tracep->declBus(c+146,"Inst", false,-1, 31,0);
        tracep->declQuad(c+147,"pc", false,-1, 63,0);
        tracep->declBit(c+144,"top clk", false,-1);
        tracep->declBit(c+145,"top rst", false,-1);
        tracep->declBus(c+146,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+147,"top pc", false,-1, 63,0);
        tracep->declQuad(c+149,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+151,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+16,"top ALUct", false,-1, 3,0);
        tracep->declBus(c+17,"top Extop", false,-1, 2,0);
        tracep->declBit(c+18,"top RegWr", false,-1);
        tracep->declBit(c+153,"top ALUAsr", false,-1);
        tracep->declBit(c+153,"top ALUBsr", false,-1);
        tracep->declQuad(c+19,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+21,"top ALUres", false,-1, 63,0);
        tracep->declBit(c+144,"top PC clk", false,-1);
        tracep->declBit(c+145,"top PC rst", false,-1);
        tracep->declQuad(c+147,"top PC pc", false,-1, 63,0);
        tracep->declBus(c+170,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+171,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+144,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+145,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+154,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+147,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+173,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+174,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+170,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+156,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+157,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+158,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+149,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+151,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+144,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+21,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+18,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+80+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+159,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+160,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+161,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+16,"top ContrGen ALUct", false,-1, 3,0);
        tracep->declBus(c+17,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+18,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+153,"top ContrGen ALUAsr", false,-1);
        tracep->declBit(c+153,"top ContrGen ALUBsr", false,-1);
        tracep->declBus(c+175,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+176,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+175,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+177,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+17,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+159,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+178,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declBus(c+179,"top ContrGen deExtop lut", false,-1, 29,0);
        tracep->declBus(c+180,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+23,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+24,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+181,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+182,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+175,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+177,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+177,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+18,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+17,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+183,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+184,"top ContrGen isRegWr lut", false,-1, 7,0);
        tracep->declBus(c+185,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+10+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+12+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+14+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+25,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+26,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+186,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+162,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+17,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+19,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+174,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+175,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+170,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+177,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+19,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+17,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+187,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+27,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+189,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+38+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+53+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+58+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+68,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+70,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+190,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+153,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+147,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+149,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBit(c+153,"top ALU ALUBsr", false,-1);
        tracep->declQuad(c+19,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+151,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+16,"top ALU ALUct", false,-1, 3,0);
        tracep->declQuad(c+21,"top ALU ALUres", false,-1, 63,0);
        tracep->declQuad(c+163,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+165,"top ALU ALUB", false,-1, 63,0);
        tracep->declBus(c+177,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+185,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+170,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+177,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+21,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+16,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+187,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+167,"top ALU deExtop lut", false,-1, 67,0);
        tracep->declBus(c+191,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+71+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+74+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+75+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+77,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+79,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+192,"top ALU deExtop i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp103;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ALUct),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__RegWr));
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+38,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+41,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+44,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+47,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+50,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+71,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullBit(oldp+144,(vlSelf->clk));
        tracep->fullBit(oldp+145,(vlSelf->rst));
        tracep->fullIData(oldp+146,(vlSelf->Inst),32);
        tracep->fullQData(oldp+147,(vlSelf->pc),64);
        tracep->fullQData(oldp+149,(((0U == (0x1fU 
                                             & (vlSelf->Inst 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                                     [(0x1fU & (vlSelf->Inst 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+151,(((0U == (0x1fU 
                                             & (vlSelf->Inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                                     [(0x1fU & (vlSelf->Inst 
                                                >> 0x14U))])),64);
        tracep->fullBit(oldp+153,((0x13U == (0x3ffU 
                                             & ((0x1fc00U 
                                                 & (vlSelf->Inst 
                                                    >> 0xfU)) 
                                                | ((0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst)))))));
        tracep->fullQData(oldp+154,((4ULL + vlSelf->pc)),64);
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+157,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+158,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+159,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+160,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+161,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+162,((vlSelf->Inst >> 7U)),25);
        tracep->fullQData(oldp+163,(((0x13U == (0x3ffU 
                                                & ((0x1fc00U 
                                                    & (vlSelf->Inst 
                                                       >> 0xfU)) 
                                                   | ((0x380U 
                                                       & (vlSelf->Inst 
                                                          >> 5U)) 
                                                      | (0x7fU 
                                                         & vlSelf->Inst)))))
                                      ? ((0U == (0x1fU 
                                                 & (vlSelf->Inst 
                                                    >> 0xfU)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__RegisterFile__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->Inst 
                                            >> 0xfU))])
                                      : vlSelf->pc)),64);
        tracep->fullQData(oldp+165,(((0x13U == (0x3ffU 
                                                & ((0x1fc00U 
                                                    & (vlSelf->Inst 
                                                       >> 0xfU)) 
                                                   | ((0x380U 
                                                       & (vlSelf->Inst 
                                                          >> 5U)) 
                                                      | (0x7fU 
                                                         & vlSelf->Inst)))))
                                      ? ((0U == (0x1fU 
                                                 & (vlSelf->Inst 
                                                    >> 0x14U)))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__RegisterFile__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->Inst 
                                            >> 0x14U))])
                                      : vlSelf->top__DOT__Imm)),64);
        VL_EXTEND_WQ(68,64, __Vtemp103, (((0x13U == 
                                           (0x3ffU 
                                            & ((0x1fc00U 
                                                & (vlSelf->Inst 
                                                   >> 0xfU)) 
                                               | ((0x380U 
                                                   & (vlSelf->Inst 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & vlSelf->Inst)))))
                                           ? ((0U == 
                                               (0x1fU 
                                                & (vlSelf->Inst 
                                                   >> 0xfU)))
                                               ? 0ULL
                                               : vlSelf->top__DOT__RegisterFile__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->Inst 
                                                   >> 0xfU))])
                                           : vlSelf->pc) 
                                         + ((0x13U 
                                             == (0x3ffU 
                                                 & ((0x1fc00U 
                                                     & (vlSelf->Inst 
                                                        >> 0xfU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->Inst 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & vlSelf->Inst)))))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Inst 
                                                     >> 0x14U)))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->top__DOT__RegisterFile__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelf->Inst 
                                                     >> 0x14U))])
                                             : vlSelf->top__DOT__Imm)));
        tracep->fullWData(oldp+167,(__Vtemp103),68);
        tracep->fullIData(oldp+170,(0x40U),32);
        tracep->fullQData(oldp+171,(0x80000000ULL),64);
        tracep->fullBit(oldp+173,(1U));
        tracep->fullIData(oldp+174,(5U),32);
        tracep->fullIData(oldp+175,(3U),32);
        tracep->fullIData(oldp+176,(7U),32);
        tracep->fullIData(oldp+177,(1U),32);
        tracep->fullCData(oldp+178,(0U),3);
        tracep->fullIData(oldp+179,(0x9a06999U),30);
        tracep->fullIData(oldp+180,(0xaU),32);
        tracep->fullIData(oldp+181,(3U),32);
        tracep->fullIData(oldp+182,(2U),32);
        tracep->fullBit(oldp+183,(0U));
        tracep->fullCData(oldp+184,(0x35U),8);
        tracep->fullIData(oldp+185,(4U),32);
        tracep->fullIData(oldp+186,(2U),32);
        tracep->fullQData(oldp+187,(0ULL),64);
        tracep->fullIData(oldp+189,(0x43U),32);
        tracep->fullIData(oldp+190,(5U),32);
        tracep->fullIData(oldp+191,(0x44U),32);
        tracep->fullIData(oldp+192,(1U),32);
    }
}
