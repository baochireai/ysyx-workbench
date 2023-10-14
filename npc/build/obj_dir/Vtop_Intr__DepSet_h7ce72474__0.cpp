// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0\n"); );
    // Body
    vlSelf->__PVT__dout = ((0x305U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                       >> 0x14U)) ? vlSelf->__PVT__mtvec
                            : ((IData)(vlSelf->__PVT__ismepc)
                                ? vlSelf->__PVT__mepc
                                : ((IData)(vlSelf->__PVT__ismcase)
                                    ? vlSelf->mcase
                                    : ((IData)(vlSelf->__PVT__ismstatus)
                                        ? vlSelf->__PVT__mstatus
                                        : ((0x304U 
                                            == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0x14U))
                                            ? vlSelf->__PVT__mie
                                            : 0ULL)))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][0U] 
        = (IData)(((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xfU))))) 
                   & vlSelf->__PVT__dout));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][1U] 
        = (IData)((((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                 >> 0xfU))))) 
                    & vlSelf->__PVT__dout) >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][2U] = 7U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][0U] 
        = (IData)((vlSelf->__PVT__dout | (QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                             >> 0xfU))))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][1U] 
        = (IData)(((vlSelf->__PVT__dout | (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                              >> 0xfU))))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][2U] = 6U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][0U] 
        = (IData)(((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
                   | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                               >> 0xfU))))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][1U] 
        = (IData)((((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
                    | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xfU))))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][2U] = 5U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][0U] 
        = (IData)(((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                        << 0x3dU) | (((QData)((IData)(
                                                      vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                   >> 3U)))) 
                   & vlSelf->__PVT__dout));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][1U] 
        = (IData)((((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                         << 0x3dU) | (((QData)((IData)(
                                                       vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                       >> 3U)))) & vlSelf->__PVT__dout) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][2U] = 3U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][0U] 
        = (IData)((vlSelf->__PVT__dout | (((QData)((IData)(
                                                           vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                           << 0x3dU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                >> 3U)))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][1U] 
        = (IData)(((vlSelf->__PVT__dout | (((QData)((IData)(
                                                            vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                 >> 3U)))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][2U] = 2U;
    vlSelf->__PVT__scrDataSrc__DOT__data_list[0U] = 
        ((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                      >> 0xfU))))) 
         & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[1U] = 
        (vlSelf->__PVT__dout | (QData)((IData)((0x1fU 
                                                & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                   >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[2U] = 
        ((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
         | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                     >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[3U] = 
        ((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
              << 0x3dU) | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                            << 0x1dU) | ((QData)((IData)(
                                                         vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                         >> 3U)))) 
         & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[4U] = 
        (vlSelf->__PVT__dout | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                 >> 3U))));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((7U 
                                                                    & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                       >> 0xcU)) 
                                                                   == 
                                                                   vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((7U & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                  >> 0xcU)) 
                                           == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [3U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [4U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [5U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [5U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [5U]));
    vlSelf->__PVT__csrWData = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit)
                                ? vlSelf->__PVT__scrDataSrc__DOT__lut_out
                                : 0ULL);
    vlSelf->__PVT__mstatusIn = ((IData)(vlSelf->__PVT__irq_raise)
                                 ? ((0xffffffffffffff00ULL 
                                     & vlSelf->__PVT__mstatus) 
                                    | (QData)((IData)(
                                                      ((0x80U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__mstatus 
                                                                    >> 3U)) 
                                                           << 7U)) 
                                                       | ((0x70U 
                                                           & ((IData)(
                                                                      (vlSelf->__PVT__mstatus 
                                                                       >> 4U)) 
                                                              << 4U)) 
                                                          | (7U 
                                                             & (IData)(vlSelf->__PVT__mstatus)))))))
                                 : ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret)
                                     ? ((0xffffffffffffff00ULL 
                                         & vlSelf->__PVT__mstatus) 
                                        | (QData)((IData)(
                                                          (0x80U 
                                                           | ((0x70U 
                                                               & ((IData)(
                                                                          (vlSelf->__PVT__mstatus 
                                                                           >> 4U)) 
                                                                  << 4U)) 
                                                              | ((8U 
                                                                  & ((IData)(
                                                                             (vlSelf->__PVT__mstatus 
                                                                              >> 7U)) 
                                                                     << 3U)) 
                                                                 | (7U 
                                                                    & (IData)(vlSelf->__PVT__mstatus))))))))
                                     : vlSelf->__PVT__csrWData));
}

void Vtop___024unit____Vdpiimwrap_timerIntr_raise_TOP____024unit(QData/*63:0*/ mcauseRegp);

