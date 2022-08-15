// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegisterFile__Syms.h"


void VRegisterFile___024root__traceChgSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep);

void VRegisterFile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VRegisterFile___024root* const __restrict vlSelf = static_cast<VRegisterFile___024root*>(voidSelf);
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VRegisterFile___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VRegisterFile___024root__traceChgSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->RegisterFile__DOT__rf[31]),64);
        }
        tracep->chgIData(oldp+64,(vlSelf->rs1),32);
        tracep->chgIData(oldp+65,(vlSelf->rs2),32);
        tracep->chgIData(oldp+66,(vlSelf->waddr),32);
        tracep->chgQData(oldp+67,(vlSelf->R_rs1),64);
        tracep->chgQData(oldp+69,(vlSelf->R_rs2),64);
        tracep->chgBit(oldp+71,(vlSelf->clk));
        tracep->chgQData(oldp+72,(vlSelf->wdata),64);
        tracep->chgBit(oldp+74,(vlSelf->wen));
    }
}

void VRegisterFile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VRegisterFile___024root* const __restrict vlSelf = static_cast<VRegisterFile___024root*>(voidSelf);
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
