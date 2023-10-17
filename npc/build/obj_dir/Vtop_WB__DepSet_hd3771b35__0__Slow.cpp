// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"

VL_ATTR_COLD void Vtop_WB___eval_initial__TOP__top__WB(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___eval_initial__TOP__top__WB\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[0U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[2U] = 0U;
}

VL_ATTR_COLD void Vtop_WB___ctor_var_reset(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__isRegWrite = 0;
    vlSelf->__PVT__wb_raw_rd = 0;
    vlSelf->__PVT__wb_raw_Wdata = 0;
    vlSelf->__PVT__wb_raw_data_valid = 0;
    vlSelf->__PVT__i_isecall = 0;
    vlSelf->__PVT__i_ismret = 0;
    vlSelf->__PVT__i_iscsr = 0;
    vlSelf->__PVT__clint_mtip = 0;
    vlSelf->__PVT__R_rs1_i = 0;
    vlSelf->__PVT__RegSrc = 0;
    vlSelf->__PVT__RegWr = 0;
    vlSelf->__PVT__ALUres = 0;
    vlSelf->__PVT__MemOut = 0;
    vlSelf->__PVT__wb_pc = 0;
    vlSelf->__PVT__wb_inst = 0;
    vlSelf->__PVT__isIntrPC = 0;
    vlSelf->__PVT__IntrPC = 0;
    vlSelf->__PVT__mstatus_MIE = 0;
    vlSelf->__PVT__o_RegWr_en = 0;
    vlSelf->__PVT__o_RegWaddr = 0;
    vlSelf->__PVT__o_RegWdata = 0;
    vlSelf->__PVT__wb_valid = 0;
    vlSelf->__PVT__wb_ready = 0;
    vlSelf->__Vcellinp__IntrUnit__i_iscsr = 0;
    vlSelf->__Vcellinp__IntrUnit__i_ismret = 0;
    vlSelf->__Vcellinp__IntrUnit__i_isecall = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__data_list[__Vi0] = 0;
    }
}
