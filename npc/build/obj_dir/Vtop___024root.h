// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(Inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__ALUct;
    CData/*2:0*/ top__DOT__Extop;
    CData/*0:0*/ top__DOT__RegWr;
    CData/*0:0*/ top__DOT__ALUAsr;
    CData/*1:0*/ top__DOT__ALUBsr;
    CData/*2:0*/ top__DOT__Branch;
    QData/*63:0*/ top__DOT__Imm;
    QData/*63:0*/ top__DOT__ALUres;
    QData/*63:0*/ top__DOT__GenNextPC__DOT__Bsrc;
    VlUnpacked<CData/*4:0*/, 3> top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 3> top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 3> top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__RegisterFile__DOT__rf;
    VlUnpacked<SData/*9:0*/, 8> top__DOT__ContrGen__DOT__deExtop__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 8> top__DOT__ContrGen__DOT__deExtop__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 8> top__DOT__ContrGen__DOT__deExtop__DOT__data_list;
    VlUnpacked<CData/*3:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__data_list;
    VlUnpacked<VlWide<3>/*65:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__ALU__DOT__deExtop__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 2> top__DOT__ALU__DOT__deExtop__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__ALU__DOT__deExtop__DOT__data_list;

    // LOCAL VARIABLES
    CData/*1:0*/ top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out;
    CData/*0:0*/ __Vclklast__TOP__clk;

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
