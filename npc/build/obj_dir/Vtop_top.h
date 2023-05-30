// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_Intr;


class Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_Intr* IntrUnit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ __PVT__Extop;
        CData/*0:0*/ __PVT__RegWr;
        CData/*1:0*/ __PVT__ALUBsr;
        CData/*2:0*/ __PVT__Branch;
        CData/*0:0*/ __PVT__Less;
        CData/*2:0*/ __PVT__MemOP;
        CData/*1:0*/ __PVT__RegSrc;
        CData/*0:0*/ __PVT__MemWr;
        CData/*0:0*/ __PVT__IntrEn;
        CData/*0:0*/ __PVT__clint_we;
        CData/*0:0*/ __PVT__clint_re;
        CData/*0:0*/ __PVT__ifu_arvalid;
        CData/*0:0*/ __PVT__ram_rvalid;
        CData/*1:0*/ __PVT__ram_rresp;
        CData/*0:0*/ __PVT__AWVALID;
        CData/*0:0*/ __PVT__AWREADY;
        CData/*0:0*/ __PVT__WVALID;
        CData/*0:0*/ __PVT__WREADY;
        CData/*7:0*/ __PVT__WSTRB;
        CData/*0:0*/ __PVT__BVALID;
        CData/*1:0*/ __PVT__BRESP;
        CData/*0:0*/ __PVT__BREADY;
        CData/*0:0*/ __PVT__is_jump;
        CData/*0:0*/ __PVT__isTuncate;
        CData/*0:0*/ __PVT__isSext;
        CData/*0:0*/ __PVT__IFU__DOT__pipeline_hold;
        CData/*0:0*/ __PVT__IFU__DOT__ifu_valid;
        CData/*0:0*/ __PVT__IFU__DOT__id_ready;
        CData/*0:0*/ __PVT__IFU__DOT__ifu_ready;
        CData/*0:0*/ __PVT__IFU__DOT__ex_valid;
        CData/*7:0*/ __PVT__ram_axi_lite_u__DOT__wstrb;
        CData/*0:0*/ __PVT__ram_axi_lite_u__DOT__wdata_done;
        CData/*0:0*/ __PVT__ram_axi_lite_u__DOT__raddr_done;
        CData/*0:0*/ ContrGen__DOT____VdfgTmp_h708a31d5__0;
        CData/*2:0*/ __PVT__ContrGen__DOT__deExtop__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__deExtop__DOT__hit;
        CData/*0:0*/ __PVT__ContrGen__DOT__isIntr__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__isIntr__DOT__hit;
        CData/*0:0*/ __PVT__ContrGen__DOT__isRegWr__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__isRegWr__DOT__hit;
        CData/*1:0*/ __PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out;
        CData/*0:0*/ __PVT__ContrGen__DOT__RegSrcMux__DOT__hit;
        CData/*1:0*/ GenNextPC__DOT____Vcellout__dePCsrc__out;
        CData/*0:0*/ __PVT__GenNextPC__DOT__jump_check__DOT__lut_out;
        CData/*0:0*/ __PVT__GenNextPC__DOT__jump_check__DOT__hit;
        CData/*1:0*/ __PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out;
        CData/*0:0*/ __PVT__GenNextPC__DOT__dePCsrc__DOT__hit;
        CData/*0:0*/ __PVT__ImmGen__DOT__isRegWr__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__US_S;
        CData/*0:0*/ __PVT__ALU__DOT__Sub_Add;
        CData/*0:0*/ __PVT__ALU__DOT__lessS;
        CData/*0:0*/ __PVT__ALU__DOT__lessUS;
        CData/*1:0*/ ALU__DOT____Vcellinp__diver__key;
        CData/*3:0*/ ALU__DOT____Vcellinp__deExtop__key;
        CData/*2:0*/ ALU__DOT____VdfgTmp_he7b65dc9__0;
        CData/*0:0*/ __PVT__ALU__DOT__deALUBsr__DOT__hit;
        CData/*5:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__shamt;
        CData/*1:0*/ ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key;
        CData/*0:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__diver__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__remer__DOT__hit;
        CData/*0:0*/ __PVT__ALU__DOT__deExtop__DOT__hit;
    };
    struct {
        CData/*0:0*/ __PVT__DataMem__DOT__clint_en;
        CData/*7:0*/ __PVT__DataMem__DOT__wmask;
        CData/*0:0*/ __PVT__DataMem__DOT__RdEn;
        CData/*7:0*/ __PVT__DataMem__DOT__deMemOP__DOT__lut_out;
        CData/*0:0*/ __PVT__DataMem__DOT__deMemOP__DOT__hit;
        CData/*0:0*/ __PVT__DataMem__DOT__sext__DOT__hit;
        CData/*0:0*/ __PVT__RegWsrcMux__DOT__hit;
        CData/*0:0*/ __VdfgTmp_hd4f657a4__0;
        CData/*4:0*/ __VdfgTmp_h1f2041f1__0;
        SData/*15:0*/ __PVT__DataMem__DOT__extmask;
        VL_OUT(Inst,31,0);
        IData/*31:0*/ __PVT__ifu_raddr;
        IData/*31:0*/ __PVT__AWADDR;
        IData/*31:0*/ __PVT__IFU__DOT__inst;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__waddr;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__raddr;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__i;
        VlWide<4>/*127:0*/ __PVT__DataMem__DOT__data;
        IData/*31:0*/ __VdfgTmp_h850e38ae__0;
        IData/*31:0*/ __VdfgTmp_h8588955e__0;
        IData/*31:0*/ __VdfgTmp_h8507bb64__0;
        IData/*31:0*/ __VdfgTmp_h858486fa__0;
        IData/*31:0*/ __Vdly__IFU__DOT__inst;
        VL_OUT64(pc,63,0);
        QData/*63:0*/ __PVT__R_rs1;
        QData/*63:0*/ __PVT__R_rs2;
        QData/*63:0*/ __PVT__Imm;
        QData/*63:0*/ __PVT__ALUres;
        QData/*63:0*/ __PVT__waddr;
        QData/*63:0*/ __PVT__MemOut;
        QData/*63:0*/ __PVT__RegWdata;
        QData/*63:0*/ __PVT__clint_dout;
        QData/*63:0*/ __PVT__ram_rdata;
        QData/*63:0*/ __PVT__WDATA;
        QData/*63:0*/ __PVT__IFU__DOT__dpc;
        QData/*63:0*/ __PVT__GenNextPC__DOT__NextPCp;
        QData/*63:0*/ __PVT__ImmGen__DOT__isRegWr__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__ALUA;
        QData/*63:0*/ __PVT__ALU__DOT__ALUB;
        QData/*63:0*/ __PVT__ALU__DOT__adder;
        QData/*63:0*/ __PVT__ALU__DOT__shift;
        QData/*63:0*/ __PVT__ALU__DOT__XOR;
        QData/*63:0*/ __PVT__ALU__DOT__OR;
        QData/*63:0*/ __PVT__ALU__DOT__AND;
        QData/*63:0*/ __PVT__ALU__DOT__MUL;
        QData/*63:0*/ __PVT__ALU__DOT__DIV;
        QData/*63:0*/ __PVT__ALU__DOT__REM;
        QData/*63:0*/ __PVT__ALU__DOT__ALUout;
        QData/*63:0*/ __PVT__ALU__DOT__deALUBsr__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__Adder__DOT__t_no_Cin;
        QData/*63:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__sra;
        QData/*63:0*/ ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0;
        QData/*63:0*/ __PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__diver__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__remer__DOT__lut_out;
        QData/*63:0*/ __PVT__ALU__DOT__deExtop__DOT__lut_out;
        QData/*63:0*/ __PVT__DataMem__DOT__sext__DOT__lut_out;
        QData/*63:0*/ __PVT__RegWsrcMux__DOT__lut_out;
        QData/*63:0*/ __PVT__clintU__DOT__mtime;
        QData/*63:0*/ __PVT__clintU__DOT__mtimecmp;
        QData/*63:0*/ __Vtask_pmem_read__5__rdata;
        QData/*63:0*/ __Vtask_pmem_read__6__rdata;
        VlUnpacked<QData/*63:0*/, 2> __PVT__ram_axi_lite_u__DOT__mem;
        VlUnpacked<SData/*9:0*/, 12> __PVT__ContrGen__DOT__deExtop__DOT__pair_list;
    };
    struct {
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
        VlUnpacked<CData/*3:0*/, 7> __PVT__GenNextPC__DOT__jump_check__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> __PVT__GenNextPC__DOT__jump_check__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 7> __PVT__GenNextPC__DOT__jump_check__DOT__data_list;
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

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_top(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_top();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
