// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"
#include "Vtop__Syms.h"

VL_ATTR_COLD void Vtop_WB___stl_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___stl_sequent__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__Vcellinp__IntrUnit__i_iscsr = ((IData)(vlSymsp->TOP__top.__PVT__wb_iscsr) 
                                             & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = vlSymsp->TOP__top.__PVT__wb_MemOut;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = vlSymsp->TOP__top.__PVT__wb_ALUres;
    vlSelf->__Vcellinp__IntrUnit__i_ismret = ((IData)(vlSymsp->TOP__top.__PVT__wb_ismret) 
                                              & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__PVT__isRegWrite = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_isecall = ((IData)(vlSymsp->TOP__top.__PVT__wb_isecall) 
                                               & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
}
