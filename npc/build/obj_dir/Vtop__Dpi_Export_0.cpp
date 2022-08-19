// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::isEbreak(const svLogicVecVal* inst, svLogic* IsEbreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::isEbreak\n"); );
    // Variables
    CData/*0:0*/ IsEbreak__Vcvt;
    IData/*31:0*/ inst__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("isEbreak");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_isEbreak_t __Vcb = (Vtop__Vcb_isEbreak_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    inst__Vcvt = VL_SET_I_SVLV(inst);
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), inst__Vcvt, IsEbreak__Vcvt);
    for (size_t IsEbreak__Vidx = 0; IsEbreak__Vidx < 1; ++IsEbreak__Vidx) *IsEbreak = IsEbreak__Vcvt;
}
