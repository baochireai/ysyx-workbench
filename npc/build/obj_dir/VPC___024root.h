// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC.h for the primary calling header

#ifndef VERILATED_VPC___024ROOT_H_
#define VERILATED_VPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VPC__Syms;
class VPC_VerilatedVcd;


//----------

VL_MODULE(VPC___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT64(pc,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ PC__DOT____Vcellinp__NEXT_PC__din;

    // INTERNAL VARIABLES
    VPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPC___024root);  ///< Copying not allowed
  public:
    VPC___024root(const char* name);
    ~VPC___024root();

    // INTERNAL METHODS
    void __Vconfigure(VPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
