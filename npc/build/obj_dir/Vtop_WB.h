// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_WB_H_
#define VERILATED_VTOP_WB_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_Intr;


class Vtop_WB final : public VerilatedModule {
  public:
    // CELLS
    Vtop_Intr* IntrUnit;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__IntrEn,0,0);
    VL_IN8(__PVT__clint_mtip,0,0);
    VL_IN8(__PVT__Wdata_src,1,0);
    VL_IN8(__PVT__RegWr,0,0);
    VL_OUT8(__PVT__wb_en,0,0);
    VL_OUT8(__PVT__isIntrPC,0,0);
    VL_IN8(__PVT__rs1,4,0);
    VL_IN8(__PVT__rs2,4,0);
    VL_IN8(__PVT__lsu_valid,0,0);
    VL_OUT8(__PVT__wb_ready,0,0);
    VL_OUT8(__PVT__wb_valid,0,0);
    VL_IN8(__PVT__ifu_ready,0,0);
    CData/*0:0*/ __PVT__wb_valid_next;
    CData/*0:0*/ __PVT__RegWsrcMux__DOT__hit;
    CData/*0:0*/ __PVT__RegisterFile__DOT__isw;
    VL_IN(__PVT__wb_inst,31,0);
    VL_IN64(__PVT__wb_pc,63,0);
    VL_IN64(__PVT__ALUres,63,0);
    VL_IN64(__PVT__MemOut,63,0);
    VL_IN64(__PVT__R_rs1_i,63,0);
    VL_OUT64(__PVT__IntrPC,63,0);
    VL_OUT64(__PVT__R_rs1,63,0);
    VL_OUT64(__PVT__R_rs2,63,0);
    QData/*63:0*/ __PVT__RegWdata;
    QData/*63:0*/ __PVT__RegWsrcMux__DOT__lut_out;
    VlUnpacked<VlWide<3>/*65:0*/, 3> __PVT__RegWsrcMux__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 3> __PVT__RegWsrcMux__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> __PVT__RegWsrcMux__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 32> __PVT__RegisterFile__DOT__rf;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_WB(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_WB();
    VL_UNCOPYABLE(Vtop_WB);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
