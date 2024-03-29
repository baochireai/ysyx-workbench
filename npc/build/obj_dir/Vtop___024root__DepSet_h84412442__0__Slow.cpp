// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_WB___eval_initial__TOP__top__WB(Vtop_WB* vlSelf);
VL_ATTR_COLD void Vtop_Intr___eval_initial__TOP__top__WB__IntrUnit(Vtop_Intr* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop_top___eval_initial__TOP__top((&vlSymsp->TOP__top));
    Vtop_WB___eval_initial__TOP__top__WB((&vlSymsp->TOP__top__WB));
    Vtop_Intr___eval_initial__TOP__top__WB__IntrUnit((&vlSymsp->TOP__top__WB__IntrUnit));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__top.__PVT__wb_valid;
    vlSelf->pc = vlSymsp->TOP__top.__PVT__wb_pc;
    vlSelf->Inst = vlSymsp->TOP__top.__PVT__wb_inst;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_WB___stl_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);
VL_ATTR_COLD void Vtop_Intr___stl_sequent__TOP__top__WB__IntrUnit__0(Vtop_Intr* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_WB___ico_sequent__TOP__top__WB__0(Vtop_WB* vlSelf);
void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__3(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__4(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__5(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__6(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__7(Vtop_top* vlSelf);
void Vtop_top___ico_sequent__TOP__top__8(Vtop_top* vlSelf);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_WB___stl_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop_Intr___stl_sequent__TOP__top__WB__IntrUnit__0((&vlSymsp->TOP__top__WB__IntrUnit));
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_WB___ico_sequent__TOP__top__WB__0((&vlSymsp->TOP__top__WB));
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__4((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__5((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__6((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__7((&vlSymsp->TOP__top));
        Vtop_top___ico_sequent__TOP__top__8((&vlSymsp->TOP__top));
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}
