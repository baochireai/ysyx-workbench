// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__4(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__RegisterFile__DOT__rf__v0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[vlSelf->__Vdlyvdim0__RegisterFile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__RegisterFile__DOT__rf__v0;
    }
}
