// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VContrGen.h for the primary calling header

#include "VContrGen___024root.h"
#include "VContrGen__Syms.h"

//==========


void VContrGen___024root___ctor_var_reset(VContrGen___024root* vlSelf);

VContrGen___024root::VContrGen___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VContrGen___024root___ctor_var_reset(this);
}

void VContrGen___024root::__Vconfigure(VContrGen__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VContrGen___024root::~VContrGen___024root() {
}

void VContrGen___024root___settle__TOP__1(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[0U] = 5U;
    vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[1U] = 3U;
    vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[0U] = 0x199U;
    vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[1U] = 0x1aU;
    vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[2U] = 0x9aU;
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
    vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
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

void VContrGen___024root___eval_initial(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___eval_initial\n"); );
}

void VContrGen___024root___eval_settle(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___eval_settle\n"); );
    // Body
    VContrGen___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VContrGen___024root___final(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___final\n"); );
}

void VContrGen___024root___ctor_var_reset(VContrGen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VContrGen___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->func3 = VL_RAND_RESET_I(3);
    vlSelf->func7 = VL_RAND_RESET_I(7);
    vlSelf->ALUct = VL_RAND_RESET_I(4);
    vlSelf->Extop = VL_RAND_RESET_I(3);
    vlSelf->RegWr = VL_RAND_RESET_I(1);
    vlSelf->ALUAsrc = VL_RAND_RESET_I(1);
    vlSelf->ALUBsrc = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ContrGen__DOT__deExtop__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ContrGen__DOT__deExtop__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ContrGen__DOT__deExtop__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ContrGen__DOT__deExtop__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->ContrGen__DOT__deExtop__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ContrGen__DOT__isRegWr__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ContrGen__DOT__isRegWr__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ContrGen__DOT__isRegWr__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ContrGen__DOT__isRegWr__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ContrGen__DOT__isRegWr__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
