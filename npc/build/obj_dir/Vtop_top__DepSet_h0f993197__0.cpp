// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__dout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = vlSymsp->TOP__top__IntrUnit.__PVT__dout;
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__RegSrc) 
                                                                   == 
                                                                   vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegSrc) 
                                           == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSelf->__PVT__RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSelf->__PVT__RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__RegWdata = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit)
                                ? vlSelf->__PVT__RegWsrcMux__DOT__lut_out
                                : 0ULL);
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
    __Vtask_pmem_read__2__rdata = 0;
    CData/*0:0*/ __Vdly__AWREADY;
    __Vdly__AWREADY = 0;
    CData/*0:0*/ __Vdly__WREADY;
    __Vdly__WREADY = 0;
    CData/*1:0*/ __Vdly__BRESP;
    __Vdly__BRESP = 0;
    CData/*0:0*/ __Vdly__BVALID;
    __Vdly__BVALID = 0;
    CData/*4:0*/ __Vdlyvdim0__RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__RegisterFile__DOT__rf__v0 = 0;
    QData/*63:0*/ __Vdlyvval__RegisterFile__DOT__rf__v0;
    __Vdlyvval__RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RegisterFile__DOT__rf__v0;
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0;
    // Body
    __Vdly__AWREADY = vlSelf->__PVT__AWREADY;
    __Vdly__WREADY = vlSelf->__PVT__WREADY;
    vlSelf->__Vdly__ram_rvalid = vlSelf->__PVT__ram_rvalid;
    __Vdly__BVALID = vlSelf->__PVT__BVALID;
    __Vdly__BRESP = vlSelf->__PVT__BRESP;
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0U;
    vlSelf->__PVT__clintU__DOT__mtime = (((IData)(vlSelf->__PVT__clint_we) 
                                          & (0x200bff8ULL 
                                             == vlSelf->__PVT__ALUres))
                                          ? vlSelf->__PVT__R_rs2
                                          : (1ULL + vlSelf->__PVT__clintU__DOT__mtime));
    if (((IData)(vlSelf->__PVT__RegWr) & (0U != (0x1fU 
                                                 & (vlSelf->Inst 
                                                    >> 7U))))) {
        __Vdlyvval__RegisterFile__DOT__rf__v0 = vlSelf->__PVT__RegWdata;
        __Vdlyvset__RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__RegisterFile__DOT__rf__v0 = (0x1fU 
                                                  & (vlSelf->Inst 
                                                     >> 7U));
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__BRESP = 0U;
        __Vdly__BVALID = 0U;
    } else if (vlSelf->__PVT__ram_axi_lite_u__DOT__wdata_done) {
        __Vdly__BRESP = 0U;
        __Vdly__BVALID = 1U;
    } else if (((IData)(vlSelf->__PVT__BVALID) & (IData)(vlSelf->__PVT__BREADY))) {
        __Vdly__BRESP = vlSelf->__PVT__BRESP;
        __Vdly__BVALID = 0U;
    } else {
        __Vdly__BRESP = vlSelf->__PVT__BRESP;
        __Vdly__BVALID = vlSelf->__PVT__BVALID;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__ram_rvalid = 0U;
        vlSelf->__PVT__ram_rresp = 0U;
    } else if (vlSelf->__PVT__ifu_arvalid) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->__PVT__ifu_raddr, __Vtask_pmem_read__2__rdata);
        vlSelf->__PVT__ram_rdata = __Vtask_pmem_read__2__rdata;
        vlSelf->__PVT__ram_rresp = 0U;
        vlSelf->__Vdly__ram_rvalid = 1U;
    } else {
        vlSelf->__Vdly__ram_rvalid = 0U;
    }
    if (((IData)(vlSelf->__PVT__clint_we) & (0x2004000ULL 
                                             == vlSelf->__PVT__ALUres))) {
        vlSelf->__PVT__clintU__DOT__mtimecmp = vlSelf->__PVT__R_rs2;
    }
    vlSelf->__PVT__BRESP = __Vdly__BRESP;
    vlSelf->__PVT__BVALID = __Vdly__BVALID;
    if (__Vdlyvset__RegisterFile__DOT__rf__v0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[__Vdlyvdim0__RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__RegisterFile__DOT__rf__v0;
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
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__ifu_raddr = 0x80000000U;
        vlSelf->__PVT__ram_axi_lite_u__DOT__waddr = 0U;
        __Vdly__AWREADY = 1U;
    } else {
        vlSelf->__PVT__ifu_raddr = (IData)(vlSelf->__PVT__IFU__DOT__dpc);
        if (((IData)(vlSelf->__PVT__AWVALID) & (IData)(vlSelf->__PVT__AWREADY))) {
            vlSelf->__PVT__ram_axi_lite_u__DOT__waddr 
                = vlSelf->__PVT__AWADDR;
            vlSelf->__PVT__ram_axi_lite_u__DOT__wstrb 
                = vlSelf->__PVT__WSTRB;
            __Vdly__AWREADY = 0U;
        } else {
            __Vdly__AWREADY = 1U;
        }
    }
    vlSelf->__PVT__ifu_arvalid = (1U & (~ (IData)(vlSymsp->TOP.rst)));
    vlSelf->__PVT__WREADY = __Vdly__WREADY;
    vlSelf->__PVT__AWREADY = __Vdly__AWREADY;
}

