// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"

VL_ATTR_COLD void Vtop_WB___ctor_var_reset(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__rst = 0;
    vlSelf->__PVT__IntrEn = 0;
    vlSelf->__PVT__clint_mtip = 0;
    vlSelf->__PVT__Wdata_src = 0;
    vlSelf->__PVT__RegWr = 0;
    vlSelf->__PVT__wb_pc = 0;
    vlSelf->__PVT__wb_inst = 0;
    vlSelf->__PVT__ALUres = 0;
    vlSelf->__PVT__MemOut = 0;
    vlSelf->__PVT__R_rs1_i = 0;
    vlSelf->__PVT__wb_en = 0;
    vlSelf->__PVT__isIntrPC = 0;
    vlSelf->__PVT__IntrPC = 0;
    vlSelf->__PVT__rs1 = 0;
    vlSelf->__PVT__rs2 = 0;
    vlSelf->__PVT__R_rs1 = 0;
    vlSelf->__PVT__R_rs2 = 0;
    vlSelf->__PVT__lsu_valid = 0;
    vlSelf->__PVT__wb_ready = 0;
    vlSelf->__PVT__wb_valid = 0;
    vlSelf->__PVT__ifu_ready = 0;
    vlSelf->__PVT__wb_valid_next = 0;
    vlSelf->__PVT__RegWdata = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__RegWsrcMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = 0;
    vlSelf->__PVT__RegWsrcMux__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[__Vi0] = 0;
    }
}
