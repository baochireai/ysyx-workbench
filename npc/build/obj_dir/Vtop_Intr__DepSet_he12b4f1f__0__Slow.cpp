// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"

VL_ATTR_COLD void Vtop_Intr___eval_initial__TOP__top__IntrUnit(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_Intr___eval_initial__TOP__top__IntrUnit\n"); );
    // Body
    vlSelf->__PVT__scrDataSrc__DOT__key_list[0U] = 7U;
    vlSelf->__PVT__scrDataSrc__DOT__key_list[1U] = 6U;
    vlSelf->__PVT__scrDataSrc__DOT__key_list[2U] = 5U;
    vlSelf->__PVT__scrDataSrc__DOT__key_list[3U] = 3U;
    vlSelf->__PVT__scrDataSrc__DOT__key_list[4U] = 2U;
    vlSelf->__PVT__scrDataSrc__DOT__key_list[5U] = 1U;
    vlSelf->__PVT__CSRwEn__DOT__key_list[0U] = 2U;
    vlSelf->__PVT__CSRwEn__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__CSRwEn__DOT__data_list[0U] = 0x8000000000000007ULL;
    vlSelf->__PVT__CSRwEn__DOT__data_list[1U] = 0xbULL;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[0U][0U] = 7U;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[0U][1U] = 0x80000000U;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[1U][0U] = 0xbU;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__CSRwEn__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__mtvec = 0ULL;
    vlSelf->__PVT__mepc = 0ULL;
    vlSelf->mcase = 0ULL;
    vlSelf->__PVT__mstatus = 0xa00001800ULL;
    vlSelf->__PVT__mie = 0ULL;
}

VL_ATTR_COLD void Vtop_Intr___ctor_var_reset(Vtop_Intr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_Intr___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__IntrEn = 0;
    vlSelf->__PVT__clint_mtip = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__R_rs1 = 0;
    vlSelf->__PVT__zimm = 0;
    vlSelf->__PVT__csr = 0;
    vlSelf->__PVT__func3 = 0;
    vlSelf->__PVT__isIntrPC = 0;
    vlSelf->__PVT__IntrPC = 0;
    vlSelf->__PVT__dout = 0;
    vlSelf->__PVT__mepc = 0;
    vlSelf->__PVT__mtvec = 0;
    vlSelf->__PVT__mstatus = 0;
    vlSelf->__PVT__mie = 0;
    vlSelf->mcase = 0;
    vlSelf->__PVT__isCSRw = 0;
    vlSelf->__PVT__timer_irq = 0;
    vlSelf->__PVT__irq_raise = 0;
    vlSelf->__PVT__isecall = 0;
    vlSelf->__PVT__eNo = 0;
    vlSelf->__Vcellinp__CSRwEn__key = 0;
    vlSelf->__PVT__ismret = 0;
    vlSelf->__PVT__ismepc = 0;
    vlSelf->__PVT__ismcase = 0;
    vlSelf->__PVT__ismstatus = 0;
    vlSelf->__PVT__csrWData = 0;
    vlSelf->__PVT__mstatusIn = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__CSRwEn__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__CSRwEn__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__CSRwEn__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__CSRwEn__DOT__lut_out = 0;
    vlSelf->__PVT__CSRwEn__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->__PVT__scrDataSrc__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__scrDataSrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__scrDataSrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__scrDataSrc__DOT__lut_out = 0;
    vlSelf->__PVT__scrDataSrc__DOT__hit = 0;
}
