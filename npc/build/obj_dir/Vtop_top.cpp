// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_top.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop_top___sequent__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___sequent__TOP__top__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__RegisterFile__DOT__rf__v0;
    VlWide<5>/*159:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<7>/*223:0*/ __Vtemp31;
    VlWide<9>/*287:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<7>/*223:0*/ __Vtemp107;
    VlWide<7>/*223:0*/ __Vtemp108;
    VlWide<7>/*223:0*/ __Vtemp114;
    VlWide<7>/*223:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<7>/*223:0*/ __Vtemp146;
    VlWide<7>/*223:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp211;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp366;
    VlWide<3>/*95:0*/ __Vtemp367;
    QData/*63:0*/ __Vdlyvval__RegisterFile__DOT__rf__v0;
    // Body
    __Vdlyvset__RegisterFile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->__PVT__clint_we) & (0x2004000ULL 
                                             == vlSelf->__PVT__ALUres))) {
        vlSelf->__PVT__clintU__DOT__mtimecmp = vlSelf->__PVT__R_rs2;
    }
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
    vlSelf->pc = ((IData)(vlSymsp->TOP.rst) ? 0x80000000ULL
                   : ((((IData)(vlSelf->__PVT__IntrEn) 
                        & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                       | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                       ? vlSymsp->TOP__top__IntrUnit.__PVT__IntrPC
                       : (0xfffffffffffffffeULL & (
                                                   ((2U 
                                                     & (IData)(vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                     ? vlSelf->__PVT__Imm
                                                     : 4ULL) 
                                                   + vlSelf->__PVT__GenNextPC__DOT__Bsrc))));
    if (__Vdlyvset__RegisterFile__DOT__rf__v0) {
        vlSelf->__PVT__RegisterFile__DOT__rf[__Vdlyvdim0__RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__RegisterFile__DOT__rf__v0;
    }
    vlSelf->__PVT__clint_mtip = (vlSelf->__PVT__clintU__DOT__mtime 
                                 > vlSelf->__PVT__clintU__DOT__mtimecmp);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->__PVT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->Inst = ((0U == (7U & (IData)(vlSelf->pc)))
                     ? (IData)(vlSelf->__PVT__rdata)
                     : (IData)((vlSelf->__PVT__rdata 
                                >> 0x20U)));
    if ((0x100073U == vlSelf->Inst)) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
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
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__lut_out 
        = (((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__key_list
            [0U]) & vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__data_list
           [0U]);
    vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__key_list
           [0U]);
    vlSelf->__PVT__IntrEn = ((IData)(vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__hit) 
                             & (IData)(vlSelf->__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    vlSelf->__PVT__R_rs1 = vlSelf->__PVT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0xfU))];
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 0U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 0U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 0U;
            vlSelf->__PVT__ALUBsr = 2U;
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
            vlSelf->__PVT__ALUAsr = 0U;
            vlSelf->__PVT__ALUBsr = 2U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 4U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 1U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x3bU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 2U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        }
    } else if (((((((((0x8293U == ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))) 
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
        if ((0x8293U == ((0x1fc00U & (vlSelf->Inst 
                                      >> 0xfU)) | (
                                                   (0x380U 
                                                    & (vlSelf->Inst 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0xbbU == ((0x1fc00U & (vlSelf->Inst 
                                           >> 0xfU)) 
                              | ((0x380U & (vlSelf->Inst 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x3b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x1b3U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 1U;
            vlSelf->__PVT__MemOP = 1U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x43bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x73bU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else if ((0x133U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x829bU == ((0x1fc00U & (vlSelf->Inst 
                                             >> 0xfU)) 
                                | ((0x380U & (vlSelf->Inst 
                                              >> 5U)) 
                                   | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x433U == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 0U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 1U;
            vlSelf->__PVT__isSext = 1U;
        } else if ((0x2bbU == ((0x1fc00U & (vlSelf->Inst 
                                            >> 0xfU)) 
                               | ((0x380U & (vlSelf->Inst 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->Inst))))) {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
            vlSelf->__PVT__MemWr = 0U;
            vlSelf->__PVT__MemOP = 0U;
            vlSelf->__PVT__isTuncate = 0U;
            vlSelf->__PVT__isSext = 0U;
        } else {
            vlSelf->__PVT__ALUAsr = 1U;
            vlSelf->__PVT__ALUBsr = 1U;
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
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 1U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x6bbU == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 1U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 1U;
        vlSelf->__PVT__isSext = 1U;
    } else if ((0x233U == ((0x1fc00U & (vlSelf->Inst 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->Inst 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->Inst))))) {
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 1U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 0U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 7U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x313U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 0U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->Inst 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->Inst 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->Inst))))) {
        vlSelf->__PVT__ALUAsr = 1U;
        vlSelf->__PVT__ALUBsr = 1U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else if ((0x73U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->__PVT__ALUAsr = 0U;
        vlSelf->__PVT__ALUBsr = 0U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
    } else {
        vlSelf->__PVT__ALUAsr = 0U;
        vlSelf->__PVT__ALUBsr = 0U;
        vlSelf->__PVT__MemWr = 0U;
        vlSelf->__PVT__MemOP = 0U;
        vlSelf->__PVT__isTuncate = 0U;
        vlSelf->__PVT__isSext = 0U;
        Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
    }
    vlSelf->__PVT__R_rs2 = vlSelf->__PVT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0x14U))];
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
    __Vtemp29[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                   (vlSelf->Inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->Inst 
                                                                  >> 0x14U)))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (0x38U 
                                                   & ((IData)(
                                                              ((((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x14U)))) 
                                                               >> 0x20U)) 
                                                      >> 0x1aU))));
    __Vtemp30[1U] = (((IData)((((- (QData)((IData)(
                                                   (vlSelf->Inst 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
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
                                                                        >> 7U))))))))) 
                      >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                                 (vlSelf->Inst 
                                                                  >> 0x1fU)))) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
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
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp31[2U] = (0x20U | (((IData)((((- (QData)((IData)(
                                                            (vlSelf->Inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->Inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->Inst 
                                                                           >> 7U))))))) 
                               << 6U) | ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->Inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
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
                                                  >> 0x20U)) 
                                         >> 0x1dU)));
    __Vtemp31[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                         (vlSelf->Inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->Inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->Inst 
                                                                        >> 7U))))))) 
                            >> 0x1aU)) | ((0x38U & 
                                           ((IData)(
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->Inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0xfe0U 
                                                                         & (vlSelf->Inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1fU 
                                                                           & (vlSelf->Inst 
                                                                              >> 7U))))))) 
                                            >> 0x1aU)) 
                                          | ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSelf->Inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & (vlSelf->Inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->Inst 
                                                                                >> 7U)))))) 
                                                      >> 0x20U)) 
                                             << 6U)));
    __Vtemp31[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                   (vlSelf->Inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->Inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->Inst 
                                                                        >> 7U)))))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (
                                                   ((IData)(
                                                            (((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                              << 0xcU) 
                                                             | (QData)((IData)(
                                                                               (vlSelf->Inst 
                                                                                >> 0x14U))))) 
                                                    << 9U) 
                                                   | (0x38U 
                                                      & ((IData)(
                                                                 ((((- (QData)((IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & (vlSelf->Inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->Inst 
                                                                                >> 7U)))))) 
                                                                  >> 0x20U)) 
                                                         >> 0x1aU)))));
    __Vtemp31[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                         (vlSelf->Inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->Inst 
                                                                  >> 0x14U))))) 
                            >> 0x17U)) | ((0x38U & 
                                           ((IData)(
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->Inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->Inst 
                                                                        >> 0x14U))))) 
                                            >> 0x17U)) 
                                          | ((0x1c0U 
                                              & ((IData)(
                                                         (((- (QData)((IData)(
                                                                              (vlSelf->Inst 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (vlSelf->Inst 
                                                                             >> 0x14U))))) 
                                                 >> 0x17U)) 
                                             | ((IData)(
                                                        ((((- (QData)((IData)(
                                                                              (vlSelf->Inst 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (vlSelf->Inst 
                                                                             >> 0x14U)))) 
                                                         >> 0x20U)) 
                                                << 9U))));
    __Vtemp31[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                          (vlSelf->Inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x14U)))) 
                                     >> 0x20U)) >> 0x17U)) 
                     | (__Vtemp29[4U] << 3U));
    __Vtemp33[2U] = (0x28U | (((IData)((((- (QData)((IData)(
                                                            (vlSelf->Inst 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
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
                                                                                >> 7U))))))))) 
                               << 6U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->Inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->Inst)))) 
                                                  >> 0x20U)) 
                                         >> 0x1dU)));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[0U] 
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
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[1U] 
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
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
        = (6U | ((IData)((((QData)((IData)((- (IData)(
                                                      (vlSelf->Inst 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(
                                                       (0xfffff000U 
                                                        & vlSelf->Inst))))) 
                 << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->Inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->Inst))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->Inst 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->Inst)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
        = __Vtemp33[2U];
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
        = ((7U & ((IData)((((- (QData)((IData)((vlSelf->Inst 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
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
                                                                    >> 7U))))))))) 
                  >> 0x1aU)) | (__Vtemp30[1U] << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
        = ((__Vtemp30[1U] >> 0x1dU) | (__Vtemp31[2U] 
                                       << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
        = ((__Vtemp31[2U] >> 0x1dU) | (__Vtemp31[3U] 
                                       << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
        = ((__Vtemp31[3U] >> 0x1dU) | (__Vtemp31[4U] 
                                       << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
        = ((__Vtemp31[4U] >> 0x1dU) | (__Vtemp31[5U] 
                                       << 3U));
    vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
        = ((__Vtemp31[5U] >> 0x1dU) | (__Vtemp31[6U] 
                                       << 3U));
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
    vlSelf->__PVT__DataMem__DOT__RdEn = ((0U != (IData)(vlSelf->__PVT__MemOP)) 
                                         & (~ (IData)(vlSelf->__PVT__MemWr)));
    vlSelf->__PVT__ALU__DOT__ALUA = ((IData)(vlSelf->__PVT__ALUAsr)
                                      ? vlSelf->__PVT__R_rs1
                                      : vlSelf->pc);
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
    vlSelf->__PVT__Branch = ((4U == (IData)(vlSelf->__PVT__Extop))
                              ? (5U & (vlSelf->Inst 
                                       >> 0xcU)) : 
                             ((6U == (IData)(vlSelf->__PVT__Extop))
                               ? 6U : ((0x67U == (0x7fU 
                                                  & vlSelf->Inst))
                                        ? 7U : 2U)));
    vlSelf->__PVT__ALUct = ((((((0x17U == (0x7fU & vlSelf->Inst)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->Inst))) 
                               | (3U == (0x7fU & vlSelf->Inst))) 
                              | (6U == (IData)(vlSelf->__PVT__Extop))) 
                             | (0x67U == (0x7fU & vlSelf->Inst)))
                             ? 0U : ((4U == (IData)(vlSelf->__PVT__Extop))
                                      ? (2U | (8U & 
                                               (vlSelf->Inst 
                                                >> 0xaU)))
                                      : ((0x37U == 
                                          (0x7fU & vlSelf->Inst))
                                          ? 3U : ((
                                                   ((0x33U 
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
                                                   ((8U 
                                                     & ((vlSelf->Inst 
                                                         >> 0x1bU) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7020U 
                                                                     & vlSelf->Inst))) 
                                                           << 3U))) 
                                                    | (7U 
                                                       & (vlSelf->Inst 
                                                          >> 0xcU))))))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][0U] 
        = vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[0U];
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][1U] 
        = vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[1U];
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[2U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][0U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
            << 0x1dU) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
                         >> 3U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][1U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
            << 0x1dU) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
                         >> 3U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                 >> 3U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][0U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
            << 0x1aU) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                         >> 6U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][1U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
            << 0x1aU) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
                         >> 6U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                 >> 6U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][0U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
            << 0x17U) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                         >> 9U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][1U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
            << 0x17U) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
                         >> 9U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                 >> 9U));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][0U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
            << 0x14U) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                         >> 0xcU));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][1U] 
        = ((vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
            << 0x14U) | (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
                         >> 0xcU));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
                 >> 0xcU));
    vlSelf->ALU__DOT____Vcellinp__deExtop__key = ((8U 
                                                   & ((IData)(vlSelf->__PVT__ALUct) 
                                                      >> 1U)) 
                                                  | (7U 
                                                     & (IData)(vlSelf->__PVT__ALUct)));
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = ((2U & ((IData)(vlSelf->__PVT__ALUct) >> 2U)) 
           | (1U == (7U & (IData)(vlSelf->__PVT__ALUct))));
    vlSelf->ALU__DOT____Vcellinp__diver__key = ((2U 
                                                 & ((IData)(vlSelf->__PVT__ALUct) 
                                                    >> 2U)) 
                                                | (IData)(vlSelf->__PVT__isTuncate));
    vlSelf->ALU__DOT____Vcellinp__remer__key = ((2U 
                                                 & ((IData)(vlSelf->__PVT__ALUct) 
                                                    >> 2U)) 
                                                | (IData)(vlSelf->__PVT__isTuncate));
    vlSelf->__PVT__ALU__DOT__Sub_Add = ((2U == (7U 
                                                & (IData)(vlSelf->__PVT__ALUct))) 
                                        | (IData)((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__ALUct)))));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
           [3U][2U]);
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4U] 
        = (7U & vlSelf->__PVT__ImmGen__DOT__isRegWr__DOT__pair_list
           [4U][2U]);
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
    VL_EXTEND_WQ(66,64, __Vtemp80, vlSelf->__PVT__Imm);
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[0U] = 4U;
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[1U] = 0U;
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
        = (2U | ((IData)(vlSelf->__PVT__R_rs2) << 2U));
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
        = (((IData)(vlSelf->__PVT__R_rs2) >> 0x1eU) 
           | ((IData)((vlSelf->__PVT__R_rs2 >> 0x20U)) 
              << 2U));
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
        = (4U | ((__Vtemp80[0U] << 4U) | ((IData)((vlSelf->__PVT__R_rs2 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
        = ((__Vtemp80[0U] >> 0x1cU) | (__Vtemp80[1U] 
                                       << 4U));
    vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
        = ((__Vtemp80[1U] >> 0x1cU) | (__Vtemp80[2U] 
                                       << 4U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0U][0U] 
        = vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[0U];
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0U][1U] 
        = vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[1U];
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[2U]);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list[0U] 
        = (3U & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list[1U] 
        = (3U & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__key_list[2U] 
        = (3U & vlSelf->__PVT__ALU__DOT__deALUBsr__DOT__pair_list
           [2U][2U]);
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
    vlSelf->__PVT__ALU__DOT__MUL = (vlSelf->__PVT__ALU__DOT__ALUA 
                                    * vlSelf->__PVT__ALU__DOT__ALUB);
    vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin = 
        ((- (QData)((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add))) 
         ^ vlSelf->__PVT__ALU__DOT__ALUB);
    __Vtemp107[0U] = (IData)((QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))));
    __Vtemp107[1U] = (IData)(((QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                              >> 0x20U));
    __Vtemp107[2U] = (3U | ((IData)((QData)((IData)(
                                                    VL_DIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB))))) 
                            << 2U));
    __Vtemp107[3U] = (((IData)((QData)((IData)(VL_DIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB))))) 
                       >> 0x1eU) | ((IData)(((QData)((IData)(
                                                             VL_DIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp107[4U] = (0x14U | ((IData)(((QData)((IData)(
                                                        VL_DIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                                        >> 0x20U)) 
                               >> 0x1eU));
    __Vtemp107[5U] = 0U;
    __Vtemp107[6U] = 0U;
    VL_EXTEND_WW(198,196, __Vtemp108, __Vtemp107);
    vlSelf->ALU__DOT____Vcellinp__diver__lut[0U] = 
        __Vtemp108[0U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[1U] = 
        __Vtemp108[1U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[2U] = 
        __Vtemp108[2U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[3U] = 
        __Vtemp108[3U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[4U] = 
        __Vtemp108[4U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[5U] = 
        __Vtemp108[5U];
    vlSelf->ALU__DOT____Vcellinp__diver__lut[6U] = 
        (((IData)(VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB)) 
          << 6U) | __Vtemp108[6U]);
    vlSelf->ALU__DOT____Vcellinp__diver__lut[7U] = 
        (((IData)(VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB)) 
          >> 0x1aU) | ((IData)((VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                                >> 0x20U)) << 6U));
    vlSelf->ALU__DOT____Vcellinp__diver__lut[8U] = 
        (0x80U | ((IData)((VL_DIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                           >> 0x20U)) >> 0x1aU));
    __Vtemp114[0U] = (IData)((QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))));
    __Vtemp114[1U] = (IData)(((QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                              >> 0x20U));
    __Vtemp114[2U] = (3U | ((IData)((QData)((IData)(
                                                    VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB))))) 
                            << 2U));
    __Vtemp114[3U] = (((IData)((QData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB))))) 
                       >> 0x1eU) | ((IData)(((QData)((IData)(
                                                             VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp114[4U] = (4U | (((IData)(VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA)) 
                             << 4U) | ((IData)(((QData)((IData)(
                                                                VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__ALU__DOT__ALUA), (IData)(vlSelf->__PVT__ALU__DOT__ALUB)))) 
                                                >> 0x20U)) 
                                       >> 0x1eU)));
    __Vtemp114[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA)) 
                       >> 0x1cU) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp114[6U] = ((IData)((VL_MODDIVS_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUA) 
                               >> 0x20U)) >> 0x1cU);
    VL_EXTEND_WW(198,196, __Vtemp115, __Vtemp114);
    vlSelf->ALU__DOT____Vcellinp__remer__lut[0U] = 
        __Vtemp115[0U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[1U] = 
        __Vtemp115[1U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[2U] = 
        __Vtemp115[2U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[3U] = 
        __Vtemp115[3U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[4U] = 
        __Vtemp115[4U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[5U] = 
        __Vtemp115[5U];
    vlSelf->ALU__DOT____Vcellinp__remer__lut[6U] = 
        (((IData)(VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB)) 
          << 6U) | __Vtemp115[6U]);
    vlSelf->ALU__DOT____Vcellinp__remer__lut[7U] = 
        (((IData)(VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB)) 
          >> 0x1aU) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                                >> 0x20U)) << 6U));
    vlSelf->ALU__DOT____Vcellinp__remer__lut[8U] = 
        (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSelf->__PVT__ALU__DOT__ALUA, vlSelf->__PVT__ALU__DOT__ALUB) 
                           >> 0x20U)) >> 0x1aU));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt 
        = ((IData)(vlSelf->__PVT__ALU__DOT__ALUB) & 
           ((IData)(vlSelf->__PVT__isTuncate) ? 0x1fU
             : 0x3fU));
    VL_EXTEND_WI(65,1, __Vtemp118, (IData)(vlSelf->__PVT__ALU__DOT__Sub_Add));
    vlSelf->__PVT__ALU__DOT__adder = ((vlSelf->__PVT__ALU__DOT__ALUA 
                                       + vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin) 
                                      + (((QData)((IData)(
                                                          __Vtemp118[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp118[0U]))));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][0U] 
        = vlSelf->ALU__DOT____Vcellinp__diver__lut[0U];
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][1U] 
        = vlSelf->ALU__DOT____Vcellinp__diver__lut[1U];
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ALU__DOT____Vcellinp__diver__lut[2U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[3U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[4U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__diver__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[2U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[5U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[2U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[6U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__diver__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[7U] 
            << 0x1aU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[6U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__diver__lut[8U] 
            << 0x1aU) | (vlSelf->ALU__DOT____Vcellinp__diver__lut[7U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__diver__lut[8U] 
                 >> 6U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][0U] 
        = vlSelf->ALU__DOT____Vcellinp__remer__lut[0U];
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][1U] 
        = vlSelf->ALU__DOT____Vcellinp__remer__lut[1U];
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ALU__DOT____Vcellinp__remer__lut[2U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[3U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[4U] 
            << 0x1eU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__remer__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[5U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[6U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__remer__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[7U] 
            << 0x1aU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[6U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__remer__lut[8U] 
            << 0x1aU) | (vlSelf->ALU__DOT____Vcellinp__remer__lut[7U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->ALU__DOT____Vcellinp__remer__lut[8U] 
                 >> 6U));
    __Vtemp146[0U] = (IData)(((IData)(vlSelf->__PVT__isTuncate)
                               ? ((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__ALU__DOT__ALUA 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUA))) 
                                  >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                               : (vlSelf->__PVT__ALU__DOT__ALUA 
                                  >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))));
    __Vtemp146[1U] = (IData)((((IData)(vlSelf->__PVT__isTuncate)
                                ? ((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__ALU__DOT__ALUA 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUA))) 
                                   >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                : (vlSelf->__PVT__ALU__DOT__ALUA 
                                   >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                              >> 0x20U));
    __Vtemp146[2U] = (2U | ((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                                     << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                            << 2U));
    __Vtemp146[3U] = (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                                << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                       >> 0x1eU) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                              << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp146[4U] = (0xcU | (((IData)(((IData)(vlSelf->__PVT__isTuncate)
                                         ? (QData)((IData)(
                                                           ((0x1fU 
                                                             >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                                             >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                             : 0U)))
                                         : (vlSelf->__PVT__ALU__DOT__ALUA 
                                            >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                               << 4U) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                                   << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                                  >> 0x20U)) 
                                         >> 0x1eU)));
    __Vtemp146[5U] = (((IData)(((IData)(vlSelf->__PVT__isTuncate)
                                 ? (QData)((IData)(
                                                   ((0x1fU 
                                                     >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                                     >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     : 0U)))
                                 : (vlSelf->__PVT__ALU__DOT__ALUA 
                                    >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                       >> 0x1cU) | ((IData)((((IData)(vlSelf->__PVT__isTuncate)
                                               ? (QData)((IData)(
                                                                 ((0x1fU 
                                                                   >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                                                   >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   : 0U)))
                                               : (vlSelf->__PVT__ALU__DOT__ALUA 
                                                  >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp146[6U] = ((IData)((((IData)(vlSelf->__PVT__isTuncate)
                                 ? (QData)((IData)(
                                                   ((0x1fU 
                                                     >= (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__ALU__DOT__ALUA) 
                                                     >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                     : 0U)))
                                 : (vlSelf->__PVT__ALU__DOT__ALUA 
                                    >> (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                               >> 0x20U)) >> 0x1cU);
    VL_EXTEND_WW(198,196, __Vtemp147, __Vtemp146);
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U] 
        = __Vtemp147[0U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U] 
        = __Vtemp147[1U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
        = __Vtemp147[2U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
        = __Vtemp147[3U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
        = __Vtemp147[4U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
        = __Vtemp147[5U];
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
        = (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                     << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
            << 6U) | __Vtemp147[6U]);
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
        = (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                     << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
            >> 0x1aU) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                   << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                                  >> 0x20U)) << 6U));
    vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
        = (0x40U | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                              << (IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__shamt)) 
                             >> 0x20U)) >> 0x1aU));
    VL_EXTEND_WQ(65,64, __Vtemp151, vlSelf->__PVT__ALU__DOT__ALUA);
    VL_EXTEND_WQ(65,64, __Vtemp152, vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
    VL_ADD_W(3, __Vtemp153, __Vtemp151, __Vtemp152);
    VL_EXTEND_WI(65,1, __Vtemp154, (IData)(vlSelf->__PVT__ALU__DOT__Sub_Add));
    VL_ADD_W(3, __Vtemp155, __Vtemp153, __Vtemp154);
    vlSelf->__PVT__Less = (1U & ((8U & (IData)(vlSelf->__PVT__ALUct))
                                  ? ((IData)(vlSelf->__PVT__ALU__DOT__Sub_Add) 
                                     ^ (1U & __Vtemp155[2U]))
                                  : ((IData)((vlSelf->__PVT__ALU__DOT__adder 
                                              >> 0x3fU)) 
                                     ^ (((1U & (IData)(
                                                       (vlSelf->__PVT__ALU__DOT__ALUA 
                                                        >> 0x3fU))) 
                                         == (1U & (IData)(
                                                          (vlSelf->__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                           >> 0x3fU)))) 
                                        & ((1U & (IData)(
                                                         (vlSelf->__PVT__ALU__DOT__adder 
                                                          >> 0x3fU))) 
                                           != (1U & (IData)(
                                                            (vlSelf->__PVT__ALU__DOT__ALUA 
                                                             >> 0x3fU))))))));
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ALU__DOT__diver__DOT__key_list[0U] 
        = (3U & vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ALU__DOT__diver__DOT__key_list[1U] 
        = (3U & vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ALU__DOT__diver__DOT__key_list[2U] 
        = (3U & vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__ALU__DOT__diver__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__ALU__DOT__diver__DOT__key_list[3U] 
        = (3U & vlSelf->__PVT__ALU__DOT__diver__DOT__pair_list
           [3U][2U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ALU__DOT__remer__DOT__key_list[0U] 
        = (3U & vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ALU__DOT__remer__DOT__key_list[1U] 
        = (3U & vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ALU__DOT__remer__DOT__key_list[2U] 
        = (3U & vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__ALU__DOT__remer__DOT__key_list[3U] 
        = (3U & vlSelf->__PVT__ALU__DOT__remer__DOT__pair_list
           [3U][2U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U];
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U];
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
            << 0x1eU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
            << 0x1eU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
            << 0x1cU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
            << 0x1cU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][0U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
            << 0x1aU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][1U] 
        = ((vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
            << 0x1aU) | (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
                         >> 6U));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
                 >> 6U));
    vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
        = (((QData)((IData)(((0U != vlSelf->__PVT__ALU__DOT__adder)
                              ? 1U : 3U))) << 0x1eU) 
           | (QData)((IData)((0x898537eU | ((((0U != vlSelf->__PVT__ALU__DOT__adder)
                                               ? 3U
                                               : 1U) 
                                             << 0x19U) 
                                            | ((((IData)(vlSelf->__PVT__Less)
                                                  ? 3U
                                                  : 1U) 
                                                << 0xfU) 
                                               | (((IData)(vlSelf->__PVT__Less)
                                                    ? 1U
                                                    : 3U) 
                                                  << 0xaU)))))));
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
        ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                             == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                             [0U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
         [0U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                                == 
                                                vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                [0U]);
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [1U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [1U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [1U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [2U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [2U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [2U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out = 
        (vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out 
         | ((- (QData)((IData)(((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                == vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                [3U])))) & vlSelf->__PVT__ALU__DOT__remer__DOT__data_list
            [3U]));
    vlSelf->__PVT__ALU__DOT__remer__DOT__hit = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit) 
                                                | ((IData)(vlSelf->ALU__DOT____Vcellinp__remer__key) 
                                                   == 
                                                   vlSelf->__PVT__ALU__DOT__remer__DOT__key_list
                                                   [3U]));
    vlSelf->__PVT__ALU__DOT__REM = ((IData)(vlSelf->__PVT__ALU__DOT__remer__DOT__hit)
                                     ? vlSelf->__PVT__ALU__DOT__remer__DOT__lut_out
                                     : 0ULL);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0U] 
        = (3U & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1U] 
        = (3U & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2U] 
        = (3U & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3U] 
        = (3U & vlSelf->__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [3U][2U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0U] 
        = (0x1fU & (IData)(vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 5U)));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0xaU)));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0xfU)));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x14U)));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x19U)));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6U] 
        = (0x1fU & (IData)((vlSelf->GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                            >> 0x1eU)));
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
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [0U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [1U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [2U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [3U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [4U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [4U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [5U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [5U] >> 2U));
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6U] 
        = (3U & vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [6U]);
    vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6U] 
        = (7U & (vlSelf->__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [6U] >> 2U));
    VL_EXTEND_WQ(68,64, __Vtemp211, vlSelf->__PVT__ALU__DOT__adder);
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0U] 
        = (IData)(vlSelf->__PVT__ALU__DOT__REM);
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[1U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__REM >> 0x20U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[2U] 
        = (0xfU | ((IData)(vlSelf->__PVT__ALU__DOT__REM) 
                   << 4U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[3U] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__REM) >> 0x1cU) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__REM 
                       >> 0x20U)) << 4U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[4U] 
        = (0xe0U | (((IData)(vlSelf->__PVT__ALU__DOT__DIV) 
                     << 8U) | ((IData)((vlSelf->__PVT__ALU__DOT__REM 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[5U] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__DIV) >> 0x18U) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__DIV 
                       >> 0x20U)) << 8U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[6U] 
        = (0xd00U | (((IData)(vlSelf->__PVT__ALU__DOT__DIV) 
                      << 0xcU) | ((IData)((vlSelf->__PVT__ALU__DOT__DIV 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[7U] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__DIV) >> 0x14U) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__DIV 
                       >> 0x20U)) << 0xcU));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[8U] 
        = (0xc000U | (((IData)(vlSelf->__PVT__ALU__DOT__MUL) 
                       << 0x10U) | ((IData)((vlSelf->__PVT__ALU__DOT__DIV 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[9U] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__MUL) >> 0x10U) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                       >> 0x20U)) << 0x10U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
        = (0xb0000U | (((IData)(vlSelf->__PVT__ALU__DOT__MUL) 
                        << 0x14U) | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__MUL) >> 0xcU) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                       >> 0x20U)) << 0x14U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
        = (0xa00000U | (((IData)(vlSelf->__PVT__ALU__DOT__MUL) 
                         << 0x18U) | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__MUL) >> 8U) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                       >> 0x20U)) << 0x18U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
        = (0x9000000U | (((IData)(vlSelf->__PVT__ALU__DOT__MUL) 
                          << 0x1cU) | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                                                >> 0x20U)) 
                                       >> 8U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__MUL) >> 4U) 
           | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                       >> 0x20U)) << 0x1cU));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
        = (0x80000000U | ((IData)((vlSelf->__PVT__ALU__DOT__MUL 
                                   >> 0x20U)) >> 4U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x11U] 
        = (IData)((vlSelf->__PVT__ALU__DOT__ALUA & vlSelf->__PVT__ALU__DOT__ALUB));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x12U] 
        = (IData)(((vlSelf->__PVT__ALU__DOT__ALUA & vlSelf->__PVT__ALU__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x13U] 
        = (7U | ((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                          | vlSelf->__PVT__ALU__DOT__ALUB)) 
                 << 4U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
        = (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                     | vlSelf->__PVT__ALU__DOT__ALUB)) 
            >> 0x1cU) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                   | vlSelf->__PVT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 4U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
        = (0x60U | (((IData)(vlSelf->__PVT__ALU__DOT__shift) 
                     << 8U) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                         | vlSelf->__PVT__ALU__DOT__ALUB) 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__shift) 
            >> 0x18U) | ((IData)((vlSelf->__PVT__ALU__DOT__shift 
                                  >> 0x20U)) << 8U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
        = (0x500U | (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                               ^ vlSelf->__PVT__ALU__DOT__ALUB)) 
                      << 0xcU) | ((IData)((vlSelf->__PVT__ALU__DOT__shift 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x18U] 
        = (((IData)((vlSelf->__PVT__ALU__DOT__ALUA 
                     ^ vlSelf->__PVT__ALU__DOT__ALUB)) 
            >> 0x14U) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                   ^ vlSelf->__PVT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x19U] 
        = (0x4000U | (((IData)(vlSelf->__PVT__ALU__DOT__ALUB) 
                       << 0x10U) | ((IData)(((vlSelf->__PVT__ALU__DOT__ALUA 
                                              ^ vlSelf->__PVT__ALU__DOT__ALUB) 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1aU] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__ALUB) 
            >> 0x10U) | ((IData)((vlSelf->__PVT__ALU__DOT__ALUB 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1bU] 
        = (0x30000U | (((IData)((QData)((IData)(vlSelf->__PVT__Less))) 
                        << 0x14U) | ((IData)((vlSelf->__PVT__ALU__DOT__ALUB 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1cU] 
        = (((IData)((QData)((IData)(vlSelf->__PVT__Less))) 
            >> 0xcU) | ((IData)(((QData)((IData)(vlSelf->__PVT__Less)) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1dU] 
        = (0x200000U | (((IData)(vlSelf->__PVT__ALU__DOT__shift) 
                         << 0x18U) | ((IData)(((QData)((IData)(vlSelf->__PVT__Less)) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1eU] 
        = (((IData)(vlSelf->__PVT__ALU__DOT__shift) 
            >> 8U) | ((IData)((vlSelf->__PVT__ALU__DOT__shift 
                               >> 0x20U)) << 0x18U));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1fU] 
        = (0x1000000U | ((__Vtemp211[0U] << 0x1cU) 
                         | ((IData)((vlSelf->__PVT__ALU__DOT__shift 
                                     >> 0x20U)) >> 8U)));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x20U] 
        = ((__Vtemp211[0U] >> 4U) | (__Vtemp211[1U] 
                                     << 0x1cU));
    vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x21U] 
        = ((__Vtemp211[1U] >> 4U) | (__Vtemp211[2U] 
                                     << 0x1cU));
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
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][0U] 
        = vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0U];
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][1U] 
        = vlSelf->ALU__DOT____Vcellinp__deExtop__lut[1U];
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->ALU__DOT____Vcellinp__deExtop__lut[2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[3U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[2U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[4U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[3U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[4U] 
                   >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[5U] 
            << 0x18U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[4U] 
                         >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[6U] 
            << 0x18U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[5U] 
                         >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[6U] 
                   >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[7U] 
            << 0x14U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[6U] 
                         >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[8U] 
            << 0x14U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[7U] 
                         >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[8U] 
                   >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[9U] 
            << 0x10U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[8U] 
                         >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
            << 0x10U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[9U] 
                         >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                   >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
            << 0xcU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                        >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
            << 0xcU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
                        >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[5U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                   >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
            << 8U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                      >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
            << 8U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
                      >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[6U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                   >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
            << 4U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                      >> 0x1cU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
            << 4U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
                      >> 0x1cU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[7U][2U] 
        = (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
           >> 0x1cU);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][0U] 
        = vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x11U];
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][1U] 
        = vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x12U];
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[8U][2U] 
        = (0xfU & vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x13U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x13U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
            << 0x1cU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x14U] 
                         >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[9U][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
                   >> 4U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
            << 0x18U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x15U] 
                         >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
            << 0x18U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x16U] 
                         >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xaU][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
                   >> 8U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x18U] 
            << 0x14U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x17U] 
                         >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x19U] 
            << 0x14U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x18U] 
                         >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xbU][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x19U] 
                   >> 0xcU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1aU] 
            << 0x10U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x19U] 
                         >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1bU] 
            << 0x10U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1aU] 
                         >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xcU][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1bU] 
                   >> 0x10U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1cU] 
            << 0xcU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1bU] 
                        >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1dU] 
            << 0xcU) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1cU] 
                        >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xdU][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1dU] 
                   >> 0x14U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1eU] 
            << 8U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1dU] 
                      >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1fU] 
            << 8U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1eU] 
                      >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xeU][2U] 
        = (0xfU & (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1fU] 
                   >> 0x18U));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x20U] 
            << 4U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x1fU] 
                      >> 0x1cU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x21U] 
            << 4U) | (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x20U] 
                      >> 0x1cU));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list[0xfU][2U] 
        = (vlSelf->ALU__DOT____Vcellinp__deExtop__lut[0x21U] 
           >> 0x1cU);
    vlSelf->__PVT__GenNextPC__DOT__Bsrc = ((1U & (IData)(vlSelf->GenNextPC__DOT____Vcellout__dePCsrc__out))
                                            ? vlSelf->pc
                                            : vlSelf->__PVT__R_rs1);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[1U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[2U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[3U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [3U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[4U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [4U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[5U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [5U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[6U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [6U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[7U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [7U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[8U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [8U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[9U] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [9U][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xaU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xaU][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xbU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xbU][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xcU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xcU][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xdU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xdU][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xeU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xeU][2U]);
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->__PVT__ALU__DOT__deExtop__DOT__key_list[0xfU] 
        = (0xfU & vlSelf->__PVT__ALU__DOT__deExtop__DOT__pair_list
           [0xfU][2U]);
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
    vlSelf->__PVT__ALUres = ((IData)(vlSelf->__PVT__isTuncate)
                              ? ((IData)(vlSelf->__PVT__isSext)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__ALU__DOT__ALUout 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout)))
                                  : (QData)((IData)(vlSelf->__PVT__ALU__DOT__ALUout)))
                              : vlSelf->__PVT__ALU__DOT__ALUout);
    vlSelf->__PVT__DataMem__DOT__clint_en = ((0x2000000ULL 
                                              <= vlSelf->__PVT__ALUres) 
                                             & (0x200bfffULL 
                                                >= vlSelf->__PVT__ALUres));
    VL_EXTEND_WQ(128,64, __Vtemp364, vlSelf->__PVT__R_rs2);
    VL_SHIFTL_WWI(128,128,6, __Vtemp365, __Vtemp364, 
                  (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                            << 3U)));
    vlSelf->__PVT__DataMem__DOT__data[0U] = __Vtemp365[0U];
    vlSelf->__PVT__DataMem__DOT__data[1U] = __Vtemp365[1U];
    vlSelf->__PVT__DataMem__DOT__data[2U] = __Vtemp365[2U];
    vlSelf->__PVT__DataMem__DOT__data[3U] = __Vtemp365[3U];
    vlSelf->__PVT__DataMem__DOT__extmask = (0xffffU 
                                            & ((IData)(vlSelf->__PVT__DataMem__DOT__wmask) 
                                               << (7U 
                                                   & (IData)(vlSelf->__PVT__ALUres))));
    if (((IData)(vlSelf->__PVT__DataMem__DOT__RdEn) 
         & (~ (IData)(vlSelf->__PVT__MemWr)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->__PVT__ALUres, vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->__PVT__DataMem__DOT__data[0U] = (IData)(vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->__PVT__DataMem__DOT__data[1U] = (IData)(
                                                        (vlSelf->__Vtask_pmem_read__4__rdata 
                                                         >> 0x20U));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (8ULL 
                                                               + vlSelf->__PVT__ALUres), vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__DataMem__DOT__data[2U] = (IData)(vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->__PVT__DataMem__DOT__data[3U] = (IData)(
                                                        (vlSelf->__Vtask_pmem_read__5__rdata 
                                                         >> 0x20U));
        VL_SHIFTR_WWI(128,128,6, __Vtemp366, vlSelf->__PVT__DataMem__DOT__data, 
                      (0x38U & ((IData)(vlSelf->__PVT__ALUres) 
                                << 3U)));
        vlSelf->__PVT__DataMem__DOT__data[0U] = __Vtemp366[0U];
        vlSelf->__PVT__DataMem__DOT__data[1U] = __Vtemp366[1U];
        vlSelf->__PVT__DataMem__DOT__data[2U] = __Vtemp366[2U];
        vlSelf->__PVT__DataMem__DOT__data[3U] = __Vtemp366[3U];
    }
    if (vlSelf->__PVT__MemWr) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->__PVT__ALUres, 
                                                               (((QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__DataMem__DOT__data[0U]))), 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__PVT__DataMem__DOT__extmask)));
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (8ULL 
                                                                + vlSelf->__PVT__ALUres), 
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
    VL_EXTEND_WQ(66,64, __Vtemp367, (((QData)((IData)(
                                                      vlSelf->__PVT__DataMem__DOT__data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__DataMem__DOT__data[0U]))));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[0U] 
        = (IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                    ? (((- (QData)((IData)((1U & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                  >> 7U))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                    : (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U])))));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[1U] 
        = (IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                     ? (((- (QData)((IData)((1U & (
                                                   vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                   >> 7U))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                     : (QData)((IData)((0xffU & vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                   >> 0x20U));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[2U] 
        = (3U | ((IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                           ? (((- (QData)((IData)((1U 
                                                   & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                      >> 0xfU))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                           : (QData)((IData)((0xffffU 
                                              & vlSelf->__PVT__DataMem__DOT__data[0U]))))) 
                 << 2U));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[3U] 
        = (((IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                      ? (((- (QData)((IData)((1U & 
                                              (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                               >> 0xfU))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                      : (QData)((IData)((0xffffU & 
                                         vlSelf->__PVT__DataMem__DOT__data[0U]))))) 
            >> 0x1eU) | ((IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                               >> 0xfU))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                                    : (QData)((IData)(
                                                      (0xffffU 
                                                       & vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                                  >> 0x20U)) << 2U));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[4U] 
        = (8U | (((IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->__PVT__DataMem__DOT__data[0U])))
                            : (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                  << 4U) | ((IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                                  >> 0xfU))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__DataMem__DOT__data[0U]))))
                                       : (QData)((IData)(
                                                         (0xffffU 
                                                          & vlSelf->__PVT__DataMem__DOT__data[0U])))) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[5U] 
        = (((IData)(((4U & (IData)(vlSelf->__PVT__MemOP))
                      ? (((QData)((IData)((- (IData)(
                                                     (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                      >> 0x1fU))))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__DataMem__DOT__data[0U])))
                      : (QData)((IData)(vlSelf->__PVT__DataMem__DOT__data[0U])))) 
            >> 0x1cU) | ((IData)((((4U & (IData)(vlSelf->__PVT__MemOP))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__DataMem__DOT__data[0U])))
                                    : (QData)((IData)(
                                                      vlSelf->__PVT__DataMem__DOT__data[0U]))) 
                                  >> 0x20U)) << 4U));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[6U] 
        = (0x10U | ((__Vtemp367[0U] << 6U) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSelf->__PVT__MemOP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__DataMem__DOT__data[0U])))
                                                         : (QData)((IData)(
                                                                           vlSelf->__PVT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[7U] 
        = ((__Vtemp367[0U] >> 0x1aU) | (__Vtemp367[1U] 
                                        << 6U));
    vlSelf->DataMem__DOT____Vcellinp__sext__lut[8U] 
        = ((__Vtemp367[1U] >> 0x1aU) | (__Vtemp367[2U] 
                                        << 6U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][0U] 
        = vlSelf->DataMem__DOT____Vcellinp__sext__lut[0U];
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][1U] 
        = vlSelf->DataMem__DOT____Vcellinp__sext__lut[1U];
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->DataMem__DOT____Vcellinp__sext__lut[2U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][0U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[3U] 
            << 0x1eU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][1U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[4U] 
            << 0x1eU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->DataMem__DOT____Vcellinp__sext__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][0U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[5U] 
            << 0x1cU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][1U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[6U] 
            << 0x1cU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->DataMem__DOT____Vcellinp__sext__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][0U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[7U] 
            << 0x1aU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[6U] 
                         >> 6U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][1U] 
        = ((vlSelf->DataMem__DOT____Vcellinp__sext__lut[8U] 
            << 0x1aU) | (vlSelf->DataMem__DOT____Vcellinp__sext__lut[7U] 
                         >> 6U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->DataMem__DOT____Vcellinp__sext__lut[8U] 
                 >> 6U));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list[0U] 
        = (3U & vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
           [0U][2U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list[1U] 
        = (3U & vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
           [1U][2U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list[2U] 
        = (3U & vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
           [2U][2U]);
    vlSelf->__PVT__DataMem__DOT__sext__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->__PVT__DataMem__DOT__sext__DOT__key_list[3U] 
        = (3U & vlSelf->__PVT__DataMem__DOT__sext__DOT__pair_list
           [3U][2U]);
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
}

VL_INLINE_OPT void Vtop_top___sequent__TOP__top__4(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___sequent__TOP__top__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp400;
    // Body
    VL_EXTEND_WQ(66,64, __Vtemp400, vlSelf->__PVT__ALUres);
    vlSelf->__Vcellinp__RegWsrcMux__lut[0U] = (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__dout);
    vlSelf->__Vcellinp__RegWsrcMux__lut[1U] = (IData)(
                                                      (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                       >> 0x20U));
    vlSelf->__Vcellinp__RegWsrcMux__lut[2U] = (2U | 
                                               ((IData)(
                                                        ((IData)(vlSelf->__PVT__clint_re)
                                                          ? 
                                                         ((- (QData)((IData)(vlSelf->__PVT__clint_re))) 
                                                          & ((0x200bff8ULL 
                                                              == vlSelf->__PVT__ALUres)
                                                              ? vlSelf->__PVT__clintU__DOT__mtime
                                                              : 
                                                             ((0x2004000ULL 
                                                               == vlSelf->__PVT__ALUres)
                                                               ? vlSelf->__PVT__clintU__DOT__mtimecmp
                                                               : 0ULL)))
                                                          : vlSelf->__PVT__MemOut)) 
                                                << 2U));
    vlSelf->__Vcellinp__RegWsrcMux__lut[3U] = (((IData)(
                                                        ((IData)(vlSelf->__PVT__clint_re)
                                                          ? 
                                                         ((- (QData)((IData)(vlSelf->__PVT__clint_re))) 
                                                          & ((0x200bff8ULL 
                                                              == vlSelf->__PVT__ALUres)
                                                              ? vlSelf->__PVT__clintU__DOT__mtime
                                                              : 
                                                             ((0x2004000ULL 
                                                               == vlSelf->__PVT__ALUres)
                                                               ? vlSelf->__PVT__clintU__DOT__mtimecmp
                                                               : 0ULL)))
                                                          : vlSelf->__PVT__MemOut)) 
                                                >> 0x1eU) 
                                               | ((IData)(
                                                          (((IData)(vlSelf->__PVT__clint_re)
                                                             ? 
                                                            ((- (QData)((IData)(vlSelf->__PVT__clint_re))) 
                                                             & ((0x200bff8ULL 
                                                                 == vlSelf->__PVT__ALUres)
                                                                 ? vlSelf->__PVT__clintU__DOT__mtime
                                                                 : 
                                                                ((0x2004000ULL 
                                                                  == vlSelf->__PVT__ALUres)
                                                                  ? vlSelf->__PVT__clintU__DOT__mtimecmp
                                                                  : 0ULL)))
                                                             : vlSelf->__PVT__MemOut) 
                                                           >> 0x20U)) 
                                                  << 2U));
    vlSelf->__Vcellinp__RegWsrcMux__lut[4U] = (4U | 
                                               ((__Vtemp400[0U] 
                                                 << 4U) 
                                                | ((IData)(
                                                           (((IData)(vlSelf->__PVT__clint_re)
                                                              ? 
                                                             ((- (QData)((IData)(vlSelf->__PVT__clint_re))) 
                                                              & ((0x200bff8ULL 
                                                                  == vlSelf->__PVT__ALUres)
                                                                  ? vlSelf->__PVT__clintU__DOT__mtime
                                                                  : 
                                                                 ((0x2004000ULL 
                                                                   == vlSelf->__PVT__ALUres)
                                                                   ? vlSelf->__PVT__clintU__DOT__mtimecmp
                                                                   : 0ULL)))
                                                              : vlSelf->__PVT__MemOut) 
                                                            >> 0x20U)) 
                                                   >> 0x1eU)));
    vlSelf->__Vcellinp__RegWsrcMux__lut[5U] = ((__Vtemp400[0U] 
                                                >> 0x1cU) 
                                               | (__Vtemp400[1U] 
                                                  << 4U));
    vlSelf->__Vcellinp__RegWsrcMux__lut[6U] = ((__Vtemp400[1U] 
                                                >> 0x1cU) 
                                               | (__Vtemp400[2U] 
                                                  << 4U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = vlSelf->__Vcellinp__RegWsrcMux__lut[0U];
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = vlSelf->__Vcellinp__RegWsrcMux__lut[1U];
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->__Vcellinp__RegWsrcMux__lut[2U]);
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->__Vcellinp__RegWsrcMux__lut[3U] 
            << 0x1eU) | (vlSelf->__Vcellinp__RegWsrcMux__lut[2U] 
                         >> 2U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->__Vcellinp__RegWsrcMux__lut[4U] 
            << 0x1eU) | (vlSelf->__Vcellinp__RegWsrcMux__lut[3U] 
                         >> 2U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->__Vcellinp__RegWsrcMux__lut[4U] 
                 >> 2U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][0U] 
        = ((vlSelf->__Vcellinp__RegWsrcMux__lut[5U] 
            << 0x1cU) | (vlSelf->__Vcellinp__RegWsrcMux__lut[4U] 
                         >> 4U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][1U] 
        = ((vlSelf->__Vcellinp__RegWsrcMux__lut[6U] 
            << 0x1cU) | (vlSelf->__Vcellinp__RegWsrcMux__lut[5U] 
                         >> 4U));
    vlSelf->__PVT__RegWsrcMux__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->__Vcellinp__RegWsrcMux__lut[6U] 
                 >> 4U));
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[0U] = 
        (((QData)((IData)(vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                          [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                                                                 [0U][0U])));
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[0U] = 
        (3U & vlSelf->__PVT__RegWsrcMux__DOT__pair_list
         [0U][2U]);
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[1U] = 
        (((QData)((IData)(vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                          [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                                                                 [1U][0U])));
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[1U] = 
        (3U & vlSelf->__PVT__RegWsrcMux__DOT__pair_list
         [1U][2U]);
    vlSelf->__PVT__RegWsrcMux__DOT__data_list[2U] = 
        (((QData)((IData)(vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                          [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__RegWsrcMux__DOT__pair_list
                                                                 [2U][0U])));
    vlSelf->__PVT__RegWsrcMux__DOT__key_list[2U] = 
        (3U & vlSelf->__PVT__RegWsrcMux__DOT__pair_list
         [2U][2U]);
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
