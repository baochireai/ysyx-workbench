// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

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

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<7>/*223:0*/ __Vtemp6;
    VlWide<9>/*287:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp91;
    // Body
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0U] = 0xdU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1U] = 0xbU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2U] = 5U;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3U] = 3U;
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0U] = 0xaU;
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1U] = 7U;
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] = 1U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0U] = 0x11bU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1U] = 0x33aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2U] = 0x37eU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3U] = 0x1bdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4U] = 0xbdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5U] = 0x199U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6U] = 0x1aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7U] = 0x9aU;
    if ((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                          >> 0xfU)) 
                             | ((0x380U & (vlSelf->Inst 
                                           >> 5U)) 
                                | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 0U;
        vlSelf->top__DOT__Branch = 0U;
    } else {
        vlSelf->top__DOT__ALUct = ((0x17U == (0x7fU 
                                              & ((0x1fc00U 
                                                  & (vlSelf->Inst 
                                                     >> 0xfU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->Inst 
                                                        >> 5U)) 
                                                    | (0x7fU 
                                                       & vlSelf->Inst)))))
                                    ? 0U : ((0x37U 
                                             == (0x7fU 
                                                 & ((0x1fc00U 
                                                     & (vlSelf->Inst 
                                                        >> 0xfU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->Inst 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & vlSelf->Inst)))))
                                             ? 1U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & ((0x1fc00U 
                                                      & (vlSelf->Inst 
                                                         >> 0xfU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->Inst 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & vlSelf->Inst)))))
                                              ? 0U : 
                                             ((0x67U 
                                               == (0x3ffU 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->Inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->Inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->Inst)))))
                                               ? 0U
                                               : ((0x1a3U 
                                                   == 
                                                   (0x3ffU 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->Inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->Inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->Inst)))))
                                                   ? 0U
                                                   : 1U)))));
        vlSelf->top__DOT__Branch = ((0x17U == (0x7fU 
                                               & ((0x1fc00U 
                                                   & (vlSelf->Inst 
                                                      >> 0xfU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->Inst 
                                                         >> 5U)) 
                                                     | (0x7fU 
                                                        & vlSelf->Inst)))))
                                     ? 0U : ((0x37U 
                                              == (0x7fU 
                                                  & ((0x1fc00U 
                                                      & (vlSelf->Inst 
                                                         >> 0xfU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->Inst 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & vlSelf->Inst)))))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->Inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->Inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->Inst)))))
                                               ? 1U
                                               : ((0x67U 
                                                   == 
                                                   (0x3ffU 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->Inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->Inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->Inst)))))
                                                   ? 2U
                                                   : 0U))));
    }
    vlSelf->top__DOT__ALUAsr = ((0x13U == (0x3ffU & 
                                           ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst))))) 
                                | ((0x17U != (0x7fU 
                                              & ((0x1fc00U 
                                                  & (vlSelf->Inst 
                                                     >> 0xfU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->Inst 
                                                        >> 5U)) 
                                                    | (0x7fU 
                                                       & vlSelf->Inst))))) 
                                   & ((0x37U != (0x7fU 
                                                 & ((0x1fc00U 
                                                     & (vlSelf->Inst 
                                                        >> 0xfU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->Inst 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & vlSelf->Inst))))) 
                                      & ((0x6fU != 
                                          (0x7fU & 
                                           ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst))))) 
                                         & ((0x67U 
                                             != (0x3ffU 
                                                 & ((0x1fc00U 
                                                     & (vlSelf->Inst 
                                                        >> 0xfU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->Inst 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & vlSelf->Inst))))) 
                                            & (0x1a3U 
                                               == (0x3ffU 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->Inst 
                                                          >> 0xfU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->Inst 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & vlSelf->Inst))))))))));
    vlSelf->top__DOT__ALUBsr = ((0x13U == (0x3ffU & 
                                           ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))
                                 ? 0U : ((0x17U == 
                                          (0x7fU & 
                                           ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))
                                          ? 0U : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->Inst 
                                                           >> 0xfU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->Inst 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & vlSelf->Inst)))))
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & ((0x1fc00U 
                                                         & (vlSelf->Inst 
                                                            >> 0xfU)) 
                                                        | ((0x380U 
                                                            & (vlSelf->Inst 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & vlSelf->Inst)))))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x3ffU 
                                                      & ((0x1fc00U 
                                                          & (vlSelf->Inst 
                                                             >> 0xfU)) 
                                                         | ((0x380U 
                                                             & (vlSelf->Inst 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & vlSelf->Inst)))))
                                                     ? 2U
                                                     : 0U)))));
    __Vtemp4[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->Inst 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (0x38U 
                                                  & ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x14U)))) 
                                                              >> 0x20U)) 
                                                     >> 0x1aU))));
    __Vtemp5[1U] = (((IData)((((- (QData)((IData)((vlSelf->Inst 
                                                   >> 0x1fU)))) 
                               << 0xdU) | (QData)((IData)(
                                                          ((0x1000U 
                                                            & (vlSelf->Inst 
                                                               >> 0x13U)) 
                                                           | ((0x800U 
                                                               & (vlSelf->Inst 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->Inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->Inst 
                                                                       >> 7U))))))))) 
                     >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                                (vlSelf->Inst 
                                                                 >> 0x1fU)))) 
                                             << 0xdU) 
                                            | (QData)((IData)(
                                                              ((0x1000U 
                                                                & (vlSelf->Inst 
                                                                   >> 0x13U)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->Inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->Inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->Inst 
                                                                           >> 7U)))))))) 
                                           >> 0x20U)) 
                                  << 3U));
    __Vtemp6[2U] = (0x20U | (((IData)((((- (QData)((IData)(
                                                           (vlSelf->Inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->Inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->Inst 
                                                                          >> 7U))))))) 
                              << 6U) | ((IData)((((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->Inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->Inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->Inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->Inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->Inst 
                                                                                >> 7U)))))))) 
                                                 >> 0x20U)) 
                                        >> 0x1dU)));
    __Vtemp6[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                        (vlSelf->Inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->Inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->Inst 
                                                                       >> 7U))))))) 
                           >> 0x1aU)) | ((0x38U & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0xfe0U 
                                                                                & (vlSelf->Inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->Inst 
                                                                                >> 7U))))))) 
                                                   >> 0x1aU)) 
                                         | ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (vlSelf->Inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->Inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->Inst 
                                                                               >> 7U)))))) 
                                                     >> 0x20U)) 
                                            << 6U)));
    __Vtemp6[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->Inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->Inst 
                                                                       >> 7U)))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->Inst 
                                                                               >> 0x14U))))) 
                                                   << 9U) 
                                                  | (0x38U 
                                                     & ((IData)(
                                                                ((((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & (vlSelf->Inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->Inst 
                                                                                >> 7U)))))) 
                                                                 >> 0x20U)) 
                                                        >> 0x1aU)))));
    __Vtemp6[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                        (vlSelf->Inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->Inst 
                                                                 >> 0x14U))))) 
                           >> 0x17U)) | ((0x38U & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->Inst 
                                                                               >> 0x14U))))) 
                                                   >> 0x17U)) 
                                         | ((0x1c0U 
                                             & ((IData)(
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->Inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->Inst 
                                                                            >> 0x14U))))) 
                                                >> 0x17U)) 
                                            | ((IData)(
                                                       ((((- (QData)((IData)(
                                                                             (vlSelf->Inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->Inst 
                                                                            >> 0x14U)))) 
                                                        >> 0x20U)) 
                                               << 9U))));
    __Vtemp6[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                         (vlSelf->Inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->Inst 
                                                                  >> 0x14U)))) 
                                    >> 0x20U)) >> 0x17U)) 
                    | (__Vtemp4[4U] << 3U));
    __Vtemp8[2U] = (0x28U | (((IData)((((- (QData)((IData)(
                                                           (vlSelf->Inst 
                                                            >> 0x1fU)))) 
                                        << 0xdU) | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->Inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->Inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->Inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->Inst 
                                                                                >> 7U))))))))) 
                              << 6U) | ((IData)(((((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->Inst 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->Inst)))) 
                                                 >> 0x20U)) 
                                        >> 0x1dU)));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->Inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->Inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->Inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->Inst 
                                                             >> 0x14U)))))))));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->Inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->Inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->Inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->Inst 
                                                              >> 0x14U)))))))) 
                   >> 0x20U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
        = (6U | ((IData)((((QData)((IData)((- (IData)(
                                                      (vlSelf->Inst 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(
                                                       (0xfffff000U 
                                                        & vlSelf->Inst))))) 
                 << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->Inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->Inst))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->Inst 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->Inst)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
        = __Vtemp8[2U];
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
        = ((7U & ((IData)((((- (QData)((IData)((vlSelf->Inst 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->Inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->Inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->Inst 
                                                                    >> 7U))))))))) 
                  >> 0x1aU)) | (__Vtemp5[1U] << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
        = ((__Vtemp5[1U] >> 0x1dU) | (__Vtemp6[2U] 
                                      << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
        = ((__Vtemp6[2U] >> 0x1dU) | (__Vtemp6[3U] 
                                      << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
        = ((__Vtemp6[3U] >> 0x1dU) | (__Vtemp6[4U] 
                                      << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
        = ((__Vtemp6[4U] >> 0x1dU) | (__Vtemp6[5U] 
                                      << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
        = ((__Vtemp6[5U] >> 0x1dU) | (__Vtemp6[6U] 
                                      << 3U));
    vlSelf->top__DOT__R_rs1 = ((0U == (0x1fU & (vlSelf->Inst 
                                                >> 0xfU)))
                                ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->Inst 
                                          >> 0xfU))]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0U];
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[1U];
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                 >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
            << 0x17U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                         >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
            << 0x17U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
                         >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                 >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
            << 0x14U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                       == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Branch) == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [1U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [1U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [2U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [2U]));
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [7U]));
    vlSelf->top__DOT__Extop = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out)
                                : 0U);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__GenNextPC__DOT__Bsrc = ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                               ? vlSelf->pc
                                               : vlSelf->top__DOT__R_rs1);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
            [0U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [1U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [2U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [3U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->top__DOT__RegWr = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
                               & (IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                               == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [4U]));
    vlSelf->top__DOT__Imm = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit)
                              ? vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out
                              : 0ULL);
    VL_EXTEND_WQ(66,64, __Vtemp67, vlSelf->top__DOT__Imm);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[0U] = 4U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[1U] = 0U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
        = (2U | ((IData)(((0U == (0x1fU & (vlSelf->Inst 
                                           >> 0x14U)))
                           ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                          [(0x1fU & (vlSelf->Inst >> 0x14U))])) 
                 << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
        = (((IData)(((0U == (0x1fU & (vlSelf->Inst 
                                      >> 0x14U))) ? 0ULL
                      : vlSelf->top__DOT__RegisterFile__DOT__rf
                     [(0x1fU & (vlSelf->Inst >> 0x14U))])) 
            >> 0x1eU) | ((IData)((((0U == (0x1fU & 
                                           (vlSelf->Inst 
                                            >> 0x14U)))
                                    ? 0ULL : vlSelf->top__DOT__RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->Inst 
                                              >> 0x14U))]) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
        = (4U | ((__Vtemp67[0U] << 4U) | ((IData)((
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Inst 
                                                         >> 0x14U)))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__RegisterFile__DOT__rf
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->Inst 
                                                        >> 0x14U))]) 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
        = ((__Vtemp67[0U] >> 0x1cU) | (__Vtemp67[1U] 
                                       << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
        = ((__Vtemp67[1U] >> 0x1cU) | (__Vtemp67[2U] 
                                       << 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[0U];
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[1U];
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                               == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALUBsr) == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                                  == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALUBsr) == 
              vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                                  == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALUBsr) == 
              vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__ALUB = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit)
                                         ? vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out
                                         : 0ULL);
    VL_EXTEND_WQ(68,64, __Vtemp91, (((IData)(vlSelf->top__DOT__ALUAsr)
                                      ? vlSelf->top__DOT__R_rs1
                                      : vlSelf->pc) 
                                    + vlSelf->top__DOT__ALU__DOT__ALUB));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__ALUB);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[1U] 
        = (IData)((vlSelf->top__DOT__ALU__DOT__ALUB 
                   >> 0x20U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U] 
        = (1U | (__Vtemp91[0U] << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
        = ((__Vtemp91[0U] >> 0x1cU) | (__Vtemp91[1U] 
                                       << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
        = ((__Vtemp91[1U] >> 0x1cU) | (__Vtemp91[2U] 
                                       << 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[1U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
                   >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUct) 
                               == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALUct) == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
         [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUct) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALUct) == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [1U]));
    vlSelf->top__DOT__ALUres = ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit)
                                 ? vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out
                                 : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__R_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALUct = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Extop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUAsr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUBsr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALUres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__GenNextPC__DOT__Bsrc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RegisterFile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(335, vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU__DOT__ALUB = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(198, vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut);
    VL_RAND_RESET_W(136, vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
