// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop_Intr;


//----------

VL_MODULE(Vtop_top) {
  public:
    // CELLS
    Vtop_Intr* IntrUnit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(Inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ __PVT__ALUct;
        CData/*2:0*/ __PVT__Extop;
        CData/*0:0*/ __PVT__RegWr;
        CData/*1:0*/ __PVT__ALUBsr;
        CData/*2:0*/ __PVT__Branch;
        CData/*0:0*/ __PVT__Less;
        CData/*2:0*/ __PVT__MemOP;
        CData/*1:0*/ __PVT__RegSrc;
        CData/*0:0*/ __PVT__MemWr;
        CData/*0:0*/ __PVT__IntrEn;
        CData/*0:0*/ __PVT__clint_mtip;
        CData/*0:0*/ __PVT__clint_we;
        CData/*0:0*/ __PVT__clint_re;
        CData/*0:0*/ __PVT__isTuncate;
        CData/*0:0*/ __PVT__isSext;
        CData/*2:0*/ __PVT__ContrGen__DOT__deExtop__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__deExtop__DOT__hit;
        CData/*0:0*/ __PVT__ContrGen__DOT__isIntr__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__isIntr__DOT__hit;
        CData/*0:0*/ __PVT__ContrGen__DOT__isRegWr__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__isRegWr__DOT__hit;
        CData/*1:0*/ __PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__RegSrcMux__DOT__hit;
        CData/*1:0*/ __PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out;
        CData/*0:0*/ __PVT__GenNextPC__DOT__dePCsrc__DOT__hit;
        CData/*0:0*/ __PVT__ImmGen__DOT__isRegWr__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__Sub_Add;
        CData/*0:0*/ __PVT__ALU__DOT__deALUBsr__DOT__hit;
        CData/*5:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__shamt;
        CData/*0:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__diver__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__remer__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__deExtop__DOT__hit;
        CData/*0:0*/ __PVT__DataMem__DOT__clint_en;
        CData/*7:0*/ __PVT__DataMem__DOT__wmask;
        CData/*0:0*/ __PVT__DataMem__DOT__RdEn;
        CData/*7:0*/ __PVT__DataMem__DOT__deMemOP__DOT__lut_out;
        CData/*0:0*/ __PVT__DataMem__DOT__deMemOP__DOT__hit;
        CData/*0:0*/ __PVT__DataMem__DOT__sext__DOT__hit;
        CData/*0:0*/ __PVT__RegWsrcMux__DOT__hit;
        SData/*15:0*/ __PVT__DataMem__DOT__extmask;
        VlWide<4>/*127:0*/ __PVT__DataMem__DOT__data;
        QData/*63:0*/ __PVT__rdata;
        QData/*63:0*/ __PVT__R_rs1;
        QData/*63:0*/ __PVT__R_rs2;
        QData/*63:0*/ __PVT__Imm;
        QData/*63:0*/ __PVT__ALUres;
        QData/*63:0*/ __PVT__waddr;
        QData/*63:0*/ __PVT__MemOut;
        QData/*63:0*/ __PVT__RegWdata;
        QData/*63:0*/ __PVT__GenNextPC__DOT__Bsrc;
        QData/*63:0*/ __PVT__ImmGen__DOT__isRegWr__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__ALUA;
        QData/*63:0*/ __PVT__ALU__DOT__ALUB;
        QData/*63:0*/ __PVT__ALU__DOT__adder;
        QData/*63:0*/ __PVT__ALU__DOT__shift;
        QData/*63:0*/ __PVT__ALU__DOT__MUL;
        QData/*63:0*/ __PVT__ALU__DOT__DIV;
        QData/*63:0*/ __PVT__ALU__DOT__REM;
        QData/*63:0*/ __PVT__ALU__DOT__ALUout;
        QData/*63:0*/ __PVT__ALU__DOT__deALUBsr__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__Adder__DOT__t_no_Cin;
        QData/*63:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__diver__DOT__lut_out;
    };
    struct {
        QData/*63:0*/ __PVT__ALU__DOT__remer__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__deExtop__DOT__lut_out;
        QData/*63:0*/ __PVT__DataMem__DOT__sext__DOT__lut_out;
        QData/*63:0*/ __PVT__RegWsrcMux__DOT__lut_out;
        QData/*63:0*/ __PVT__clintU__DOT__mtime;
        QData/*63:0*/ __PVT__clintU__DOT__mtimecmp;
        VlUnpacked<SData/*9:0*/, 12> __PVT__ContrGen__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 12> __PVT__ContrGen__DOT__deExtop__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 12> __PVT__ContrGen__DOT__deExtop__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 1> __PVT__ContrGen__DOT__isIntr__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> __PVT__ContrGen__DOT__isIntr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 1> __PVT__ContrGen__DOT__isIntr__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 4> __PVT__ContrGen__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> __PVT__ContrGen__DOT__isRegWr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> __PVT__ContrGen__DOT__isRegWr__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 2> __PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> __PVT__ContrGen__DOT__RegSrcMux__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ContrGen__DOT__RegSrcMux__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 7> __PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> __PVT__GenNextPC__DOT__dePCsrc__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> __PVT__GenNextPC__DOT__dePCsrc__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> __PVT__RegisterFile__DOT__rf;
        VlUnpacked<VlWide<3>/*66:0*/, 5> __PVT__ImmGen__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> __PVT__ImmGen__DOT__isRegWr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> __PVT__ImmGen__DOT__isRegWr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> __PVT__ALU__DOT__deALUBsr__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> __PVT__ALU__DOT__deALUBsr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> __PVT__ALU__DOT__deALUBsr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__ALU__DOT__diver__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__ALU__DOT__diver__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__ALU__DOT__diver__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__ALU__DOT__remer__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__ALU__DOT__remer__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__ALU__DOT__remer__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 16> __PVT__ALU__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ALU__DOT__deExtop__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 16> __PVT__ALU__DOT__deExtop__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 4> __PVT__DataMem__DOT__deMemOP__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__DataMem__DOT__deMemOP__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> __PVT__DataMem__DOT__deMemOP__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__DataMem__DOT__sext__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__DataMem__DOT__sext__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__DataMem__DOT__sext__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> __PVT__RegWsrcMux__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> __PVT__RegWsrcMux__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> __PVT__RegWsrcMux__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*1:0*/ GenNextPC__DOT____Vcellout__dePCsrc__out;
    CData/*1:0*/ ALU__DOT____Vcellinp__diver__key;
    CData/*1:0*/ ALU__DOT____Vcellinp__remer__key;
    CData/*3:0*/ ALU__DOT____Vcellinp__deExtop__key;
    CData/*1:0*/ ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key;
    VlWide<7>/*197:0*/ __Vcellinp__RegWsrcMux__lut;
    VlWide<11>/*334:0*/ ImmGen__DOT____Vcellinp__isRegWr__lut;
    VlWide<7>/*197:0*/ ALU__DOT____Vcellinp__deALUBsr__lut;
    VlWide<9>/*263:0*/ ALU__DOT____Vcellinp__diver__lut;
    VlWide<9>/*263:0*/ ALU__DOT____Vcellinp__remer__lut;
    VlWide<34>/*1087:0*/ ALU__DOT____Vcellinp__deExtop__lut;
    VlWide<9>/*263:0*/ ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut;
    VlWide<9>/*263:0*/ DataMem__DOT____Vcellinp__sext__lut;
    QData/*34:0*/ GenNextPC__DOT____Vcellinp__dePCsrc__lut;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__4__rdata;
    QData/*63:0*/ __Vtask_pmem_read__5__rdata;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_top);  ///< Copying not allowed
  public:
    Vtop_top(const char* name);
    ~Vtop_top();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
