// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_INTR_H_
#define VERILATED_VTOP_INTR_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_Intr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IntrEn,0,0);
    VL_IN8(__PVT__clint_mtip,0,0);
    VL_IN8(__PVT__zimm,4,0);
    VL_IN8(__PVT__func3,2,0);
    VL_OUT8(__PVT__isIntrPC,0,0);
    CData/*0:0*/ __PVT__isCSRw;
    CData/*0:0*/ __PVT__timer_irq;
    CData/*0:0*/ __PVT__irq_raise;
    CData/*0:0*/ __PVT__isecall;
    CData/*1:0*/ __Vcellinp__CSRwEn__key;
    CData/*0:0*/ __PVT__ismret;
    CData/*0:0*/ __PVT__ismepc;
    CData/*0:0*/ __PVT__ismcase;
    CData/*0:0*/ __PVT__ismstatus;
    CData/*0:0*/ __PVT__CSRwEn__DOT__hit;
    CData/*0:0*/ __PVT__scrDataSrc__DOT__hit;
    VL_IN16(__PVT__csr,11,0);
    VL_IN64(__PVT__pc,63,0);
    VL_IN64(__PVT__R_rs1,63,0);
    VL_OUT64(__PVT__IntrPC,63,0);
    VL_OUT64(__PVT__dout,63,0);
    QData/*63:0*/ __PVT__mepc;
    QData/*63:0*/ __PVT__mtvec;
    QData/*63:0*/ __PVT__mstatus;
    QData/*63:0*/ __PVT__mie;
    QData/*63:0*/ mcase;
    QData/*63:0*/ __PVT__eNo;
    QData/*63:0*/ __PVT__csrWData;
    QData/*63:0*/ __PVT__mstatusIn;
    QData/*63:0*/ __PVT__CSRwEn__DOT__lut_out;
    QData/*63:0*/ __PVT__scrDataSrc__DOT__lut_out;
    VlUnpacked<VlWide<3>/*65:0*/, 2> __PVT__CSRwEn__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> __PVT__CSRwEn__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> __PVT__CSRwEn__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 6> __PVT__scrDataSrc__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 6> __PVT__scrDataSrc__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 6> __PVT__scrDataSrc__DOT__data_list;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_Intr(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_Intr();
    VL_UNCOPYABLE(Vtop_Intr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
