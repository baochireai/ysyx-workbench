// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_WB.h"
#include "Vtop_Intr.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_top);
    __Vhier.remove(&__Vscope_top, &__Vscope_top__WB);
    __Vhier.remove(&__Vscope_top__WB, &__Vscope_top__WB__IntrUnit);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__top{this, Verilated::catName(namep, "top")}
    , TOP__top__WB{this, Verilated::catName(namep, "top.WB")}
    , TOP__top__WB__IntrUnit{this, Verilated::catName(namep, "top.WB.IntrUnit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.top = &TOP__top;
    TOP__top.WB = &TOP__top__WB;
    TOP__top__WB.IntrUnit = &TOP__top__WB__IntrUnit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__WB.__Vconfigure(true);
    TOP__top__WB__IntrUnit.__Vconfigure(true);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__WB.configure(this, name(), "top.WB", "WB", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__WB__IntrUnit.configure(this, name(), "top.WB.IntrUnit", "IntrUnit", -12, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_top);
    __Vhier.add(&__Vscope_top, &__Vscope_top__WB);
    __Vhier.add(&__Vscope_top__WB, &__Vscope_top__WB__IntrUnit);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top__WB__IntrUnit.varInsert(__Vfinal,"mcase", &(TOP__top__WB__IntrUnit.mcase), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
    }
}
