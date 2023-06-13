// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__AWREADY;
    __Vdly__AWREADY = 0;
    CData/*0:0*/ __Vdly__WREADY;
    __Vdly__WREADY = 0;
    CData/*1:0*/ __Vdly__BRESP;
    __Vdly__BRESP = 0;
    CData/*0:0*/ __Vdly__BVALID;
    __Vdly__BVALID = 0;
    QData/*63:0*/ __Vdly__LSU__DOT__clintU__DOT__mtime;
    __Vdly__LSU__DOT__clintU__DOT__mtime = 0;
    VlWide<4>/*127:0*/ __Vtemp_hdff02329__0;
    VlWide<4>/*127:0*/ __Vtemp_h91298c46__0;
    VlWide<4>/*127:0*/ __Vtemp_he6ffd419__0;
    // Body
    __Vdly__AWREADY = vlSelf->__PVT__AWREADY;
    __Vdly__WREADY = vlSelf->__PVT__WREADY;
    __Vdly__BVALID = vlSelf->__PVT__BVALID;
    __Vdly__BRESP = vlSelf->__PVT__BRESP;
    __Vdly__LSU__DOT__clintU__DOT__mtime = vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime;
    vlSelf->__PVT__ram_rvalid = ((~ (IData)(vlSymsp->TOP.rst)) 
                                 & ((IData)(vlSelf->__PVT__ifu_arvalid) 
                                    | ((~ ((IData)(vlSelf->__PVT__ram_rvalid) 
                                           & (IData)(vlSelf->__PVT__ifu_ready))) 
                                       & (IData)(vlSelf->__PVT__ram_rvalid))));
    __Vdly__LSU__DOT__clintU__DOT__mtime = (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
                                             & (0x200bff8ULL 
                                                == vlSelf->__PVT__ALUres))
                                             ? vlSelf->__PVT__mem_Rrs2
                                             : (1ULL 
                                                + vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime));
    vlSelf->__PVT__idu_valid = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & ((IData)(vlSelf->IDU__DOT____VdfgTmp_hd66fa622__0) 
                                   & ((IData)(vlSelf->__PVT__idu_ready) 
                                      & ((IData)(vlSelf->__PVT__ifu_valid) 
                                         & (IData)(vlSelf->IDU__DOT____VdfgTmp_h23869681__0)))));
    vlSelf->__PVT__mem_MemWr = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__exu_MemWr));
    vlSelf->__PVT__clint_mtip = ((~ (IData)(vlSymsp->TOP.rst)) 
                                 & (vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
                                    > vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp));
    if (vlSymsp->TOP.rst) {
        __Vdly__BRESP = 0U;
        __Vdly__BVALID = 0U;
        vlSelf->__PVT__BRESP = __Vdly__BRESP;
        vlSelf->__PVT__BVALID = __Vdly__BVALID;
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
            = __Vdly__LSU__DOT__clintU__DOT__mtime;
        vlSelf->__PVT__ram_rresp = 0U;
        vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r = 0U;
        vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r = 0U;
        vlSelf->__PVT__ram_axi_lite_u__DOT__raddr = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4 = 0U;
        vlSelf->__PVT__witf__DOT__wptr_r = 0U;
        vlSelf->__PVT__wb_RegSrc = 0U;
        vlSelf->__PVT__witf__DOT__rptr_r = 0U;
        vlSelf->__PVT__mem_MemOP = 0U;
        vlSelf->__PVT__exu_Branch = 2U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4 = 0U;
        vlSelf->__PVT__exu_Imm = 0ULL;
        vlSelf->__PVT__exu_ALUct = 0U;
        vlSelf->__PVT__wb_ALUres = 0ULL;
        vlSelf->__PVT__exu_ALUBsr = 0U;
        vlSelf->__PVT__exu_ALUAsr = 0U;
        vlSelf->__PVT__wb_Rrs1 = 0ULL;
    } else {
        if (vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done) {
            __Vdly__BRESP = 0U;
            __Vdly__BVALID = 1U;
        } else if (((IData)(vlSelf->__PVT__BVALID) 
                    & (IData)(vlSelf->__PVT__BREADY))) {
            __Vdly__BRESP = vlSelf->__PVT__BRESP;
            __Vdly__BVALID = 0U;
        } else {
            __Vdly__BRESP = vlSelf->__PVT__BRESP;
            __Vdly__BVALID = vlSelf->__PVT__BVALID;
        }
        vlSelf->__PVT__BRESP = __Vdly__BRESP;
        vlSelf->__PVT__BVALID = __Vdly__BVALID;
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
            = __Vdly__LSU__DOT__clintU__DOT__mtime;
        if (vlSelf->__PVT__ifu_arvalid) {
            vlSelf->__PVT__ram_rresp = 0U;
            vlSelf->__PVT__ram_axi_lite_u__DOT__raddr 
                = vlSelf->__PVT__ifu_raddr;
        }
        if (vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena) {
            vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r 
                = vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_nxt;
        }
        if (vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena) {
            vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r 
                = vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_nxt;
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h08e2d86c__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h08e2d86c__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h0d5c35c9__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h46770a1e__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h46770a1e__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h467ad5de__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h467ad5de__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h0b2ef0b4__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h0d4e02d0__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h0d32c217__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h0d32c217__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (((IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
             | (IData)(vlSelf->witf__DOT____VdfgTmp_h0d36223a__0))) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4 
                = (1U & ((~ (IData)(vlSelf->witf__DOT____VdfgTmp_h0d36223a__0)) 
                         | (IData)(vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)));
        }
        if (vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) {
            vlSelf->__PVT__witf__DOT__wptr_r = vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_nxt;
        }
        vlSelf->__PVT__wb_RegSrc = vlSelf->__PVT__lsu_RegSrc;
        if (vlSelf->__PVT__wb_RegWr) {
            vlSelf->__PVT__witf__DOT__rptr_r = vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_nxt;
        }
        vlSelf->__PVT__mem_MemOP = vlSelf->__PVT__exu_MemOP;
        if (vlSelf->__PVT__IDU__DOT__popline_wen) {
            vlSelf->__PVT__exu_Branch = ((4U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                          ? (5U & (vlSelf->__PVT__id_inst 
                                                   >> 0xcU))
                                          : ((6U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                              ? 6U : 
                                             ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->__PVT__id_inst))
                                               ? 7U
                                               : 2U)));
            vlSelf->__PVT__exu_Imm = vlSelf->__PVT__IDU__DOT__Imm_d;
            vlSelf->__PVT__exu_ALUct = (((0x17U == 
                                          (0x7fU & vlSelf->__PVT__id_inst)) 
                                         | ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->__PVT__id_inst)) 
                                            | ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__id_inst)) 
                                               | (IData)(vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0))))
                                         ? 0U : ((4U 
                                                  == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                                  ? 
                                                 (2U 
                                                  | (8U 
                                                     & (vlSelf->__PVT__id_inst 
                                                        >> 0xaU)))
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__id_inst))
                                                   ? 3U
                                                   : 
                                                  ((((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->__PVT__id_inst)) 
                                                     | (0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__id_inst))) 
                                                    & (vlSelf->__PVT__id_inst 
                                                       >> 0x19U))
                                                    ? 
                                                   (0x10U 
                                                    | ((8U 
                                                        & (vlSelf->__PVT__id_inst 
                                                           >> 9U)) 
                                                       | (7U 
                                                          & (vlSelf->__PVT__id_inst 
                                                             >> 0xcU))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__id_inst 
                                                         >> 0xcU)))
                                                     ? 0xaU
                                                     : 
                                                    ((((vlSelf->__PVT__id_inst 
                                                        >> 0x1eU) 
                                                       & (0U 
                                                          != 
                                                          (0x7020U 
                                                           & vlSelf->__PVT__id_inst))) 
                                                      << 3U) 
                                                     | (7U 
                                                        & (vlSelf->__PVT__id_inst 
                                                           >> 0xcU))))))));
            vlSelf->__PVT__exu_ALUBsr = ((IData)(vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
                                          ? 2U : ((1U 
                                                   & ((2U 
                                                       == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                      | ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->__PVT__id_inst 
                                                              >> 2U))) 
                                                         | ((5U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->__PVT__id_inst 
                                                                 >> 2U))) 
                                                            | ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSelf->__PVT__id_inst 
                                                                               >> 2U))))) 
                                                               | (3U 
                                                                  == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))))
                                                   ? 0U
                                                   : 
                                                  (((1U 
                                                     == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                    | (4U 
                                                       == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)))
                                                    ? 1U
                                                    : 3U)));
            vlSelf->__PVT__exu_ALUAsr = (((0x67U != 
                                           (0x7fU & vlSelf->__PVT__id_inst)) 
                                          & (2U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                                         | ((1U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                            | ((3U 
                                                == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                               | (4U 
                                                  == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)))));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        if (vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) {
            vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4 
                = (0x1fU & (vlSelf->__PVT__id_inst 
                            >> 7U));
        }
        vlSelf->__PVT__wb_ALUres = vlSelf->__PVT__ALUres;
        vlSelf->__PVT__wb_Rrs1 = vlSelf->__PVT__mem_Rrs1;
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__WREADY = 1U;
        vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done = 0U;
    } else if (((IData)(vlSelf->__PVT__WVALID) & (IData)(vlSelf->__PVT__WREADY))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->__PVT__ram_axi_lite_u__DOT__waddr, vlSelf->__PVT__WDATA, (IData)(vlSelf->__PVT__WSTRB));
        __Vdly__WREADY = 0U;
        vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done = 1U;
    } else {
        __Vdly__WREADY = 1U;
        vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done = 0U;
    }
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_nxt 
        = (1U & (~ (IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_nxt 
        = (1U & (~ (IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)));
    vlSelf->__PVT__ifu_arvalid = 1U;
    vlSelf->IDU__DOT____VdfgTmp_hd66fa622__0 = 1U;
    vlSelf->__PVT__ifu_valid = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__IFU__DOT__ifu_valid_next));
    vlSelf->__PVT__ifu_valid = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__IFU__DOT__ifu_valid_next));
    vlSelf->__PVT__witf_full = (((IData)(vlSelf->__PVT__witf__DOT__rptr_r) 
                                 == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)) 
                                & ((IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                   != (IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((- (IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                       == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
                       [0U]))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list
           [0U]);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
           == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
           [0U]);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                          == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [1U]))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [1U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [1U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                          == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [2U]))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [2U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [2U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                          == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
                          [3U]))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list
              [3U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list
              [3U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__wmask = 
        ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit)
          ? (IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out)
          : 0U);
    vlSelf->__PVT__witf__DOT__rdidx_r[7U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[6U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[5U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[4U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[3U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[2U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[1U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__witf__DOT__rdidx_r[0U] = vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->__PVT__exu_Imm);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->__PVT__exu_Imm >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2U] 
        = vlSelf->__PVT__exu_Imm;
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key 
        = ((8U & ((IData)(vlSelf->__PVT__exu_ALUct) 
                  >> 1U)) | (7U & (IData)(vlSelf->__PVT__exu_ALUct)));
    vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = ((2U & ((IData)(vlSelf->__PVT__exu_ALUct) 
                  >> 2U)) | (1U == (7U & (IData)(vlSelf->__PVT__exu_ALUct))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add = 
        ((2U == (7U & (IData)(vlSelf->__PVT__exu_ALUct))) 
         | (IData)((8U == (0xfU & (IData)(vlSelf->__PVT__exu_ALUct)))));
    if (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
         & (0x2004000ULL == vlSelf->__PVT__ALUres))) {
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp 
            = vlSelf->__PVT__mem_Rrs2;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__ifu_raddr = 0x80000000U;
        vlSelf->__PVT__lsu_RegSrc = 0U;
        vlSelf->__PVT__exu_MemWr = 0U;
        vlSelf->__PVT__exu_MemOP = 0U;
        vlSelf->__PVT__mem_Rrs1 = 0ULL;
        vlSelf->__PVT__ram_axi_lite_u__DOT__waddr = 0U;
        __Vdly__AWREADY = 1U;
        vlSelf->__PVT__exu_RegSrc = 0U;
        vlSelf->__PVT__ex_Rrs1 = 0ULL;
        vlSelf->__PVT__ALUres = 0ULL;
        vlSelf->__PVT__mem_Rrs2 = 0ULL;
        vlSelf->__PVT__exu_isSext = 0U;
        vlSelf->__PVT__exu_isTuncate = 0U;
        vlSelf->__PVT__ex_Rrs2 = 0ULL;
    } else {
        vlSelf->__PVT__ifu_raddr = (IData)(vlSelf->__PVT__IFU__DOT__dpc);
        vlSelf->__PVT__lsu_RegSrc = vlSelf->__PVT__exu_RegSrc;
        vlSelf->__PVT__mem_Rrs1 = vlSelf->__PVT__ex_Rrs1;
        if (((IData)(vlSelf->__PVT__AWVALID) & (IData)(vlSelf->__PVT__AWREADY))) {
            vlSelf->__PVT__ram_axi_lite_u__DOT__waddr 
                = vlSelf->__PVT__AWADDR;
            vlSelf->__PVT__ram_axi_lite_u__DOT__wstrb 
                = vlSelf->__PVT__WSTRB;
            __Vdly__AWREADY = 0U;
        } else {
            __Vdly__AWREADY = 1U;
        }
        vlSelf->__PVT__ALUres = ((IData)(vlSelf->__PVT__exu_isTuncate)
                                  ? ((IData)(vlSelf->__PVT__exu_isSext)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                      : (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                  : vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout);
        vlSelf->__PVT__mem_Rrs2 = vlSelf->__PVT__ex_Rrs2;
        if (vlSelf->__PVT__IDU__DOT__popline_wen) {
            vlSelf->__PVT__exu_MemWr = vlSelf->__PVT__IDU__DOT__MemWr_d;
            vlSelf->__PVT__exu_MemOP = vlSelf->__PVT__IDU__DOT__MemOP_d;
            vlSelf->__PVT__exu_RegSrc = vlSelf->__PVT__IDU__DOT__RegSrc_d;
            vlSelf->__PVT__ex_Rrs1 = vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                [(0x1fU & (vlSelf->__PVT__id_inst >> 0xfU))];
            vlSelf->__PVT__exu_isSext = vlSelf->__PVT__IDU__DOT__isSext_d;
            vlSelf->__PVT__exu_isTuncate = vlSelf->__PVT__IDU__DOT__isTuncate_d;
            vlSelf->__PVT__ex_Rrs2 = vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                [(0x1fU & (vlSelf->__PVT__id_inst >> 0x14U))];
        }
    }
    vlSelf->__PVT__WREADY = __Vdly__WREADY;
    vlSelf->__PVT__AWREADY = __Vdly__AWREADY;
    vlSelf->__PVT__LSU__DOT__isclint = ((0x2000000ULL 
                                         <= vlSelf->__PVT__ALUres) 
                                        & (0x200bfffULL 
                                           >= vlSelf->__PVT__ALUres));
    vlSelf->__PVT__LSU__DOT__clint_we = ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                         & (IData)(vlSelf->__PVT__mem_MemWr));
    vlSelf->__PVT__LSU__DOT__Datamem_we = ((~ (IData)(vlSelf->__PVT__LSU__DOT__isclint)) 
                                           & (IData)(vlSelf->__PVT__mem_MemWr));
    __Vtemp_hdff02329__0[0U] = (IData)(vlSelf->__PVT__mem_Rrs2);
    __Vtemp_hdff02329__0[1U] = (IData)((vlSelf->__PVT__mem_Rrs2 
                                        >> 0x20U));
    __Vtemp_hdff02329__0[2U] = 0U;
    __Vtemp_hdff02329__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,6, __Vtemp_h91298c46__0, __Vtemp_hdff02329__0, 
                  (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                            << 3U)));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
        = __Vtemp_h91298c46__0[0U];
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U] 
        = __Vtemp_h91298c46__0[1U];
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[2U] 
        = __Vtemp_h91298c46__0[2U];
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[3U] 
        = __Vtemp_h91298c46__0[3U];
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__extmask 
        = (0xffffU & ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__wmask) 
                      << (7U & (IData)(vlSelf->__PVT__ALUres))));
    if (((~ (IData)(vlSelf->__PVT__LSU__DOT__Datamem_we)) 
         & (0U != (IData)(vlSelf->__PVT__mem_MemOP)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((IData)(vlSelf->__PVT__ALUres), vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
            = (IData)(vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U] 
            = (IData)((vlSelf->__Vtask_pmem_read__4__rdata 
                       >> 0x20U));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              ((IData)(8U) 
                                                               + (IData)(vlSelf->__PVT__ALUres)), vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[2U] 
            = (IData)(vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[3U] 
            = (IData)((vlSelf->__Vtask_pmem_read__5__rdata 
                       >> 0x20U));
        VL_SHIFTR_WWI(128,128,6, __Vtemp_he6ffd419__0, vlSelf->__PVT__LSU__DOT__DataMem__DOT__data, 
                      (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                                << 3U)));
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
            = __Vtemp_he6ffd419__0[0U];
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U] 
            = __Vtemp_he6ffd419__0[1U];
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[2U] 
            = __Vtemp_he6ffd419__0[2U];
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[3U] 
            = __Vtemp_he6ffd419__0[3U];
    }
    if (vlSelf->__PVT__LSU__DOT__Datamem_we) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit((IData)(vlSelf->__PVT__ALUres), 
                                                               (((QData)((IData)(
                                                                                vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))), 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__extmask)));
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               ((IData)(8U) 
                                                                + (IData)(vlSelf->__PVT__ALUres)), 
                                                               (((QData)((IData)(
                                                                                vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[2U]))), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__extmask) 
                                                                   >> 8U)));
    }
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key 
        = ((2U & ((IData)(vlSelf->__PVT__exu_ALUct) 
                  >> 2U)) | (IData)(vlSelf->__PVT__exu_isTuncate));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->__PVT__ex_Rrs2);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->__PVT__ex_Rrs2 >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1U] 
        = vlSelf->__PVT__ex_Rrs2;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3U][2U] = 0U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                  >> 7U))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                   >> 7U))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                  >> 0xfU))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                   >> 0xfU))))) 
                         << 0x10U) | (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1U][2U] = 2U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                    : (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__mem_MemOP))
                     ? (((QData)((IData)((- (IData)(
                                                    (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                     : (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2U][2U] = 1U;
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])));
    if ((4U & (IData)(vlSelf->__PVT__mem_MemOP))) {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0U] 
            = (((- (QData)((IData)((1U & (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                          >> 7U))))) 
                << 8U) | (QData)((IData)((0xffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))));
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1U] 
            = (((- (QData)((IData)((1U & (vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                          >> 0xfU))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]))));
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2U] 
            = (((QData)((IData)((- (IData)((vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])));
    } else {
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0U] 
            = (QData)((IData)((0xffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])));
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1U] 
            = (QData)((IData)((0xffffU & vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U])));
        vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2U] 
            = (QData)((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__data[0U]));
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->__PVT__exu_ALUBsr) 
                               == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->__PVT__exu_ALUBsr) == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__exu_ALUBsr) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_ALUBsr) == 
              vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__exu_ALUBsr) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_ALUBsr) == 
              vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit)
                                                   ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out
                                                   : 0ULL);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                               == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
                               [0U])))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list
           [0U]);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit 
        = ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
           == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
           [0U]);
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                                  == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list
              [1U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
              [1U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                                  == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list
              [2U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
              [2U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
                                  == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list
              [3U]));
    vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit 
        = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__mem_MemOP)) 
              == vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list
              [3U]));
    vlSelf->__PVT__LSU__DOT__dataMem_out = ((IData)(vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit)
                                             ? vlSelf->__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out
                                             : 0ULL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xcU] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
           & ((IData)(vlSelf->__PVT__exu_isTuncate)
               ? 0x1fU : 0x3fU));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
        = ((- (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add))) 
           ^ vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__memout = ((IData)(vlSelf->__PVT__LSU__DOT__isclint)
                              ? ((- (QData)((IData)(
                                                    ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                                     & ((~ (IData)(vlSelf->__PVT__mem_MemWr)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->__PVT__mem_MemOP))))))) 
                                 & ((0x200bff8ULL == vlSelf->__PVT__ALUres)
                                     ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime
                                     : ((0x2004000ULL 
                                         == vlSelf->__PVT__ALUres)
                                         ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                         : 0ULL))) : vlSelf->__PVT__LSU__DOT__dataMem_out);
}

