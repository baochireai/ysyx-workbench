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
                                                                  ((3U 
                                                                    & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                                       >> 1U)) 
                                                                   == 
                                                                   vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((3U & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                  >> 1U)) 
                                           == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((3U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                                          >> 1U)) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((3U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                >> 1U)) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((3U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                                          >> 1U)) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((3U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                                >> 1U)) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__o_RegWdata = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit)
                                  ? vlSelf->__PVT__RegWsrcMux__DOT__lut_out
                                  : 0ULL);
}

VL_INLINE_OPT void Vtop_WB___nba_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___nba_sequent__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__Vcellinp__IntrUnit__i_iscsr = ((vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                              >> 4U) 
                                             & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U]))));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U]))) 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U]))));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U])) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U]))) 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = 
        (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
          << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])));
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = 
        (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U])) 
          << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U])));
    vlSelf->__PVT__o_RegWr_en = (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_ismret = ((vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                               >> 5U) 
                                              & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__Vcellinp__IntrUnit__i_isecall = ((vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                >> 6U) 
                                               & (IData)(vlSymsp->TOP__top.__PVT__wb_valid));
    vlSelf->__PVT__witf_pop_en = ((IData)(vlSelf->__PVT__o_RegWr_en) 
                                  & (0U != (0x1fU & 
                                            (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                             >> 7U))));
}
