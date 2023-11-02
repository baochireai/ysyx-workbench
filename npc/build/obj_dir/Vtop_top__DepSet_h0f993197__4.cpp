// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__o_lsu_clint_mtip = ((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                >> 3U)) 
                                       & ((vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
                                           > vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp) 
                                          & (IData)(vlSelf->__PVT__lsu_valid)));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__wb_pc = 0ULL;
        vlSelf->__PVT__wb_inst = 0U;
    } else if (vlSelf->__PVT__lsu_to_wb_valid) {
        vlSelf->__PVT__wb_pc = vlSelf->__PVT__lsu_pc;
        vlSelf->__PVT__wb_inst = vlSelf->__PVT__lsu_inst;
    }
    vlSelf->__PVT__RegisterFile__DOT__isw = ((IData)(vlSymsp->TOP__top__WB.__PVT__isRegWrite) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->__PVT__wb_inst 
                                                    >> 7U))));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__lsu_pc = 0ULL;
        vlSelf->__PVT__lsu_inst = 0U;
        vlSelf->__PVT__exu_pc = 0ULL;
        vlSelf->__PVT__exu_inst = 0U;
    } else {
        if (vlSelf->__PVT__EXU_to_LSU_Regs__DOT__popline_wen) {
            vlSelf->__PVT__lsu_pc = vlSelf->__PVT__exu_pc;
            vlSelf->__PVT__lsu_inst = vlSelf->__PVT__exu_inst;
        }
        if (vlSelf->__PVT__ID_to_EXU_Regs__DOT__popline_wen) {
            vlSelf->__PVT__exu_pc = vlSelf->__PVT__id_pc;
            vlSelf->__PVT__exu_inst = vlSelf->__PVT__id_inst;
        }
    }
    vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs1 
        = ((IData)(vlSymsp->TOP__top__WB.__PVT__isRegWrite) 
           & (((0x1fU & (vlSelf->__PVT__exu_inst >> 0xfU)) 
               == (0x1fU & (vlSelf->__PVT__wb_inst 
                            >> 7U))) & (0U != (0x1fU 
                                               & (vlSelf->__PVT__wb_inst 
                                                  >> 7U)))));
    vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs1 
        = ((IData)(vlSelf->__PVT__o_lsu_isRegWrite) 
           & (((0x1fU & (vlSelf->__PVT__exu_inst >> 0xfU)) 
               == (0x1fU & (vlSelf->__PVT__lsu_inst 
                            >> 7U))) & (0U != (0x1fU 
                                               & (vlSelf->__PVT__lsu_inst 
                                                  >> 7U)))));
    vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs2 
        = ((IData)(vlSymsp->TOP__top__WB.__PVT__isRegWrite) 
           & (((0x1fU & (vlSelf->__PVT__exu_inst >> 0x14U)) 
               == (0x1fU & (vlSelf->__PVT__wb_inst 
                            >> 7U))) & (0U != (0x1fU 
                                               & (vlSelf->__PVT__wb_inst 
                                                  >> 7U)))));
    vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs2 
        = ((IData)(vlSelf->__PVT__o_lsu_isRegWrite) 
           & (((0x1fU & (vlSelf->__PVT__exu_inst >> 0x14U)) 
               == (0x1fU & (vlSelf->__PVT__lsu_inst 
                            >> 7U))) & (0U != (0x1fU 
                                               & (vlSelf->__PVT__lsu_inst 
                                                  >> 7U)))));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__id_pc = 0x7ffffff8ULL;
        vlSelf->__PVT__id_inst = 0U;
        vlSelf->__PVT__IFU__DOT__if_pc = 0x7ffffffcULL;
    } else {
        if (vlSelf->__PVT__IDRegs__DOT__popline_wen) {
            vlSelf->__PVT__id_pc = vlSelf->__PVT__IFU__DOT__if_pc;
            vlSelf->__PVT__id_inst = ((IData)(vlSelf->__PVT__IFU__DOT__inst_buffer_valid)
                                       ? vlSelf->__PVT__IFU__DOT__inst_buffer
                                       : vlSelf->__PVT__IFU__DOT__inst);
        }
        if (((IData)(vlSelf->icache_cnt) & (IData)(vlSelf->__PVT__IFU__DOT__if_allow_in))) {
            vlSelf->__PVT__IFU__DOT__if_pc = vlSelf->__PVT__IFU__DOT__prefetch_pc;
        }
    }
    if (((IData)(((0x100073U == (0x1f0007fU & vlSelf->__PVT__id_inst)) 
                  & (~ (IData)((0U != (7U & (vlSelf->__PVT__id_inst 
                                             >> 0xcU))))))) 
         & (IData)(vlSelf->__PVT__idu_valid))) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__IFU__DOT__inst_buffer = 0U;
    } else if (vlSelf->__PVT__IFU__DOT__inst_buffer_valid_set) {
        vlSelf->__PVT__IFU__DOT__inst_buffer = vlSelf->__PVT__IFU__DOT__inst;
    }
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
    vlSelf->__PVT__o_id_isecall = (((~ (IData)((0U 
                                                != 
                                                (0xfff07000U 
                                                 & vlSelf->__PVT__id_inst)))) 
                                    & (0x73U == (0x7fU 
                                                 & vlSelf->__PVT__id_inst))) 
                                   & (IData)(vlSelf->__PVT__idu_valid));
    vlSelf->__PVT__o_id_ismret = (((~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 0xcU))))) 
                                   & (0x302U == (vlSelf->__PVT__id_inst 
                                                 >> 0x14U))) 
                                  & (IData)(vlSelf->__PVT__idu_valid));
    if (((IData)(vlSelf->__PVT__flush_if) | (IData)(vlSymsp->TOP.rst))) {
        vlSelf->__PVT__IFU__DOT__inst_buffer_valid = 0U;
    } else if (((IData)(vlSelf->__PVT__IFU__DOT__inst_buffer_valid_set) 
                | (IData)(vlSelf->__PVT__id_allow_in))) {
        vlSelf->__PVT__IFU__DOT__inst_buffer_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__id_allow_in)) 
                     | (IData)(vlSelf->__PVT__IFU__DOT__inst_buffer_valid_set)));
    }
    vlSelf->__PVT__o_id_isTuncate = ((6U != (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                     & (vlSelf->__PVT__id_inst 
                                        >> 3U));
    vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0 
        = ((6U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
           | (0x67U == (0x7fU & vlSelf->__PVT__id_inst)));
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
    vlSelf->__PVT__o_id_RegWr = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit) 
                                 & (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
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
    vlSelf->__PVT__o_id_Imm = ((IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit)
                                ? vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out
                                : 0ULL);
    vlSelf->__PVT__IFU__DOT__inst = ((0U == (7U & (IData)(vlSelf->__PVT__IFU__DOT__if_pc)))
                                      ? (IData)(vlSelf->__PVT__icache_rdata)
                                      : (IData)((vlSelf->__PVT__icache_rdata 
                                                 >> 0x20U)));
    vlSelf->__PVT__if_ready_go = ((IData)(vlSelf->__PVT__icache_valid) 
                                  | (IData)(vlSelf->__PVT__IFU__DOT__inst_buffer_valid));
    vlSelf->__PVT__IDRegs__DOT__if_to_id_valid = ((IData)(vlSelf->__PVT__if_ready_go) 
                                                  & (IData)(vlSelf->__PVT__if_valid));
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
    // Init
    CData/*0:0*/ __PVT__o_lsu_raw_data_valid;
    __PVT__o_lsu_raw_data_valid = 0;
    // Body
    vlSelf->__PVT__LSU__DOT__clint_we = ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                         & ((~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)) 
                                            & ((3U 
                                                != (IData)(vlSelf->__PVT__lsu_MemOP)) 
                                               & (IData)(vlSelf->__PVT__lsu_MemWr))));
    vlSelf->__PVT__lsu_to_wb_valid = ((IData)(vlSelf->__PVT__lsu_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)) 
                                         & (IData)(vlSelf->__PVT__LSU__DOT__lsu_ready_go)));
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime_next 
        = (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
            & (0x200bff8ULL == vlSelf->__PVT__lsu_ALUres))
            ? vlSelf->__PVT__lsu_R_rs2 : (1ULL + vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime));
    __PVT__o_lsu_raw_data_valid = ((IData)(vlSelf->__PVT__o_lsu_isRegWrite) 
                                   & ((IData)(vlSelf->__PVT__lsu_to_wb_valid) 
                                      & (~ (IData)(vlSelf->__PVT__lsu_iscsr))));
    vlSelf->__PVT__forward_rs1_valid = ((IData)(vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs1)
                                         ? (IData)(__PVT__o_lsu_raw_data_valid)
                                         : ((IData)(vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs1) 
                                            & (IData)(vlSymsp->TOP__top__WB.__PVT__isRegWrite)));
    vlSelf->__PVT__forward_rs2_valid = ((IData)(vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs2)
                                         ? (IData)(__PVT__o_lsu_raw_data_valid)
                                         : ((IData)(vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs2) 
                                            & (IData)(vlSymsp->TOP__top__WB.__PVT__isRegWrite)));
    vlSelf->__PVT__EXU__DOT__data_valid = (1U & ((~ 
                                                  (((IData)(vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs1) 
                                                    | (IData)(vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs1)) 
                                                   | ((IData)(vlSelf->__PVT__ForwardUnit__DOT__lsu_hazard_rs2) 
                                                      | (IData)(vlSelf->__PVT__ForwardUnit__DOT__wb_hazard_rs2)))) 
                                                 | ((IData)(vlSelf->__PVT__forward_rs1_valid) 
                                                    | ((IData)(vlSelf->__PVT__forward_rs2_valid) 
                                                       | ((IData)(vlSelf->__PVT__EXU__DOT__r_forward_rs1_valid) 
                                                          | (IData)(vlSelf->__PVT__EXU__DOT__r_forward_rs2_valid))))));
}
