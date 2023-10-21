// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_WB___ico_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___ico_sequent__TOP__top__WB__0\n"); );
    // Init
    QData/*63:0*/ __PVT__RegWsrcMux__DOT__lut_out;
    __PVT__RegWsrcMux__DOT__lut_out = 0;
    CData/*0:0*/ __PVT__RegWsrcMux__DOT__hit;
    __PVT__RegWsrcMux__DOT__hit = 0;
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout;
    __PVT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                           == 
                                                           vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                           [0U])))) 
                                       & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                       [0U]);
    __PVT__RegWsrcMux__DOT__hit = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                   == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                   [0U]);
    __PVT__RegWsrcMux__DOT__lut_out = (__PVT__RegWsrcMux__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                              == 
                                                              vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                              [1U])))) 
                                          & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                          [1U]));
    __PVT__RegWsrcMux__DOT__hit = ((IData)(__PVT__RegWsrcMux__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                      == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                      [1U]));
    __PVT__RegWsrcMux__DOT__lut_out = (__PVT__RegWsrcMux__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                              == 
                                                              vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                              [2U])))) 
                                          & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                          [2U]));
    __PVT__RegWsrcMux__DOT__hit = ((IData)(__PVT__RegWsrcMux__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                      == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                      [2U]));
    vlSelf->__PVT__o_RegWdata = ((IData)(__PVT__RegWsrcMux__DOT__hit)
                                  ? __PVT__RegWsrcMux__DOT__lut_out
                                  : 0ULL);
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = vlSymsp->TOP__top.__PVT__wb_MemOut;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = vlSymsp->TOP__top.__PVT__wb_ALUres;
    vlSelf->__PVT__isRegWrite = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_isecall = ((IData)(vlSymsp->TOP__top.__PVT__wb_isecall) 
                                               & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_ismret = ((IData)(vlSymsp->TOP__top.__PVT__wb_ismret) 
                                              & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_iscsr = ((IData)(vlSymsp->TOP__top.__PVT__wb_iscsr) 
                                             & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
}
