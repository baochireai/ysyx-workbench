// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->dcache_cnt = vlSymsp->TOP__top.dcache_cnt;
    vlSelf->dcache_hit = ((IData)(vlSymsp->TOP__top.dcache_cnt) 
                          & (IData)(vlSymsp->TOP__top.__PVT__dcache__DOT__cache_hit));
    vlSelf->icache_cnt = vlSymsp->TOP__top.icache_cnt;
    vlSelf->icache_hit = ((IData)(vlSymsp->TOP__top.icache_cnt) 
                          & (IData)(vlSymsp->TOP__top.__PVT__icache__DOT__cache_hit));
}

void Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
void Vtop_WB___ico_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);
void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
        Vtop_WB___ico_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__top.__PVT__wb_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->pc = vlSymsp->TOP__top.__PVT__wb_pc;
    vlSelf->Inst = vlSymsp->TOP__top.__PVT__wb_inst;
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);
void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1(Vtop_Intr* vlSelf);
void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_top___nba_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
        Vtop_WB___nba_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_top___nba_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1((&vlSymsp->TOP__top__WB__IntrUnit));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_top___nba_sequent__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_WB___ico_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}
