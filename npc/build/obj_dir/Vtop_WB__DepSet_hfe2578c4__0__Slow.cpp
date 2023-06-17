// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"
#include "Vtop__Syms.h"

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vtop_WB___eval_initial__TOP__top__WB(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___eval_initial__TOP__top__WB\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[0U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[2U] = 0U;
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->__PVT__RegisterFile__DOT__rf);
}

VL_ATTR_COLD void Vtop_WB___stl_sequent__TOP__top__WB__0(Vtop_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_WB___stl_sequent__TOP__top__WB__0\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = (IData)(vlSymsp->TOP__top.__PVT__wb_ALUres);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = (IData)((vlSymsp->TOP__top.__PVT__wb_ALUres 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = vlSymsp->TOP__top.__PVT__wb_ALUres;
    vlSelf->__PVT__RegisterFile__DOT__isw = ((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                    >> 7U))));
    vlSelf->__PVT__wb_ready = (1U & ((~ (IData)(vlSelf->__PVT__wb_valid)) 
                                     | ((IData)(vlSymsp->TOP__top.__PVT__ifu_ready) 
                                        & (IData)(vlSelf->__PVT__wb_valid))));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = (IData)(vlSymsp->TOP__top.__PVT__memout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = (IData)((vlSymsp->TOP__top.__PVT__memout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = vlSymsp->TOP__top.__PVT__memout;
    vlSelf->__PVT__wb_valid_next = (((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                                     & (IData)(vlSelf->__PVT__wb_valid)) 
                                    | ((IData)(vlSelf->__PVT__wb_ready) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)));
    vlSelf->__PVT__wb_en = (((IData)(vlSymsp->TOP__top.__PVT__lsu_valid) 
                             & (IData)(vlSelf->__PVT__wb_ready)) 
                            & (IData)(vlSelf->__PVT__RegisterFile__DOT__isw));
}
