// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile___024root.h"
#include "VRegisterFile__Syms.h"

//==========

VL_INLINE_OPT void VRegisterFile___024root___sequent__TOP__1(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__RegisterFile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__RegisterFile__DOT__rf__v0;
    // Body
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0U;
    if (vlSelf->wen) {
        __Vdlyvval__RegisterFile__DOT__rf__v0 = vlSelf->wdata;
        __Vdlyvset__RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__RegisterFile__DOT__rf__v0 = (0x1fU 
                                                  & vlSelf->waddr);
    }
    if (__Vdlyvset__RegisterFile__DOT__rf__v0) {
        vlSelf->RegisterFile__DOT__rf[__Vdlyvdim0__RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__RegisterFile__DOT__rf__v0;
    }
}

VL_INLINE_OPT void VRegisterFile___024root___settle__TOP__2(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->R_rs1 = ((0U == vlSelf->rs1) ? 0ULL : vlSelf->RegisterFile__DOT__rf
                     [(0x1fU & vlSelf->rs1)]);
    vlSelf->R_rs2 = ((0U == vlSelf->rs2) ? 0ULL : vlSelf->RegisterFile__DOT__rf
                     [(0x1fU & vlSelf->rs2)]);
}

void VRegisterFile___024root___eval(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VRegisterFile___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VRegisterFile___024root___settle__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VRegisterFile___024root___change_request_1(VRegisterFile___024root* vlSelf);

VL_INLINE_OPT QData VRegisterFile___024root___change_request(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___change_request\n"); );
    // Body
    return (VRegisterFile___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VRegisterFile___024root___change_request_1(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegisterFile___024root___eval_debug_assertions(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
