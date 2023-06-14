// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_WB;


class Vtop_top final : public VerilatedModule {
  public:
    // CELLS
    Vtop_WB* WB;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(valid,0,0);
        CData/*2:0*/ __PVT__Extop;
        CData/*0:0*/ __PVT__Less;
        CData/*0:0*/ __PVT__Zero;
        CData/*0:0*/ __PVT__IntrEn;
        CData/*0:0*/ __PVT__clint_mtip;
        CData/*0:0*/ __PVT__clint_we;
        CData/*0:0*/ __PVT__clint_re;
        CData/*0:0*/ __PVT__RegWr_d;
        CData/*0:0*/ __PVT__ifu_is_jump;
        CData/*0:0*/ __PVT__ifu_ready;
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
        CData/*0:0*/ __PVT__ifu_valid;
        CData/*0:0*/ __PVT__idu_valid;
        CData/*0:0*/ __PVT__idu_ready;
        CData/*0:0*/ __PVT__exu_valid;
        CData/*0:0*/ __PVT__exu_ready;
        CData/*0:0*/ __PVT__lsu_valid;
        CData/*0:0*/ __PVT__lsu_ready;
        CData/*0:0*/ __PVT__exu_isTuncate;
        CData/*0:0*/ __PVT__exu_isSext;
        CData/*0:0*/ __PVT__exu_IntrEn;
        CData/*4:0*/ __PVT__exu_ALUct;
        CData/*0:0*/ __PVT__exu_ALUAsr;
        CData/*1:0*/ __PVT__exu_ALUBsr;
        CData/*0:0*/ __PVT__exu_RegWr;
        CData/*2:0*/ __PVT__exu_Branch;
        CData/*2:0*/ __PVT__exu_MemOP;
        CData/*0:0*/ __PVT__exu_MemWr;
        CData/*1:0*/ __PVT__exu_RegSrc;
        CData/*0:0*/ __PVT__isRAW;
        CData/*0:0*/ __PVT__witf_full;
        CData/*2:0*/ __PVT__mem_MemOP;
        CData/*0:0*/ __PVT__mem_MemWr;
        CData/*0:0*/ __PVT__mem_IntrEn;
        CData/*1:0*/ __PVT__lsu_RegSrc;
        CData/*0:0*/ __PVT__lsu_Regwr;
        CData/*0:0*/ __PVT__wb_IntrEn;
        CData/*1:0*/ __PVT__wb_RegSrc;
        CData/*0:0*/ __PVT__wb_RegWr;
        CData/*0:0*/ __PVT__IFU__DOT__ifu_valid_next;
        CData/*0:0*/ __PVT__IFU__DOT__popline_wen;
        CData/*7:0*/ __PVT__ram_axi_lite_u__DOT__wstrb;
        CData/*0:0*/ __PVT__ram_axi_lite_u__DOT__wdata_done;
        CData/*0:0*/ __PVT__ram_axi_lite_u__DOT__raddr_done;
        CData/*0:0*/ __PVT__IDU__DOT__idu_valid_next;
        CData/*0:0*/ __PVT__IDU__DOT__popline_wen;
        CData/*0:0*/ __PVT__IDU__DOT__MemWr_d;
        CData/*2:0*/ __PVT__IDU__DOT__MemOP_d;
        CData/*1:0*/ __PVT__IDU__DOT__RegSrc_d;
        CData/*0:0*/ __PVT__IDU__DOT__isTuncate_d;
        CData/*0:0*/ __PVT__IDU__DOT__isSext_d;
        CData/*0:0*/ __PVT__IDU__DOT__IntrEn_d;
    };
    struct {
        CData/*0:0*/ IDU__DOT____VdfgTmp_hd66fa622__0;
        CData/*0:0*/ IDU__DOT____VdfgTmp_h23869681__0;
        CData/*2:0*/ __PVT__IDU__DOT__ContrGenU__DOT__Extop;
        CData/*0:0*/ IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0;
        CData/*2:0*/ __PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit;
        CData/*1:0*/ __PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit;
        CData/*0:0*/ __PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit;
        CData/*0:0*/ __PVT__EXU__DOT__exu_valid_next;
        CData/*0:0*/ __PVT__EXU__DOT__popline_wen;
        CData/*0:0*/ __PVT__EXU__DOT__Less;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__Sub_Add;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__lessS;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__lessUS;
        CData/*1:0*/ EXU__DOT__ex_alu__DOT____Vcellinp__diver__key;
        CData/*3:0*/ EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit;
        CData/*5:0*/ __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt;
        CData/*1:0*/ EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit;
        CData/*0:0*/ __PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit;
        CData/*1:0*/ EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out;
        CData/*0:0*/ __PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out;
        CData/*0:0*/ __PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit;
        CData/*1:0*/ __PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out;
        CData/*0:0*/ __PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit;
        CData/*0:0*/ __PVT__LSU__DOT__lsu_valid_next;
        CData/*0:0*/ __PVT__LSU__DOT__popline_wen;
        CData/*0:0*/ __PVT__LSU__DOT__isclint;
        CData/*0:0*/ __PVT__LSU__DOT__Datamem_we;
        CData/*0:0*/ __PVT__LSU__DOT__clint_we;
        CData/*7:0*/ __PVT__LSU__DOT__DataMem__DOT__wmask;
        CData/*7:0*/ __PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out;
        CData/*0:0*/ __PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit;
        CData/*0:0*/ __PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit;
        CData/*2:0*/ __PVT__witf__DOT__wptr_r;
        CData/*2:0*/ __PVT__witf__DOT__rptr_r;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__wptr_flg_nxt;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena;
        CData/*2:0*/ __PVT__witf__DOT__depth_gt1__DOT__wptr_nxt;
        CData/*0:0*/ witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__rptr_flg_nxt;
        CData/*0:0*/ __PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena;
        CData/*2:0*/ __PVT__witf__DOT__depth_gt1__DOT__rptr_nxt;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5;
    };
    struct {
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5;
        CData/*4:0*/ witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4;
        CData/*0:0*/ witf__DOT____VdfgTmp_h08e2d86c__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h0d5c35c9__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h46770a1e__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h467ad5de__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h0b2ef0b4__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h0d4e02d0__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h0d32c217__0;
        CData/*0:0*/ witf__DOT____VdfgTmp_h0d36223a__0;
        CData/*0:0*/ __VdfgTmp_hd805ccc8__0;
        CData/*0:0*/ __VdfgTmp_h6b23342a__0;
        SData/*15:0*/ __PVT__LSU__DOT__DataMem__DOT__extmask;
        VL_OUT(Inst,31,0);
        IData/*31:0*/ __PVT__AWADDR;
        IData/*31:0*/ __PVT__id_inst;
        IData/*31:0*/ __PVT__ex_inst;
        IData/*31:0*/ __PVT__lsu_inst;
        IData/*31:0*/ __PVT__wb_inst;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__waddr;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__raddr;
        IData/*31:0*/ __PVT__ram_axi_lite_u__DOT__i;
        VlWide<4>/*127:0*/ __PVT__LSU__DOT__DataMem__DOT__data;
        IData/*31:0*/ __VdfgTmp_h7418121e__0;
        IData/*31:0*/ __VdfgTmp_h7492a8f3__0;
        IData/*31:0*/ __VdfgTmp_h77a512b4__0;
        IData/*31:0*/ __VdfgTmp_h749ef897__0;
        VL_OUT64(pc,63,0);
        QData/*63:0*/ __PVT__ALUres;
        QData/*63:0*/ __PVT__waddr;
        QData/*63:0*/ __PVT__MemOut;
        QData/*63:0*/ __PVT__RegWdata;
        QData/*63:0*/ __PVT__IntrOut;
        QData/*63:0*/ __PVT__clint_dout;
        QData/*63:0*/ __PVT__ram_rdata;
        QData/*63:0*/ __PVT__WDATA;
        QData/*63:0*/ __PVT__id_pc;
        QData/*63:0*/ __PVT__ex_Rrs1;
        QData/*63:0*/ __PVT__ex_Rrs2;
        QData/*63:0*/ __PVT__exu_Imm;
        QData/*63:0*/ __PVT__ex_pc;
        QData/*63:0*/ __PVT__mem_Rrs1;
        QData/*63:0*/ __PVT__mem_Rrs2;
        QData/*63:0*/ __PVT__lsu_pc;
        QData/*63:0*/ __PVT__wb_pc;
        QData/*63:0*/ __PVT__wb_ALUres;
        QData/*63:0*/ __PVT__memout;
        QData/*63:0*/ __PVT__wb_Rrs1;
        QData/*63:0*/ __PVT__IFU__DOT__dpc;
        QData/*63:0*/ __PVT__IFU__DOT__NextPC;
        QData/*63:0*/ __PVT__IDU__DOT__Imm_d;
        QData/*63:0*/ __PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__ALUA;
    };
    struct {
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__ALUB;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__adder;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__shift;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__XOR;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__OR;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__AND;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__MUL;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__DIV;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__REM;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__ALUout;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra;
        QData/*63:0*/ EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out;
        QData/*63:0*/ __PVT__EXU__DOT__GenNextPC__DOT__NextPCp;
        QData/*63:0*/ __PVT__LSU__DOT__dataMem_out;
        QData/*63:0*/ __PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out;
        QData/*63:0*/ __PVT__LSU__DOT__clintU__DOT__mtime;
        QData/*63:0*/ __PVT__LSU__DOT__clintU__DOT__mtimecmp;
        QData/*63:0*/ __Vtask_pmem_read__2__rdata;
        QData/*63:0*/ __Vtask_pmem_read__4__rdata;
        QData/*63:0*/ __Vtask_pmem_read__5__rdata;
        VlUnpacked<QData/*63:0*/, 2> __PVT__ram_axi_lite_u__DOT__mem;
        VlUnpacked<SData/*9:0*/, 12> __PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 12> __PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 12> __PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 1> __PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> __PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 1> __PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 4> __PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> __PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 4> __PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 2> __PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> __PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> __PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 5> __PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> __PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> __PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> __PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> __PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> __PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 16> __PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> __PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 16> __PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> __PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> __PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 8> __PVT__witf__DOT__rdidx_r;
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
