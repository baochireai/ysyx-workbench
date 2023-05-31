// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_Intr.h"
#include "Vtop__Syms.h"

void Vtop_Intr___ctor_var_reset(Vtop_Intr* vlSelf);

Vtop_Intr::Vtop_Intr(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_Intr___ctor_var_reset(this);
}

void Vtop_Intr::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_Intr::~Vtop_Intr() {
}
