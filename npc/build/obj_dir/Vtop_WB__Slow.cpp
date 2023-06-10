// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_WB.h"
#include "Vtop__Syms.h"

void Vtop_WB___ctor_var_reset(Vtop_WB* vlSelf);

Vtop_WB::Vtop_WB(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_WB___ctor_var_reset(this);
}

void Vtop_WB::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_WB::~Vtop_WB() {
}
