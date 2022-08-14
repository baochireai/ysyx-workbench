// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegisterFile.h for the primary calling header

#ifndef VERILATED_VREGISTERFILE___024ROOT_H_
#define VERILATED_VREGISTERFILE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VRegisterFile__Syms;
class VRegisterFile_VerilatedVcd;


//----------

VL_MODULE(VRegisterFile___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(wen,0,0);
    VL_IN(rs1,31,0);
    VL_IN(rs2,31,0);
    VL_IN(waddr,31,0);
    VL_OUT64(R_rs1,63,0);
    VL_OUT64(R_rs2,63,0);
    VL_IN64(wdata,63,0);

    // LOCAL SIGNALS
    VlUnpacked<QData/*63:0*/, 32> RegisterFile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRegisterFile__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRegisterFile___024root);  ///< Copying not allowed
  public:
    VRegisterFile___024root(const char* name);
    ~VRegisterFile___024root();

    // INTERNAL METHODS
    void __Vconfigure(VRegisterFile__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
