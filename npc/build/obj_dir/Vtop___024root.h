// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(Inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ top__DOT__wmask;
        CData/*4:0*/ top__DOT__ALUct;
        CData/*2:0*/ top__DOT__Extop;
        CData/*0:0*/ top__DOT__RegWr;
        CData/*0:0*/ top__DOT__ALUAsr;
        CData/*1:0*/ top__DOT__ALUBsr;
        CData/*2:0*/ top__DOT__Branch;
        CData/*0:0*/ top__DOT__Less;
        CData/*2:0*/ top__DOT__MemOP;
        CData/*1:0*/ top__DOT__RegSrc;
        CData/*0:0*/ top__DOT__MemWr;
        CData/*0:0*/ top__DOT__IntrEn;
        CData/*0:0*/ top__DOT__isTuncate;
        CData/*0:0*/ top__DOT__isSext;
        CData/*1:0*/ top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out;
        CData/*0:0*/ top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit;
        CData/*2:0*/ top__DOT__ContrGen__DOT__deExtop__DOT__lut_out;
        CData/*0:0*/ top__DOT__ContrGen__DOT__deExtop__DOT__hit;
        CData/*0:0*/ top__DOT__ContrGen__DOT__isIntr__DOT__lut_out;
        CData/*0:0*/ top__DOT__ContrGen__DOT__isIntr__DOT__hit;
        CData/*0:0*/ top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out;
        CData/*0:0*/ top__DOT__ContrGen__DOT__isRegWr__DOT__hit;
        CData/*0:0*/ top__DOT__ImmGen__DOT__isRegWr__DOT__hit;
        CData/*0:0*/ top__DOT__ALU__DOT__Sub_Add;
        CData/*0:0*/ top__DOT__ALU__DOT__deALUBsr__DOT__hit;
        CData/*5:0*/ top__DOT__ALU__DOT__BarrelShifter__DOT__shamt;
        CData/*0:0*/ top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit;
        CData/*0:0*/ top__DOT__ALU__DOT__diver__DOT__hit;
        CData/*0:0*/ top__DOT__ALU__DOT__remer__DOT__hit;
        CData/*0:0*/ top__DOT__ALU__DOT__deExtop__DOT__hit;
        CData/*7:0*/ top__DOT__DataMem__DOT__wmask;
        CData/*7:0*/ top__DOT__DataMem__DOT__deMemOP__DOT__lut_out;
        CData/*0:0*/ top__DOT__DataMem__DOT__deMemOP__DOT__hit;
        CData/*0:0*/ top__DOT__DataMem__DOT__sext__DOT__hit;
        CData/*0:0*/ top__DOT__RegWsrcMux__DOT__hit;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__isCSRw;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__isecall;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__ismret;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__ismepc;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__ismcase;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit;
        CData/*0:0*/ top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit;
        SData/*15:0*/ top__DOT__DataMem__DOT__extmask;
        VlWide<4>/*127:0*/ top__DOT__DataMem__DOT__data;
        QData/*63:0*/ top__DOT__rdata;
        QData/*63:0*/ top__DOT__waddr;
        QData/*63:0*/ top__DOT__wdata;
        QData/*63:0*/ top__DOT__R_rs1;
        QData/*63:0*/ top__DOT__R_rs2;
        QData/*63:0*/ top__DOT__Imm;
        QData/*63:0*/ top__DOT__ALUres;
        QData/*63:0*/ top__DOT__MemOut;
        QData/*63:0*/ top__DOT__RegWdata;
        QData/*63:0*/ top__DOT__IntrOut;
        QData/*63:0*/ top__DOT__PC__DOT__dpc;
        QData/*63:0*/ top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out;
        QData/*63:0*/ top__DOT__ALU__DOT__ALUA;
        QData/*63:0*/ top__DOT__ALU__DOT__ALUB;
        QData/*63:0*/ top__DOT__ALU__DOT__adder;
        QData/*63:0*/ top__DOT__ALU__DOT__shift;
        QData/*63:0*/ top__DOT__ALU__DOT__DIV;
    };
    struct {
        QData/*63:0*/ top__DOT__ALU__DOT__REM;
        QData/*63:0*/ top__DOT__ALU__DOT__ALUout;
        QData/*63:0*/ top__DOT__ALU__DOT__deALUBsr__DOT__lut_out;
        QData/*63:0*/ top__DOT__ALU__DOT__Adder__DOT__t_no_Cin;
        QData/*63:0*/ top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out;
        QData/*63:0*/ top__DOT__ALU__DOT__diver__DOT__lut_out;
        QData/*63:0*/ top__DOT__ALU__DOT__remer__DOT__lut_out;
        QData/*63:0*/ top__DOT__ALU__DOT__deExtop__DOT__lut_out;
        QData/*63:0*/ top__DOT__DataMem__DOT__sext__DOT__lut_out;
        QData/*63:0*/ top__DOT__RegWsrcMux__DOT__lut_out;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mepc;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mcase;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mtvec;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mstatus;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mcaseData;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mepcData;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__csrData;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out;
        QData/*63:0*/ top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out;
        VlUnpacked<CData/*4:0*/, 7> top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__RegisterFile__DOT__rf;
        VlUnpacked<SData/*9:0*/, 12> top__DOT__ContrGen__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 12> top__DOT__ContrGen__DOT__deExtop__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 12> top__DOT__ContrGen__DOT__deExtop__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 1> top__DOT__ContrGen__DOT__isIntr__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> top__DOT__ContrGen__DOT__isIntr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 1> top__DOT__ContrGen__DOT__isIntr__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__ContrGen__DOT__isRegWr__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__ImmGen__DOT__isRegWr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ALU__DOT__deALUBsr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> top__DOT__ALU__DOT__diver__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__ALU__DOT__diver__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ALU__DOT__diver__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> top__DOT__ALU__DOT__remer__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__ALU__DOT__remer__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ALU__DOT__remer__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 11> top__DOT__ALU__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 11> top__DOT__ALU__DOT__deExtop__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 11> top__DOT__ALU__DOT__deExtop__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 4> top__DOT__DataMem__DOT__deMemOP__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__DataMem__DOT__deMemOP__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__DataMem__DOT__deMemOP__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> top__DOT__DataMem__DOT__sext__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__DataMem__DOT__sext__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__DataMem__DOT__sext__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> top__DOT__RegWsrcMux__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__RegWsrcMux__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__RegWsrcMux__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 3> top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 2> top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*1:0*/ top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out;
    CData/*1:0*/ top__DOT__ALU__DOT____Vcellinp__diver__key;
    CData/*1:0*/ top__DOT__ALU__DOT____Vcellinp__remer__key;
    CData/*3:0*/ top__DOT__ALU__DOT____Vcellinp__deExtop__key;
    CData/*1:0*/ top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<7>/*197:0*/ top__DOT____Vcellinp__RegWsrcMux__lut;
    VlWide<11>/*334:0*/ top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut;
    VlWide<7>/*197:0*/ top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut;
    VlWide<9>/*263:0*/ top__DOT__ALU__DOT____Vcellinp__diver__lut;
    VlWide<9>/*263:0*/ top__DOT__ALU__DOT____Vcellinp__remer__lut;
    VlWide<24>/*747:0*/ top__DOT__ALU__DOT____Vcellinp__deExtop__lut;
    VlWide<9>/*263:0*/ top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut;
    VlWide<9>/*263:0*/ top__DOT__DataMem__DOT____Vcellinp__sext__lut;
    VlWide<7>/*200:0*/ top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut;
    VlWide<7>/*200:0*/ top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut;
    VlWide<5>/*133:0*/ top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut;
    QData/*34:0*/ top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__5__rdata;
    QData/*63:0*/ __Vtask_pmem_read__6__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
