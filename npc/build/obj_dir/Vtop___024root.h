// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(Inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__ALUct;
    CData/*2:0*/ top__DOT__Extop;
    CData/*0:0*/ top__DOT__RegWr;
    CData/*2:0*/ top__DOT__ContrGen__DOT__deExtop__DOT__lut_out;
    CData/*0:0*/ top__DOT__ContrGen__DOT__deExtop__DOT__hit;
    CData/*0:0*/ top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out;
    CData/*0:0*/ top__DOT__ContrGen__DOT__isRegWr__DOT__hit;
    CData/*0:0*/ top__DOT__ImmGen__DOT__isRegWr__DOT__hit;
    CData/*0:0*/ top__DOT__ALU__DOT__deExtop__DOT__hit;
    QData/*63:0*/ top__DOT__Imm;
    QData/*63:0*/ top__DOT__ALUres;
    QData/*63:0*/ top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out;
    QData/*63:0*/ top__DOT__ALU__DOT__deExtop__DOT__lut_out;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__RegisterFile__DOT__rf;
    VlUnpacked<SData/*9:0*/, 3> top__DOT__ContrGen__DOT__deExtop__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 3> top__DOT__ContrGen__DOT__deExtop__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 3> top__DOT__ContrGen__DOT__deExtop__DOT__data_list;
    VlUnpacked<CData/*3:0*/, 2> top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 2> top__DOT__ContrGen__DOT__isRegWr__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ContrGen__DOT__isRegWr__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 1> top__DOT__ALU__DOT__deExtop__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 1> top__DOT__ALU__DOT__deExtop__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 1> top__DOT__ALU__DOT__deExtop__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<11>/*334:0*/ top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut;
    QData/*63:0*/ top__DOT__PC__DOT____Vcellinp__NEXT_PC__din;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
