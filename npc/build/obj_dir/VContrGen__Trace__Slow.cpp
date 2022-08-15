// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VContrGen__Syms.h"


void VContrGen___024root__traceInitSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VContrGen___024root__traceInitTop(VContrGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VContrGen___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VContrGen___024root__traceInitSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+20,"opcode", false,-1, 6,0);
        tracep->declBus(c+21,"func3", false,-1, 2,0);
        tracep->declBus(c+22,"func7", false,-1, 6,0);
        tracep->declBus(c+23,"ALUct", false,-1, 3,0);
        tracep->declBus(c+24,"Extop", false,-1, 2,0);
        tracep->declBit(c+25,"RegWr", false,-1);
        tracep->declBit(c+26,"ALUAsrc", false,-1);
        tracep->declBit(c+27,"ALUBsrc", false,-1);
        tracep->declBus(c+20,"ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+21,"ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+22,"ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+23,"ContrGen ALUct", false,-1, 3,0);
        tracep->declBus(c+24,"ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+25,"ContrGen RegWr", false,-1);
        tracep->declBit(c+26,"ContrGen ALUAsrc", false,-1);
        tracep->declBit(c+27,"ContrGen ALUBsrc", false,-1);
        tracep->declBus(c+28,"ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+29,"ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+28,"ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+30,"ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+24,"ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+20,"ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+31,"ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declBus(c+32,"ContrGen deExtop lut", false,-1, 29,0);
        tracep->declBus(c+33,"ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+16,"ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+17,"ContrGen deExtop hit", false,-1);
        tracep->declBus(c+34,"ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+35,"ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+28,"ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+30,"ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+30,"ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+25,"ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+24,"ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+36,"ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+37,"ContrGen isRegWr lut", false,-1, 7,0);
        tracep->declBus(c+38,"ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+10+i*1,"ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+12+i*1,"ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+14+i*1,"ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+18,"ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+19,"ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+39,"ContrGen isRegWr i", false,-1, 31,0);
    }
}

void VContrGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VContrGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VContrGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VContrGen___024root__traceRegister(VContrGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VContrGen___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VContrGen___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VContrGen___024root__traceCleanup, vlSelf);
    }
}

void VContrGen___024root__traceFullSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VContrGen___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VContrGen___024root* const __restrict vlSelf = static_cast<VContrGen___024root*>(voidSelf);
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VContrGen___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VContrGen___024root__traceFullSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullCData(oldp+4,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+5,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+6,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+7,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+8,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+9,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+10,(vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+13,(vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullBit(oldp+14,(vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+15,(vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullCData(oldp+16,(vlSelf->ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+17,(vlSelf->ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+18,(vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+19,(vlSelf->ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullCData(oldp+20,(vlSelf->opcode),7);
        tracep->fullCData(oldp+21,(vlSelf->func3),3);
        tracep->fullCData(oldp+22,(vlSelf->func7),7);
        tracep->fullCData(oldp+23,(vlSelf->ALUct),4);
        tracep->fullCData(oldp+24,(vlSelf->Extop),3);
        tracep->fullBit(oldp+25,(vlSelf->RegWr));
        tracep->fullBit(oldp+26,(vlSelf->ALUAsrc));
        tracep->fullBit(oldp+27,(vlSelf->ALUBsrc));
        tracep->fullIData(oldp+28,(3U),32);
        tracep->fullIData(oldp+29,(7U),32);
        tracep->fullIData(oldp+30,(1U),32);
        tracep->fullCData(oldp+31,(0U),3);
        tracep->fullIData(oldp+32,(0x9a06999U),30);
        tracep->fullIData(oldp+33,(0xaU),32);
        tracep->fullIData(oldp+34,(3U),32);
        tracep->fullIData(oldp+35,(2U),32);
        tracep->fullBit(oldp+36,(0U));
        tracep->fullCData(oldp+37,(0x35U),8);
        tracep->fullIData(oldp+38,(4U),32);
        tracep->fullIData(oldp+39,(2U),32);
    }
}