VL_INLINE_OPT void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0\n"); );
    // Body
    if (vlSelf->__PVT__timer_irq) {
        Vtop___024unit____Vdpiimwrap_timerIntr_raise_TOP____024unit(
                                                                    ((IData)(vlSelf->__PVT__irq_raise)
                                                                      ? vlSelf->__PVT__eNo
                                                                      : vlSelf->__PVT__csrWData));
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->mcase = 0ULL;
        vlSelf->__PVT__mstatus = 0xa00001800ULL;
        vlSelf->__PVT__mtvec = 0ULL;
        vlSelf->__PVT__mepc = 0ULL;
        vlSelf->__PVT__mie = 0ULL;
    } else {
        if ((((IData)(vlSelf->__PVT__ismcase) & (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_iscsr)) 
             | (IData)(vlSelf->__PVT__irq_raise))) {
            vlSelf->mcase = ((IData)(vlSelf->__PVT__irq_raise)
                              ? vlSelf->__PVT__eNo : vlSelf->__PVT__csrWData);
        }
        if ((((IData)(vlSelf->__PVT__ismstatus) & (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_iscsr)) 
             | ((IData)(vlSelf->__PVT__irq_raise) | (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret)))) {
            vlSelf->__PVT__mstatus = vlSelf->__PVT__mstatusIn;
        }
        if (((0x305U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                         >> 0x14U)) & (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_iscsr))) {
            vlSelf->__PVT__mtvec = vlSelf->__PVT__csrWData;
        }
        if ((((IData)(vlSelf->__PVT__ismepc) & (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_iscsr)) 
             | (IData)(vlSelf->__PVT__irq_raise))) {
            vlSelf->__PVT__mepc = ((IData)(vlSelf->__PVT__irq_raise)
                                    ? (((QData)((IData)(
                                                        vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])))
                                    : vlSelf->__PVT__csrWData);
        }
        if (((0x304U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                         >> 0x14U)) & (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_iscsr))) {
            vlSelf->__PVT__mie = vlSelf->__PVT__csrWData;
        }
    }
}

