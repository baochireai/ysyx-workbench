// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC__Syms.h"


void VPC___024root__traceInitSub0(VPC___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPC___024root__traceInitTop(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPC___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VPC___024root__traceInitSub0(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declQuad(c+3,"pc", false,-1, 63,0);
        tracep->declBit(c+1,"PC clk", false,-1);
        tracep->declBit(c+2,"PC rst", false,-1);
        tracep->declQuad(c+3,"PC pc", false,-1, 63,0);
        tracep->declBus(c+7,"PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+8,"PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1,"PC NEXT_PC clk", false,-1);
        tracep->declBit(c+2,"PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+5,"PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+3,"PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+10,"PC NEXT_PC wen", false,-1);
    }
}

void VPC___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VPC___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VPC___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VPC___024root__traceRegister(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VPC___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VPC___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VPC___024root__traceCleanup, vlSelf);
    }
}

void VPC___024root__traceFullSub0(VPC___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPC___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VPC___024root* const __restrict vlSelf = static_cast<VPC___024root*>(voidSelf);
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPC___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VPC___024root__traceFullSub0(VPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullQData(oldp+3,(vlSelf->pc),64);
        tracep->fullQData(oldp+5,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+7,(0x40U),32);
        tracep->fullQData(oldp+8,(0x80000000ULL),64);
        tracep->fullBit(oldp+10,(1U));
    }
}
