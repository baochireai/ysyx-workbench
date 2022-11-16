// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

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
    // Body
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list[0U] = 0xe7U;
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0U] = 0U;
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1U] = 5U;
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[2U] = 3U;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0U] = 0xdU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1U] = 0xbU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2U] = 5U;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3U] = 3U;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0U] = 0xffU;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1U] = 0x10fU;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2U] = 0x203U;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3U] = 0x301U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0U] = 0xdaU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1U] = 0xdaU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2U] = 0x1d9U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3U] = 0x31cU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4U] = 0x11bU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5U] = 0x33aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6U] = 0x37eU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7U] = 0x1bdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[8U] = 0xbdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[9U] = 0x199U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0xaU] = 0x1aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0xbU] = 0x9aU;
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list
                    [0U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list
                    [0U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list
                 [2U] >> 1U));
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
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [3U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [1U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [2U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [3U] >> 8U));
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
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[9U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0xaU] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0xbU] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0xbU] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0xbU] >> 3U));
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
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[9U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0xaU] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0xbU] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0xbU] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0xbU] >> 3U));
}

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__IntrUnit__DOT__mcase = 0ULL;
    vlSelf->top__DOT__IntrUnit__DOT__mstatus = 0ULL;
    vlSelf->top__DOT__IntrUnit__DOT__mtvec = 0ULL;
    vlSelf->top__DOT__IntrUnit__DOT__mepc = 0ULL;
    vlSelf->pc = 0x80000000ULL;
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__RegisterFile__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp472;
    VlWide<3>/*95:0*/ __Vtemp473;
    VlWide<7>/*223:0*/ __Vtemp474;
    VlWide<9>/*287:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp518;
    VlWide<3>/*95:0*/ __Vtemp523;
    VlWide<3>/*95:0*/ __Vtemp560;
    VlWide<7>/*223:0*/ __Vtemp613;
    VlWide<7>/*223:0*/ __Vtemp614;
    VlWide<7>/*223:0*/ __Vtemp620;
    VlWide<7>/*223:0*/ __Vtemp621;
    VlWide<3>/*95:0*/ __Vtemp624;
    VlWide<7>/*223:0*/ __Vtemp652;
    VlWide<7>/*223:0*/ __Vtemp653;
    VlWide<3>/*95:0*/ __Vtemp657;
    VlWide<3>/*95:0*/ __Vtemp658;
    VlWide<3>/*95:0*/ __Vtemp659;
    VlWide<3>/*95:0*/ __Vtemp660;
    VlWide<3>/*95:0*/ __Vtemp661;
    VlWide<3>/*95:0*/ __Vtemp717;
    VlWide<4>/*127:0*/ __Vtemp825;
    VlWide<4>/*127:0*/ __Vtemp826;
    VlWide<4>/*127:0*/ __Vtemp827;
    VlWide<3>/*95:0*/ __Vtemp828;
    VlWide<3>/*95:0*/ __Vtemp861;
    // Body
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__waddr, vlSelf->top__DOT__wdata, (IData)(vlSelf->top__DOT__wmask));
    vlSelf->Inst = ((0U == (7U & (IData)(vlSelf->pc)))
                     ? (IData)(vlSelf->top__DOT__rdata)
                     : (IData)((vlSelf->top__DOT__rdata 
                                >> 0x20U)));
    if ((0x100073U == vlSelf->Inst)) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out 
        = (((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
            [0U]) & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit 
        = ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out) 
           | (((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
               [1U]) & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out) 
           | (((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
               [2U]) & vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__isCSRw = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit) 
                                               & (IData)(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out));
    vlSelf->top__DOT__IntrUnit__DOT__ismret = ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->Inst 
                                                               >> 0xcU))))) 
                                               & (0x302U 
                                                  == 
                                                  (vlSelf->Inst 
                                                   >> 0x14U)));
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out 
        = (((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list
            [0U]) & vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IntrEn = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit) 
                                & (IData)(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
    vlSelf->top__DOT__IntrUnit__DOT__isecall = (1U 
                                                & (~ 
                                                   ((0U 
                                                     != 
                                                     (vlSelf->Inst 
                                                      >> 0x14U)) 
                                                    | (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->Inst 
                                                           >> 0xcU))))));
    vlSelf->top__DOT__R_rs1 = vlSelf->top__DOT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0xfU))];
    if (((((((((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst))))) 
               | (0x17U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) 
              | (0x37U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst)))))) 
             | (0x6fU == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
            | (0x67U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
           | (0x1a3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
          | (0x183U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst)))))) 
         | (0x33U == ((0x1fc00U & (vlSelf->Inst >> 0xfU)) 
                      | ((0x380U & (vlSelf->Inst >> 5U)) 
                         | (0x7fU & vlSelf->Inst)))))) {
        if ((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x17U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x37U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 3U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x6fU == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 2U;
            vlSelf->top__DOT__Branch = 1U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x67U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 2U;
            vlSelf->top__DOT__Branch = 2U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x1a3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 1U;
            vlSelf->top__DOT__MemOP = 4U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x183U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 4U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        }
    } else if (((((((((0x8033U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
                      | (0x193U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                     | (0x63U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                    | (0xe3U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                   | (0x103U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                  | (0x303U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x3bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) 
                | (0xa3U == (0x3ffU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst))))))) {
        if ((0x8033U == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 8U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x193U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0xaU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x63U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 8U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 4U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0xe3U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 8U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 5U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x103U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 5U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x303U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 1U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x3bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 1U;
            vlSelf->top__DOT__MemOP = 2U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        }
    } else if (((((((((0x8293U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
                      | (0x203U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                     | (0x393U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                    | (0xbbU == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                   | (0x3b3U == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                  | (0x1b3U == ((0x1fc00U & (vlSelf->Inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->Inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->Inst))))) 
                 | (0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) 
                | (0x82bbU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst)))))) {
        if ((0x8293U == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0xdU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x203U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 3U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x393U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 7U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0xbbU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 1U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x3b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 7U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x1b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0xaU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 4U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else {
            vlSelf->top__DOT__ALUct = 0xdU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        }
    } else if (((((((((0x333U == ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst)))) 
                      | (0x23U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                     | (0x1bU == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                    | (0x2e3U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                   | (0x263U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                  | (0x123U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x43bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) 
                | (0x63bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst)))))) {
        if ((0x333U == ((0x1fc00U & (vlSelf->Inst >> 0xfU)) 
                        | ((0x380U & (vlSelf->Inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 6U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x23U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 1U;
            vlSelf->top__DOT__MemOP = 3U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x1bU == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x2e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 2U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 6U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x263U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 2U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 7U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x123U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 1U;
            vlSelf->top__DOT__MemOP = 1U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x43bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0x11U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else {
            vlSelf->top__DOT__ALUct = 0x12U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        }
    } else if (((((((((0x803bU == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
                      | (0x73bU == ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst))))) 
                     | (0x363U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                    | (0x133U == ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst))))) 
                   | (0x83U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                  | (0x283U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                | (0x293U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst))))))) {
        if ((0x803bU == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 8U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x73bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0x10U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x363U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0xaU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 7U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x133U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 2U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x83U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 6U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x283U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 2U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 1U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else {
            vlSelf->top__DOT__ALUct = 5U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        }
    } else if (((((((((0x9bU == (0x1fbffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst))))) 
                      | (0x829bU == ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst))))) 
                     | (0x433U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst))))) 
                    | (0x29bU == (0x1fbffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                   | (0x2bbU == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                  | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) 
                | (0x6b3U == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst)))))) {
        if ((0x9bU == (0x1fbffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 1U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x829bU == ((0x1fc00U & (vlSelf->Inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->Inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0xdU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x433U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 0x11U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x29bU == (0x1fbffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 5U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x2bbU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->top__DOT__ALUct = 5U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 1U;
            vlSelf->top__DOT__isSext = 1U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0xaU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 6U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0xaU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 6U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        } else {
            vlSelf->top__DOT__ALUct = 0x1aU;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__isTuncate = 0U;
            vlSelf->top__DOT__isSext = 0U;
        }
    } else if ((0x7b3U == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->top__DOT__ALUct = 0x18U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
    } else if ((0x6bbU == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->top__DOT__ALUct = 0x1aU;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 1U;
        vlSelf->top__DOT__isSext = 1U;
    } else if ((0x233U == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->top__DOT__ALUct = 4U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
    } else if ((3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 0U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 0U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 7U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
    } else if ((0x313U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 6U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 0U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->Inst 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->Inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->Inst))))) {
        vlSelf->top__DOT__ALUct = 1U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
    } else {
        vlSelf->top__DOT__ALUct = 1U;
        vlSelf->top__DOT__ALUAsr = 0U;
        vlSelf->top__DOT__ALUBsr = 0U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__isTuncate = 0U;
        vlSelf->top__DOT__isSext = 0U;
        Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
    }
    vlSelf->top__DOT__R_rs2 = vlSelf->top__DOT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0x14U))];
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
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__Extop = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out)
                                : 0U);
    __Vtemp472[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (vlSelf->Inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->Inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->Inst 
                                                                      >> 0x14U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp473[1U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp474[2U] = (0x20U | (((IData)((((- (QData)((IData)(
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
                                << 6U) | ((IData)((
                                                   (((- (QData)((IData)(
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
    __Vtemp474[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->Inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->Inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->Inst 
                                                                         >> 7U))))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
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
    __Vtemp474[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
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
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (vlSelf->Inst 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSelf->Inst 
                                                             >> 0x14U))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
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
    __Vtemp474[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->Inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x14U))))) 
                             >> 0x17U)) | ((0x38U & 
                                            ((IData)(
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
    __Vtemp474[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                           (vlSelf->Inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->Inst 
                                                                    >> 0x14U)))) 
                                      >> 0x20U)) >> 0x17U)) 
                      | (__Vtemp472[4U] << 3U));
    __Vtemp476[2U] = (0x28U | (((IData)((((- (QData)((IData)(
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
                                                                        >> 7U))))))))) 
                                << 6U) | ((IData)((
                                                   (((QData)((IData)(
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
        = __Vtemp476[2U];
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
                  >> 0x1aU)) | (__Vtemp473[1U] << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
        = ((__Vtemp473[1U] >> 0x1dU) | (__Vtemp474[2U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
        = ((__Vtemp474[2U] >> 0x1dU) | (__Vtemp474[3U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
        = ((__Vtemp474[3U] >> 0x1dU) | (__Vtemp474[4U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
        = ((__Vtemp474[4U] >> 0x1dU) | (__Vtemp474[5U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
        = ((__Vtemp474[5U] >> 0x1dU) | (__Vtemp474[6U] 
                                        << 3U));
    vlSelf->top__DOT__IntrUnit__DOT__ismepc = ((0x341U 
                                                == 
                                                (vlSelf->Inst 
                                                 >> 0x14U)) 
                                               | (IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall));
    vlSelf->top__DOT__IntrUnit__DOT__ismcase = ((0x342U 
                                                 == 
                                                 (vlSelf->Inst 
                                                  >> 0x14U)) 
                                                | (IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((- (IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                       == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
           == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                          == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [1U]));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [1U]));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                          == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [2U]));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [2U]));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                          == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [3U]));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [3U]));
    vlSelf->top__DOT__DataMem__DOT__wmask = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit)
                                              ? (IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out)
                                              : 0U);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key 
        = ((8U & ((IData)(vlSelf->top__DOT__ALUct) 
                  >> 1U)) | (7U & (IData)(vlSelf->top__DOT__ALUct)));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = ((2U & ((IData)(vlSelf->top__DOT__ALUct) 
                  >> 2U)) | (1U == (7U & (IData)(vlSelf->top__DOT__ALUct))));
    vlSelf->top__DOT__ALU__DOT__Sub_Add = ((2U == (7U 
                                                   & (IData)(vlSelf->top__DOT__ALUct))) 
                                           | (8U == 
                                              (0xfU 
                                               & (IData)(vlSelf->top__DOT__ALUct))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key 
        = ((2U & ((IData)(vlSelf->top__DOT__ALUct) 
                  >> 2U)) | (IData)(vlSelf->top__DOT__isTuncate));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key 
        = ((2U & ((IData)(vlSelf->top__DOT__ALUct) 
                  >> 2U)) | (IData)(vlSelf->top__DOT__isTuncate));
    vlSelf->top__DOT__ALU__DOT__ALUA = ((IData)(vlSelf->top__DOT__ALUAsr)
                                         ? vlSelf->top__DOT__R_rs1
                                         : vlSelf->pc);
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
    vlSelf->top__DOT__RegSrc = ((3U == (IData)(vlSelf->top__DOT__Extop))
                                 ? 1U : ((0x1bU == 
                                          (0x7fU & vlSelf->Inst))
                                          ? 2U : 0U));
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
    vlSelf->top__DOT__IntrOut = ((0x305U == (vlSelf->Inst 
                                             >> 0x14U))
                                  ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                  : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc)
                                      ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                      : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase)
                                          ? vlSelf->top__DOT__IntrUnit__DOT__mcase
                                          : ((0x300U 
                                              == (vlSelf->Inst 
                                                  >> 0x14U))
                                              ? vlSelf->top__DOT__IntrUnit__DOT__mstatus
                                              : 0ULL))));
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
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[0U] 
        = (IData)((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[1U] 
        = (IData)(((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1) 
                   >> 0x20U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__R_rs1) << 3U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[3U] 
        = (((IData)(vlSelf->top__DOT__R_rs1) >> 0x1dU) 
           | ((IData)((vlSelf->top__DOT__R_rs1 >> 0x20U)) 
              << 3U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[4U] 
        = (8U | ((IData)((vlSelf->top__DOT__R_rs1 >> 0x20U)) 
                 >> 0x1dU));
    VL_EXTEND_WQ(67,64, __Vtemp518, ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                      ? 0xbULL : 0xefffffffffffffffULL));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[0U] 
        = __Vtemp518[0U];
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[1U] 
        = __Vtemp518[1U];
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[2U] 
        = (((IData)((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1)) 
            << 3U) | __Vtemp518[2U]);
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[3U] 
        = (((IData)((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1)) 
            >> 0x1dU) | ((IData)(((vlSelf->top__DOT__IntrOut 
                                   | vlSelf->top__DOT__R_rs1) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__R_rs1) 
                     << 6U) | ((IData)(((vlSelf->top__DOT__IntrOut 
                                         | vlSelf->top__DOT__R_rs1) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[5U] 
        = (((IData)(vlSelf->top__DOT__R_rs1) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__R_rs1 >> 0x20U)) 
              << 6U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__R_rs1 
                             >> 0x20U)) >> 0x1aU));
    VL_EXTEND_WQ(67,64, __Vtemp523, vlSelf->pc);
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[0U] 
        = __Vtemp523[0U];
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[1U] 
        = __Vtemp523[1U];
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[2U] 
        = (((IData)((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1)) 
            << 3U) | __Vtemp523[2U]);
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[3U] 
        = (((IData)((vlSelf->top__DOT__IntrOut | vlSelf->top__DOT__R_rs1)) 
            >> 0x1dU) | ((IData)(((vlSelf->top__DOT__IntrOut 
                                   | vlSelf->top__DOT__R_rs1) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__R_rs1) 
                     << 6U) | ((IData)(((vlSelf->top__DOT__IntrOut 
                                         | vlSelf->top__DOT__R_rs1) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[5U] 
        = (((IData)(vlSelf->top__DOT__R_rs1) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__R_rs1 >> 0x20U)) 
              << 6U));
    vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__R_rs1 
                             >> 0x20U)) >> 0x1aU));
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
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[0U];
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[1U];
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[2U]);
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[0U];
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[1U];
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut[6U] 
                 >> 6U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[0U];
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[1U];
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut[6U] 
                 >> 6U));
    VL_EXTEND_WQ(66,64, __Vtemp560, vlSelf->top__DOT__Imm);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[0U] = 4U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[1U] = 0U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__R_rs2) << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
        = (((IData)(vlSelf->top__DOT__R_rs2) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__R_rs2 >> 0x20U)) 
              << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
        = (4U | ((__Vtemp560[0U] << 4U) | ((IData)(
                                                   (vlSelf->top__DOT__R_rs2 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
        = ((__Vtemp560[0U] >> 0x1cU) | (__Vtemp560[1U] 
                                        << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
        = ((__Vtemp560[1U] >> 0x1cU) | (__Vtemp560[2U] 
                                        << 4U));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list
           [2U][2U]);
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
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                      >> 0xcU)) == 
                               vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit 
        = ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out 
        = (vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__csrData = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit)
                                                 ? vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out
                                                 : 0ULL);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                      >> 0xcU)) == 
                               vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit 
        = ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out 
        = (vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out 
        = (vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__mcaseData = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit)
                                                   ? vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out
                                                   : 0ULL);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                      >> 0xcU)) == 
                               vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit 
        = ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out 
        = (vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out 
        = (vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (vlSelf->Inst 
                                         >> 0xcU)) 
                                  == vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit) 
           | ((7U & (vlSelf->Inst >> 0xcU)) == vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IntrUnit__DOT__mepcData = ((IData)(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit)
                                                  ? vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out
                                                  : 0ULL);
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
    vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
        = ((- (QData)((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add))) 
           ^ vlSelf->top__DOT__ALU__DOT__ALUB);
    __Vtemp613[0U] = (IData)((QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))));
    __Vtemp613[1U] = (IData)(((QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                              >> 0x20U));
    __Vtemp613[2U] = (3U | ((IData)((QData)((IData)(
                                                    VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))) 
                            << 2U));
    __Vtemp613[3U] = (((IData)((QData)((IData)(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))) 
                       >> 0x1eU) | ((IData)(((QData)((IData)(
                                                             VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp613[4U] = (0x14U | ((IData)(((QData)((IData)(
                                                        VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                                        >> 0x20U)) 
                               >> 0x1eU));
    __Vtemp613[5U] = 0U;
    __Vtemp613[6U] = 0U;
    VL_EXTEND_WW(198,196, __Vtemp614, __Vtemp613);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[0U] 
        = __Vtemp614[0U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[1U] 
        = __Vtemp614[1U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[2U] 
        = __Vtemp614[2U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[3U] 
        = __Vtemp614[3U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[4U] 
        = __Vtemp614[4U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[5U] 
        = __Vtemp614[5U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[6U] 
        = (((IData)(VL_DIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB)) 
            << 6U) | __Vtemp614[6U]);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[7U] 
        = (((IData)(VL_DIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x1aU) | ((IData)((VL_DIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[8U] 
        = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB) 
                             >> 0x20U)) >> 0x1aU));
    __Vtemp620[0U] = (IData)((QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))));
    __Vtemp620[1U] = (IData)(((QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                              >> 0x20U));
    __Vtemp620[2U] = (3U | ((IData)((QData)((IData)(
                                                    VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))) 
                            << 2U));
    __Vtemp620[3U] = (((IData)((QData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))) 
                       >> 0x1eU) | ((IData)(((QData)((IData)(
                                                             VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp620[4U] = (4U | (((IData)(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUA)) 
                             << 4U) | ((IData)(((QData)((IData)(
                                                                VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                                                >> 0x20U)) 
                                       >> 0x1eU)));
    __Vtemp620[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUA)) 
                       >> 0x1cU) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUA) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp620[6U] = ((IData)((VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUA) 
                               >> 0x20U)) >> 0x1cU);
    VL_EXTEND_WW(198,196, __Vtemp621, __Vtemp620);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[0U] 
        = __Vtemp621[0U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[1U] 
        = __Vtemp621[1U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[2U] 
        = __Vtemp621[2U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[3U] 
        = __Vtemp621[3U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[4U] 
        = __Vtemp621[4U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[5U] 
        = __Vtemp621[5U];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[6U] 
        = (((IData)(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB)) 
            << 6U) | __Vtemp621[6U]);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[7U] 
        = (((IData)(VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x1aU) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[8U] 
        = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB) 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
           & ((IData)(vlSelf->top__DOT__isTuncate) ? 0x1fU
               : 0x3fU));
    VL_EXTEND_WI(65,1, __Vtemp624, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
    vlSelf->top__DOT__ALU__DOT__adder = ((vlSelf->top__DOT__ALU__DOT__ALUA 
                                          + vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin) 
                                         + (((QData)((IData)(
                                                             __Vtemp624[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp624[0U]))));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[0U];
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[1U];
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[7U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[6U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[8U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[7U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut[8U] 
                 >> 6U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[0U];
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[1U];
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[7U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[6U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[8U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[7U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut[8U] 
                 >> 6U));
    __Vtemp652[0U] = (IData)(((IData)(vlSelf->top__DOT__isTuncate)
                               ? ((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__ALUA))) 
                                  >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                               : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                  >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))));
    __Vtemp652[1U] = (IData)((((IData)(vlSelf->top__DOT__isTuncate)
                                ? ((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__ALUA))) 
                                   >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                   >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                              >> 0x20U));
    __Vtemp652[2U] = (2U | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                            << 2U));
    __Vtemp652[3U] = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                                << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                       >> 0x1eU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                              << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp652[4U] = (0xcU | (((IData)(((IData)(vlSelf->top__DOT__isTuncate)
                                         ? (QData)((IData)(
                                                           ((0x1fU 
                                                             >= (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                             ? 
                                                            ((IData)(vlSelf->top__DOT__ALU__DOT__ALUA) 
                                                             >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                             : 0U)))
                                         : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                            >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                               << 4U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                   << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                                  >> 0x20U)) 
                                         >> 0x1eU)));
    __Vtemp652[5U] = (((IData)(((IData)(vlSelf->top__DOT__isTuncate)
                                 ? (QData)((IData)(
                                                   ((0x1fU 
                                                     >= (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ALU__DOT__ALUA) 
                                                     >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     : 0U)))
                                 : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                    >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                       >> 0x1cU) | ((IData)((((IData)(vlSelf->top__DOT__isTuncate)
                                               ? (QData)((IData)(
                                                                 ((0x1fU 
                                                                   >= (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   ? 
                                                                  ((IData)(vlSelf->top__DOT__ALU__DOT__ALUA) 
                                                                   >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   : 0U)))
                                               : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                  >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp652[6U] = ((IData)((((IData)(vlSelf->top__DOT__isTuncate)
                                 ? (QData)((IData)(
                                                   ((0x1fU 
                                                     >= (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ALU__DOT__ALUA) 
                                                     >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     : 0U)))
                                 : (vlSelf->top__DOT__ALU__DOT__ALUA 
                                    >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                               >> 0x20U)) >> 0x1cU);
    VL_EXTEND_WW(198,196, __Vtemp653, __Vtemp652);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U] 
        = __Vtemp653[0U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U] 
        = __Vtemp653[1U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
        = __Vtemp653[2U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
        = __Vtemp653[3U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
        = __Vtemp653[4U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
        = __Vtemp653[5U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
            << 6U) | __Vtemp653[6U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))) 
            >> 0x1aU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
        = (0x40U | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                              << (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                             >> 0x20U)) >> 0x1aU));
    VL_EXTEND_WQ(65,64, __Vtemp657, vlSelf->top__DOT__ALU__DOT__ALUA);
    VL_EXTEND_WQ(65,64, __Vtemp658, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
    VL_ADD_W(3, __Vtemp659, __Vtemp657, __Vtemp658);
    VL_EXTEND_WI(65,1, __Vtemp660, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
    VL_ADD_W(3, __Vtemp661, __Vtemp659, __Vtemp660);
    vlSelf->top__DOT__Less = (1U & ((8U & (IData)(vlSelf->top__DOT__ALUct))
                                     ? ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                        ^ (1U & __Vtemp661[2U]))
                                     : ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
                                                 >> 0x3fU)) 
                                        ^ (((1U & (IData)(
                                                          (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                           >> 0x3fU))) 
                                            == (1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                           >> 0x3fU)))) 
                                           & ((1U & (IData)(
                                                            (vlSelf->top__DOT__ALU__DOT__adder 
                                                             >> 0x3fU))) 
                                              != (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                             >> 0x3fU))))))));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
                 >> 6U));
    vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
        = (0x4ea80000ULL | (QData)((IData)((0x531cU 
                                            | ((((0U 
                                                  != vlSelf->top__DOT__ALU__DOT__adder)
                                                  ? 1U
                                                  : 3U) 
                                                << 0xfU) 
                                               | ((((0U 
                                                     != vlSelf->top__DOT__ALU__DOT__adder)
                                                     ? 3U
                                                     : 1U) 
                                                   << 0xaU) 
                                                  | ((((IData)(vlSelf->top__DOT__Less)
                                                        ? 1U
                                                        : 3U) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->top__DOT__Less)
                                                         ? 3U
                                                         : 1U))))))));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                               == vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                                   [0U]);
    vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                  == vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                                      [1U]));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                  == vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                                      [2U]));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                  == vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list
                                                      [3U]));
    vlSelf->top__DOT__ALU__DOT__DIV = ((IData)(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit)
                                        ? vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out
                                        : 0ULL);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                               == vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                                   == 
                                                   vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                                   [0U]);
    vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                  == vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                                      [1U]));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                  == vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                                      [2U]));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                  == vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key) 
                                                      == 
                                                      vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list
                                                      [3U]));
    vlSelf->top__DOT__ALU__DOT__REM = ((IData)(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit)
                                        ? vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out
                                        : 0ULL);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 5U)));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0xaU)));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0xfU)));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x14U)));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x19U)));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] 
        = (0x1fU & (IData)((vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x1eU)));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                               == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
           == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__shift = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit)
                                          ? vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out
                                          : 0ULL);
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
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [4U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [5U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [6U] >> 2U));
    VL_EXTEND_WQ(68,64, __Vtemp717, vlSelf->top__DOT__ALU__DOT__adder);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__DIV);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[1U] 
        = (IData)((vlSelf->top__DOT__ALU__DOT__DIV 
                   >> 0x20U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U] 
        = (0xaU | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                            * vlSelf->top__DOT__ALU__DOT__ALUB)) 
                   << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     * vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x1cU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   * vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
        = (0x90U | (((IData)(vlSelf->top__DOT__ALU__DOT__REM) 
                     << 8U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                         * vlSelf->top__DOT__ALU__DOT__ALUB) 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
        = (((IData)(vlSelf->top__DOT__ALU__DOT__REM) 
            >> 0x18U) | ((IData)((vlSelf->top__DOT__ALU__DOT__REM 
                                  >> 0x20U)) << 8U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
        = (0x800U | (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                               & vlSelf->top__DOT__ALU__DOT__ALUB)) 
                      << 0xcU) | ((IData)((vlSelf->top__DOT__ALU__DOT__REM 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     & vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x14U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   & vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
        = (0x7000U | (((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                 & vlSelf->top__DOT__ALU__DOT__ALUB) 
                                >> 0x20U)) >> 0x14U) 
                      | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                                  | vlSelf->top__DOT__ALU__DOT__ALUB)) 
                         << 0x10U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
        = ((0xfffU & ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                               | vlSelf->top__DOT__ALU__DOT__ALUB)) 
                      >> 0x10U)) | ((0xf000U & ((IData)(
                                                        (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                         | vlSelf->top__DOT__ALU__DOT__ALUB)) 
                                                >> 0x10U)) 
                                    | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                 | vlSelf->top__DOT__ALU__DOT__ALUB) 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
        = (0x60000U | ((0xfffU & ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                            | vlSelf->top__DOT__ALU__DOT__ALUB) 
                                           >> 0x20U)) 
                                  >> 0x10U)) | (((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                                                 << 0x14U) 
                                                | (0xf000U 
                                                   & ((IData)(
                                                              ((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                                | vlSelf->top__DOT__ALU__DOT__ALUB) 
                                                               >> 0x20U)) 
                                                      >> 0x10U)))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
        = ((0xfffU & ((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                      >> 0xcU)) | ((0xff000U & ((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                                                >> 0xcU)) 
                                   | ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
        = (0x500000U | ((0xfffU & ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (((IData)(
                                                         (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                          ^ vlSelf->top__DOT__ALU__DOT__ALUB)) 
                                                 << 0x18U) 
                                                | (0xff000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ALU__DOT__shift 
                                                               >> 0x20U)) 
                                                      >> 0xcU)))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
        = ((0xfffU & ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                               ^ vlSelf->top__DOT__ALU__DOT__ALUB)) 
                      >> 8U)) | ((0xfff000U & ((IData)(
                                                       (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                        ^ vlSelf->top__DOT__ALU__DOT__ALUB)) 
                                               >> 8U)) 
                                 | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                              ^ vlSelf->top__DOT__ALU__DOT__ALUB) 
                                             >> 0x20U)) 
                                    << 0x18U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
        = (0x4000000U | ((0xfffU & ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                              ^ vlSelf->top__DOT__ALU__DOT__ALUB) 
                                             >> 0x20U)) 
                                    >> 8U)) | (((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
                                                << 0x1cU) 
                                               | (0xfff000U 
                                                  & ((IData)(
                                                             ((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                               ^ vlSelf->top__DOT__ALU__DOT__ALUB) 
                                                              >> 0x20U)) 
                                                     >> 8U)))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
        = ((0xfffU & ((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
                      >> 4U)) | ((0xffff000U & ((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
                                                >> 4U)) 
                                 | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUB 
                                             >> 0x20U)) 
                                    << 0x1cU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
        = (0x30000000U | ((0xfffU & ((IData)((vlSelf->top__DOT__ALU__DOT__ALUB 
                                              >> 0x20U)) 
                                     >> 4U)) | (0xffff000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__ALUB 
                                                            >> 0x20U)) 
                                                   >> 4U))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x11U] 
        = ((0xfffU & (IData)((QData)((IData)(vlSelf->top__DOT__Less)))) 
           | (0xfffff000U & (IData)((QData)((IData)(vlSelf->top__DOT__Less)))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x12U] 
        = ((0xfffU & (IData)(((QData)((IData)(vlSelf->top__DOT__Less)) 
                              >> 0x20U))) | (0xfffff000U 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->top__DOT__Less)) 
                                                        >> 0x20U))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x13U] 
        = (2U | ((0xff0U & ((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                            << 4U)) | (0xfffff000U 
                                       & ((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                                          << 4U))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
        = ((((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
             >> 0x1cU) | (0xff0U & ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                             >> 0x20U)) 
                                    << 4U))) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__shift 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
        = (0x10U | (((0xf00U & (__Vtemp717[0U] << 8U)) 
                     | ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                 >> 0x20U)) >> 0x1cU)) 
                    | (0xfffff000U & (__Vtemp717[0U] 
                                      << 8U))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
        = (((__Vtemp717[0U] >> 0x18U) | (0xf00U & (
                                                   __Vtemp717[1U] 
                                                   << 8U))) 
           | (0xfffff000U & (__Vtemp717[1U] << 8U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
        = ((__Vtemp717[1U] >> 0x18U) | (0xf00U & (__Vtemp717[2U] 
                                                  << 8U)));
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
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [3U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [3U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [4U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [4U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [5U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [5U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [6U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [6U]));
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
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
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
            << 0x18U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
                         >> 8U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
            << 0x18U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
                         >> 8U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
                   >> 8U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
            << 0x14U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
            << 0x14U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
            << 0x10U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
                         >> 0x10U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                   >> 0x10U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
            << 0xcU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                        >> 0x14U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
            << 0xcU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
                        >> 0x14U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                   >> 0x14U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
            << 8U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                      >> 0x18U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
            << 8U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
                      >> 0x18U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                   >> 0x18U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
            << 4U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                      >> 0x1cU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
            << 4U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
                      >> 0x1cU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][2U] 
        = (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
           >> 0x1cU);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x11U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x12U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8U][2U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x13U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x13U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9U][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
                   >> 4U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
            << 0x18U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
                         >> 8U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
            << 0x18U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
                         >> 8U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0xaU][2U] 
        = (0xfU & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
                   >> 8U));
    vlSelf->top__DOT__PC__DOT__dpc = (((IData)(vlSelf->top__DOT__IntrEn) 
                                       & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                          | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))
                                       ? ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                           ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                           : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                               ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                               : vlSelf->pc))
                                       : (0xfffffffffffffffeULL 
                                          & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                               ? vlSelf->top__DOT__Imm
                                               : 4ULL) 
                                             + ((1U 
                                                 & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                 ? vlSelf->pc
                                                 : vlSelf->top__DOT__R_rs1))));
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
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9U] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0xaU] 
        = (0xfU & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [0xaU][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                               == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
         == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
         [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [1U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [2U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [3U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [4U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [5U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [6U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [7U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [8U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [9U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [0xaU]));
    vlSelf->top__DOT__ALU__DOT__ALUout = ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit)
                                           ? vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out
                                           : 0ULL);
    vlSelf->top__DOT__ALUres = ((IData)(vlSelf->top__DOT__isTuncate)
                                 ? ((IData)(vlSelf->top__DOT__isSext)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__ALUout)))
                                     : (QData)((IData)(vlSelf->top__DOT__ALU__DOT__ALUout)))
                                 : vlSelf->top__DOT__ALU__DOT__ALUout);
    VL_EXTEND_WQ(128,64, __Vtemp825, vlSelf->top__DOT__R_rs2);
    VL_SHIFTL_WWI(128,128,6, __Vtemp826, __Vtemp825, 
                  (0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                            << 3U)));
    vlSelf->top__DOT__DataMem__DOT__data[0U] = __Vtemp826[0U];
    vlSelf->top__DOT__DataMem__DOT__data[1U] = __Vtemp826[1U];
    vlSelf->top__DOT__DataMem__DOT__data[2U] = __Vtemp826[2U];
    vlSelf->top__DOT__DataMem__DOT__data[3U] = __Vtemp826[3U];
    vlSelf->top__DOT__DataMem__DOT__extmask = (0xffffU 
                                               & ((IData)(vlSelf->top__DOT__DataMem__DOT__wmask) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->top__DOT__ALUres))));
    if (((0U != (IData)(vlSelf->top__DOT__MemOP)) & 
         (~ (IData)(vlSelf->top__DOT__MemWr)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__ALUres, vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->top__DOT__DataMem__DOT__data[0U] = (IData)(vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->top__DOT__DataMem__DOT__data[1U] = (IData)(
                                                           (vlSelf->__Vtask_pmem_read__5__rdata 
                                                            >> 0x20U));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (8ULL 
                                                               + vlSelf->top__DOT__ALUres), vlSelf->__Vtask_pmem_read__6__rdata);
        vlSelf->top__DOT__DataMem__DOT__data[2U] = (IData)(vlSelf->__Vtask_pmem_read__6__rdata);
        vlSelf->top__DOT__DataMem__DOT__data[3U] = (IData)(
                                                           (vlSelf->__Vtask_pmem_read__6__rdata 
                                                            >> 0x20U));
        VL_SHIFTR_WWI(128,128,6, __Vtemp827, vlSelf->top__DOT__DataMem__DOT__data, 
                      (0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                << 3U)));
        vlSelf->top__DOT__DataMem__DOT__data[0U] = 
            __Vtemp827[0U];
        vlSelf->top__DOT__DataMem__DOT__data[1U] = 
            __Vtemp827[1U];
        vlSelf->top__DOT__DataMem__DOT__data[2U] = 
            __Vtemp827[2U];
        vlSelf->top__DOT__DataMem__DOT__data[3U] = 
            __Vtemp827[3U];
    }
    if (vlSelf->top__DOT__MemWr) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALUres, 
                                                               (((QData)((IData)(
                                                                                vlSelf->top__DOT__DataMem__DOT__data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__DataMem__DOT__data[0U]))), 
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__DataMem__DOT__extmask)));
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (8ULL 
                                                                + vlSelf->top__DOT__ALUres), 
                                                               (((QData)((IData)(
                                                                                vlSelf->top__DOT__DataMem__DOT__data[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__DataMem__DOT__data[2U]))), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->top__DOT__DataMem__DOT__extmask) 
                                                                   >> 8U)));
    }
    VL_EXTEND_WQ(66,64, __Vtemp828, (((QData)((IData)(
                                                      vlSelf->top__DOT__DataMem__DOT__data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__DataMem__DOT__data[0U]))));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[0U] 
        = (IData)(((4U & (IData)(vlSelf->top__DOT__MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                  >> 7U))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffU & vlSelf->top__DOT__DataMem__DOT__data[0U])))));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[1U] 
        = (IData)((((4U & (IData)(vlSelf->top__DOT__MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                   >> 7U))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffU & vlSelf->top__DOT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[2U] 
        = (3U | ((IData)(((4U & (IData)(vlSelf->top__DOT__MemOP))
                           ? (((- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                      >> 0xfU))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                           : (QData)((IData)((0xffffU 
                                              & vlSelf->top__DOT__DataMem__DOT__data[0U]))))) 
                 << 2U));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[3U] 
        = (((IData)(((4U & (IData)(vlSelf->top__DOT__MemOP))
                      ? (((- (QData)((IData)((1U & 
                                              (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                               >> 0xfU))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                      : (QData)((IData)((0xffffU & 
                                         vlSelf->top__DOT__DataMem__DOT__data[0U]))))) 
            >> 0x1eU) | ((IData)((((4U & (IData)(vlSelf->top__DOT__MemOP))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                               >> 0xfU))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                                    : (QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->top__DOT__DataMem__DOT__data[0U])))) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[4U] 
        = (8U | (((IData)(((4U & (IData)(vlSelf->top__DOT__MemOP))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__DataMem__DOT__data[0U])))
                            : (QData)((IData)(vlSelf->top__DOT__DataMem__DOT__data[0U])))) 
                  << 4U) | ((IData)((((4U & (IData)(vlSelf->top__DOT__MemOP))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                                  >> 0xfU))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->top__DOT__DataMem__DOT__data[0U]))))
                                       : (QData)((IData)(
                                                         (0xffffU 
                                                          & vlSelf->top__DOT__DataMem__DOT__data[0U])))) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[5U] 
        = (((IData)(((4U & (IData)(vlSelf->top__DOT__MemOP))
                      ? (((QData)((IData)((- (IData)(
                                                     (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                      >> 0x1fU))))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__DataMem__DOT__data[0U])))
                      : (QData)((IData)(vlSelf->top__DOT__DataMem__DOT__data[0U])))) 
            >> 0x1cU) | ((IData)((((4U & (IData)(vlSelf->top__DOT__MemOP))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__DataMem__DOT__data[0U])))
                                    : (QData)((IData)(
                                                      vlSelf->top__DOT__DataMem__DOT__data[0U]))) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[6U] 
        = (0x10U | ((__Vtemp828[0U] << 6U) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSelf->top__DOT__MemOP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->top__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__DataMem__DOT__data[0U])))
                                                         : (QData)((IData)(
                                                                           vlSelf->top__DOT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[7U] 
        = ((__Vtemp828[0U] >> 0x1aU) | (__Vtemp828[1U] 
                                        << 6U));
    vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[8U] 
        = ((__Vtemp828[1U] >> 0x1aU) | (__Vtemp828[2U] 
                                        << 6U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[0U];
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[1U];
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[2U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[7U] 
            << 0x1aU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[6U] 
                         >> 6U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[8U] 
            << 0x1aU) | (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[7U] 
                         >> 6U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut[8U] 
                 >> 6U));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                               == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit 
        = ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
           == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                                  == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list
              [1U]));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
              [1U]));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                                  == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list
              [2U]));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
              [2U]));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->top__DOT__MemOP)) 
                                  == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list
              [3U]));
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->top__DOT__MemOP)) 
              == vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list
              [3U]));
    vlSelf->top__DOT__MemOut = ((IData)(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit)
                                 ? vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out
                                 : 0ULL);
    VL_EXTEND_WQ(66,64, __Vtemp861, vlSelf->top__DOT__ALUres);
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[0U] 
        = (IData)(vlSelf->top__DOT__IntrOut);
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[1U] 
        = (IData)((vlSelf->top__DOT__IntrOut >> 0x20U));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__MemOut) 
                 << 2U));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
        = (((IData)(vlSelf->top__DOT__MemOut) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__MemOut >> 0x20U)) 
              << 2U));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
        = (4U | ((__Vtemp861[0U] << 4U) | ((IData)(
                                                   (vlSelf->top__DOT__MemOut 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[5U] 
        = ((__Vtemp861[0U] >> 0x1cU) | (__Vtemp861[1U] 
                                        << 4U));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[6U] 
        = ((__Vtemp861[1U] >> 0x1cU) | (__Vtemp861[2U] 
                                        << 4U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[0U];
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[1U];
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__RegSrc) 
                                                                      == 
                                                                      vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                                      [0U])))) 
                                                  & vlSelf->top__DOT__RegWsrcMux__DOT__data_list
                                                  [0U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->top__DOT__RegSrc) 
                                              == vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                              [0U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = (vlSelf->top__DOT__RegWsrcMux__DOT__lut_out 
                                                  | ((- (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__RegSrc) 
                                                                         == 
                                                                         vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                                         [1U])))) 
                                                     & vlSelf->top__DOT__RegWsrcMux__DOT__data_list
                                                     [1U]));
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__hit) 
                                              | ((IData)(vlSelf->top__DOT__RegSrc) 
                                                 == 
                                                 vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                 [1U]));
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = (vlSelf->top__DOT__RegWsrcMux__DOT__lut_out 
                                                  | ((- (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__RegSrc) 
                                                                         == 
                                                                         vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                                         [2U])))) 
                                                     & vlSelf->top__DOT__RegWsrcMux__DOT__data_list
                                                     [2U]));
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__hit) 
                                              | ((IData)(vlSelf->top__DOT__RegSrc) 
                                                 == 
                                                 vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                 [2U]));
    vlSelf->top__DOT__RegWdata = ((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__hit)
                                   ? vlSelf->top__DOT__RegWsrcMux__DOT__lut_out
                                   : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__4(vlSelf);
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
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->Inst = 0;
    vlSelf->pc = 0;
    vlSelf->top__DOT__rdata = 0;
    vlSelf->top__DOT__waddr = 0;
    vlSelf->top__DOT__wdata = 0;
    vlSelf->top__DOT__wmask = 0;
    vlSelf->top__DOT__R_rs1 = 0;
    vlSelf->top__DOT__R_rs2 = 0;
    vlSelf->top__DOT__ALUct = 0;
    vlSelf->top__DOT__Extop = 0;
    vlSelf->top__DOT__RegWr = 0;
    vlSelf->top__DOT__ALUAsr = 0;
    vlSelf->top__DOT__ALUBsr = 0;
    vlSelf->top__DOT__Imm = 0;
    vlSelf->top__DOT__ALUres = 0;
    vlSelf->top__DOT__Branch = 0;
    vlSelf->top__DOT__Less = 0;
    vlSelf->top__DOT__MemOP = 0;
    vlSelf->top__DOT__RegSrc = 0;
    vlSelf->top__DOT__MemWr = 0;
    vlSelf->top__DOT__MemOut = 0;
    vlSelf->top__DOT__RegWdata = 0;
    vlSelf->top__DOT__IntrEn = 0;
    vlSelf->top__DOT__IntrOut = 0;
    vlSelf->top__DOT__isTuncate = 0;
    vlSelf->top__DOT__isSext = 0;
    VL_ZERO_RESET_W(198, vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut);
    vlSelf->top__DOT__PC__DOT__dpc = 0;
    vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut = 0;
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out = 0;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out = 0;
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RegisterFile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out = 0;
    vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit = 0;
    VL_ZERO_RESET_W(335, vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit = 0;
    vlSelf->top__DOT__ALU__DOT__ALUA = 0;
    vlSelf->top__DOT__ALU__DOT__ALUB = 0;
    VL_ZERO_RESET_W(198, vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut);
    vlSelf->top__DOT__ALU__DOT__Sub_Add = 0;
    vlSelf->top__DOT__ALU__DOT__adder = 0;
    vlSelf->top__DOT__ALU__DOT__shift = 0;
    vlSelf->top__DOT__ALU__DOT__DIV = 0;
    vlSelf->top__DOT__ALU__DOT__REM = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key = 0;
    vlSelf->top__DOT__ALU__DOT__ALUout = 0;
    VL_ZERO_RESET_W(748, vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit = 0;
    vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin = 0;
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__diver__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__remer__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 0;
    vlSelf->top__DOT__DataMem__DOT__wmask = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__DataMem__DOT__data);
    vlSelf->top__DOT__DataMem__DOT__extmask = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out = 0;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out = 0;
    vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__RegWsrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__RegWsrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = 0;
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mepc = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mcase = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mtvec = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mstatus = 0;
    vlSelf->top__DOT__IntrUnit__DOT__isCSRw = 0;
    vlSelf->top__DOT__IntrUnit__DOT__isecall = 0;
    vlSelf->top__DOT__IntrUnit__DOT__ismret = 0;
    vlSelf->top__DOT__IntrUnit__DOT__ismepc = 0;
    vlSelf->top__DOT__IntrUnit__DOT__ismcase = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mcaseData = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mepcData = 0;
    vlSelf->top__DOT__IntrUnit__DOT__csrData = 0;
    VL_ZERO_RESET_W(201, vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut);
    VL_ZERO_RESET_W(201, vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut);
    VL_ZERO_RESET_W(134, vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out = 0;
    vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out = 0;
    vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out = 0;
    vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit = 0;
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    vlSelf->__Vtask_pmem_read__6__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
