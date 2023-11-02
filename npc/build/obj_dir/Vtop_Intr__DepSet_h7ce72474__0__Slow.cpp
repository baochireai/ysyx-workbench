// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"
#include "Vtop__Syms.h"

VL_ATTR_COLD void Vtop_Intr___stl_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Intr___stl_sequent__TOP__top__WB__IntrUnit__0\n"); );
    // Init
    CData/*1:0*/ __Vcellinp__CSRwEn__key;
    __Vcellinp__CSRwEn__key = 0;
    QData/*63:0*/ __PVT__CSRwEn__DOT__lut_out;
    __PVT__CSRwEn__DOT__lut_out = 0;
    CData/*0:0*/ __PVT__CSRwEn__DOT__hit;
    __PVT__CSRwEn__DOT__hit = 0;
    QData/*63:0*/ __PVT__scrDataSrc__DOT__lut_out;
    __PVT__scrDataSrc__DOT__lut_out = 0;
    CData/*0:0*/ __PVT__scrDataSrc__DOT__hit;
    __PVT__scrDataSrc__DOT__hit = 0;
    // Body
    vlSelf->__PVT__scrDataSrc__DOT__data_list[5U] = vlSymsp->TOP__top.__PVT__wb_R_rs1;
    vlSelf->__PVT__timer_irq = (((IData)(vlSymsp->TOP__top.__PVT__wb_clint_mtip) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_valid)) 
                                & ((IData)((vlSelf->__PVT__mstatus 
                                            >> 3U)) 
                                   & (IData)((vlSelf->__PVT__mie 
                                              >> 7U))));
    vlSelf->__PVT__ismstatus = ((0x300U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                            >> 0x14U)) 
                                | (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret));
    __Vcellinp__CSRwEn__key = (((IData)(vlSelf->__PVT__timer_irq) 
                                << 1U) | (IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_isecall));
    vlSelf->__PVT__irq_raise = ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_isecall) 
                                | (IData)(vlSelf->__PVT__timer_irq));
    __PVT__CSRwEn__DOT__lut_out = ((- (QData)((IData)(
                                                      ((IData)(__Vcellinp__CSRwEn__key) 
                                                       == 
                                                       vlSelf->__PVT__CSRwEn__DOT__key_list
                                                       [0U])))) 
                                   & vlSelf->__PVT__CSRwEn__DOT__data_list
                                   [0U]);
    __PVT__CSRwEn__DOT__hit = ((IData)(__Vcellinp__CSRwEn__key) 
                               == vlSelf->__PVT__CSRwEn__DOT__key_list
                               [0U]);
    __PVT__CSRwEn__DOT__lut_out = (__PVT__CSRwEn__DOT__lut_out 
                                   | ((- (QData)((IData)(
                                                         ((IData)(__Vcellinp__CSRwEn__key) 
                                                          == 
                                                          vlSelf->__PVT__CSRwEn__DOT__key_list
                                                          [1U])))) 
                                      & vlSelf->__PVT__CSRwEn__DOT__data_list
                                      [1U]));
    __PVT__CSRwEn__DOT__hit = ((IData)(__PVT__CSRwEn__DOT__hit) 
                               | ((IData)(__Vcellinp__CSRwEn__key) 
                                  == vlSelf->__PVT__CSRwEn__DOT__key_list
                                  [1U]));
    vlSelf->__PVT__eNo = ((IData)(__PVT__CSRwEn__DOT__hit)
                           ? __PVT__CSRwEn__DOT__lut_out
                           : 0ULL);
    vlSelf->__PVT__isIntrPC = ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret) 
                               | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__ismepc = ((0x341U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__ismcase = ((0x342U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                          >> 0x14U)) 
                              | (IData)(vlSelf->__PVT__irq_raise));
    vlSelf->__PVT__dout = ((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                       >> 0x14U)) ? vlSelf->__PVT__mtvec
                            : ((IData)(vlSelf->__PVT__ismepc)
                                ? vlSelf->__PVT__mepc
                                : ((IData)(vlSelf->__PVT__ismcase)
                                    ? vlSelf->mcase
                                    : ((IData)(vlSelf->__PVT__ismstatus)
                                        ? vlSelf->__PVT__mstatus
                                        : ((0x304U 
                                            == (vlSymsp->TOP__top.__PVT__wb_inst 
                                                >> 0x14U))
                                            ? vlSelf->__PVT__mie
                                            : 0ULL)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[0U] = 
        ((~ (QData)((IData)((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                      >> 0xfU))))) 
         & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[1U] = 
        (vlSelf->__PVT__dout | (QData)((IData)((0x1fU 
                                                & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                   >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[2U] = 
        ((0xffffffffffffffe0ULL & vlSelf->__PVT__dout) 
         | (QData)((IData)((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                     >> 0xfU)))));
    vlSelf->__PVT__scrDataSrc__DOT__data_list[3U] = 
        ((~ vlSymsp->TOP__top.__PVT__wb_R_rs1) & vlSelf->__PVT__dout);
    vlSelf->__PVT__scrDataSrc__DOT__data_list[4U] = 
        (vlSelf->__PVT__dout | vlSymsp->TOP__top.__PVT__wb_R_rs1);
    __PVT__scrDataSrc__DOT__lut_out = ((- (QData)((IData)(
                                                          ((7U 
                                                            & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                               >> 0xcU)) 
                                                           == 
                                                           vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                           [0U])))) 
                                       & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                       [0U]);
    __PVT__scrDataSrc__DOT__hit = ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                          >> 0xcU)) 
                                   == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                   [0U]);
    __PVT__scrDataSrc__DOT__lut_out = (__PVT__scrDataSrc__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((7U 
                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                  >> 0xcU)) 
                                                              == 
                                                              vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                              [1U])))) 
                                          & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                          [1U]));
    __PVT__scrDataSrc__DOT__hit = ((IData)(__PVT__scrDataSrc__DOT__hit) 
                                   | ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                             >> 0xcU)) 
                                      == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                      [1U]));
    __PVT__scrDataSrc__DOT__lut_out = (__PVT__scrDataSrc__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((7U 
                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                  >> 0xcU)) 
                                                              == 
                                                              vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                              [2U])))) 
                                          & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                          [2U]));
    __PVT__scrDataSrc__DOT__hit = ((IData)(__PVT__scrDataSrc__DOT__hit) 
                                   | ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                             >> 0xcU)) 
                                      == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                      [2U]));
    __PVT__scrDataSrc__DOT__lut_out = (__PVT__scrDataSrc__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((7U 
                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                  >> 0xcU)) 
                                                              == 
                                                              vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                              [3U])))) 
                                          & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                          [3U]));
    __PVT__scrDataSrc__DOT__hit = ((IData)(__PVT__scrDataSrc__DOT__hit) 
                                   | ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                             >> 0xcU)) 
                                      == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                      [3U]));
    __PVT__scrDataSrc__DOT__lut_out = (__PVT__scrDataSrc__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((7U 
                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                  >> 0xcU)) 
                                                              == 
                                                              vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                              [4U])))) 
                                          & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                          [4U]));
    __PVT__scrDataSrc__DOT__hit = ((IData)(__PVT__scrDataSrc__DOT__hit) 
                                   | ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                             >> 0xcU)) 
                                      == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                      [4U]));
    __PVT__scrDataSrc__DOT__lut_out = (__PVT__scrDataSrc__DOT__lut_out 
                                       | ((- (QData)((IData)(
                                                             ((7U 
                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                  >> 0xcU)) 
                                                              == 
                                                              vlSelf->__PVT__scrDataSrc__DOT__key_list
                                                              [5U])))) 
                                          & vlSelf->__PVT__scrDataSrc__DOT__data_list
                                          [5U]));
    __PVT__scrDataSrc__DOT__hit = ((IData)(__PVT__scrDataSrc__DOT__hit) 
                                   | ((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                             >> 0xcU)) 
                                      == vlSelf->__PVT__scrDataSrc__DOT__key_list
                                      [5U]));
    vlSelf->__PVT__csrWData = ((IData)(__PVT__scrDataSrc__DOT__hit)
                                ? __PVT__scrDataSrc__DOT__lut_out
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
