// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_Intr.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_Intr___sequent__TOP__top__IntrUnit__3(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_Intr___sequent__TOP__top__IntrUnit__3\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__ismcase) & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
         | (IData)(vlSelf->__PVT__irq_raise))) {
        vlSelf->mcase = ((IData)(vlSelf->__PVT__irq_raise)
                          ? vlSelf->__PVT__eNo : vlSelf->__PVT__csrWData);
    }
    if ((((IData)(vlSelf->__PVT__ismstatus) & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
         | (IData)(vlSelf->__PVT__irq_raise))) {
        vlSelf->__PVT__mstatus = vlSelf->__PVT__mstatusIn;
    }
    if (((0x305U == (vlSymsp->TOP__top.Inst >> 0x14U)) 
         & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))) {
        vlSelf->__PVT__mtvec = vlSelf->__PVT__csrWData;
    }
    if (((0x304U == (vlSymsp->TOP__top.Inst >> 0x14U)) 
         & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))) {
        vlSelf->__PVT__mie = vlSelf->__PVT__csrWData;
    }
    if ((((IData)(vlSelf->__PVT__ismepc) & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
         | (IData)(vlSelf->__PVT__irq_raise))) {
        vlSelf->__PVT__mepc = ((IData)(vlSelf->__PVT__irq_raise)
                                ? vlSymsp->TOP__top.pc
                                : vlSelf->__PVT__csrWData);
    }
}

void Vtop___024unit____Vdpiimwrap_timerIntr_raise_TOP____024unit(QData/*63:0*/ mcauseRegp);

