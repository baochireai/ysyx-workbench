// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiexp_isEbreak_TOP____024unit(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ inst, CData/*0:0*/ &IsEbreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiexp_isEbreak_TOP____024unit\n"); );
    // Variables
    // Body
    IsEbreak = (0x100073U == inst);
}
