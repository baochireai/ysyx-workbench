// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VContrGen.h for the primary calling header

#include "VContrGen___024root.h"
#include "VContrGen__Syms.h"

//==========

VL_INLINE_OPT void VContrGen___024root___combo__TOP__2(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___combo__TOP__2\n"); );
    // Body
    if ((0x13U == (0x3ffU & (((IData)(vlSelf->func3) 
                              << 7U) | (IData)(vlSelf->opcode))))) {
        vlSelf->ALUct = 0U;
        vlSelf->ALUAsrc = 1U;
        vlSelf->ALUBsrc = 1U;
    } else {
        vlSelf->ALUct = 1U;
        vlSelf->ALUAsrc = 0U;
        vlSelf->ALUBsrc = 0U;
    }
    vlSelf->ContrGen__DOT__deExtop__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->opcode) == vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                     [0U]))) & vlSelf->ContrGen__DOT__deExtop__DOT__data_list
         [0U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__hit = ((IData)(vlSelf->opcode) 
                                                == 
                                                vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                                                [0U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__lut_out = 
        ((IData)(vlSelf->ContrGen__DOT__deExtop__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->opcode) == 
                        vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                        [1U]))) & vlSelf->ContrGen__DOT__deExtop__DOT__data_list
            [1U]));
    vlSelf->ContrGen__DOT__deExtop__DOT__hit = ((IData)(vlSelf->ContrGen__DOT__deExtop__DOT__hit) 
                                                | ((IData)(vlSelf->opcode) 
                                                   == 
                                                   vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                                                   [1U]));
    vlSelf->ContrGen__DOT__deExtop__DOT__lut_out = 
        ((IData)(vlSelf->ContrGen__DOT__deExtop__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->opcode) == 
                        vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                        [2U]))) & vlSelf->ContrGen__DOT__deExtop__DOT__data_list
            [2U]));
    vlSelf->ContrGen__DOT__deExtop__DOT__hit = ((IData)(vlSelf->ContrGen__DOT__deExtop__DOT__hit) 
                                                | ((IData)(vlSelf->opcode) 
                                                   == 
                                                   vlSelf->ContrGen__DOT__deExtop__DOT__key_list
                                                   [2U]));
    vlSelf->Extop = ((IData)(vlSelf->ContrGen__DOT__deExtop__DOT__hit)
                      ? (IData)(vlSelf->ContrGen__DOT__deExtop__DOT__lut_out)
                      : 0U);
    vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out = 
        (((IData)(vlSelf->Extop) == vlSelf->ContrGen__DOT__isRegWr__DOT__key_list
          [0U]) & vlSelf->ContrGen__DOT__isRegWr__DOT__data_list
         [0U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__hit = ((IData)(vlSelf->Extop) 
                                                == 
                                                vlSelf->ContrGen__DOT__isRegWr__DOT__key_list
                                                [0U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out = 
        ((IData)(vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out) 
         | (((IData)(vlSelf->Extop) == vlSelf->ContrGen__DOT__isRegWr__DOT__key_list
             [1U]) & vlSelf->ContrGen__DOT__isRegWr__DOT__data_list
            [1U]));
    vlSelf->ContrGen__DOT__isRegWr__DOT__hit = ((IData)(vlSelf->ContrGen__DOT__isRegWr__DOT__hit) 
                                                | ((IData)(vlSelf->Extop) 
                                                   == 
                                                   vlSelf->ContrGen__DOT__isRegWr__DOT__key_list
                                                   [1U]));
    vlSelf->RegWr = ((IData)(vlSelf->ContrGen__DOT__isRegWr__DOT__hit) 
                     & (IData)(vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out));
}

void VContrGen___024root___eval(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___eval\n"); );
    // Body
    VContrGen___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData VContrGen___024root___change_request_1(VContrGen___024root* vlSelf);

VL_INLINE_OPT QData VContrGen___024root___change_request(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___change_request\n"); );
    // Body
    return (VContrGen___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VContrGen___024root___change_request_1(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VContrGen___024root___eval_debug_assertions(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelf->func3 & 0xf8U))) {
        Verilated::overWidthError("func3");}
    if (VL_UNLIKELY((vlSelf->func7 & 0x80U))) {
        Verilated::overWidthError("func7");}
}
#endif  // VL_DEBUG
