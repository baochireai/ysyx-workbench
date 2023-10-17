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
    VL_OUT8(__PVT__isRegWrite,0,0);
    VL_OUT8(__PVT__wb_raw_rd,4,0);
    VL_OUT8(__PVT__wb_raw_data_valid,0,0);
    VL_IN8(__PVT__i_isecall,0,0);
    VL_IN8(__PVT__i_ismret,0,0);
    VL_IN8(__PVT__i_iscsr,0,0);
    VL_IN8(__PVT__clint_mtip,0,0);
    VL_IN8(__PVT__RegSrc,1,0);
    VL_IN8(__PVT__RegWr,0,0);
    VL_OUT8(__PVT__isIntrPC,0,0);
    VL_OUT8(__PVT__mstatus_MIE,0,0);
    VL_OUT8(__PVT__o_RegWr_en,0,0);
    VL_OUT8(__PVT__o_RegWaddr,4,0);
    VL_IN8(__PVT__wb_valid,0,0);
    VL_OUT8(__PVT__wb_ready,0,0);
    CData/*0:0*/ __Vcellinp__IntrUnit__i_iscsr;
    CData/*0:0*/ __Vcellinp__IntrUnit__i_ismret;
    CData/*0:0*/ __Vcellinp__IntrUnit__i_isecall;
    VL_IN(__PVT__wb_inst,31,0);
    VL_OUT64(__PVT__wb_raw_Wdata,63,0);
    VL_IN64(__PVT__R_rs1_i,63,0);
    VL_IN64(__PVT__ALUres,63,0);
    VL_IN64(__PVT__MemOut,63,0);
    VL_IN64(__PVT__wb_pc,63,0);
    VL_OUT64(__PVT__IntrPC,63,0);
    VL_OUT64(__PVT__o_RegWdata,63,0);
    VlUnpacked<CData/*1:0*/, 3> __PVT__RegWsrcMux__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 3> __PVT__RegWsrcMux__DOT__data_list;

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
