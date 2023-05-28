// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__RegisterFile__DOT__rf__v0 = 0;
    QData/*63:0*/ __Vdlyvval__RegisterFile__DOT__rf__v0;
    __Vdlyvval__RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RegisterFile__DOT__rf__v0;
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0U;
    vlSelf->__PVT__clintU__DOT__mtime = (((IData)(vlSelf->__PVT__clint_we) 
                                          & (0x200bff8ULL 
                                             == vlSelf->__PVT__ALUres))
                                          ? vlSelf->__PVT__R_rs2
                                          : (1ULL + vlSelf->__PVT__clintU__DOT__mtime));
    if (((IData)(vlSelf->__PVT__RegWr) & (0U != (0x1fU 
                                                 & (vlSelf->Inst 
                                                    >> 7U))))) {
        __Vdlyvval__RegisterFile__DOT__rf__v0 = vlSelf->__PVT__RegWdata;
        __Vdlyvset__RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__RegisterFile__DOT__rf__v0 = (0x1fU 
                                                  & (vlSelf->Inst 
                                                     >> 7U));
    }
    if (((IData)(vlSelf->__PVT__clint_we) & (0x2004000ULL 
                                             == vlSelf->__PVT__ALUres))) {
        vlSelf->__PVT__clintU__DOT__mtimecmp = vlSelf->__PVT__R_rs2;
    }
    if (__Vdlyvset__RegisterFile__DOT__rf__v0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[__Vdlyvdim0__RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__RegisterFile__DOT__rf__v0;
    }
}
