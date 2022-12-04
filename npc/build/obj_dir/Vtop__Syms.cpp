// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_Intr.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep,Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
    , TOP__top(Verilated::catName(namep, "top"))
    , TOP__top__IntrUnit(Verilated::catName(namep, "top.IntrUnit"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.top = &TOP__top;
    TOP__top.IntrUnit = &TOP__top__IntrUnit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
<<<<<<< HEAD
<<<<<<< HEAD
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
=======
=======
>>>>>>> 2627265... NJU-ProjectN/navy-apps ics2021 initialized
    TOP__top.__Vconfigure(this, true);
    TOP__top__IntrUnit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_top__IntrUnit.configure(this, name(), "top.IntrUnit", "IntrUnit", -12, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_top);
    __Vhier.add(&__Vscope_top, &__Vscope_top__IntrUnit);

    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_top__IntrUnit.varInsert(__Vfinal,"mcase", &(TOP__top__IntrUnit.mcase), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
<<<<<<< HEAD
>>>>>>> 2627265... NJU-ProjectN/navy-apps ics2021 initialized
=======
>>>>>>> 2627265... NJU-ProjectN/navy-apps ics2021 initialized
    }
}
