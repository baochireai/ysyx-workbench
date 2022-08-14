// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile___024root.h"
#include "VRegisterFile__Syms.h"

//==========


void VRegisterFile___024root___ctor_var_reset(VRegisterFile___024root* vlSelf);

VRegisterFile___024root::VRegisterFile___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRegisterFile___024root___ctor_var_reset(this);
}

void VRegisterFile___024root::__Vconfigure(VRegisterFile__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRegisterFile___024root::~VRegisterFile___024root() {
}

void VRegisterFile___024root___eval_initial(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VRegisterFile___024root___settle__TOP__2(VRegisterFile___024root* vlSelf);

void VRegisterFile___024root___eval_settle(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_settle\n"); );
    // Body
    VRegisterFile___024root___settle__TOP__2(vlSelf);
}

void VRegisterFile___024root___final(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___final\n"); );
}

void VRegisterFile___024root___ctor_var_reset(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2 = VL_RAND_RESET_I(32);
    vlSelf->waddr = VL_RAND_RESET_I(32);
    vlSelf->R_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->R_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->wdata = VL_RAND_RESET_Q(64);
    vlSelf->wen = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RegisterFile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
