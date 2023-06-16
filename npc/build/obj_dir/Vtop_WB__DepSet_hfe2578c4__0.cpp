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
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout;
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                   == 
                                                                   vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                           == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__RegWdata = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit)
                                ? vlSelf->__PVT__RegWsrcMux__DOT__lut_out
                                : 0ULL);
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__Vdlyvset__RegisterFile__DOT__rf__v0 = 0U;
    if (((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
         & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                            >> 7U))))) {
        vlSelf->__Vdlyvval__RegisterFile__DOT__rf__v0 
            = vlSelf->__PVT__RegWdata;
        vlSelf->__Vdlyvset__RegisterFile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__1(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__1\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = (IData)(vlSymsp->TOP__top.__PVT__wb_ALUres);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = (IData)((vlSymsp->TOP__top.__PVT__wb_ALUres 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = vlSymsp->TOP__top.__PVT__wb_ALUres;
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__2(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__2\n"); );
    // Body
    vlSelf->__PVT__wb_valid = ((~ (IData)(vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r2)) 
                               & (IData)(vlSelf->__PVT__wb_valid_next));
    vlSelf->__PVT__isIntrPC = ((~ (IData)(vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r2)) 
                               & (((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                                   & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                                  | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)));
    vlSelf->__PVT__IntrPC = ((IData)(vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r2)
                              ? 0ULL : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                         : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                             ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                             : vlSymsp->TOP__top.__PVT__wb_pc)));
    vlSelf->__PVT__wb_ready = (1U & ((~ (IData)(vlSelf->__PVT__wb_valid)) 
                                     | ((IData)(vlSymsp->TOP__top.__PVT__ifu_ready) 
                                        & (IData)(vlSelf->__PVT__wb_valid))));
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__3(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__3\n"); );
    // Body
    vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r2 = ((IData)(vlSymsp->TOP.rst) 
                                                 | (IData)(vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r1));
    vlSelf->__PVT__wb_IntrPC_reg__DOT__rst_r1 = vlSymsp->TOP.rst;
}

VL_INLINE_OPT void Vtop_WB___nba_comb__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_comb__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__PVT__wb_valid_next = (((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                                     & (IData)(vlSelf->__PVT__wb_valid)) 
                                    | ((IData)(vlSelf->__PVT__wb_ready) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)));
}

VL_INLINE_OPT void Vtop_WB___nba_comb__TOP__top__WB__1(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_comb__TOP__top__WB__1\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout;
}

VL_INLINE_OPT void Vtop_WB___nba_comb__TOP__top__WB__2(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_comb__TOP__top__WB__2\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = (IData)(vlSymsp->TOP__top.__PVT__memout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = (IData)((vlSymsp->TOP__top.__PVT__memout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = vlSymsp->TOP__top.__PVT__memout;
}

VL_INLINE_OPT void Vtop_WB___nba_comb__TOP__top__WB__3(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_comb__TOP__top__WB__3\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                   == 
                                                                   vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                           == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSymsp->TOP__top.__PVT__wb_RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__RegWdata = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit)
                                ? vlSelf->__PVT__RegWsrcMux__DOT__lut_out
                                : 0ULL);
}
