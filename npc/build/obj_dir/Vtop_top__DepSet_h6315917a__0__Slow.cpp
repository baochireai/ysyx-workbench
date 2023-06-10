// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    // Body
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0U] = 6U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2U] = 4U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4U] = 2U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[0U] = 3U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[1U] = 2U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[2U] = 1U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[3U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[0U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0U] = 4ULL;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0U][0U] = 4U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[0U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[3U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2U] = 1ULL;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][0U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[0U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[3U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0U] = 0xfU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[1U] = 0xeU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[2U] = 0xdU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[3U] = 0xcU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[4U] = 0xbU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[5U] = 0xaU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[6U] = 9U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[7U] = 8U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[8U] = 7U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[9U] = 6U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xaU] = 5U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xbU] = 4U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xcU] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xdU] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xeU] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0xfU] = 0U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[0U] = 7U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[1U] = 6U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[2U] = 5U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[3U] = 4U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[4U] = 2U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[5U] = 1U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[6U] = 0U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0U] = 1U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1U] = 1U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4U] = 0U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0U] = 0xfU;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1U] = 0xdU;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4U] = 4U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0U] = 7U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1U] = 6U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2U] = 5U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3U] = 4U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4U] = 2U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5U] = 1U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6U] = 0U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0U] = 2U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1U] = 3U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4U] = 1U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0U] = 0x1eU;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1U] = 0x1bU;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4U] = 9U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0U] = 0x73U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[1U] = 0x67U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[2U] = 0x6fU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[3U] = 0x63U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[4U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[5U] = 0x23U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[6U] = 0x37U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[7U] = 0x17U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[8U] = 0x3bU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[9U] = 0x33U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0xaU] = 0x1bU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0xbU] = 0x13U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0U] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[1U] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[2U] = 6U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[3U] = 4U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[4U] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[5U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[6U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[7U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[8U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[9U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0xaU] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0xbU] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0U] = 0x39aU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[1U] = 0x33aU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[2U] = 0x37eU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[3U] = 0x31cU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[4U] = 0x1aU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[5U] = 0x11bU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[6U] = 0x1bdU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[7U] = 0xbdU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[8U] = 0x1d9U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[9U] = 0x199U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0xaU] = 0xdaU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0xbU] = 0x9aU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[0U] = 0x73U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[0U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[0U] = 0xe7U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[0U] = 6U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[1U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[2U] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[3U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[0U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[1U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[2U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[3U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[0U] = 0xdU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[1U] = 0xbU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[2U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[3U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[0U] = 0x73U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[1U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[0U] = 2U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[1U] = 1U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[0U] = 0x1ceU;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[1U] = 0xdU;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[0U] = 0U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[1U] = 1U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[2U] = 2U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[3U] = 3U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[0U] = 0xffU;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[1U] = 0xfU;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[2U] = 3U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[3U] = 1U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0U] = 0xffU;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1U] = 0x10fU;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2U] = 0x203U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3U] = 0x301U;
    vlSelf->__PVT__ifu_ready = 1U;
    vlSelf->__PVT__IFU__DOT__NextPC = 0x7ffffffcULL;
    vlSelf->__PVT__id_pc = 0x7ffffff8ULL;
    vlSelf->__PVT__id_inst = 0U;
    vlSelf->__PVT__ifu_valid = 0U;
    vlSelf->__PVT__ram_axi_lite_u__DOT__i = 0U;
    while (VL_LTS_III(32, vlSelf->__PVT__ram_axi_lite_u__DOT__i, 
                      (((0x1fU >= vlSelf->__PVT__AWADDR)
                         ? ((IData)(1U) << vlSelf->__PVT__AWADDR)
                         : 0U) - (IData)(1U)))) {
        vlSelf->__PVT__ram_axi_lite_u__DOT__mem[(1U 
                                                 & ((IData)(1U) 
                                                    + vlSelf->__PVT__ram_axi_lite_u__DOT__i))] = 0ULL;
        vlSelf->__PVT__ram_axi_lite_u__DOT__i = ((IData)(1U) 
                                                 + vlSelf->__PVT__ram_axi_lite_u__DOT__i);
    }
    vlSelf->__PVT__idu_valid = 0U;
    vlSelf->__PVT__ex_inst = 0U;
    vlSelf->__PVT__ex_pc = 0ULL;
    vlSelf->__PVT__exu_ALUct = 0U;
    vlSelf->__PVT__exu_Imm = 0ULL;
    vlSelf->__PVT__exu_ALUAsr = 0U;
    vlSelf->__PVT__exu_ALUBsr = 0U;
    vlSelf->__PVT__exu_isTuncate = 0U;
    vlSelf->__PVT__exu_isSext = 0U;
    vlSelf->__PVT__exu_RegWr = 0U;
    vlSelf->__PVT__exu_RegSrc = 0U;
    vlSelf->__PVT__exu_Branch = 2U;
    vlSelf->__PVT__exu_MemWr = 0U;
    vlSelf->__PVT__exu_MemOP = 0U;
    vlSelf->__PVT__exu_IntrEn = 0U;
    vlSelf->__PVT__ex_Rrs1 = 0ULL;
    vlSelf->__PVT__ex_Rrs2 = 0ULL;
    vlSelf->__PVT__ALUres = 0ULL;
    vlSelf->__PVT__mem_Rrs2 = 0ULL;
    vlSelf->__PVT__mem_Rrs1 = 0ULL;
    vlSelf->__PVT__mem_MemOP = 0U;
    vlSelf->__PVT__mem_MemWr = 0U;
    vlSelf->__PVT__mem_IntrEn = 0U;
    vlSelf->__PVT__lsu_inst = 0U;
    vlSelf->__PVT__lsu_pc = 0ULL;
    vlSelf->__PVT__lsu_RegSrc = 0U;
    vlSelf->__PVT__lsu_Regwr = 0U;
    vlSelf->__PVT__wb_IntrEn = 0U;
    vlSelf->__PVT__wb_pc = 0ULL;
    vlSelf->__PVT__wb_Rrs1 = 0ULL;
    vlSelf->__PVT__clint_mtip = 0U;
    vlSelf->__PVT__wb_inst = 0U;
    vlSelf->__PVT__wb_ALUres = 0ULL;
    vlSelf->__PVT__wb_RegWr = 0U;
    vlSelf->__PVT__wb_RegSrc = 0U;
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime = 0ULL;
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp = 0xffffffffffffffffULL;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r = 0U;
    vlSelf->__PVT__witf__DOT__wptr_r = 0U;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r = 0U;
    vlSelf->__PVT__witf__DOT__rptr_r = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4 = 0U;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4 = 0U;
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->Inst = 0;
    vlSelf->pc = 0;
    vlSelf->__PVT__Extop = 0;
    vlSelf->__PVT__ALUres = 0;
    vlSelf->__PVT__waddr = 0;
    vlSelf->__PVT__Less = 0;
    vlSelf->__PVT__Zero = 0;
    vlSelf->__PVT__MemOut = 0;
    vlSelf->__PVT__RegWdata = 0;
    vlSelf->__PVT__IntrEn = 0;
    vlSelf->__PVT__IntrOut = 0;
    vlSelf->__PVT__clint_mtip = 0;
    vlSelf->__PVT__clint_we = 0;
    vlSelf->__PVT__clint_re = 0;
    vlSelf->__PVT__clint_dout = 0;
    vlSelf->__PVT__RegWr_d = 0;
    vlSelf->__PVT__ifu_is_jump = 0;
    vlSelf->__PVT__ifu_arvalid = 0;
    vlSelf->__PVT__ifu_raddr = 0;
    vlSelf->__PVT__ifu_ready = 0;
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
    vlSelf->__PVT__id_pc = 0;
    vlSelf->__PVT__id_inst = 0;
    vlSelf->__PVT__ifu_valid = 0;
    vlSelf->__PVT__idu_valid = 0;
    vlSelf->__PVT__idu_ready = 0;
    vlSelf->__PVT__exu_isTuncate = 0;
    vlSelf->__PVT__exu_isSext = 0;
    vlSelf->__PVT__ex_Rrs1 = 0;
    vlSelf->__PVT__ex_Rrs2 = 0;
    vlSelf->__PVT__exu_IntrEn = 0;
    vlSelf->__PVT__exu_ALUct = 0;
    vlSelf->__PVT__exu_Imm = 0;
    vlSelf->__PVT__exu_ALUAsr = 0;
    vlSelf->__PVT__exu_ALUBsr = 0;
    vlSelf->__PVT__ex_pc = 0;
    vlSelf->__PVT__ex_inst = 0;
    vlSelf->__PVT__exu_RegWr = 0;
    vlSelf->__PVT__exu_Branch = 0;
    vlSelf->__PVT__exu_MemOP = 0;
    vlSelf->__PVT__exu_MemWr = 0;
    vlSelf->__PVT__exu_RegSrc = 0;
    vlSelf->__PVT__witf_full = 0;
    vlSelf->__PVT__mem_Rrs1 = 0;
    vlSelf->__PVT__mem_Rrs2 = 0;
    vlSelf->__PVT__mem_MemOP = 0;
    vlSelf->__PVT__mem_MemWr = 0;
    vlSelf->__PVT__mem_IntrEn = 0;
    vlSelf->__PVT__lsu_RegSrc = 0;
    vlSelf->__PVT__lsu_Regwr = 0;
    vlSelf->__PVT__lsu_pc = 0;
    vlSelf->__PVT__lsu_inst = 0;
    vlSelf->__PVT__wb_IntrEn = 0;
    vlSelf->__PVT__wb_RegSrc = 0;
    vlSelf->__PVT__wb_RegWr = 0;
    vlSelf->__PVT__wb_pc = 0;
    vlSelf->__PVT__wb_inst = 0;
    vlSelf->__PVT__wb_ALUres = 0;
    vlSelf->__PVT__memout = 0;
    vlSelf->__PVT__wb_Rrs1 = 0;
    vlSelf->__PVT__IFU__DOT__ifu_valid_next = 0;
    vlSelf->__PVT__IFU__DOT__dpc = 0;
    vlSelf->__PVT__IFU__DOT__NextPC = 0;
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
    vlSelf->__PVT__IDU__DOT__popline_wen = 0;
    vlSelf->__PVT__IDU__DOT__Imm_d = 0;
    vlSelf->__PVT__IDU__DOT__MemWr_d = 0;
    vlSelf->__PVT__IDU__DOT__MemOP_d = 0;
    vlSelf->__PVT__IDU__DOT__RegSrc_d = 0;
    vlSelf->__PVT__IDU__DOT__isTuncate_d = 0;
    vlSelf->__PVT__IDU__DOT__isSext_d = 0;
    vlSelf->__PVT__IDU__DOT__IntrEn_d = 0;
    vlSelf->IDU__DOT____VdfgTmp_hd66fa622__0 = 0;
    vlSelf->IDU__DOT____VdfgTmp_h23869681__0 = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop = 0;
    vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit = 0;
    vlSelf->__PVT__EXU__DOT__Less = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__XOR = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__OR = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__AND = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM = 0;
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout = 0;
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra = 0;
    vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key = 0;
    vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit = 0;
    vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out = 0;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out = 0;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit = 0;
    vlSelf->__PVT__LSU__DOT__isclint = 0;
    vlSelf->__PVT__LSU__DOT__Datamem_we = 0;
    vlSelf->__PVT__LSU__DOT__clint_we = 0;
    vlSelf->__PVT__LSU__DOT__dataMem_out = 0;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__wmask = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__LSU__DOT__DataMem__DOT__data);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__extmask = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out = 0;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out = 0;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit = 0;
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime = 0;
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp = 0;
    vlSelf->__PVT__witf__DOT__wptr_r = 0;
    vlSelf->__PVT__witf__DOT__rptr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__witf__DOT__rdidx_r[__Vi0] = 0;
    }
    vlSelf->__PVT__witf__DOT__rd_match_rs1idx = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_nxt = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_nxt = 0;
    vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5 = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_nxt = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena = 0;
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_nxt = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5 = 0;
    vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4 = 0;
    vlSelf->witf__DOT____VdfgTmp_h08e2d86c__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h0d5c35c9__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h46770a1e__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h467ad5de__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h0b2ef0b4__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h0d4e02d0__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h0d32c217__0 = 0;
    vlSelf->witf__DOT____VdfgTmp_h0d36223a__0 = 0;
    vlSelf->__VdfgTmp_h7418121e__0 = 0;
    vlSelf->__VdfgTmp_h7492a8f3__0 = 0;
    vlSelf->__VdfgTmp_h77a512b4__0 = 0;
    vlSelf->__VdfgTmp_h749ef897__0 = 0;
    vlSelf->__Vtask_pmem_read__4__rdata = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
}
