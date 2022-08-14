// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VContrGen.h for the primary calling header

#ifndef VERILATED_VCONTRGEN___024ROOT_H_
#define VERILATED_VCONTRGEN___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VContrGen__Syms;
class VContrGen_VerilatedVcd;


//----------

VL_MODULE(VContrGen___024root) {
  public:

    // PORTS
    VL_IN8(opcode,6,0);
    VL_IN8(func3,2,0);
    VL_IN8(func7,6,0);
    VL_OUT8(ALUct,3,0);
    VL_OUT8(Extop,2,0);
    VL_OUT8(RegWr,0,0);
    VL_OUT8(ALUAsrc,0,0);
    VL_OUT8(ALUBsrc,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ ContrGen__DOT__deExtop__DOT__lut_out;
    CData/*0:0*/ ContrGen__DOT__deExtop__DOT__hit;
    CData/*0:0*/ ContrGen__DOT__isRegWr__DOT__lut_out;
    CData/*0:0*/ ContrGen__DOT__isRegWr__DOT__hit;
    VlUnpacked<SData/*9:0*/, 3> ContrGen__DOT__deExtop__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 3> ContrGen__DOT__deExtop__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 3> ContrGen__DOT__deExtop__DOT__data_list;
    VlUnpacked<CData/*3:0*/, 2> ContrGen__DOT__isRegWr__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 2> ContrGen__DOT__isRegWr__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> ContrGen__DOT__isRegWr__DOT__data_list;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VContrGen__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VContrGen___024root);  ///< Copying not allowed
  public:
    VContrGen___024root(const char* name);
    ~VContrGen___024root();

    // INTERNAL METHODS
    void __Vconfigure(VContrGen__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