void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hdffffab9__0;
    VlWide<3>/*95:0*/ __Vtemp_h578f13e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h427c0a1d__0;
    VlWide<3>/*95:0*/ __Vtemp_h216c2d11__0;
    VlWide<3>/*95:0*/ __Vtemp_hf9de676f__0;
    // Body
    vlSelf->__PVT__wb_RegWr = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__lsu_Regwr));
    vlSelf->__PVT__wb_IntrEn = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__mem_IntrEn));
    vlSelf->witf__DOT____VdfgTmp_h08e2d86c__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (7U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h0d5c35c9__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (6U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h46770a1e__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (5U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h467ad5de__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (4U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h0b2ef0b4__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (3U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h0d4e02d0__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (2U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h0d32c217__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (1U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h0d36223a__0 = ((IData)(vlSelf->__PVT__wb_RegWr) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena 
        = ((7U == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)) 
           & (IData)(vlSelf->__PVT__wb_RegWr));
    vlSelf->__PVT__lsu_Regwr = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__exu_RegWr));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__wb_inst = 0U;
        vlSelf->__PVT__wb_pc = 0ULL;
    } else {
        vlSelf->__PVT__wb_inst = vlSelf->__PVT__lsu_inst;
        vlSelf->__PVT__wb_pc = vlSelf->__PVT__lsu_pc;
    }
    if ((0x100073U == vlSelf->__PVT__wb_inst)) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
    vlSelf->__PVT__mem_IntrEn = ((~ (IData)(vlSymsp->TOP.rst)) 
                                 & (IData)(vlSelf->__PVT__exu_IntrEn));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_nxt 
        = ((IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__witf__DOT__rptr_r))));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__lsu_inst = 0U;
        vlSelf->__PVT__lsu_pc = 0ULL;
        vlSelf->__PVT__exu_RegWr = 0U;
        vlSelf->__PVT__ex_inst = 0U;
        vlSelf->__PVT__exu_IntrEn = 0U;
        vlSelf->__PVT__ex_pc = 0ULL;
    } else {
        vlSelf->__PVT__lsu_inst = vlSelf->__PVT__ex_inst;
        vlSelf->__PVT__lsu_pc = vlSelf->__PVT__ex_pc;
        if (vlSelf->__PVT__IDU__DOT__popline_wen) {
            vlSelf->__PVT__exu_RegWr = vlSelf->__PVT__RegWr_d;
            vlSelf->__PVT__ex_inst = vlSelf->__PVT__id_inst;
            vlSelf->__PVT__exu_IntrEn = vlSelf->__PVT__IDU__DOT__IntrEn_d;
            vlSelf->__PVT__ex_pc = vlSelf->__PVT__id_pc;
        }
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA = ((IData)(vlSelf->__PVT__exu_ALUAsr)
                                                   ? vlSelf->__PVT__ex_Rrs1
                                                   : vlSelf->__PVT__ex_pc);
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__id_inst = 0U;
        vlSelf->__PVT__id_pc = 0x7ffffff8ULL;
    } else if (vlSelf->__PVT__IFU__DOT__popline_wen) {
        vlSelf->__PVT__id_inst = ((0U == (7U & (IData)(vlSelf->__PVT__IFU__DOT__NextPC)))
                                   ? (IData)(vlSelf->__PVT__ram_rdata)
                                   : (IData)((vlSelf->__PVT__ram_rdata 
                                              >> 0x20U)));
        vlSelf->__PVT__id_pc = vlSelf->__PVT__IFU__DOT__NextPC;
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->__PVT__ram_axi_lite_u__DOT__raddr, vlSelf->__Vtask_pmem_read__2__rdata);
    vlSelf->__PVT__ram_rdata = vlSelf->__Vtask_pmem_read__2__rdata;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][0U] 
        = (IData)(VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][1U] 
        = (IData)((VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][0U] 
        = (IData)(VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][1U] 
        = (IData)((VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][0U] 
        = (IData)(VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][1U] 
        = (IData)((VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = (IData)(((IData)(vlSelf->__PVT__exu_isTuncate)
                    ? (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                        ? ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                           >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                        : 0U))) : (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                   >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = (IData)((((IData)(vlSelf->__PVT__exu_isTuncate)
                     ? (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                         ? ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                            >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                         : 0U))) : 
                    (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                     >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           << (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__XOR = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 ^ vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__OR = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                | vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__AND = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           | vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xbU] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           ^ vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xfU] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           + (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
              + (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3U] 
        = VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2U] 
        = VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           << (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           << (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3U] 
        = VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__VdfgTmp_h7418121e__0 = VL_DIVS_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h77a512b4__0 = VL_DIV_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h7492a8f3__0 = VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h749ef897__0 = VL_MODDIV_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    __Vtemp_hdffffab9__0[0U] = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA);
    __Vtemp_hdffffab9__0[1U] = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                        >> 0x20U));
    __Vtemp_hdffffab9__0[2U] = 0U;
    __Vtemp_h578f13e6__0[0U] = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin);
    __Vtemp_h578f13e6__0[1U] = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                        >> 0x20U));
    __Vtemp_h578f13e6__0[2U] = 0U;
    __Vtemp_h427c0a1d__0[0U] = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add;
    __Vtemp_h427c0a1d__0[1U] = 0U;
    __Vtemp_h427c0a1d__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h216c2d11__0, __Vtemp_h578f13e6__0, __Vtemp_h427c0a1d__0);
    VL_ADD_W(3, __Vtemp_hf9de676f__0, __Vtemp_hdffffab9__0, __Vtemp_h216c2d11__0);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS = 
        ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add) 
         ^ __Vtemp_hf9de676f__0[2U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                   + 
                                                   (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                    + (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->__PVT__id_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->__PVT__id_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->__PVT__id_inst 
                                                             >> 0x14U)))))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->__PVT__id_inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->__PVT__id_inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->__PVT__id_inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->__PVT__id_inst 
                                                              >> 0x14U)))))))) 
                   >> 0x20U));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0U][2U] = 6U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1U][0U] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->__PVT__id_inst 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->__PVT__id_inst)))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1U][1U] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->__PVT__id_inst 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->__PVT__id_inst)))) 
                   >> 0x20U));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1U][2U] = 5U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__id_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__PVT__id_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__PVT__id_inst 
                                                            >> 7U)))))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                         >> 0x1fU)))) 
                     << 0xdU) | (QData)((IData)(((0x1000U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__id_inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->__PVT__id_inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->__PVT__id_inst 
                                                             >> 7U)))))))) 
                   >> 0x20U));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2U][2U] = 4U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__PVT__id_inst 
                                                      >> 7U)))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->__PVT__id_inst 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3U][2U] = 3U;
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__PVT__id_inst 
                                                >> 0x14U)))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)((vlSelf->__PVT__id_inst 
                                                 >> 0x14U)))) 
                   >> 0x20U));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
        = ((IData)(vlSelf->__PVT__exu_isTuncate) ? (QData)((IData)(
                                                                   ((0x1fU 
                                                                     >= (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                     >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                     : 0U)))
            : (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
               >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt)));
    if (((((((((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->__PVT__id_inst))))) 
               | (0x17U == (0x7fU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->__PVT__id_inst)))))) 
              | (0x37U == (0x7fU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->__PVT__id_inst)))))) 
             | (0x6fU == (0x7fU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))))) 
            | (0x67U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))))) 
           | (0x1a3U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))))) 
          | (0x183U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->__PVT__id_inst)))))) 
         | (0x33U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                   >> 0xfU)) | ((0x380U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->__PVT__id_inst)))))) {
        if ((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x17U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->__PVT__id_inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x37U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->__PVT__id_inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x6fU == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->__PVT__id_inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x67U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x1a3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 1U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 4U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x183U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 4U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        }
    } else if (((((((((0x8033U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))) 
                      | (0x193U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->__PVT__id_inst)))))) 
                     | (0x63U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->__PVT__id_inst)))))) 
                    | (0xe3U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->__PVT__id_inst)))))) 
                   | (0x103U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->__PVT__id_inst)))))) 
                  | (0x303U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                 | (0x3bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->__PVT__id_inst))))) 
                | (0xa3U == (0x3ffU & ((0x1fc00U & 
                                        (vlSelf->__PVT__id_inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->__PVT__id_inst))))))) {
        if ((0x8033U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->__PVT__id_inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x193U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x63U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0xe3U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x103U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 5U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x303U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 1U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x3bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 1U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 2U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        }
    } else if (((((((((0x8293U == (0x1fbffU & ((0x1fc00U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 0xfU)) 
                                               | ((0x380U 
                                                   & (vlSelf->__PVT__id_inst 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & vlSelf->__PVT__id_inst))))) 
                      | (0x203U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->__PVT__id_inst)))))) 
                     | (0x393U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->__PVT__id_inst)))))) 
                    | (0xbbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->__PVT__id_inst))))) 
                   | (0x3b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->__PVT__id_inst))))) 
                  | (0x1b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->__PVT__id_inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->__PVT__id_inst))))) 
                 | (0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) 
                | (0x82bbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        if ((0x8293U == (0x1fbffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x203U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 3U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x393U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0xbbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x3b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x1b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        }
    } else if (((((((((0x333U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->__PVT__id_inst)))) 
                      | (0x23U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->__PVT__id_inst)))))) 
                     | (0x1bU == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->__PVT__id_inst)))))) 
                    | (0x2e3U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->__PVT__id_inst)))))) 
                   | (0x263U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->__PVT__id_inst)))))) 
                  | (0x123U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                 | (0x43bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) 
                | (0x63bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        if ((0x333U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                     >> 0xfU)) | ((0x380U 
                                                   & (vlSelf->__PVT__id_inst 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x23U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 1U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 3U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x1bU == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x2e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x263U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x123U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 1U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 1U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x43bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        }
    } else if (((((((((0x803bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))) 
                      | (0x73bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->__PVT__id_inst))))) 
                     | (0x363U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->__PVT__id_inst)))))) 
                    | (0x133U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->__PVT__id_inst))))) 
                   | (0x83U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                  | (0x283U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                 | (0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                | (0x293U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst))))))) {
        if ((0x803bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->__PVT__id_inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x73bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x363U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x133U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x83U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->__PVT__id_inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 6U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x283U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 2U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        }
    } else if (((((((((0x9bU == (0x1fbffU & ((0x1fc00U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->__PVT__id_inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->__PVT__id_inst))))) 
                      | (0x829bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->__PVT__id_inst))))) 
                     | (0x433U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst))))) 
                    | (0x29bU == (0x1fbffU & ((0x1fc00U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->__PVT__id_inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->__PVT__id_inst)))))) 
                   | (0x2bbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->__PVT__id_inst))))) 
                  | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->__PVT__id_inst)))))) 
                 | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) 
                | (0x6b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->__PVT__id_inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        if ((0x9bU == (0x1fbffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x829bU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->__PVT__id_inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x433U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x29bU == (0x1fbffU & ((0x1fc00U 
                                            & (vlSelf->__PVT__id_inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->__PVT__id_inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x2bbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->__PVT__id_inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->__PVT__id_inst))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->__PVT__id_inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->__PVT__id_inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->__PVT__id_inst)))))) {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        } else {
            vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
            vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
            vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
            vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        }
    } else if ((0x7b3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->__PVT__id_inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->__PVT__id_inst))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else if ((0x6bbU == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->__PVT__id_inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->__PVT__id_inst))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 1U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 1U;
    } else if ((0x233U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->__PVT__id_inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->__PVT__id_inst))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else if ((3U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->__PVT__id_inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 7U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else if ((0x313U == (0x3ffU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->__PVT__id_inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->__PVT__id_inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->__PVT__id_inst))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else if ((0x73U == (0x7fU & ((0x1fc00U & (vlSelf->__PVT__id_inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->__PVT__id_inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->__PVT__id_inst)))))) {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
    } else {
        vlSelf->__PVT__IDU__DOT__MemWr_d = 0U;
        vlSelf->__PVT__IDU__DOT__MemOP_d = 0U;
        vlSelf->__PVT__IDU__DOT__isTuncate_d = 0U;
        vlSelf->__PVT__IDU__DOT__isSext_d = 0U;
        Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
        = ((IData)(vlSelf->__PVT__exu_isTuncate) ? 
           ((((QData)((IData)((- (IData)((1U & (IData)(
                                                       (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                        >> 0x1fU))))))) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
            >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
            : vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra);
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__IFU__DOT__NextPC = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__IFU__DOT__popline_wen) {
        vlSelf->__PVT__IFU__DOT__NextPC = vlSelf->__PVT__IFU__DOT__dpc;
    }
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out 
        = (((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list
            [0U]) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit 
        = ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__IntrEn_d = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit) 
                                         & (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                       == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list
                       [0U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit 
        = ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list
                          [1U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__RegSrc_d = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit)
                                          ? (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out)
                                          : 0U);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0U] 
        = (((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                >> 0x1fU)))) << 0x15U) 
           | (QData)((IData)(((0x100000U & (vlSelf->__PVT__id_inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->__PVT__id_inst) 
                                 | ((0x800U & (vlSelf->__PVT__id_inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->__PVT__id_inst 
                                                 >> 0x14U))))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1U] 
        = (((QData)((IData)((- (IData)((vlSelf->__PVT__id_inst 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->__PVT__id_inst))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2U] 
        = (((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                >> 0x1fU)))) << 0xdU) 
           | (QData)((IData)(((0x1000U & (vlSelf->__PVT__id_inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->__PVT__id_inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->__PVT__id_inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->__PVT__id_inst 
                                                >> 7U))))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3U] 
        = (((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)(((0xfe0U & (vlSelf->__PVT__id_inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->__PVT__id_inst 
                                          >> 7U))))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4U] 
        = (((- (QData)((IData)((vlSelf->__PVT__id_inst 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->__PVT__id_inst 
                              >> 0x14U))));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                       == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                       [0U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [1U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [2U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [3U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [3U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [4U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [4U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [5U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [5U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [6U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [6U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [7U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [7U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [8U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [8U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [9U]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [9U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [0xaU]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [0xaU]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__PVT__id_inst) 
                          == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
                          [0xbU]))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list
              [0xbU]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->__PVT__id_inst) == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list
              [0xbU]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit)
            ? (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out)
            : 0U);
    vlSelf->__PVT__witf__DOT__rd_match_rs1idx = ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                                   & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__id_inst 
                                                          >> 0xfU)))) 
                                                  << 7U) 
                                                 | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                                      & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->__PVT__id_inst 
                                                             >> 0xfU)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                                         & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->__PVT__id_inst 
                                                                >> 0xfU)))) 
                                                        << 5U) 
                                                       | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                            & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->__PVT__id_inst 
                                                                   >> 0xfU)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                               & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->__PVT__id_inst 
                                                                      >> 0xfU)))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                                  & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->__PVT__id_inst 
                                                                         >> 0xfU)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                                     & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->__PVT__id_inst 
                                                                            >> 0xfU)))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                                      & ((IData)(vlSelf->witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->__PVT__id_inst 
                                                                             >> 0xfU)))))))))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xbU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__XOR);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xbU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__XOR 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xbU][2U] = 4U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__OR);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__OR 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9U][2U] = 6U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__AND);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__AND 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8U][2U] = 7U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4U][2U] = 0xbU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5U][2U] = 0xaU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6U][2U] = 9U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7U][2U] = 8U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1U][0U] 
        = vlSelf->__VdfgTmp_h7418121e__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h7418121e__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h77a512b4__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h77a512b4__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][0U] 
        = vlSelf->__VdfgTmp_h7492a8f3__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h7492a8f3__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h749ef897__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h749ef897__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = (IData)(((IData)(vlSelf->__PVT__exu_isTuncate)
                    ? ((((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                       >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                    : vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = (IData)((((IData)(vlSelf->__PVT__exu_isTuncate)
                     ? ((((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                        >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                     : vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5U] 
        = (2U | (0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6U] 
        = (1U & (~ (IData)((0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder))));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5U] 
        = (4U | ((0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder)
                  ? 3U : 1U));
    if ((0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder)) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] = 1U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] = 3U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] = 1U;
    } else {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] = 3U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] = 1U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] = 3U;
    }
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xfU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xfU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xfU][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5U] 
        = (0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6U] 
        = (1U & (~ (IData)((0U != vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS = (1U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                               >> 0x3fU)) 
                                                      ^ 
                                                      (((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                    >> 0x3fU))) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                                    >> 0x3fU)))) 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                                      >> 0x3fU))) 
                                                          != 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                      >> 0x3fU)))))));
    vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0 
        = ((6U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
           | (0x67U == (0x7fU & vlSelf->__PVT__id_inst)));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
                               == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
                               [0U])))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
           == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
                                  == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
                                  == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
                                  == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
                                  == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
                                  [4U])))) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list
              [4U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list
              [4U]));
    vlSelf->__PVT__IDU__DOT__Imm_d = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit)
                                       ? vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out
                                       : 0ULL);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out 
        = (((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
            == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
            [0U]) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
           == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
               == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
               [1U]) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
               == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
               [2U]) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
               == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
               [3U]) & vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop) 
              == vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->__PVT__RegWr_d = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit) 
                              & (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    vlSelf->IDU__DOT____VdfgTmp_h23869681__0 = (1U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__witf__DOT__rd_match_rs1idx)))) 
                                                   & (~ (IData)(vlSelf->__PVT__witf_full))));
    vlSelf->__PVT__idu_ready = ((IData)(vlSelf->IDU__DOT____VdfgTmp_hd66fa622__0) 
                                & ((~ (IData)(vlSelf->__PVT__witf_full)) 
                                   & (~ (IData)((0U 
                                                 != (IData)(vlSelf->__PVT__witf__DOT__rd_match_rs1idx))))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                               == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit 
        = ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
           == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit)
                                                  ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out
                                                  : 0ULL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                               == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit 
        = ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
           == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit)
                                                  ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out
                                                  : 0ULL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                               == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
           == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit)
                                                    ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out
                                                    : 0ULL);
    if ((8U & (IData)(vlSelf->__PVT__exu_ALUct))) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS;
        vlSelf->__PVT__EXU__DOT__Less = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS;
    } else {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS;
        vlSelf->__PVT__EXU__DOT__Less = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS;
    }
    vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__witf__DOT__rd_match_rs1idx)))) 
           & (IData)(vlSelf->__PVT__RegWr_d));
    vlSelf->__PVT__IDU__DOT__popline_wen = ((IData)(vlSelf->IDU__DOT____VdfgTmp_hd66fa622__0) 
                                            & ((IData)(vlSelf->__PVT__ifu_valid) 
                                               & ((IData)(vlSelf->__PVT__idu_ready) 
                                                  & (IData)(vlSelf->IDU__DOT____VdfgTmp_h23869681__0))));
    vlSelf->__PVT__IFU__DOT__popline_wen = (1U & ((~ (IData)(vlSelf->__PVT__ifu_valid)) 
                                                  | ((IData)(vlSelf->__PVT__idu_ready) 
                                                     & (IData)(vlSelf->__PVT__ifu_valid))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2U][2U] = 0xdU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3U][2U] = 0xcU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2U] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3U] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__DIV;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0U][2U] = 0xfU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1U][2U] = 0xeU;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0U] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1U] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__REM;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xaU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xaU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xaU][2U] = 5U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xeU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xeU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xeU][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xaU] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xeU] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__shift;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2U] 
        = (0xaU | (1U & (~ (IData)(vlSelf->__PVT__EXU__DOT__Less))));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3U] 
        = (8U | (IData)(vlSelf->__PVT__EXU__DOT__Less));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] 
        = (0x14U | ((IData)(vlSelf->__PVT__EXU__DOT__Less)
                     ? 1U : 3U));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3U] 
        = (0x10U | ((IData)(vlSelf->__PVT__EXU__DOT__Less)
                     ? 3U : 1U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xdU][0U] 
        = vlSelf->__PVT__EXU__DOT__Less;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xdU][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xdU][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->__PVT__EXU__DOT__Less)));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xdU] 
        = (QData)((IData)(vlSelf->__PVT__EXU__DOT__Less));
    if (vlSelf->__PVT__EXU__DOT__Less) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 1U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 3U;
    } else {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 3U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 1U;
    }
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (7U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (6U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (5U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (4U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (3U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (2U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (1U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5 
        = ((IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5) 
           & (0U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena 
        = ((7U == (IData)(vlSelf->__PVT__witf__DOT__wptr_r)) 
           & (IData)(vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
    vlSelf->__PVT__IFU__DOT__ifu_valid_next = ((((~ (IData)(vlSelf->__PVT__idu_ready)) 
                                                 & (IData)(vlSelf->__PVT__ifu_valid)) 
                                                | (IData)(vlSelf->__PVT__IFU__DOT__popline_wen)) 
                                               & (0x7ffffffcULL 
                                                  != vlSelf->__PVT__IFU__DOT__NextPC));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = (((IData)(vlSelf->__PVT__exu_Branch) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
            [0U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__exu_Branch) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [1U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [2U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [3U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [4U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [5U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__exu_Branch) == 
               vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [6U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [6U]));
    vlSelf->__PVT__ifu_is_jump = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
                                  & (IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                               == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
           == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [4U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [5U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [6U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [7U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [7U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [8U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [8U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [9U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [9U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xaU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xaU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xbU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xbU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xbU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xcU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xcU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xcU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xdU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xdU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xdU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xeU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xeU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xeU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
                                  [0xfU])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list
              [0xfU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit) 
           | ((IData)(vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key) 
              == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list
              [0xfU]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUout = 
        ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit)
          ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out
          : 0ULL);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                       == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                       [0U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__exu_Branch) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [1U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [2U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [3U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [4U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [5U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__exu_Branch) 
                          == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [6U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__exu_Branch) == 
              vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [6U]));
    vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_nxt 
        = ((IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__witf__DOT__wptr_r))));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp 
        = (0xfffffffffffffffeULL & (((2U & (IData)(vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->__PVT__exu_Imm
                                      : 4ULL) + ((1U 
                                                  & (IData)(vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                  ? vlSelf->__PVT__ex_pc
                                                  : vlSelf->__PVT__ex_Rrs1)));
    vlSelf->__PVT__IFU__DOT__dpc = ((IData)(vlSymsp->TOP__top__WB.__PVT__isIntrPC)
                                     ? vlSymsp->TOP__top__WB.__PVT__IntrPC
                                     : ((IData)(vlSelf->__PVT__ifu_is_jump)
                                         ? ((0ULL == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                             ? 0x80000000ULL
                                             : vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                         : (4ULL + vlSelf->__PVT__IFU__DOT__NextPC)));
}