VL_INLINE_OPT void Vtop_Intr___sequent__TOP__top__IntrUnit__4(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_Intr___sequent__TOP__top__IntrUnit__4\n"); );
    // Body
    vlSelf->__PVT__mip_MTIP = vlSymsp->TOP__top.__PVT__clint_mtip;
    vlSelf->__PVT__timer_irq = (((IData)(vlSymsp->TOP__top.__PVT__clint_mtip) 
                                 & (IData)((vlSelf->__PVT__mstatus 
                                            >> 3U))) 
                                & (IData)((vlSelf->__PVT__mie 
                                           >> 7U)));
    vlSelf->__PVT__ismret = ((~ (IData)((0U != (7U 
                                                & (vlSymsp->TOP__top.Inst 
                                                   >> 0xcU))))) 
                             & (0x302U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U)));
    vlSelf->__PVT__isecall = ((~ ((0U != (vlSymsp->TOP__top.Inst 
                                          >> 0x14U)) 
                                  | (0U != (7U & (vlSymsp->TOP__top.Inst 
                                                  >> 0xcU))))) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn));
    vlSelf->__PVT__ismstatus = ((0x300U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                | (IData)(vlSelf->__PVT__ismret));
    vlSelf->__PVT__irq_raise = ((IData)(vlSelf->__PVT__isecall) 
                                | (IData)(vlSelf->__PVT__timer_irq));
    vlSelf->__Vcellinp__CSRwEn__key = (((IData)(vlSelf->__PVT__timer_irq) 
                                        << 1U) | (IData)(vlSelf->__PVT__isecall));
    vlSelf->__PVT__ismepc = (((0x341U == (vlSymsp->TOP__top.Inst 
                                          >> 0x14U)) 
                              | (IData)(vlSelf->__PVT__isecall)) 
                             | (IData)(vlSelf->__PVT__timer_irq));
    vlSelf->__PVT__ismcase = (((0x342U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U)) 
                               | (IData)(vlSelf->__PVT__isecall)) 
                              | (IData)(vlSelf->__PVT__timer_irq));
    vlSelf->__PVT__IntrPC = ((IData)(vlSelf->__PVT__irq_raise)
                              ? vlSelf->__PVT__mtvec
                              : ((IData)(vlSelf->__PVT__ismret)
                                  ? vlSelf->__PVT__mepc
                                  : vlSymsp->TOP__top.pc));
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
    vlSelf->__PVT__dout = ((0x305U == (vlSymsp->TOP__top.Inst 
                                       >> 0x14U)) ? vlSelf->__PVT__mtvec
                            : ((IData)(vlSelf->__PVT__ismepc)
                                ? vlSelf->__PVT__mepc
                                : ((IData)(vlSelf->__PVT__ismcase)
                                    ? vlSelf->mcase
                                    : ((IData)(vlSelf->__PVT__ismstatus)
                                        ? vlSelf->__PVT__mstatus
                                        : ((0x304U 
                                            == (vlSymsp->TOP__top.Inst 
                                                >> 0x14U))
                                            ? vlSelf->__PVT__mie
                                            : 0ULL)))));
    vlSelf->__Vcellinp__scrDataSrc__lut[0U] = (IData)(
                                                      (vlSelf->__PVT__dout 
                                                       & (~ (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU)))))));
    vlSelf->__Vcellinp__scrDataSrc__lut[1U] = (IData)(
                                                      ((vlSelf->__PVT__dout 
                                                        & (~ (QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU)))))) 
                                                       >> 0x20U));
    vlSelf->__Vcellinp__scrDataSrc__lut[2U] = (7U | 
                                               ((IData)(
                                                        (vlSelf->__PVT__dout 
                                                         | (QData)((IData)(
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__top.Inst 
                                                                               >> 0xfU)))))) 
                                                << 3U));
    vlSelf->__Vcellinp__scrDataSrc__lut[3U] = (((IData)(
                                                        (vlSelf->__PVT__dout 
                                                         | (QData)((IData)(
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__top.Inst 
                                                                               >> 0xfU)))))) 
                                                >> 0x1dU) 
                                               | ((IData)(
                                                          ((vlSelf->__PVT__dout 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 3U));
    vlSelf->__Vcellinp__scrDataSrc__lut[4U] = (0x30U 
                                               | (((IData)(
                                                           ((0xffffffffffffffe0ULL 
                                                             & vlSelf->__PVT__dout) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU)))))) 
                                                   << 6U) 
                                                  | ((IData)(
                                                             ((vlSelf->__PVT__dout 
                                                               | (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                              >> 0x20U)) 
                                                     >> 0x1dU)));
    vlSelf->__Vcellinp__scrDataSrc__lut[5U] = (((IData)(
                                                        ((0xffffffffffffffe0ULL 
                                                          & vlSelf->__PVT__dout) 
                                                         | (QData)((IData)(
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__top.Inst 
                                                                               >> 0xfU)))))) 
                                                >> 0x1aU) 
                                               | ((IData)(
                                                          (((0xffffffffffffffe0ULL 
                                                             & vlSelf->__PVT__dout) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 6U));
    vlSelf->__Vcellinp__scrDataSrc__lut[6U] = (0x140U 
                                               | (((IData)(
                                                           (vlSelf->__PVT__dout 
                                                            & (~ vlSymsp->TOP__top.__PVT__R_rs1))) 
                                                   << 9U) 
                                                  | ((IData)(
                                                             (((0xffffffffffffffe0ULL 
                                                                & vlSelf->__PVT__dout) 
                                                               | (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                              >> 0x20U)) 
                                                     >> 0x1aU)));
    vlSelf->__Vcellinp__scrDataSrc__lut[7U] = ((0x3fU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__dout 
                                                            & (~ vlSymsp->TOP__top.__PVT__R_rs1))) 
                                                   >> 0x17U)) 
                                               | ((0x1c0U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__dout 
                                                               & (~ vlSymsp->TOP__top.__PVT__R_rs1))) 
                                                      >> 0x17U)) 
                                                  | ((IData)(
                                                             ((vlSelf->__PVT__dout 
                                                               & (~ vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                              >> 0x20U)) 
                                                     << 9U)));
    vlSelf->__Vcellinp__scrDataSrc__lut[8U] = (0x600U 
                                               | ((0x3fU 
                                                   & ((IData)(
                                                              ((vlSelf->__PVT__dout 
                                                                & (~ vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                               >> 0x20U)) 
                                                      >> 0x17U)) 
                                                  | (((IData)(
                                                              (vlSelf->__PVT__dout 
                                                               | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                      << 0xcU) 
                                                     | (0x1c0U 
                                                        & ((IData)(
                                                                   ((vlSelf->__PVT__dout 
                                                                     & (~ vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                                    >> 0x20U)) 
                                                           >> 0x17U)))));
    vlSelf->__Vcellinp__scrDataSrc__lut[9U] = ((0x3fU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__dout 
                                                            | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                   >> 0x14U)) 
                                               | ((0xfc0U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__dout 
                                                               | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                                      >> 0x14U)) 
                                                  | ((IData)(
                                                             ((vlSelf->__PVT__dout 
                                                               | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                              >> 0x20U)) 
                                                     << 0xcU)));
    vlSelf->__Vcellinp__scrDataSrc__lut[0xaU] = (0x2000U 
                                                 | ((0x3fU 
                                                     & ((IData)(
                                                                ((vlSelf->__PVT__dout 
                                                                  | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                                 >> 0x20U)) 
                                                        >> 0x14U)) 
                                                    | (((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                                        << 0xfU) 
                                                       | (0xfc0U 
                                                          & ((IData)(
                                                                     ((vlSelf->__PVT__dout 
                                                                       | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                                      >> 0x20U)) 
                                                             >> 0x14U)))));
    vlSelf->__Vcellinp__scrDataSrc__lut[0xbU] = ((0x3fU 
                                                  & ((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                                     >> 0x11U)) 
                                                 | ((0x7fc0U 
                                                     & ((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                                        >> 0x11U)) 
                                                    | ((IData)(
                                                               (vlSymsp->TOP__top.__PVT__R_rs1 
                                                                >> 0x20U)) 
                                                       << 0xfU)));
    vlSelf->__Vcellinp__scrDataSrc__lut[0xcU] = (0x8000U 
                                                 | ((0x3fU 
                                                     & ((IData)(
                                                                (vlSymsp->TOP__top.__PVT__R_rs1 
                                                                 >> 0x20U)) 
                                                        >> 0x11U)) 
                                                    | (0x7fc0U 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP__top.__PVT__R_rs1 
                                                                   >> 0x20U)) 
                                                          >> 0x11U))));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][0U] 
        = vlSelf->__Vcellinp__scrDataSrc__lut[0U];
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][1U] 
        = vlSelf->__Vcellinp__scrDataSrc__lut[1U];
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->__Vcellinp__scrDataSrc__lut[2U]);
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][0U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[3U] 
            << 0x1dU) | (vlSelf->__Vcellinp__scrDataSrc__lut[2U] 
                         >> 3U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][1U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[4U] 
            << 0x1dU) | (vlSelf->__Vcellinp__scrDataSrc__lut[3U] 
                         >> 3U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->__Vcellinp__scrDataSrc__lut[4U] 
                 >> 3U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][0U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[5U] 
            << 0x1aU) | (vlSelf->__Vcellinp__scrDataSrc__lut[4U] 
                         >> 6U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][1U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[6U] 
            << 0x1aU) | (vlSelf->__Vcellinp__scrDataSrc__lut[5U] 
                         >> 6U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->__Vcellinp__scrDataSrc__lut[6U] 
                 >> 6U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][0U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[7U] 
            << 0x17U) | (vlSelf->__Vcellinp__scrDataSrc__lut[6U] 
                         >> 9U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][1U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[8U] 
            << 0x17U) | (vlSelf->__Vcellinp__scrDataSrc__lut[7U] 
                         >> 9U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->__Vcellinp__scrDataSrc__lut[8U] 
                 >> 9U));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][0U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[9U] 
            << 0x14U) | (vlSelf->__Vcellinp__scrDataSrc__lut[8U] 
                         >> 0xcU));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][1U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[0xaU] 
            << 0x14U) | (vlSelf->__Vcellinp__scrDataSrc__lut[9U] 
                         >> 0xcU));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->__Vcellinp__scrDataSrc__lut[0xaU] 
                 >> 0xcU));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][0U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[0xbU] 
            << 0x11U) | (vlSelf->__Vcellinp__scrDataSrc__lut[0xaU] 
                         >> 0xfU));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][1U] 
        = ((vlSelf->__Vcellinp__scrDataSrc__lut[0xcU] 
            << 0x11U) | (vlSelf->__Vcellinp__scrDataSrc__lut[0xbU] 
                         >> 0xfU));
    vlSelf->__PVT__scrDataSrc__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->__Vcellinp__scrDataSrc__lut[0xcU] 
                 >> 0xfU));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[0U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [0U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[0U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [0U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[1U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [1U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[1U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [1U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[2U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [2U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[2U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [2U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[3U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [3U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[3U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [3U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[4U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [4U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[4U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [4U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[5U] = 
        (((QData)((IData)(vlSelf->__PVT__scrDataSrc__DOT__pair_list
                          [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__scrDataSrc__DOT__pair_list
                                                                 [5U][0U])));
    vlSelf->__PVT__scrDataSrc__DOT__key_list[5U] = 
        (7U & vlSelf->__PVT__scrDataSrc__DOT__pair_list
         [5U][2U]);
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((7U 
                                                                    & (vlSymsp->TOP__top.Inst 
                                                                       >> 0xcU)) 
                                                                   == 
                                                                   vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((7U & (vlSymsp->TOP__top.Inst 
                                                  >> 0xcU)) 
                                           == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [3U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [3U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [4U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [4U]));
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = (vlSelf->__PVT__scrDataSrc__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((7U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xcU)) 
                                                                      == 
                                                                      vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                                      [5U])))) 
                                                  & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                                  [5U]));
    vlSelf->__PVT__scrDataSrc__DOT__hit = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit) 
                                           | ((7U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)) 
                                              == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                              [5U]));
    vlSelf->__PVT__csrWData = ((IData)(vlSelf->__PVT__scrDataSrc__DOT__hit)
                                ? vlSelf->__PVT__scrDataSrc__DOT__lut_out
                                : 0ULL);
    if (vlSelf->__PVT__timer_irq) {
        Vtop___024unit____Vdpiimwrap_timerIntr_raise_TOP____024unit(
                                                                    ((IData)(vlSelf->__PVT__irq_raise)
                                                                      ? vlSelf->__PVT__eNo
                                                                      : vlSelf->__PVT__csrWData));
    }
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
                                 : ((IData)(vlSelf->__PVT__ismret)
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