VL_INLINE_OPT void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1\n"); );
    // Body
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                    << 0x3dU) | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                               >> 3U))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][1U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                     << 0x3dU) | (((QData)((IData)(
                                                   vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                >> 3U))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][2U] = 1U;
    vlSelf->__PVT__scrDataSrc__DOT__data_list[5U] = 
        (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
          << 0x3dU) | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                        << 0x1dU) | ((QData)((IData)(
                                                     vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                     >> 3U)));
    vlSelf->__PVT__timer_irq = (((vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                  >> 3U) & (IData)(vlSymsp->TOP__top.__PVT__wb_valid)) 
                                & ((IData)((vlSelf->__PVT__mstatus 
                                            >> 3U)) 
                                   & (IData)((vlSelf->__PVT__mie 
                                              >> 7U))));
    vlSelf->__PVT__ismstatus = ((0x300U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                            >> 0x14U)) 
                                | (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret));
    vlSelf->__Vcellinp__CSRwEn__key = (((IData)(vlSelf->__PVT__timer_irq) 
                                        << 1U) | (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_isecall));
    vlSelf->__PVT__irq_raise = ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_isecall) 
                                | (IData)(vlSelf->__PVT__timer_irq));
    vlSelf->__PVT__CSRwEn__DOT__lut_out = ((- (QData)((IData)(
                                                              ((IData)(vlSelf->__Vcellinp__CSRwEn__key) 
                                                               == 
                                                               vlSelf->__PVT__CSRwEn__DOT__key_list
                                                               [0U])))) 
                                           & vlSelf->__PVT__CSRwEn__DOT__data_list
                                           [0U]);
    vlSelf->__PVT__CSRwEn__DOT__hit = ((IData)(vlSelf->__Vcellinp__CSRwEn__key) 
                                       == vlSelf->__PVT__CSRwEn__DOT__key_list
                                       [0U]);
    vlSelf->__PVT__CSRwEn__DOT__lut_out = (vlSelf->__PVT__CSRwEn__DOT__lut_out 
                                           | ((- (QData)((IData)(
                                                                 ((IData)(vlSelf->__Vcellinp__CSRwEn__key) 
                                                                  == 
                                                                  vlSelf->__PVT__CSRwEn__DOT__key_list
                                                                  [1U])))) 
                                              & vlSelf->__PVT__CSRwEn__DOT__data_list
                                              [1U]));
    vlSelf->__PVT__CSRwEn__DOT__hit = ((IData)(vlSelf->__PVT__CSRwEn__DOT__hit) 
                                       | ((IData)(vlSelf->__Vcellinp__CSRwEn__key) 
                                          == vlSelf->__PVT__CSRwEn__DOT__key_list
                                          [1U]));
    vlSelf->__PVT__eNo = ((IData)(vlSelf->__PVT__CSRwEn__DOT__hit)
                           ? vlSelf->__PVT__CSRwEn__DOT__lut_out
                           : 0ULL);
    vlSelf->__PVT__ismepc = ((0x341U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                         >> 0x14U)) 
                             | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__ismcase = ((0x342U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                          >> 0x14U)) 
                              | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__isIntrPC = ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret) 
                               | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__dout = ((0x305U == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                       >> 0x14U)) ? vlSelf->__PVT__mtvec
                            : ((IData)(vlSelf->__PVT__ismepc)
                                ? vlSelf->__PVT__mepc
                                : ((IData)(vlSelf->__PVT__ismcase)
                                    ? vlSelf->mcase
                                    : ((IData)(vlSelf->__PVT__ismstatus)
                                        ? vlSelf->__PVT__mstatus
                                        : ((0x304U 
                                            == (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0x14U))
                                            ? vlSelf->__PVT__mie
                                            : 0ULL)))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][0U] 
        = (IData)(((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xfU))))) 
                   & vlSelf->__PVT__dout));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][1U] 
        = (IData)((((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                 >> 0xfU))))) 
                    & vlSelf->__PVT__dout) >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][2U] = 7U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][0U] 
        = (IData)((vlSelf->__PVT__dout | (QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                             >> 0xfU))))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][1U] 
        = (IData)(((vlSelf->__PVT__dout | (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                              >> 0xfU))))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][2U] = 6U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][0U] 
        = (IData)(((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
                   | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                               >> 0xfU))))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][1U] 
        = (IData)((((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
                    | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xfU))))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][2U] = 5U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][0U] 
        = (IData)(((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                        << 0x3dU) | (((QData)((IData)(
                                                      vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                      << 0x1dU) | ((QData)((IData)(
                                                                   vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                   >> 3U)))) 
                   & vlSelf->__PVT__dout));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][1U] 
        = (IData)((((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                         << 0x3dU) | (((QData)((IData)(
                                                       vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                       >> 3U)))) & vlSelf->__PVT__dout) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][2U] = 3U;
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][0U] 
        = (IData)((vlSelf->__PVT__dout | (((QData)((IData)(
                                                           vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                           << 0x3dU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                >> 3U)))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][1U] 
        = (IData)(((vlSelf->__PVT__dout | (((QData)((IData)(
                                                            vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                 >> 3U)))) 
                   >> 0x20U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][2U] = 2U;
    vlSelf->__PVT__scrDataSrc__DOT__data_list[0U] = 
        ((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                      >> 0xfU))))) 
         & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[1U] = 
        (vlSelf->__PVT__dout | (QData)((IData)((0x1fU 
                                                & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                   >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[2U] = 
        ((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
         | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                     >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[3U] = 
        ((~ (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
              << 0x3dU) | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                            << 0x1dU) | ((QData)((IData)(
                                                         vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                         >> 3U)))) 
         & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[4U] = 
        (vlSelf->__PVT__dout | (((QData)((IData)(vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                                 >> 3U))));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((7U 
                                                                    & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                       >> 0xcU)) 
                                                                   == 
                                                                   vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((7U & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                  >> 0xcU)) 
                                           == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [3U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [4U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [5U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [5U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [5U]));
    vlSelf->__PVT__csrWData = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit)
                                ? vlSelf->__PVT__scrDataSrc__DOT__lut_out
                                : 0ULL);
    vlSelf->__PVT__mstatusIn = ((IData)(vlSelf->__PVT__irq_raise)
                                 ? ((0xffffffffffffff00ULL 
                                     & vlSelf->__PVT__mstatus) 
                                    | (QData)((IData)(
                                                      ((0x80U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__mstatus 
                                                                    >> 3U)) 
                                                           << 7U)) 
                                                       | ((0x70U 
                                                           & ((IData)(
                                                                      (vlSelf->__PVT__mstatus 
                                                                       >> 4U)) 
                                                              << 4U)) 
                                                          | (7U 
                                                             & (IData)(vlSelf->__PVT__mstatus)))))))
                                 : ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret)
                                     ? ((0xffffffffffffff00ULL 
                                         & vlSelf->__PVT__mstatus) 
                                        | (QData)((IData)(
                                                          (0x80U 
                                                           | ((0x70U 
                                                               & ((IData)(
                                                                          (vlSelf->__PVT__mstatus 
                                                                           >> 4U)) 
                                                                  << 4U)) 
                                                              | ((8U 
                                                                  & ((IData)(
                                                                             (vlSelf->__PVT__mstatus 
                                                                              >> 7U)) 
                                                                     << 3U)) 
                                                                 | (7U 
                                                                    & (IData)(vlSelf->__PVT__mstatus))))))))
                                     : vlSelf->__PVT__csrWData));
}
