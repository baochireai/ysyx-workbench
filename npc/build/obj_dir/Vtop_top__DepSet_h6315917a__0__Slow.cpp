// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->Inst = 0;
    vlSelf->pc = 0;
    vlSelf->__PVT__R_rs1 = 0;
    vlSelf->__PVT__R_rs2 = 0;
    vlSelf->__PVT__Extop = 0;
    vlSelf->__PVT__RegWr = 0;
    vlSelf->__PVT__ALUBsr = 0;
    vlSelf->__PVT__Imm = 0;
    vlSelf->__PVT__ALUres = 0;
    vlSelf->__PVT__Branch = 0;
    vlSelf->__PVT__waddr = 0;
    vlSelf->__PVT__Less = 0;
    vlSelf->__PVT__MemOP = 0;
    vlSelf->__PVT__RegSrc = 0;
    vlSelf->__PVT__MemWr = 0;
    vlSelf->__PVT__MemOut = 0;
    vlSelf->__PVT__RegWdata = 0;
    vlSelf->__PVT__IntrEn = 0;
    vlSelf->__PVT__clint_we = 0;
    vlSelf->__PVT__clint_re = 0;
    vlSelf->__PVT__clint_dout = 0;
    vlSelf->__PVT__ifu_arvalid = 0;
    vlSelf->__PVT__ifu_raddr = 0;
    vlSelf->__PVT__ram_rdata = 0;
    vlSelf->__PVT__ram_rvalid = 0;
    vlSelf->__PVT__ram_rresp = 0;
    vlSelf->__PVT__AWADDR = 0;
    vlSelf->__PVT__AWVALID = 0;
    vlSelf->__PVT__AWREADY = 0;
    vlSelf->__PVT__WDATA = 0;
    vlSelf->__PVT__WVALID = 0;
    vlSelf->__PVT__WREADY = 0;
    vlSelf->__PVT__WSTRB = 0;
    vlSelf->__PVT__BVALID = 0;
    vlSelf->__PVT__BRESP = 0;
    vlSelf->__PVT__BREADY = 0;
    vlSelf->__PVT__is_jump = 0;
    vlSelf->__PVT__isTuncate = 0;
    vlSelf->__PVT__isSext = 0;
    vlSelf->__PVT__IFU__DOT__pipeline_hold = 0;
    vlSelf->__PVT__IFU__DOT__ifu_valid = 0;
    vlSelf->__PVT__IFU__DOT__id_ready = 0;
    vlSelf->__PVT__IFU__DOT__ifu_ready = 0;
    vlSelf->__PVT__IFU__DOT__ex_valid = 0;
    vlSelf->__PVT__IFU__DOT__dpc = 0;
    vlSelf->__PVT__IFU__DOT__inst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_axi_lite_u__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__ram_axi_lite_u__DOT__waddr = 0;
    vlSelf->__PVT__ram_axi_lite_u__DOT__raddr = 0;
    vlSelf->__PVT__ram_axi_lite_u__DOT__wstrb = 0;
    vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done = 0;
    vlSelf->__PVT__ram_axi_lite_u__DOT__raddr_done = 0;
    vlSelf->__PVT__ram_axi_lite_u__DOT__i = 0;
    vlSelf->ContrGen__DOT____VdfgTmp_h708a31d5__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__lut_out = 0;
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out = 0;
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__hit = 0;
    vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out = 0;
    vlSelf->__PVT__GenNextPC__DOT__NextPCp = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out = 0;
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out = 0;
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 0;
    vlSelf->__PVT__ALU__DOT__ALUA = 0;
    vlSelf->__PVT__ALU__DOT__ALUB = 0;
    vlSelf->__PVT__ALU__DOT__US_S = 0;
    vlSelf->__PVT__ALU__DOT__Sub_Add = 0;
    vlSelf->__PVT__ALU__DOT__adder = 0;
    vlSelf->__PVT__ALU__DOT__lessS = 0;
    vlSelf->__PVT__ALU__DOT__lessUS = 0;
    vlSelf->__PVT__ALU__DOT__shift = 0;
    vlSelf->__PVT__ALU__DOT__XOR = 0;
    vlSelf->__PVT__ALU__DOT__OR = 0;
    vlSelf->__PVT__ALU__DOT__AND = 0;
    vlSelf->__PVT__ALU__DOT__MUL = 0;
    vlSelf->__PVT__ALU__DOT__DIV = 0;
    vlSelf->__PVT__ALU__DOT__REM = 0;
    vlSelf->ALU__DOT____Vcellinp__diver__key = 0;
    vlSelf->__PVT__ALU__DOT__ALUout = 0;
    vlSelf->ALU__DOT____Vcellinp__deExtop__key = 0;
    vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out = 0;
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit = 0;
    vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin = 0;
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt = 0;
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__sra = 0;
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key = 0;
    vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out = 0;
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__diver__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out = 0;
    vlSelf->__PVT__ALU__DOT__diver__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__remer__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 0;
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = 0;
    vlSelf->__PVT__DataMem__DOT__clint_en = 0;
    vlSelf->__PVT__DataMem__DOT__wmask = 0;
    vlSelf->__PVT__DataMem__DOT__RdEn = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__DataMem__DOT__data);
    vlSelf->__PVT__DataMem__DOT__extmask = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out = 0;
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out = 0;
    vlSelf->__PVT__DataMem__DOT__sext__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__RegWsrcMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__RegWsrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = 0;
    vlSelf->__PVT__RegWsrcMux__DOT__hit = 0;
    vlSelf->__PVT__clintU__DOT__mtime = 0;
    vlSelf->__PVT__clintU__DOT__mtimecmp = 0;
    vlSelf->__VdfgTmp_hd4f657a4__0 = 0;
    vlSelf->__VdfgTmp_h1f2041f1__0 = 0;
    vlSelf->__VdfgTmp_h850e38ae__0 = 0;
    vlSelf->__VdfgTmp_h8588955e__0 = 0;
    vlSelf->__VdfgTmp_h8507bb64__0 = 0;
    vlSelf->__VdfgTmp_h858486fa__0 = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    vlSelf->__Vtask_pmem_read__6__rdata = 0;
    vlSelf->__Vdly__IFU__DOT__inst = 0;
}
