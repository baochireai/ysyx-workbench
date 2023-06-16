// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime = vlSelf->__Vdly__LSU__DOT__clintU__DOT__mtime;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
    // Body
    if (vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2) {
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp = 0xffffffffffffffffULL;
    } else if (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
                & (0x2004000ULL == vlSelf->__PVT__ALUres))) {
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp 
            = vlSelf->__PVT__mem_Rrs2;
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__memout = ((IData)(vlSelf->__PVT__LSU__DOT__isclint)
                              ? ((- (QData)((IData)(
                                                    ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                                     & ((~ (IData)(vlSelf->__PVT__mem_MemWr)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->__PVT__mem_MemOP))))))) 
                                 & ((0x200bff8ULL == vlSelf->__PVT__ALUres)
                                     ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime
                                     : ((0x2004000ULL 
                                         == vlSelf->__PVT__ALUres)
                                         ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                         : 0ULL))) : vlSelf->__PVT__LSU__DOT__dataMem_out);
}
