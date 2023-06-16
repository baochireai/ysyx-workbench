// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"

VL_INLINE_OPT void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__2(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__2\n"); );
    // Body
    vlSelf->__PVT__mcaseReg__DOT__rst_r2 = vlSelf->__PVT__mcaseReg__DOT__rst_r1;
    vlSelf->__PVT__mcaseReg__DOT__rst_r1 = 0U;
}
