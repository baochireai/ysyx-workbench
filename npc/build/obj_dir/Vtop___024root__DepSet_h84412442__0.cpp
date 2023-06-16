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

void Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
void Vtop_WB___ico_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_Intr___ico_sequent__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_WB___ico_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
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
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top____PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2__0))) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top____PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2__0))) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__WB____PVT__wb_IntrPC_reg__DOT__rst_r2__0))) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__WB__IntrUnit____PVT__mcaseReg__DOT__rst_r2__0))) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr___TOP__top____PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2__0 
        = vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2;
    vlSelf->__Vtrigprevexpr___TOP__top____PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2__0 
        = vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2;
    vlSelf->__Vtrigprevexpr___TOP__top__WB____PVT__wb_IntrPC_reg__DOT__rst_r2__0 
        = vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r2;
    vlSelf->__Vtrigprevexpr___TOP__top__WB__IntrUnit____PVT__mcaseReg__DOT__rst_r2__0 
        = vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r2;
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
    vlSelf->valid = vlSymsp->TOP__top.__PVT__lsu_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->Inst = vlSymsp->TOP__top.__PVT__wb_inst;
    vlSelf->pc = vlSymsp->TOP__top.__PVT__wb_pc;
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);
void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__1(Vtop_WB* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__2(Vtop_WB* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1(Vtop_Intr* vlSelf);
void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__2(Vtop_Intr* vlSelf);
void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__3(Vtop_WB* vlSelf);
void Vtop_WB___nba_comb__TOP__top__WB__0(Vtop_WB* vlSelf);
void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_top___nba_sequent__TOP__top__4(Vtop_top* vlSelf);
void Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__3(Vtop_Intr* vlSelf);
void Vtop_Intr___nba_comb__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
void Vtop_WB___nba_comb__TOP__top__WB__1(Vtop_WB* vlSelf);
void Vtop_top___nba_sequent__TOP__top__5(Vtop_top* vlSelf);
void Vtop_WB___nba_sequent__TOP__top__WB__4(Vtop_WB* vlSelf);
void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf);
void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf);
void Vtop_WB___nba_comb__TOP__top__WB__2(Vtop_WB* vlSelf);
void Vtop_top___nba_sequent__TOP__top__6(Vtop_top* vlSelf);
void Vtop_WB___nba_comb__TOP__top__WB__3(Vtop_WB* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_WB___nba_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__1((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_WB___nba_sequent__TOP__top__WB__1((&vlSymsp->TOP__top__WB));
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_WB___nba_sequent__TOP__top__WB__2((&vlSymsp->TOP__top__WB));
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__1((&vlSymsp->TOP__top__WB__IntrUnit));
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__2((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__2((&vlSymsp->TOP__top__WB__IntrUnit));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__3((&vlSymsp->TOP__top));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_WB___nba_sequent__TOP__top__WB__3((&vlSymsp->TOP__top__WB));
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_WB___nba_comb__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop_top___nba_comb__TOP__top__0((&vlSymsp->TOP__top));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__4((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_Intr___nba_sequent__TOP__top__WB__IntrUnit__3((&vlSymsp->TOP__top__WB__IntrUnit));
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_Intr___nba_comb__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vtop_WB___nba_comb__TOP__top__WB__1((&vlSymsp->TOP__top__WB));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__5((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vtop_WB___nba_sequent__TOP__top__WB__4((&vlSymsp->TOP__top__WB));
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_comb__TOP__top__1((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_comb__TOP__top__2((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vtop_WB___nba_comb__TOP__top__WB__2((&vlSymsp->TOP__top__WB));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_sequent__TOP__top__6((&vlSymsp->TOP__top));
    }
    if ((0x2eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_WB___nba_comb__TOP__top__WB__3((&vlSymsp->TOP__top__WB));
    }
}
