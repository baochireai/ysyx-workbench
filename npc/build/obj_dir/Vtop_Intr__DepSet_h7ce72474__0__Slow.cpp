// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"
#include "Vtop__Syms.h"

VL_ATTR_COLD void Vtop_Intr___stl_sequent__TOP__top__IntrUnit__0(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_Intr___stl_sequent__TOP__top__IntrUnit__0\n"); );
    // Body
    vlSelf->__PVT__timer_irq = ((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                                 > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp) 
                                & ((IData)((vlSelf->__PVT__mstatus 
                                            >> 3U)) 
                                   & (IData)((vlSelf->__PVT__mie 
                                              >> 7U))));
}
