// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop_Intr___initial__TOP__top__IntrUnit__2(Vtop_Intr* vlSelf) VL_ATTR_COLD;
void Vtop_top___initial__TOP__top__2(Vtop_top* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop_Intr___initial__TOP__top__IntrUnit__2((&vlSymsp->TOP__top__IntrUnit));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_top___initial__TOP__top__2((&vlSymsp->TOP__top));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_Intr___settle__TOP__top__IntrUnit__1(Vtop_Intr* vlSelf) VL_ATTR_COLD;
void Vtop_top___settle__TOP__top__1(Vtop_top* vlSelf) VL_ATTR_COLD;
void Vtop_top___settle__TOP__top__5(Vtop_top* vlSelf) VL_ATTR_COLD;
void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop_Intr___sequent__TOP__top__IntrUnit__4(Vtop_Intr* vlSelf);
void Vtop_top___sequent__TOP__top__4(Vtop_top* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop_Intr___settle__TOP__top__IntrUnit__1((&vlSymsp->TOP__top__IntrUnit));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_top___settle__TOP__top__1((&vlSymsp->TOP__top));
    Vtop_top___settle__TOP__top__5((&vlSymsp->TOP__top));
    Vtop___024root___sequent__TOP__1(vlSelf);
    Vtop_Intr___sequent__TOP__top__IntrUnit__4((&vlSymsp->TOP__top__IntrUnit));
    Vtop_top___sequent__TOP__top__4((&vlSymsp->TOP__top));
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->Inst = 0;
    vlSelf->pc = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
