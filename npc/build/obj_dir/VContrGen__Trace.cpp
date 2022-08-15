// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VContrGen__Syms.h"


void VContrGen___024root__traceChgSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep);

void VContrGen___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VContrGen___024root* const __restrict vlSelf = static_cast<VContrGen___024root*>(voidSelf);
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VContrGen___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VContrGen___024root__traceChgSub0(VContrGen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
            tracep->chgCData(oldp+3,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[0]),7);
            tracep->chgCData(oldp+4,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[1]),7);
            tracep->chgCData(oldp+5,(vlSelf->ContrGen__DOT__deExtop__DOT__key_list[2]),7);
            tracep->chgCData(oldp+6,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[0]),3);
            tracep->chgCData(oldp+7,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[1]),3);
            tracep->chgCData(oldp+8,(vlSelf->ContrGen__DOT__deExtop__DOT__data_list[2]),3);
            tracep->chgCData(oldp+9,(vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+10,(vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+11,(vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+12,(vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgBit(oldp+13,(vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[0]));
            tracep->chgBit(oldp+14,(vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[1]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+15,(vlSelf->ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+16,(vlSelf->ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+17,(vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+18,(vlSelf->ContrGen__DOT__isRegWr__DOT__hit));
        }
        tracep->chgCData(oldp+19,(vlSelf->opcode),7);
        tracep->chgCData(oldp+20,(vlSelf->func3),3);
        tracep->chgCData(oldp+21,(vlSelf->func7),7);
        tracep->chgCData(oldp+22,(vlSelf->ALUct),4);
        tracep->chgCData(oldp+23,(vlSelf->Extop),3);
        tracep->chgBit(oldp+24,(vlSelf->RegWr));
        tracep->chgBit(oldp+25,(vlSelf->ALUAsrc));
        tracep->chgBit(oldp+26,(vlSelf->ALUBsrc));
    }
}

void VContrGen___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VContrGen___024root* const __restrict vlSelf = static_cast<VContrGen___024root*>(voidSelf);
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