void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hec30e3e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h0e998b61__0;
    VlWide<3>/*95:0*/ __Vtemp_h9364fc9b__0;
    VlWide<3>/*95:0*/ __Vtemp_he21f6696__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ec28fdb__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ef81276__0;
    VlWide<4>/*127:0*/ __Vtemp_he987c3e7__0;
    VlWide<4>/*127:0*/ __Vtemp_heef993b4__0;
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->pc = 0x7ffffff8ULL;
        vlSelf->Inst = 0U;
        vlSelf->__PVT__IFU__DOT__NextPC = 0x7ffffffcULL;
    } else {
        vlSelf->pc = vlSelf->__PVT__IFU__DOT__NextPC;
        if (vlSelf->__PVT__ram_rvalid) {
            vlSelf->Inst = ((0U == (7U & (IData)(vlSelf->__PVT__IFU__DOT__NextPC)))
                             ? (IData)(vlSelf->__PVT__ram_rdata)
                             : (IData)((vlSelf->__PVT__ram_rdata 
                                        >> 0x20U)));
        }
        vlSelf->__PVT__IFU__DOT__NextPC = vlSelf->__PVT__IFU__DOT__dpc;
    }
    vlSelf->__PVT__ram_rvalid = vlSelf->__Vdly__ram_rvalid;
    if ((0x100073U == vlSelf->Inst)) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->Inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->Inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->Inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->Inst 
                                                             >> 0x14U)))))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->Inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->Inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->Inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->Inst 
                                                              >> 0x14U)))))))) 
                   >> 0x20U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][2U] = 6U;
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][0U] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->Inst 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->Inst)))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][1U] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->Inst 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->Inst)))) 
                   >> 0x20U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][2U] = 5U;
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->Inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->Inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->Inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->Inst 
                                                            >> 7U)))))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0xdU) | (QData)((IData)(((0x1000U 
                                                  & (vlSelf->Inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->Inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->Inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->Inst 
                                                             >> 7U)))))))) 
                   >> 0x20U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][2U] = 4U;
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->Inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->Inst 
                                                      >> 7U)))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->Inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->Inst 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][2U] = 3U;
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->Inst 
                                                >> 0x14U)))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)((vlSelf->Inst 
                                                 >> 0x14U)))) 
                   >> 0x20U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][2U] = 2U;
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list
                       [0U]))) & vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list
                          [1U]))) & vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list
              [1U]));
    vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list
              [1U]));
    vlSelf->__PVT__RegSrc = ((IData)(vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__hit)
                              ? (IData)(vlSelf->__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out)
                              : 0U);
    vlSelf->__PVT__R_rs2 = vlSelf->__PVT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0x14U))];
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__lut_out 
        = (((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__key_list
            [0U]) & vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__data_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__key_list
           [0U]);
    vlSelf->__PVT__IntrEn = ((IData)(vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__hit) 
                             & (IData)(vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    if (((((((((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst))))) 
               | (0x17U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) 
              | (0x37U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst)))))) 
             | (0x6fU == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
            | (0x67U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
           | (0x1a3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
          | (0x183U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst)))))) 
         | (0x33U == ((0x1fc00U & (vlSelf->Inst >> 0xfU)) 
                      | ((0x380U & (vlSelf->Inst >> 5U)) 
                         | (0x7fU & vlSelf->Inst)))))) {
        if ((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x17U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x37U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x6fU == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x67U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x1a3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 4U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x183U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 4U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        }
    } else if (((((((((0x8033U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
                      | (0x193U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                     | (0x63U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                    | (0xe3U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                   | (0x103U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                  | (0x303U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x3bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) 
                | (0xa3U == (0x3ffU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst))))))) {
        if ((0x8033U == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x193U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x63U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0xe3U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x103U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 5U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x303U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 1U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x3bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else {
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 2U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        }
    } else if (((((((((0x8293U == (0x1fbffU & ((0x1fc00U 
                                                & (vlSelf->Inst 
                                                   >> 0xfU)) 
                                               | ((0x380U 
                                                   & (vlSelf->Inst 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & vlSelf->Inst))))) 
                      | (0x203U == (0x3ffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                     | (0x393U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                    | (0xbbU == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                   | (0x3b3U == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                  | (0x1b3U == ((0x1fc00U & (vlSelf->Inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->Inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->Inst))))) 
                 | (0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) 
                | (0x82bbU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst)))))) {
        if ((0x8293U == (0x1fbffU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x203U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 3U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x393U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0xbbU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x3b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x1b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x213U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        }
    } else if (((((((((0x333U == ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst)))) 
                      | (0x23U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                     | (0x1bU == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                    | (0x2e3U == (0x3ffU & ((0x1fc00U 
                                             & (vlSelf->Inst 
                                                >> 0xfU)) 
                                            | ((0x380U 
                                                & (vlSelf->Inst 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & vlSelf->Inst)))))) 
                   | (0x263U == (0x3ffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) 
                  | (0x123U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x43bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) 
                | (0x63bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst)))))) {
        if ((0x333U == ((0x1fc00U & (vlSelf->Inst >> 0xfU)) 
                        | ((0x380U & (vlSelf->Inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x23U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 3U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x1bU == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x2e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x263U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x123U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 1U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x43bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        }
    } else if (((((((((0x803bU == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
                      | (0x73bU == ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst))))) 
                     | (0x363U == (0x3ffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst)))))) 
                    | (0x133U == ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst))))) 
                   | (0x83U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                  | (0x283U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                | (0x293U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst))))))) {
        if ((0x803bU == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x73bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x363U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x133U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x83U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 6U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x283U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 2U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x93U == (0x1fbffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        }
    } else if (((((((((0x9bU == (0x1fbffU & ((0x1fc00U 
                                              & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                             | ((0x380U 
                                                 & (vlSelf->Inst 
                                                    >> 5U)) 
                                                | (0x7fU 
                                                   & vlSelf->Inst))))) 
                      | (0x829bU == ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst))))) 
                     | (0x433U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst))))) 
                    | (0x29bU == (0x1fbffU & ((0x1fc00U 
                                               & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                              | ((0x380U 
                                                  & (vlSelf->Inst 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->Inst)))))) 
                   | (0x2bbU == ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst))))) 
                  | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                           & (vlSelf->Inst 
                                              >> 0xfU)) 
                                          | ((0x380U 
                                              & (vlSelf->Inst 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->Inst)))))) 
                 | (0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) 
                | (0x6b3U == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst)))))) {
        if ((0x9bU == (0x1fbffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x829bU == ((0x1fc00U & (vlSelf->Inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->Inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x433U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x29bU == (0x1fbffU & ((0x1fc00U 
                                            & (vlSelf->Inst 
                                               >> 0xfU)) 
                                           | ((0x380U 
                                               & (vlSelf->Inst 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x2bbU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x3e3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        }
    } else if ((0x7b3U == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x6bbU == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 1U;
        vlSelf->__PVT__isSext = 1U;
    } else if ((0x233U == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 7U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x313U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->Inst 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->Inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->Inst))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x73U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else {
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
        Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
    }
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[1U] 
        = vlSelf->__PVT__RegisterFile__DOT__rf[(0x1fU 
                                                & (vlSelf->Inst 
                                                   >> 0x14U))];
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0U] 
        = (((- (QData)((IData)((vlSelf->Inst >> 0x1fU)))) 
            << 0x15U) | (QData)((IData)(((0x100000U 
                                          & (vlSelf->Inst 
                                             >> 0xbU)) 
                                         | ((0xff000U 
                                             & vlSelf->Inst) 
                                            | ((0x800U 
                                                & (vlSelf->Inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->Inst 
                                                     >> 0x14U))))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1U] 
        = (((QData)((IData)((- (IData)((vlSelf->Inst 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->Inst))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2U] 
        = (((- (QData)((IData)((vlSelf->Inst >> 0x1fU)))) 
            << 0xdU) | (QData)((IData)(((0x1000U & 
                                         (vlSelf->Inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->Inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->Inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->Inst 
                                                    >> 7U))))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3U] 
        = (((- (QData)((IData)((vlSelf->Inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)(((0xfe0U & (vlSelf->Inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->Inst 
                                            >> 7U))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4U] 
        = (((- (QData)((IData)((vlSelf->Inst >> 0x1fU)))) 
            << 0xcU) | (QData)((IData)((vlSelf->Inst 
                                        >> 0x14U))));
    vlSelf->__PVT__R_rs1 = vlSelf->__PVT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0xfU))];
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                       [0U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [1U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [1U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [2U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [2U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [3U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [3U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [4U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [4U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [5U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [5U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [6U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [6U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [7U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [7U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [8U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [8U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [9U]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [9U]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [0xaU]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [0xaU]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
                          [0xbU]))) & vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__data_list
              [0xbU]));
    vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__key_list
              [0xbU]));
    vlSelf->__PVT__Extop = ((IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__hit)
                             ? (IData)(vlSelf->__PVT__ContrGen__DOT__deExtop__DOT__lut_out)
                             : 0U);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->__PVT__R_rs2);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->__PVT__R_rs2 >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((- (IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                       == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
                       [0U]))) & vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__data_list
           [0U]);
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit 
        = ((3U & (IData)(vlSelf->__PVT__MemOP)) == 
           vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
           [0U]);
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                          == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
                          [1U]))) & vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__data_list
              [1U]));
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__MemOP)) 
              == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
              [1U]));
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                          == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
                          [2U]))) & vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__data_list
              [2U]));
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__MemOP)) 
              == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
              [2U]));
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                          == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
                          [3U]))) & vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__data_list
              [3U]));
    vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit) 
           | ((3U & (IData)(vlSelf->__PVT__MemOP)) 
              == vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__key_list
              [3U]));
    vlSelf->__PVT__DataMem__DOT__wmask = ((IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__hit)
                                           ? (IData)(vlSelf->__PVT__DataMem__DOT__deMemOP__DOT__lut_out)
                                           : 0U);
    vlSelf->__PVT__DataMem__DOT__RdEn = ((~ (IData)(vlSelf->__PVT__MemWr)) 
                                         & (0U != (IData)(vlSelf->__PVT__MemOP)));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = (((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
            [0U]) & vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
               [1U]) & vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
               [2U]) & vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
               [3U]) & vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->__PVT__RegWr = ((IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__hit) 
                            & (IData)(vlSelf->__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
    if ((4U == (IData)(vlSelf->__PVT__Extop))) {
        vlSelf->__PVT__Branch = (5U & (vlSelf->Inst 
                                       >> 0xcU));
        vlSelf->__VdfgTmp_h1f2041f1__0 = (2U | (8U 
                                                & (vlSelf->Inst 
                                                   >> 0xaU)));
    } else {
        vlSelf->__PVT__Branch = ((6U == (IData)(vlSelf->__PVT__Extop))
                                  ? 6U : ((0x67U == 
                                           (0x7fU & vlSelf->Inst))
                                           ? 7U : 2U));
        vlSelf->__VdfgTmp_h1f2041f1__0 = ((0x37U == 
                                           (0x7fU & vlSelf->Inst))
                                           ? 3U : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Inst)) 
                                                     | (0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Inst))) 
                                                    & (vlSelf->Inst 
                                                       >> 0x19U))
                                                    ? 
                                                   (0x10U 
                                                    | ((8U 
                                                        & (vlSelf->Inst 
                                                           >> 9U)) 
                                                       | (7U 
                                                          & (vlSelf->Inst 
                                                             >> 0xcU))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Inst 
                                                         >> 0xcU)))
                                                     ? 0xaU
                                                     : 
                                                    ((((vlSelf->Inst 
                                                        >> 0x1eU) 
                                                       & (0U 
                                                          != 
                                                          (0x7020U 
                                                           & vlSelf->Inst))) 
                                                      << 3U) 
                                                     | (7U 
                                                        & (vlSelf->Inst 
                                                           >> 0xcU))))));
    }
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->__PVT__Extop) 
                               == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
                               [0U])))) & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 
        ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
         [0U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__Extop) 
                                  == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 
        ((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit) 
         | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
            [1U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__Extop) 
                                  == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 
        ((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit) 
         | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
            [2U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__Extop) 
                                  == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 
        ((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit) 
         | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
            [3U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__Extop) 
                                  == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [4U])))) & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list
              [4U]));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit = 
        ((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit) 
         | ((IData)(vlSelf->__PVT__Extop) == vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list
            [4U]));
    vlSelf->__PVT__Imm = ((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__hit)
                           ? vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__lut_out
                           : 0ULL);
    vlSelf->__PVT__ALU__DOT__ALUA = ((((0x67U != (0x7fU 
                                                  & vlSelf->Inst)) 
                                       & (2U == (IData)(vlSelf->__PVT__Extop))) 
                                      | ((1U == (IData)(vlSelf->__PVT__Extop)) 
                                         | ((3U == (IData)(vlSelf->__PVT__Extop)) 
                                            | (4U == (IData)(vlSelf->__PVT__Extop)))))
                                      ? vlSelf->__PVT__R_rs1
                                      : vlSelf->pc);
    vlSelf->ContrGen__DOT____VdfgTmp_h708a31d5__0 = 
        ((6U == (IData)(vlSelf->__PVT__Extop)) | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Inst)));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->__PVT__Imm);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->__PVT__Imm >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[2U] 
        = vlSelf->__PVT__Imm;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][0U] 
        = (IData)(VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][1U] 
        = (IData)((VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA) 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[2U] 
        = VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA);
    vlSelf->__VdfgTmp_hd4f657a4__0 = ((0x17U == (0x7fU 
                                                 & vlSelf->Inst)) 
                                      | ((0x23U == 
                                          (0x7fU & vlSelf->Inst)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->Inst)) 
                                            | (IData)(vlSelf->ContrGen__DOT____VdfgTmp_h708a31d5__0))));
    vlSelf->__PVT__ALUBsr = ((IData)(vlSelf->ContrGen__DOT____VdfgTmp_h708a31d5__0)
                              ? 2U : ((1U & ((2U == (IData)(vlSelf->__PVT__Extop)) 
                                             | ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Inst 
                                                     >> 2U))) 
                                                | ((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Inst 
                                                        >> 2U))) 
                                                   | ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (vlSelf->Inst 
                                                                      >> 2U))))) 
                                                      | (3U 
                                                         == (IData)(vlSelf->__PVT__Extop)))))))
                                       ? 0U : (((1U 
                                                 == (IData)(vlSelf->__PVT__Extop)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__Extop)))
                                                ? 1U
                                                : 3U)));
    vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0 = ((IData)(vlSelf->__VdfgTmp_hd4f657a4__0)
                                                 ? 0U
                                                 : 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h1f2041f1__0)));
    vlSelf->__PVT__ALU__DOT__US_S = (1U & ((~ (IData)(vlSelf->__VdfgTmp_hd4f657a4__0)) 
                                           & ((IData)(vlSelf->__VdfgTmp_h1f2041f1__0) 
                                              >> 3U)));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->__PVT__ALUBsr) 
                               == vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                               [0U])))) & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list
           [0U]);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit = ((IData)(vlSelf->__PVT__ALUBsr) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                                                   [0U]);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__ALUBsr) 
                                  == vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list
              [1U]));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit) 
                                                   | ((IData)(vlSelf->__PVT__ALUBsr) 
                                                      == 
                                                      vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                                                      [1U]));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->__PVT__ALUBsr) 
                                  == vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list
              [2U]));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit) 
                                                   | ((IData)(vlSelf->__PVT__ALUBsr) 
                                                      == 
                                                      vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list
                                                      [2U]));
    vlSelf->__PVT__ALU__DOT__ALUB = ((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__hit)
                                      ? vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__lut_out
                                      : 0ULL);
    vlSelf->ALU__DOT____Vcellinp__deExtop__key = ((
                                                   ((~ (IData)(vlSelf->__VdfgTmp_hd4f657a4__0)) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h1f2041f1__0) 
                                                       >> 4U)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0));
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = (((IData)(vlSelf->__PVT__ALU__DOT__US_S) 
            << 1U) | (1U == (IData)(vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0)));
    vlSelf->ALU__DOT____Vcellinp__diver__key = (((IData)(vlSelf->__PVT__ALU__DOT__US_S) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__isTuncate));
    vlSelf->__PVT__ALU__DOT__Sub_Add = ((2U == (IData)(vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0)) 
                                        | ((0U == (IData)(vlSelf->ALU__DOT____VdfgTmp_he7b65dc9__0)) 
                                           & (IData)(vlSelf->__PVT__ALU__DOT__US_S)));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][0U] 
        = (IData)(VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][1U] 
        = (IData)((VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][0U] 
        = (IData)(VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][1U] 
        = (IData)((VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__ALUB >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][2U] = 3U;
    vlSelf->__PVT__ALU__DOT__XOR = (vlSelf->__PVT__ALU__DOT__ALUA 
                                    ^ vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__OR = (vlSelf->__PVT__ALU__DOT__ALUA 
                                   | vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__AND = (vlSelf->__PVT__ALU__DOT__ALUA 
                                    & vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__MUL = (vlSelf->__PVT__ALU__DOT__ALUA 
                                    * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xcU] 
        = vlSelf->__PVT__ALU__DOT__ALUB;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[4U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[5U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[6U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[7U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[8U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA & vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[9U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA | vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xbU] 
        = (vlSelf->__PVT__ALU__DOT__ALUA ^ vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[3U] 
        = VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[3U] 
        = VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__VdfgTmp_h850e38ae__0 = VL_DIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__VdfgTmp_h8507bb64__0 = VL_DIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__VdfgTmp_h8588955e__0 = VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__VdfgTmp_h858486fa__0 = VL_MODDIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt 
        = ((IData)(vlSelf->__PVT__ALU__DOT__ALUB) & 
           ((IData)(vlSelf->__PVT__isTuncate) ? 0x1fU
             : 0x3fU));
    vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin = 
        ((- (QData)((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add))) 
         ^ vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__XOR);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__XOR >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][2U] = 4U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__OR);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__OR >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][2U] = 6U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__AND);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__AND >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][2U] = 7U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__MUL);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__MUL >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][2U] = 0xbU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__MUL);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__MUL >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][2U] = 0xaU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__MUL);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__MUL >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][2U] = 9U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__MUL);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__MUL >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][2U] = 8U;
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][0U] 
        = vlSelf->__VdfgTmp_h850e38ae__0;
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h850e38ae__0));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h8507bb64__0;
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8507bb64__0));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][0U] 
        = vlSelf->__VdfgTmp_h8588955e__0;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8588955e__0));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h858486fa__0;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h858486fa__0));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = (IData)(((IData)(vlSelf->__PVT__isTuncate)
                    ? (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                        ? ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                           >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                        : 0U))) : (vlSelf->__PVT__ALU__DOT__ALUA 
                                                   >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = (IData)((((IData)(vlSelf->__PVT__isTuncate)
                     ? (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                         ? ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                            >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                         : 0U))) : 
                    (vlSelf->__PVT__ALU__DOT__ALUA 
                     >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
        = (vlSelf->__PVT__ALU__DOT__ALUA << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (vlSelf->__PVT__ALU__DOT__ALUA << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->__PVT__ALU__DOT__ALUA, (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xfU] 
        = (vlSelf->__PVT__ALU__DOT__ALUA + (vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                            + (QData)((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add))));
    __Vtemp_hec30e3e8__0[0U] = (IData)(vlSelf->__PVT__ALU__DOT__ALUA);
    __Vtemp_hec30e3e8__0[1U] = (IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                                        >> 0x20U));
    __Vtemp_hec30e3e8__0[2U] = 0U;
    __Vtemp_h0e998b61__0[0U] = (IData)(vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
    __Vtemp_h0e998b61__0[1U] = (IData)((vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                        >> 0x20U));
    __Vtemp_h0e998b61__0[2U] = 0U;
    __Vtemp_h9364fc9b__0[0U] = vlSelf->__PVT__ALU__DOT__Sub_Add;
    __Vtemp_h9364fc9b__0[1U] = 0U;
    __Vtemp_h9364fc9b__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_he21f6696__0, __Vtemp_h0e998b61__0, __Vtemp_h9364fc9b__0);
    VL_ADD_W(3, __Vtemp_h7ec28fdb__0, __Vtemp_hec30e3e8__0, __Vtemp_he21f6696__0);
    vlSelf->__PVT__ALU__DOT__lessUS = ((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add) 
                                       ^ __Vtemp_h7ec28fdb__0[2U]);
    vlSelf->__PVT__ALU__DOT__adder = (vlSelf->__PVT__ALU__DOT__ALUA 
                                      + (vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                         + (QData)((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add))));
    vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out = 
        ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                             == vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                             [0U])))) & vlSelf->__PVT__ALU__DOT__diver__DOT__data_list
         [0U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                == 
                                                vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                                [0U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                [1U])))) & vlSelf->__PVT__ALU__DOT__diver__DOT__data_list
            [1U]));
    vlSelf->__PVT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                                   [1U]));
    vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                [2U])))) & vlSelf->__PVT__ALU__DOT__diver__DOT__data_list
            [2U]));
    vlSelf->__PVT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                                   [2U]));
    vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                [3U])))) & vlSelf->__PVT__ALU__DOT__diver__DOT__data_list
            [3U]));
    vlSelf->__PVT__ALU__DOT__diver__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__key_list
                                                   [3U]));
    vlSelf->__PVT__ALU__DOT__DIV = ((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__hit)
                                     ? vlSelf->__PVT__ALU__DOT__diver__DOT__lut_out
                                     : 0ULL);
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                             == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                             [0U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
         [0U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                == 
                                                vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                [0U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [1U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [1U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [1U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [2U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [2U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [2U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [3U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [3U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__diver__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [3U]));
    vlSelf->__PVT__ALU__DOT__REM = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit)
                                     ? vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out
                                     : 0ULL);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][2U] = 3U;
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][2U] = 1U;
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = (IData)(((IData)(vlSelf->__PVT__isTuncate)
                    ? ((((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__ALU__DOT__ALUA 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUA))) 
                       >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                    : vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__sra));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = (IData)((((IData)(vlSelf->__PVT__isTuncate)
                     ? ((((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__ALU__DOT__ALUA 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUA))) 
                        >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                     : vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__sra) 
                   >> 0x20U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[5U] 
        = (2U | (0U != vlSelf->__PVT__ALU__DOT__adder));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[6U] 
        = (1U & (~ (IData)((0U != vlSelf->__PVT__ALU__DOT__adder))));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5U] 
        = (4U | ((0U != vlSelf->__PVT__ALU__DOT__adder)
                  ? 3U : 1U));
    if ((0U != vlSelf->__PVT__ALU__DOT__adder)) {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] = 1U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] = 3U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] = 1U;
    } else {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] = 3U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] = 1U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] = 3U;
    }
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__adder);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__adder >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][2U] = 0U;
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[5U] 
        = (0U != vlSelf->__PVT__ALU__DOT__adder);
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[6U] 
        = (1U & (~ (IData)((0U != vlSelf->__PVT__ALU__DOT__adder))));
    vlSelf->__PVT__ALU__DOT__lessS = (1U & ((IData)(
                                                    (vlSelf->__PVT__ALU__DOT__adder 
                                                     >> 0x3fU)) 
                                            ^ (((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__ALU__DOT__adder 
                                                              >> 0x3fU))) 
                                                  != 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__DIV);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__DIV >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][2U] = 0xdU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__DIV);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__DIV >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][2U] = 0xcU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[2U] 
        = vlSelf->__PVT__ALU__DOT__DIV;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[3U] 
        = vlSelf->__PVT__ALU__DOT__DIV;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__REM);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__REM >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][2U] = 0xfU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__REM);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__REM >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][2U] = 0xeU;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0U] 
        = vlSelf->__PVT__ALU__DOT__REM;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[1U] 
        = vlSelf->__PVT__ALU__DOT__REM;
    if (vlSelf->__PVT__isTuncate) {
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
            = (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                ? ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                   >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                : 0U)));
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
            = ((((QData)((IData)((- (IData)((1U & (IData)(
                                                          (vlSelf->__PVT__ALU__DOT__ALUA 
                                                           >> 0x1fU))))))) 
                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUA))) 
               >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
    } else {
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
            = (vlSelf->__PVT__ALU__DOT__ALUA >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt));
        vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
            = vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__sra;
    }
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                               == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                               [0U])))) & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
           [0U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
           == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
           [0U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [1U]));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [1U]));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [2U]));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [2U]));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [3U]));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [3U]));
    vlSelf->__PVT__ALU__DOT__shift = ((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit)
                                       ? vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out
                                       : 0ULL);
    if (vlSelf->__PVT__ALU__DOT__US_S) {
        vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__ALU__DOT__lessUS;
        vlSelf->__PVT__Less = vlSelf->__PVT__ALU__DOT__lessUS;
    } else {
        vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__ALU__DOT__lessS;
        vlSelf->__PVT__Less = vlSelf->__PVT__ALU__DOT__lessS;
    }
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__shift);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__shift >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][2U] = 5U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__shift);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__shift >> 0x20U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][2U] = 1U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xaU] 
        = vlSelf->__PVT__ALU__DOT__shift;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xeU] 
        = vlSelf->__PVT__ALU__DOT__shift;
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[2U] 
        = (0xaU | (1U & (~ (IData)(vlSelf->__PVT__Less))));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[3U] 
        = (8U | (IData)(vlSelf->__PVT__Less));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] 
        = (0x14U | ((IData)(vlSelf->__PVT__Less) ? 1U
                     : 3U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3U] 
        = (0x10U | ((IData)(vlSelf->__PVT__Less) ? 3U
                     : 1U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][0U] 
        = vlSelf->__PVT__Less;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][1U] = 0U;
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][2U] = 2U;
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->__PVT__Less)));
    if (vlSelf->__PVT__Less) {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 1U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 3U;
    } else {
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 3U;
        vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 1U;
    }
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xdU] 
        = (QData)((IData)(vlSelf->__PVT__Less));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
            [0U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
           [0U]);
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
           [0U]);
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [1U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [1U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [1U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [2U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [2U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [2U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [3U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [3U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [3U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [4U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [4U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [4U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [5U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [5U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [5U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
               [6U]) & vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__data_list
              [6U]));
    vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__key_list
              [6U]));
    vlSelf->__PVT__is_jump = ((IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__hit) 
                              & (IData)(vlSelf->__PVT__GenNextPC__DOT__jump_check__DOT__lut_out));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                       == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                       [0U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
           [0U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
           [0U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [1U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [1U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [1U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [2U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [2U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [2U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [3U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [3U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [3U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [4U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [4U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [4U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [5U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [5U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [5U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->__PVT__Branch) 
                          == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [6U]))) & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [6U]));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->__PVT__Branch) == vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [6U]));
    vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                               == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                               [0U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                  == 
                                                  vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                  [0U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [1U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [2U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [3U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [4U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [4U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [5U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [5U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [6U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [6U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [7U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [7U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [8U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [8U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [9U])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [9U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [9U]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xaU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xaU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xaU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xbU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xbU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xbU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xcU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xcU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xcU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xdU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xdU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xdU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xeU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xeU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xeU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                  == vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                  [0xfU])))) & vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list
              [0xfU]));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit) 
                                                  | ((IData)(vlSelf->ALU__DOT____Vcellinp__deExtop__key) 
                                                     == 
                                                     vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list
                                                     [0xfU]));
    vlSelf->__PVT__ALU__DOT__ALUout = ((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__hit)
                                        ? vlSelf->__PVT__ALU__DOT__deExtop__DOT__lut_out
                                        : 0ULL);
    if (vlSelf->__PVT__isTuncate) {
        if (vlSelf->__PVT__isSext) {
            vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__ALU__DOT__ALUout 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout)));
            vlSelf->__PVT__ALUres = (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__ALU__DOT__ALUout 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout)));
        } else {
            vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] 
                = (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout));
            vlSelf->__PVT__ALUres = (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout));
        }
    } else {
        vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] 
            = vlSelf->__PVT__ALU__DOT__ALUout;
        vlSelf->__PVT__ALUres = vlSelf->__PVT__ALU__DOT__ALUout;
    }
    vlSelf->__PVT__GenNextPC__DOT__NextPCp = (0xfffffffffffffffeULL 
                                              & (((2U 
                                                   & (IData)(vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                   ? vlSelf->__PVT__Imm
                                                   : 4ULL) 
                                                 + 
                                                 ((1U 
                                                   & (IData)(vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                   ? vlSelf->pc
                                                   : vlSelf->__PVT__R_rs1)));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = (IData)(vlSelf->__PVT__ALUres);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = (IData)((vlSelf->__PVT__ALUres >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__DataMem__DOT__clint_en = ((0x2000000ULL 
                                              <= vlSelf->__PVT__ALUres) 
                                             & (0x200bfffULL 
                                                >= vlSelf->__PVT__ALUres));
    __Vtemp_h2ef81276__0[0U] = (IData)(vlSelf->__PVT__R_rs2);
    __Vtemp_h2ef81276__0[1U] = (IData)((vlSelf->__PVT__R_rs2 
                                        >> 0x20U));
    __Vtemp_h2ef81276__0[2U] = 0U;
    __Vtemp_h2ef81276__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,6, __Vtemp_he987c3e7__0, __Vtemp_h2ef81276__0, 
                  (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                            << 3U)));
    vlSelf->__PVT__DataMem__DOT__data[0U] = __Vtemp_he987c3e7__0[0U];
    vlSelf->__PVT__DataMem__DOT__data[1U] = __Vtemp_he987c3e7__0[1U];
    vlSelf->__PVT__DataMem__DOT__data[2U] = __Vtemp_he987c3e7__0[2U];
    vlSelf->__PVT__DataMem__DOT__data[3U] = __Vtemp_he987c3e7__0[3U];
    vlSelf->__PVT__DataMem__DOT__extmask = (0xffffU 
                                            & ((IData)(vlSelf->__PVT__DataMem__DOT__wmask) 
                                               << (7U 
                                                   & (IData)(vlSelf->__PVT__ALUres))));
    if (((IData)(vlSelf->__PVT__DataMem__DOT__RdEn) 
         & (~ (IData)(vlSelf->__PVT__MemWr)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit((IData)(vlSelf->__PVT__ALUres), vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__DataMem__DOT__data[0U] = (IData)(vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__DataMem__DOT__data[1U] = (IData)(
                                                        (vlSelf->__Vtask_pmem_read__5__rdata 
                                                         >> 0x20U));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              ((IData)(8U) 
                                                               + (IData)(vlSelf->__PVT__ALUres)), vlSelf->__Vtask_pmem_read__6__rdata);
        vlSelf->__PVT__DataMem__DOT__data[2U] = (IData)(vlSelf->__Vtask_pmem_read__6__rdata);
        vlSelf->__PVT__DataMem__DOT__data[3U] = (IData)(
                                                        (vlSelf->__Vtask_pmem_read__6__rdata 
                                                         >> 0x20U));
        VL_SHIFTR_WWI(128,128,6, __Vtemp_heef993b4__0, vlSelf->__PVT__DataMem__DOT__data, 
                      (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                                << 3U)));
        vlSelf->__PVT__DataMem__DOT__data[0U] = __Vtemp_heef993b4__0[0U];
        vlSelf->__PVT__DataMem__DOT__data[1U] = __Vtemp_heef993b4__0[1U];
        vlSelf->__PVT__DataMem__DOT__data[2U] = __Vtemp_heef993b4__0[2U];
        vlSelf->__PVT__DataMem__DOT__data[3U] = __Vtemp_heef993b4__0[3U];
    }
    if (vlSelf->__PVT__MemWr) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit((IData)(vlSelf->__PVT__ALUres), 
                                                               (((QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[0U]))), 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__PVT__DataMem__DOT__extmask)));
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               ((IData)(8U) 
                                                                + (IData)(vlSelf->__PVT__ALUres)), 
                                                               (((QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[2U]))), 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__PVT__DataMem__DOT__extmask) 
                                                                   >> 8U)));
    }
    vlSelf->__PVT__clint_we = ((IData)(vlSelf->__PVT__DataMem__DOT__clint_en) 
                               & (IData)(vlSelf->__PVT__MemWr));
    vlSelf->__PVT__clint_re = ((IData)(vlSelf->__PVT__DataMem__DOT__clint_en) 
                               & (IData)(vlSelf->__PVT__DataMem__DOT__RdEn));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U]))));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][2U] = 0U;
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                  >> 7U))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U])))));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                   >> 7U))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                  >> 0xfU))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffffU & vlSelf->__PVT__DataMem__DOT__data[0U])))));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                   >> 0xfU))))) 
                         << 0x10U) | (QData)((IData)(
                                                     (0xffffU 
                                                      & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffffU & vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][2U] = 2U;
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__DataMem__DOT__data[0U])))
                    : (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U]))));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                     ? (((QData)((IData)((- (IData)(
                                                    (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->__PVT__DataMem__DOT__data[0U])))
                     : (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U]))) 
                   >> 0x20U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][2U] = 1U;
    vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U])));
    if ((4U & (IData)(vlSelf->__PVT__MemOP))) {
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[0U] 
            = (((- (QData)((IData)((1U & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                          >> 7U))))) 
                << 8U) | (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U]))));
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[1U] 
            = (((- (QData)((IData)((1U & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                          >> 0xfU))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & vlSelf->__PVT__DataMem__DOT__data[0U]))));
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[2U] 
            = (((QData)((IData)((- (IData)((vlSelf->__PVT__DataMem__DOT__data[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U])));
    } else {
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[0U] 
            = (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U])));
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[1U] 
            = (QData)((IData)((0xffffU & vlSelf->__PVT__DataMem__DOT__data[0U])));
        vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[2U] 
            = (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U]));
    }
    vlSelf->__PVT__clint_dout = ((- (QData)((IData)(vlSelf->__PVT__clint_re))) 
                                 & ((0x200bff8ULL == vlSelf->__PVT__ALUres)
                                     ? vlSelf->__PVT__clintU__DOT__mtime
                                     : ((0x2004000ULL 
                                         == vlSelf->__PVT__ALUres)
                                         ? vlSelf->__PVT__clintU__DOT__mtimecmp
                                         : 0ULL)));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                               == vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                               [0U])))) & vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list
           [0U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__hit = (
                                                   (3U 
                                                    & (IData)(vlSelf->__PVT__MemOP)) 
                                                   == 
                                                   vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                                   [0U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                                  == vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list
              [1U]));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__hit) 
                                                   | ((3U 
                                                       & (IData)(vlSelf->__PVT__MemOP)) 
                                                      == 
                                                      vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                                      [1U]));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                                  == vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list
              [2U]));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__hit) 
                                                   | ((3U 
                                                       & (IData)(vlSelf->__PVT__MemOP)) 
                                                      == 
                                                      vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                                      [2U]));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
        = (vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (IData)(vlSelf->__PVT__MemOP)) 
                                  == vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                  [3U])))) & vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list
              [3U]));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__hit) 
                                                   | ((3U 
                                                       & (IData)(vlSelf->__PVT__MemOP)) 
                                                      == 
                                                      vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list
                                                      [3U]));
    vlSelf->__PVT__MemOut = ((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__hit)
                              ? vlSelf->__PVT__DataMem__DOT__sext__DOT__lut_out
                              : 0ULL);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = (IData)(((IData)(vlSelf->__PVT__clint_re)
                    ? vlSelf->__PVT__clint_dout : vlSelf->__PVT__MemOut));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = (IData)((((IData)(vlSelf->__PVT__clint_re)
                     ? vlSelf->__PVT__clint_dout : vlSelf->__PVT__MemOut) 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = 
        ((IData)(vlSelf->__PVT__clint_re) ? vlSelf->__PVT__clint_dout
          : vlSelf->__PVT__MemOut);
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__IFU__DOT__dpc = ((((IData)(vlSelf->__PVT__IntrEn) 
                                      & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                     | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                     ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                         : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                             ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                             : vlSelf->pc))
                                     : ((IData)(vlSelf->__PVT__is_jump)
                                         ? ((0ULL == vlSelf->__PVT__GenNextPC__DOT__NextPCp)
                                             ? 0x80000000ULL
                                             : vlSelf->__PVT__GenNextPC__DOT__NextPCp)
                                         : (4ULL + vlSelf->__PVT__IFU__DOT__NextPC)));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__dout);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                   >> 0x20U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][2U] = 2U;
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = vlSymsp->TOP__top__IntrUnit.__PVT__dout;
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__RegSrc) 
                                                                   == 
                                                                   vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                   [0U])))) 
                                               & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                               [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegSrc) 
                                           == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                           [0U]);
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [1U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSelf->__PVT__RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [1U]));
    vlSelf->__PVT__RegWsrcMux__DOT__lut_out = (vlSelf->__PVT__RegWsrcMux__DOT__lut_out 
                                               | ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__RegSrc) 
                                                                      == 
                                                                      vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                                                      [2U])))) 
                                                  & vlSelf->__PVT__RegWsrcMux__DOT__data_list
                                                  [2U]));
    vlSelf->__PVT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit) 
                                           | ((IData)(vlSelf->__PVT__RegSrc) 
                                              == vlSelf->__PVT__RegWsrcMux__DOT__key_list
                                              [2U]));
    vlSelf->__PVT__RegWdata = ((IData)(vlSelf->__PVT__RegWsrcMux__DOT__hit)
                                ? vlSelf->__PVT__RegWsrcMux__DOT__lut_out
                                : 0ULL);
}
