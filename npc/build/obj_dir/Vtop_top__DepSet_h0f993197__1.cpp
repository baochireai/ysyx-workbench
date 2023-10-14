// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h662a3cd9__0;
    VlWide<10>/*319:0*/ __Vtemp_hc912b0ac__0;
    VlWide<10>/*319:0*/ __Vtemp_h32385dcd__0;
    VlWide<10>/*319:0*/ __Vtemp_he5f99376__0;
    VlWide<3>/*95:0*/ __Vtemp_hdffffab9__0;
    VlWide<3>/*95:0*/ __Vtemp_h578f13e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h427c0a1d__0;
    VlWide<3>/*95:0*/ __Vtemp_h216c2d11__0;
    VlWide<3>/*95:0*/ __Vtemp_hf9de676f__0;
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U] = 0U;
        vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] = 0U;
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime = 0ULL;
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U] = 0U;
        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[2U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[7U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[8U] = 0U;
        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] = 0U;
    } else {
        if (vlSelf->__PVT__lsu_to_wb_valid) {
            __Vtemp_h662a3cd9__0[0U] = (IData)(((IData)(vlSelf->__PVT__LSU__DOT__isclint)
                                                 ? 
                                                ((- (QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                                                     & ((~ 
                                                                         (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                          >> 9U)) 
                                                                        & (3U 
                                                                           != 
                                                                           (7U 
                                                                            & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                               >> 6U)))))))) 
                                                 & ((0x200bff8ULL 
                                                     == 
                                                     (((QData)((IData)(
                                                                       vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                          << 0x1aU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                            >> 6U))))
                                                     ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime
                                                     : 
                                                    ((0x2004000ULL 
                                                      == 
                                                      (((QData)((IData)(
                                                                        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                             >> 6U))))
                                                      ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                                      : 0ULL)))
                                                 : vlSelf->__PVT__LSU__DOT__dataMem_out));
            __Vtemp_h662a3cd9__0[1U] = (IData)((((IData)(vlSelf->__PVT__LSU__DOT__isclint)
                                                  ? 
                                                 ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                                                      & ((~ 
                                                                          (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                           >> 9U)) 
                                                                         & (3U 
                                                                            != 
                                                                            (7U 
                                                                             & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                                >> 6U)))))))) 
                                                  & ((0x200bff8ULL 
                                                      == 
                                                      (((QData)((IData)(
                                                                        vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                             >> 6U))))
                                                      ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime
                                                      : 
                                                     ((0x2004000ULL 
                                                       == 
                                                       (((QData)((IData)(
                                                                         vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                            << 0x1aU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                              >> 6U))))
                                                       ? vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                                       : 0ULL)))
                                                  : vlSelf->__PVT__LSU__DOT__dataMem_out) 
                                                >> 0x20U));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                = ((vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                    << 0x1aU) | (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U] 
                                 >> 6U));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U] 
                = (IData)((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U])) 
                            << 0x3aU) | (((QData)((IData)(
                                                          vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                            >> 6U))));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] 
                = (IData)(((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U])) 
                             << 0x3aU) | (((QData)((IData)(
                                                           vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                             >> 6U))) 
                           >> 0x20U));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U] 
                = __Vtemp_h662a3cd9__0[0U];
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U] 
                = __Vtemp_h662a3cd9__0[1U];
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U] 
                = (IData)((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                            << 0x3aU) | (((QData)((IData)(
                                                          vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                            >> 6U))));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U] 
                = (IData)(((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                             << 0x3aU) | (((QData)((IData)(
                                                           vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                             >> 6U))) 
                           >> 0x20U));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                = (((IData)((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U])))) 
                    << 3U) | (7U & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] 
                                    >> 3U)));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U] 
                = (((IData)((((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U])))) 
                    >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U]))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                = ((0x70U & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] 
                             << 4U)) | (((IData)(vlSelf->__PVT__o_lsu_clint_mtip) 
                                         << 3U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1dU)));
        }
        vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
            = vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime_next;
        if (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
             & (0x2004000ULL == (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                  << 0x3aU) | (((QData)((IData)(
                                                                vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                  >> 6U)))))) {
            vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp 
                = (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                    << 0x3aU) | (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                               >> 6U)));
        }
        if (((IData)(vlSelf->__PVT__exu_to_lsu_valid) 
             & ((~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)) 
                & (IData)(vlSelf->__PVT__lsu_allow_in)))) {
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[0U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[7U];
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[8U];
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U] 
                = (((IData)(vlSelf->__PVT__o_exu_cache_addr) 
                    << 6U) | ((0x30U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                        << 1U)) | (
                                                   (8U 
                                                    & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                                       >> 2U)) 
                                                   | (7U 
                                                      & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U]))));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U] 
                = (((IData)(vlSelf->__PVT__o_exu_cache_addr) 
                    >> 0x1aU) | ((IData)((vlSelf->__PVT__o_exu_cache_addr 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U] 
                = (((IData)((vlSelf->__PVT__o_exu_cache_addr 
                             >> 0x20U)) >> 0x1aU) | 
                   (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U] 
                    << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[5U] 
                = ((vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U] 
                    >> 0x1aU) | (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U] 
                                 << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[6U] 
                = ((vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U] 
                    >> 0x1aU) | (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[2U] 
                                 << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U] 
                = ((vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[2U] 
                    >> 0x1aU) | ((IData)((((QData)((IData)(
                                                           vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U])))) 
                                 << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U] 
                = (((IData)((((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U])))) 
                    >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U]))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                = ((0x200U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                              << 3U)) | ((0x1c0U & 
                                          (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                           >> 1U)) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)));
        }
        if (((IData)(vlSelf->__PVT__id_to_exu_valid) 
             & ((~ (IData)(vlSelf->__Vcellinp__ID_to_EXU_Regs__pipeline_flush)) 
                & (IData)(vlSelf->__PVT__exu_allow_in)))) {
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[0U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[1U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[2U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[2U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[3U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[4U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[5U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[6U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[7U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[7U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[8U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[8U];
            vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                = vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[9U];
        }
    }
    vlSelf->__PVT__o_lsu_clint_mtip = ((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                >> 3U)) 
                                       & ((vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime 
                                           > vlSelf->__PVT__LSU__DOT__clintU__DOT__mtimecmp) 
                                          & (IData)(vlSelf->__PVT__lsu_valid)));
    vlSelf->__PVT__LSU__DOT__isclint = ((0x2000000ULL 
                                         <= (((QData)((IData)(
                                                              vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                   >> 6U)))) 
                                        & (0x200bfffULL 
                                           >= (((QData)((IData)(
                                                                vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                     >> 6U)))));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[0U][0U] 
        = (IData)(((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->__PVT__dcache_data_o 
                                                          >> 7U)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->__PVT__dcache_data_o)))))
                    : (QData)((IData)((0xffU & (IData)(vlSelf->__PVT__dcache_data_o))))));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[0U][1U] 
        = (IData)((((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                     ? (((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->__PVT__dcache_data_o 
                                                           >> 7U)))))) 
                         << 8U) | (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->__PVT__dcache_data_o)))))
                     : (QData)((IData)((0xffU & (IData)(vlSelf->__PVT__dcache_data_o))))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[0U][2U] = 0U;
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[1U][0U] 
        = (IData)(((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->__PVT__dcache_data_o 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__PVT__dcache_data_o)))))
                    : (QData)((IData)((0xffffU & (IData)(vlSelf->__PVT__dcache_data_o))))));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[1U][1U] 
        = (IData)((((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                     ? (((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->__PVT__dcache_data_o 
                                                           >> 0xfU)))))) 
                         << 0x10U) | (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__PVT__dcache_data_o)))))
                     : (QData)((IData)((0xffffU & (IData)(vlSelf->__PVT__dcache_data_o))))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[2U][0U] 
        = (IData)(((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__dcache_data_o 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__dcache_data_o)))
                    : (QData)((IData)(vlSelf->__PVT__dcache_data_o))));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[2U][1U] 
        = (IData)((((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__dcache_data_o 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__dcache_data_o)))
                     : (QData)((IData)(vlSelf->__PVT__dcache_data_o))) 
                   >> 0x20U));
    vlSelf->__PVT__LSU__DOT__sext__DOT__pair_list[2U][2U] = 2U;
    if ((0x100U & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) {
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[0U] 
            = (((- (QData)((IData)((1U & (IData)((vlSelf->__PVT__dcache_data_o 
                                                  >> 7U)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->__PVT__dcache_data_o)))));
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[1U] 
            = (((- (QData)((IData)((1U & (IData)((vlSelf->__PVT__dcache_data_o 
                                                  >> 0xfU)))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->__PVT__dcache_data_o)))));
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[2U] 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->__PVT__dcache_data_o 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__dcache_data_o)));
    } else {
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[0U] 
            = (QData)((IData)((0xffU & (IData)(vlSelf->__PVT__dcache_data_o))));
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[1U] 
            = (QData)((IData)((0xffffU & (IData)(vlSelf->__PVT__dcache_data_o))));
        vlSelf->__PVT__LSU__DOT__sext__DOT__data_list[2U] 
            = (QData)((IData)(vlSelf->__PVT__dcache_data_o));
    }
    vlSelf->__PVT__LSU__DOT__lsu_ready_go = ((3U == 
                                              (7U & 
                                               (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                >> 6U))) 
                                             | ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                                | (((IData)(vlSelf->__PVT__dcache__DOT__hit_rvalid) 
                                                    | ((IData)(vlSelf->__PVT__dcache__DOT__cache_miss_rvalid) 
                                                       | (IData)(vlSelf->__PVT__dcache__DOT__uncache_rvalid))) 
                                                   | (IData)(vlSelf->__PVT__dcache__DOT__op_r))));
    vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out = (
                                                   (- (QData)((IData)(
                                                                      ((3U 
                                                                        & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                           >> 6U)) 
                                                                       == 
                                                                       vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                                       [0U])))) 
                                                   & vlSelf->__PVT__LSU__DOT__sext__DOT__data_list
                                                   [0U]);
    vlSelf->__PVT__LSU__DOT__sext__DOT__hit = ((3U 
                                                & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                   >> 6U)) 
                                               == vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                               [0U]);
    vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out = (vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out 
                                                   | ((- (QData)((IData)(
                                                                         ((3U 
                                                                           & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                              >> 6U)) 
                                                                          == 
                                                                          vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                                          [1U])))) 
                                                      & vlSelf->__PVT__LSU__DOT__sext__DOT__data_list
                                                      [1U]));
    vlSelf->__PVT__LSU__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__LSU__DOT__sext__DOT__hit) 
                                               | ((3U 
                                                   & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                      >> 6U)) 
                                                  == 
                                                  vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                  [1U]));
    vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out = (vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out 
                                                   | ((- (QData)((IData)(
                                                                         ((3U 
                                                                           & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                              >> 6U)) 
                                                                          == 
                                                                          vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                                          [2U])))) 
                                                      & vlSelf->__PVT__LSU__DOT__sext__DOT__data_list
                                                      [2U]));
    vlSelf->__PVT__LSU__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__LSU__DOT__sext__DOT__hit) 
                                               | ((3U 
                                                   & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                      >> 6U)) 
                                                  == 
                                                  vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                  [2U]));
    vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out = (vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out 
                                                   | ((- (QData)((IData)(
                                                                         ((3U 
                                                                           & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                                              >> 6U)) 
                                                                          == 
                                                                          vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                                          [3U])))) 
                                                      & vlSelf->__PVT__LSU__DOT__sext__DOT__data_list
                                                      [3U]));
    vlSelf->__PVT__LSU__DOT__sext__DOT__hit = ((IData)(vlSelf->__PVT__LSU__DOT__sext__DOT__hit) 
                                               | ((3U 
                                                   & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                      >> 6U)) 
                                                  == 
                                                  vlSelf->__PVT__LSU__DOT__sext__DOT__key_list
                                                  [3U]));
    vlSelf->__PVT__LSU__DOT__dataMem_out = ((IData)(vlSelf->__PVT__LSU__DOT__sext__DOT__hit)
                                             ? vlSelf->__PVT__LSU__DOT__sext__DOT__lut_out
                                             : 0ULL);
    __Vtemp_hc912b0ac__0[9U] = (((((3U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (3U == (0x7fU 
                                             & vlSelf->__PVT__id_inst)))
                                   ? ((4U & ((~ (vlSelf->__PVT__id_inst 
                                                 >> 0xeU)) 
                                             << 2U)) 
                                      | (3U & (vlSelf->__PVT__id_inst 
                                               >> 0xcU)))
                                   : 3U) << 7U) | (
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__PVT__o_id_RegWr) 
                                                       << 5U) 
                                                      | ((0xfffffff8U 
                                                          & ((8U 
                                                              & ((- (IData)(
                                                                            (3U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->__PVT__id_inst)))) 
                                                                 << 3U)) 
                                                             | (0x10U 
                                                                & ((- (IData)(
                                                                              (0x73U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->__PVT__id_inst)))) 
                                                                   << 3U)))) 
                                                         | (((IData)(vlSelf->__PVT__o_id_isecall) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->__PVT__o_id_ismret) 
                                                                << 1U) 
                                                               | (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->__PVT__id_inst 
                                                                        >> 0xcU))) 
                                                                   & (0x73U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->__PVT__id_inst))) 
                                                                  & (IData)(vlSelf->__PVT__idu_valid))))))));
    __Vtemp_h32385dcd__0[9U] = (((((0x17U == (0x7fU 
                                              & vlSelf->__PVT__id_inst)) 
                                   | ((3U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->__PVT__id_inst)) 
                                         | (IData)(vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0))))
                                   ? 0U : ((4U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                            ? (2U | 
                                               (8U 
                                                & (vlSelf->__PVT__id_inst 
                                                   >> 0xaU)))
                                            : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__id_inst))
                                                ? 3U
                                                : (
                                                   (((0x33U 
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
                                                           >> 0xcU)))))))) 
                                 << 0xfU) | (((IData)(vlSelf->__PVT__o_id_isTuncate) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->__PVT__o_id_isTuncate) 
                                                 << 0xdU) 
                                                | ((0x1c00U 
                                                    & ((0x1400U 
                                                        & (((- (IData)(
                                                                       (4U 
                                                                        == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)))) 
                                                            << 0xaU) 
                                                           & (vlSelf->__PVT__id_inst 
                                                              >> 2U))) 
                                                       | ((0x1800U 
                                                           & ((- (IData)(
                                                                         (6U 
                                                                          == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)))) 
                                                              << 0xaU)) 
                                                          | (((- (IData)(
                                                                         (0x67U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->__PVT__id_inst)))) 
                                                              << 0xaU) 
                                                             | (0x800U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                                                | (IData)(vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)))))) 
                                                                   << 0xaU)))))) 
                                                   | __Vtemp_hc912b0ac__0[9U]))));
    __Vtemp_he5f99376__0[9U] = (((((0x67U != (0x7fU 
                                              & vlSelf->__PVT__id_inst)) 
                                   & (2U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                                  | ((1U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                     | ((3U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                        | (4U == (IData)(vlSelf->__PVT__IDU__DOT__ContrGenU__DOT__Extop))))) 
                                 << 0x16U) | ((((IData)(vlSelf->IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
                                                 ? 2U
                                                 : 
                                                ((1U 
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
                                                   : 3U))) 
                                               << 0x14U) 
                                              | __Vtemp_h32385dcd__0[9U]));
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[0U] 
        = (IData)(vlSelf->__PVT__id_pc);
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[1U] 
        = (IData)((vlSelf->__PVT__id_pc >> 0x20U));
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[2U] 
        = vlSelf->__PVT__id_inst;
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[3U] 
        = (IData)(vlSelf->__PVT__o_id_Imm);
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[4U] 
        = (IData)((vlSelf->__PVT__o_id_Imm >> 0x20U));
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[5U] 
        = (IData)(vlSelf->__PVT__RegisterFile__DOT__rf
                  [(0x1fU & (vlSelf->__PVT__id_inst 
                             >> 0x14U))]);
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[6U] 
        = (IData)((vlSelf->__PVT__RegisterFile__DOT__rf
                   [(0x1fU & (vlSelf->__PVT__id_inst 
                              >> 0x14U))] >> 0x20U));
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[7U] 
        = (IData)(vlSelf->__PVT__RegisterFile__DOT__rf
                  [(0x1fU & (vlSelf->__PVT__id_inst 
                             >> 0xfU))]);
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[8U] 
        = (IData)((vlSelf->__PVT__RegisterFile__DOT__rf
                   [(0x1fU & (vlSelf->__PVT__id_inst 
                              >> 0xfU))] >> 0x20U));
    vlSelf->ID_to_EXU_Regs__DOT____Vcellinp__id_to_exu_pipeline_regs__din[9U] 
        = __Vtemp_he5f99376__0[9U];
    vlSelf->__PVT__lsu_allow_in = (1U & ((~ (IData)(vlSelf->__PVT__lsu_valid)) 
                                         | (IData)(vlSelf->__PVT__LSU__DOT__lsu_ready_go)));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U]))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U]))) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U]))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U]))) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                              >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
                       [0U]))) & vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit 
        = ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
                          [1U]))) & vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit) 
           | ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
                          [2U]))) & vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit) 
           | ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
                          [3U]))) & vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit) 
           | ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 7U)) == vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__key_list
              [3U]));
    vlSelf->__PVT__o_exu_cache_wstrb = ((IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__hit)
                                         ? (IData)(vlSelf->__PVT__EXU__DOT__MemWstrb_decode__DOT__lut_out)
                                         : 0U);
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key 
        = ((8U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0x10U)) | (7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                      >> 0xfU)));
    vlSelf->EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = ((2U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0x11U)) | (1U == (7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                             >> 0xfU))));
    vlSelf->EXU__DOT__ex_alu__DOT____Vcellinp__diver__key 
        = ((2U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0x11U)) | (1U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                      >> 0xeU)));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add = 
        ((2U == (7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                       >> 0xfU))) | (IData)((0x40000U 
                                             == (0x78000U 
                                                 & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U]))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[6U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[5U])));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U])));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA = ((0x400000U 
                                                   & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[8U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[7U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U]))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = ((- (QData)((IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                      >> 0x14U)) == 
                               vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                               [0U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0x14U)) == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                         >> 0x14U)) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                                  [1U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit) 
           | ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0x14U)) == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                         >> 0x14U)) 
                                  == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
                                  [2U])))) & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit) 
           | ((3U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0x14U)) == vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit)
                                                   ? vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out
                                                   : 0ULL);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][0U] 
        = (IData)(VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][1U] 
        = (IData)((VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2U] 
        = VL_MODDIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][0U] 
        = (IData)(VL_DIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][1U] 
        = (IData)((VL_DIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2U][2U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][0U] 
        = (IData)(VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][1U] 
        = (IData)((VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][0U] 
        = (IData)(VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][1U] 
        = (IData)((VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3U][2U] = 2U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][0U] 
        = (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][1U] 
        = (IData)((vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                   >> 0x20U));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0xcU][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__XOR = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 ^ vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__OR = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                | vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__AND = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 & vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__MUL = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                 * vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xcU] 
        = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB;
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
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2U] 
        = VL_DIVS_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3U] 
        = VL_DIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3U] 
        = VL_MODDIV_QQQ(64, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__VdfgTmp_h33a131e2__0 = VL_DIVS_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h33875d38__0 = VL_DIV_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h3320a607__0 = VL_MODDIVS_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__VdfgTmp_h333c864b__0 = VL_MODDIV_III(32, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA), (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
        = ((- (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add))) 
           ^ vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB);
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt 
        = ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
           & ((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
               ? 0x1fU : 0x3fU));
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
        = vlSelf->__VdfgTmp_h33a131e2__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h33a131e2__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h33875d38__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h33875d38__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][0U] 
        = vlSelf->__VdfgTmp_h3320a607__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1U][2U] = 1U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h3320a607__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][0U] 
        = vlSelf->__VdfgTmp_h333c864b__0;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][1U] = 0U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0U][2U] = 3U;
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h333c864b__0));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xfU] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           + (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
              + (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__Sub_Add))));
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
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = (IData)(((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
                    ? (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                        ? ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                           >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                        : 0U))) : (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                   >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = (IData)((((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
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
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           << (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
           << (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA, (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
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
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = (IData)(((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
                    ? ((((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                       >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                    : vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = (IData)((((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
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
    if ((0x40000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS;
        vlSelf->__PVT__EXU__DOT__Less = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessUS;
    } else {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3U] 
            = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS;
        vlSelf->__PVT__EXU__DOT__Less = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__lessS;
    }
    if ((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])) {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
            = (QData)((IData)(((0x1fU >= (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                ? ((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                   >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                : 0U)));
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
            = ((((QData)((IData)((- (IData)((1U & (IData)(
                                                          (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                           >> 0x1fU))))))) 
                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
               >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
    } else {
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
            = (vlSelf->__PVT__EXU__DOT__ex_alu__DOT__ALUA 
               >> (IData)(vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt));
        vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
            = vlSelf->__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra;
    }
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
    if (vlSelf->__PVT__EXU__DOT__Less) {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 1U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 3U;
    } else {
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] = 3U;
        vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] = 1U;
    }
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->__PVT__EXU__DOT__Less)));
    vlSelf->__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0xdU] 
        = (QData)((IData)(vlSelf->__PVT__EXU__DOT__Less));
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
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                              >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                       [0U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [1U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [2U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [3U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [4U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [5U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                 >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [6U]))) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [6U]));
    vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                   >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
            [0U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                  >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
           [0U]);
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [1U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [1U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [2U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [2U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [3U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [3U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [4U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [4U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [5U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [5U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out) 
           | (((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                      >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
               [6U]) & vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit 
        = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
           | ((7U & (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                     >> 0xaU)) == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list
              [6U]));
    vlSelf->__PVT__EXU__DOT__is_jump_d = ((IData)(vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit) 
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
    vlSelf->__PVT__o_exu_cache_addr = ((0x4000U & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
                                        ? ((0x2000U 
                                            & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U])
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
    vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp 
        = (0xfffffffffffffffeULL & (((2U & (IData)(vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? (((QData)((IData)(
                                                          vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[4U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[3U])))
                                      : 4ULL) + ((1U 
                                                  & (IData)(vlSelf->EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[8U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[7U]))))));
    vlSelf->__PVT__dcache__DOT__tagvd_rdata[0U] = vlSelf->__PVT__dcache__DOT__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__DOT__tagvd
        [(0x7fU & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                           >> 4U)))];
    vlSelf->__PVT__dcache__DOT__tagvd_rdata[1U] = vlSelf->__PVT__dcache__DOT__tag_regs_gen__BRA__1__KET____DOT__tagvd_regs__DOT__tagvd
        [(0x7fU & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                           >> 4U)))];
    if (vlSelf->__PVT__axi_rw_interface__DOT__wr_req) {
        vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0 
            = (1U & (vlSelf->__PVT__dcache__DOT__addr_r 
                     >> 0xaU));
        vlSelf->__PVT__dcache__DOT__darray_raddr = 
            (0x3fU & (vlSelf->__PVT__dcache__DOT__addr_r 
                      >> 4U));
    } else {
        vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0 
            = (1U & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                             >> 0xaU)));
        vlSelf->__PVT__dcache__DOT__darray_raddr = 
            (0x3fU & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                              >> 4U)));
    }
    vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagvd_regs__o_dout 
        = vlSelf->__PVT__dcache__DOT__tag_regs_gen__BRA__1__KET____DOT__tagvd_regs__DOT__tagvd
        [(0x7fU & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                           >> 4U)))];
    vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
        = vlSelf->__PVT__dcache__DOT__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__DOT__tagvd
        [(0x7fU & (IData)((vlSelf->__PVT__o_exu_cache_addr 
                           >> 4U)))];
    vlSelf->__PVT__dcache__DOT__raw = (((1U & (IData)(
                                                      (vlSelf->__PVT__o_exu_cache_addr 
                                                       >> 0xaU))) 
                                        == (1U & (vlSelf->__PVT__dcache__DOT__addr_r 
                                                  >> 0xaU))) 
                                       & ((IData)(vlSelf->__PVT__dcache__DOT__op_r) 
                                          & (1U == (IData)(vlSelf->__PVT__dcache__DOT__cur_state))));
    vlSelf->__PVT__EXU__DOT__isMem = ((3U != (7U & 
                                              (vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U] 
                                               >> 7U))) 
                                      & ((~ ((0x2000000ULL 
                                              <= vlSelf->__PVT__o_exu_cache_addr) 
                                             & (0x200bfffULL 
                                                >= vlSelf->__PVT__o_exu_cache_addr))) 
                                         & (IData)(vlSelf->__PVT__exu_valid)));
    if ((8U & (IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__dcache__io_sram3_addr = 
            (0x3fU & (vlSelf->__PVT__dcache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__dcache_sram_addr[3U] = (0x3fU 
                                               & (vlSelf->__PVT__dcache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__dcache__io_sram3_addr = 
            (0x3fU & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
        vlSelf->__PVT__dcache_sram_addr[3U] = (0x3fU 
                                               & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
    }
    if ((4U & (IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__dcache__io_sram2_addr = 
            (0x3fU & (vlSelf->__PVT__dcache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__dcache_sram_addr[2U] = (0x3fU 
                                               & (vlSelf->__PVT__dcache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__dcache__io_sram2_addr = 
            (0x3fU & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
        vlSelf->__PVT__dcache_sram_addr[2U] = (0x3fU 
                                               & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
    }
    if ((2U & (IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__dcache__io_sram1_addr = 
            (0x3fU & (vlSelf->__PVT__dcache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__dcache_sram_addr[1U] = (0x3fU 
                                               & (vlSelf->__PVT__dcache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__dcache__io_sram1_addr = 
            (0x3fU & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
        vlSelf->__PVT__dcache_sram_addr[1U] = (0x3fU 
                                               & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
    }
    if ((1U & (IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__dcache__io_sram0_addr = 
            (0x3fU & (vlSelf->__PVT__dcache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__dcache_sram_addr[0U] = (0x3fU 
                                               & (vlSelf->__PVT__dcache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__dcache__io_sram0_addr = 
            (0x3fU & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
        vlSelf->__PVT__dcache_sram_addr[0U] = (0x3fU 
                                               & (IData)(vlSelf->__PVT__dcache__DOT__darray_raddr));
    }
    vlSelf->__PVT__dcache__DOT__refill_waynum = (1U 
                                                 & ((2U 
                                                     & vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout)
                                                     ? 
                                                    (~ 
                                                     (vlSelf->__PVT__dcache__DOT__recently_used_way[
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__o_exu_cache_addr 
                                                                   >> 4U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__o_exu_cache_addr 
                                                                  >> 4U)))))
                                                     : 
                                                    (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                                     >> 1U)));
    vlSelf->__PVT__dcache__DOT__hit_way0 = (((0x1fffffU 
                                              & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                                 >> 2U)) 
                                             == (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__o_exu_cache_addr 
                                                            >> 0xbU)))) 
                                            & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                               >> 1U));
    vlSelf->__PVT__dcache__DOT__hit_way1 = (((0x1fffffU 
                                              & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagvd_regs__o_dout 
                                                 >> 2U)) 
                                             == (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__o_exu_cache_addr 
                                                            >> 0xbU)))) 
                                            & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                               >> 1U));
    vlSelf->__PVT__dcache__DOT__refill_dirty = (1U 
                                                & (((~ (IData)(vlSelf->__PVT__dcache__DOT__refill_waynum)) 
                                                    & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                                       & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                                          >> 1U))) 
                                                   | ((IData)(vlSelf->__PVT__dcache__DOT__refill_waynum) 
                                                      & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagvd_regs__o_dout 
                                                         & (vlSelf->dcache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagvd_regs__o_dout 
                                                            >> 1U)))));
    vlSelf->__PVT__dcache__DOT__cache_hit = ((IData)(vlSelf->__PVT__dcache__DOT__hit_way0) 
                                             | (IData)(vlSelf->__PVT__dcache__DOT__hit_way1));
    vlSelf->__PVT__dcache__DOT__curent_way = ((IData)(vlSelf->__PVT__dcache__DOT__cache_hit)
                                               ? (IData)(vlSelf->__PVT__dcache__DOT__hit_way1)
                                               : (IData)(vlSelf->__PVT__dcache__DOT__refill_waynum));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_hf5df7271_0;

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__3\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hbdb21aa9__0;
    VlWide<3>/*95:0*/ __Vtemp_h4868fb77__0;
    VlWide<4>/*127:0*/ __Vtemp_h620571d8__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc64379b__0;
    VlWide<3>/*95:0*/ __Vtemp_h70f4feae__0;
    VlWide<4>/*127:0*/ __Vtemp_h4baab0db__0;
    // Body
    vlSelf->witf__DOT____VdfgTmp_h18d0ad63__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (7U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h1502befe__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (6U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h5e3be3b1__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (5U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h5e289ef1__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (4U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h1b15740b__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (3U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h1534ebe7__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (2U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h12e0aba8__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (1U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->witf__DOT____VdfgTmp_h12fccb8d__0 = ((IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena 
        = ((7U == (IData)(vlSelf->__PVT__witf__DOT__rptr_r)) 
           & (IData)(vlSymsp->TOP__top__WB.__PVT__witf_pop_en));
    vlSelf->EXU_to_LSU_Regs__DOT____Vcellinp__lsu_valid_reg____pinNumber2 
        = ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC) 
           | (IData)(vlSymsp->TOP.rst));
    vlSelf->__PVT__LSU__DOT__clint_we = ((IData)(vlSelf->__PVT__LSU__DOT__isclint) 
                                         & ((~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)) 
                                            & ((3U 
                                                != 
                                                (7U 
                                                 & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                    >> 6U))) 
                                               & (vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U] 
                                                  >> 9U))));
    vlSelf->__PVT__lsu_to_wb_valid = ((IData)(vlSelf->__PVT__lsu_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)) 
                                         & (IData)(vlSelf->__PVT__LSU__DOT__lsu_ready_go)));
    vlSelf->__PVT__jumppc = (((- (QData)((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC))) 
                              & ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                  ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                  : ((IData)(vlSymsp->TOP__top__WB.__Vcellinp__IntrUnit__i_ismret)
                                      ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                      : (((QData)((IData)(
                                                          vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->LSU_to_WB_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[1U])))))) 
                             | ((- (QData)((IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC)))))) 
                                & ((0ULL == vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                    ? 0x80000000ULL
                                    : vlSelf->__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)));
    vlSelf->__PVT__o_exu_cache_req = ((~ ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC) 
                                          | (IData)(vlSelf->__PVT__o_lsu_clint_mtip))) 
                                      & (IData)(vlSelf->__PVT__EXU__DOT__isMem));
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_nxt 
        = ((IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__witf__DOT__rptr_r))));
    vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime_next 
        = (((IData)(vlSelf->__PVT__LSU__DOT__clint_we) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[4U])) 
                                 << 0x3aU) | (((QData)((IData)(
                                                               vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[3U])) 
                                               << 0x1aU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U])) 
                                                 >> 6U)))))
            ? (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[9U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[8U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[7U])) 
                                           >> 6U)))
            : (1ULL + vlSelf->__PVT__LSU__DOT__clintU__DOT__mtime));
    vlSelf->__PVT__dcache__DOT__recently_used_wen = 
        ((IData)(vlSelf->__PVT__o_exu_cache_req) & 
         ((0U == (IData)(vlSelf->__PVT__dcache__DOT__cur_state)) 
          | ((~ (IData)(vlSelf->__PVT__dcache__DOT__raw)) 
             & (1U == (IData)(vlSelf->__PVT__dcache__DOT__cur_state)))));
    vlSelf->__PVT__dcache__DOT__next_state = ((4U & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__axi_dcache_rvalid) 
                                                     & (IData)(vlSelf->__PVT__axi_dcache_rlast))
                                                     ? 5U
                                                     : 4U)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__axi_dcache_rd_ready)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__axi_rw_interface__DOT__dcache_wr_doing)
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->__PVT__dcache__DOT__uncache_r) 
                                                      & (IData)(vlSelf->__PVT__dcache__DOT__op_r))
                                                      ? 0U
                                                      : 3U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__dcache__DOT__cur_state))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__o_exu_cache_req)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__dcache__DOT__raw)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__dcache__DOT__cache_hit)
                                                       ? 1U
                                                       : 2U))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__o_exu_cache_req)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__dcache__DOT__cache_hit)
                                                      ? 1U
                                                      : 2U)
                                                     : 0U))));
    vlSelf->__PVT__dcache__DOT__io_sram_rce = ((((IData)(vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0) 
                                                 << 3U) 
                                                | ((4U 
                                                    & ((~ (IData)(vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->dcache__DOT____VdfgTmp_hd0e28c5e__0)))))) 
                                               & (- (IData)(
                                                            ((IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen) 
                                                             | (IData)(vlSelf->__PVT__axi_rw_interface__DOT__wr_req)))));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__127__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__126__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__125__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__124__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__123__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__122__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__121__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x790ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__120__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x780ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__119__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x770ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__118__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x760ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__117__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x750ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__116__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x740ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__115__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x730ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__114__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x720ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__113__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x710ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__112__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x700ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__111__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__110__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__109__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__108__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__107__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__106__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__105__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x690ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__104__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x680ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__103__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x670ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__102__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x660ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__101__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x650ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__100__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x640ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__99__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x630ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__98__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x620ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__97__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x610ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__96__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x600ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__95__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__94__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__93__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__92__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__91__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__90__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__89__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x590ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__88__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x580ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__87__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x570ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__86__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x560ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__85__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x550ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__84__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x540ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__83__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x530ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__82__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x520ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__81__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x510ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__80__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x500ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__79__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__78__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__77__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__76__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__75__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__74__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__73__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x490ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__72__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x480ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__71__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x470ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__70__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x460ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__69__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x450ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__68__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x440ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__67__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x430ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__66__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x420ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__65__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x410ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__64__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x400ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x390ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x380ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x370ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x360ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x350ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x340ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x330ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x320ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x310ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x300ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x290ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x280ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x270ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x260ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x250ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x240ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x230ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x220ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x210ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x200ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1f0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1e0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1d0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1c0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1b0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1a0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x190ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x180ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x170ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x160ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x150ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x140ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x130ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x120ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x110ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x100ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xf0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xe0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xd0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xc0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xb0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xa0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x90ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x80ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x70ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x60ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x50ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x40ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x30ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x20ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x10ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen 
        = (IData)(((0ULL == (0x7f0ULL & vlSelf->__PVT__o_exu_cache_addr)) 
                   & (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->__PVT__EXU__DOT__exu_ready_go = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__EXU__DOT__isMem)) 
                                                   | (IData)(vlSelf->__PVT__dcache__DOT__recently_used_wen)));
    vlSelf->__Vcellout__dcache__io_sram3_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__dcache__DOT__io_sram_rce)) 
                                                   >> 3U));
    vlSelf->__Vcellout__dcache__io_sram2_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__dcache__DOT__io_sram_rce)) 
                                                   >> 2U));
    vlSelf->__Vcellout__dcache__io_sram1_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__dcache__DOT__io_sram_rce)) 
                                                   >> 1U));
    vlSelf->__Vcellout__dcache__io_sram0_cen = (1U 
                                                & ((IData)(vlSelf->__PVT__dcache__DOT__io_sram_wcen) 
                                                   | (IData)(vlSelf->__PVT__dcache__DOT__io_sram_rce)));
    __Vtemp_hbdb21aa9__0[0U] = (IData)((((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hbdb21aa9__0[1U] = (IData)(((((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h4868fb77__0[2U] = (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__80__KET____DOT__recently_used_reg__wen) 
                                 << 0x10U) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__79__KET____DOT__recently_used_reg__wen) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__78__KET____DOT__recently_used_reg__wen) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__77__KET____DOT__recently_used_reg__wen) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__76__KET____DOT__recently_used_reg__wen) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__75__KET____DOT__recently_used_reg__wen) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__74__KET____DOT__recently_used_reg__wen) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__73__KET____DOT__recently_used_reg__wen) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__72__KET____DOT__recently_used_reg__wen) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__71__KET____DOT__recently_used_reg__wen) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__70__KET____DOT__recently_used_reg__wen) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__69__KET____DOT__recently_used_reg__wen) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__68__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__67__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__66__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__65__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__64__KET____DOT__recently_used_reg__wen)))))))))))))))));
    __Vtemp_h620571d8__0[3U] = (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__112__KET____DOT__recently_used_reg__wen) 
                                 << 0x10U) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__111__KET____DOT__recently_used_reg__wen) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__110__KET____DOT__recently_used_reg__wen) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__109__KET____DOT__recently_used_reg__wen) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__108__KET____DOT__recently_used_reg__wen) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__107__KET____DOT__recently_used_reg__wen) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__106__KET____DOT__recently_used_reg__wen) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__105__KET____DOT__recently_used_reg__wen) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__104__KET____DOT__recently_used_reg__wen) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__103__KET____DOT__recently_used_reg__wen) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__102__KET____DOT__recently_used_reg__wen) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__101__KET____DOT__recently_used_reg__wen) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__100__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__99__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__98__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__97__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__96__KET____DOT__recently_used_reg__wen)))))))))))))))));
    vlSelf->__PVT__dcache__DOT__recently_used_wens[0U] 
        = __Vtemp_hbdb21aa9__0[0U];
    vlSelf->__PVT__dcache__DOT__recently_used_wens[1U] 
        = __Vtemp_hbdb21aa9__0[1U];
    vlSelf->__PVT__dcache__DOT__recently_used_wens[2U] 
        = (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__95__KET____DOT__recently_used_reg__wen) 
            << 0x1fU) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__94__KET____DOT__recently_used_reg__wen) 
                          << 0x1eU) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__93__KET____DOT__recently_used_reg__wen) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__92__KET____DOT__recently_used_reg__wen) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__91__KET____DOT__recently_used_reg__wen) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__90__KET____DOT__recently_used_reg__wen) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__89__KET____DOT__recently_used_reg__wen) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__88__KET____DOT__recently_used_reg__wen) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__87__KET____DOT__recently_used_reg__wen) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__86__KET____DOT__recently_used_reg__wen) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__85__KET____DOT__recently_used_reg__wen) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__84__KET____DOT__recently_used_reg__wen) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__83__KET____DOT__recently_used_reg__wen) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__82__KET____DOT__recently_used_reg__wen) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__81__KET____DOT__recently_used_reg__wen) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h4868fb77__0[2U])))))))))))))));
    vlSelf->__PVT__dcache__DOT__recently_used_wens[3U] 
        = (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__127__KET____DOT__recently_used_reg__wen) 
            << 0x1fU) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__126__KET____DOT__recently_used_reg__wen) 
                          << 0x1eU) | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__125__KET____DOT__recently_used_reg__wen) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__124__KET____DOT__recently_used_reg__wen) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__123__KET____DOT__recently_used_reg__wen) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__122__KET____DOT__recently_used_reg__wen) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__121__KET____DOT__recently_used_reg__wen) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__120__KET____DOT__recently_used_reg__wen) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__119__KET____DOT__recently_used_reg__wen) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__118__KET____DOT__recently_used_reg__wen) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__117__KET____DOT__recently_used_reg__wen) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__116__KET____DOT__recently_used_reg__wen) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__115__KET____DOT__recently_used_reg__wen) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__114__KET____DOT__recently_used_reg__wen) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->dcache__DOT____Vcellinp__recently_used_regs_gen__BRA__113__KET____DOT__recently_used_reg__wen) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h620571d8__0[3U])))))))))))))));
    vlSelf->__PVT__exu_allow_in = (1U & ((~ (IData)(vlSelf->__PVT__exu_valid)) 
                                         | ((IData)(vlSelf->__PVT__EXU__DOT__exu_ready_go) 
                                            & (IData)(vlSelf->__PVT__lsu_allow_in))));
    vlSelf->__PVT__exu_to_lsu_valid = ((IData)(vlSelf->__PVT__exu_valid) 
                                       & (IData)(vlSelf->__PVT__EXU__DOT__exu_ready_go));
    vlSelf->__PVT__id_allow_in = (1U & ((~ (IData)(vlSelf->__PVT__idu_valid)) 
                                        | ((IData)(vlSelf->__PVT__IDU__DOT__id_ready_go) 
                                           & (IData)(vlSelf->__PVT__exu_allow_in))));
    vlSelf->__PVT__o_exu_is_jump = ((IData)(vlSelf->__PVT__EXU__DOT__is_jump_d) 
                                    & ((IData)(vlSelf->__PVT__exu_to_lsu_valid) 
                                       & (IData)(vlSelf->__PVT__lsu_allow_in)));
    vlSelf->__PVT__IFU__DOT__inst_buffer_valid_set 
        = ((~ (IData)(vlSelf->__PVT__id_allow_in)) 
           & (IData)(vlSelf->__PVT__icache_valid));
    vlSelf->__Vcellinp__ID_to_EXU_Regs__pipeline_flush 
        = ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC) 
           | (IData)(vlSelf->__PVT__o_exu_is_jump));
    vlSelf->__PVT__flush_if = ((IData)(vlSelf->__PVT__o_exu_is_jump) 
                               | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isIntrPC));
    vlSelf->__PVT__IFU__DOT__is_jump_set = ((~ (IData)(vlSelf->__PVT__icache_req_ready)) 
                                            & (IData)(vlSelf->__PVT__flush_if));
    vlSelf->__PVT__IFU__DOT__is_jump_clr = ((~ (IData)(vlSelf->__PVT__flush_if)) 
                                            & ((IData)(vlSelf->__PVT__icache_req_ready) 
                                               & (IData)(vlSelf->__PVT__IFU__DOT__is_jump_r)));
    vlSelf->IDRegs__DOT____VdfgTmp_hfc89a4ae__0 = ((IData)(
                                                           ((0x100073U 
                                                             == 
                                                             (0x1f0007fU 
                                                              & vlSelf->__PVT__id_inst)) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & (vlSelf->__PVT__id_inst 
                                                                              >> 0xcU))))))) 
                                                   | (IData)(vlSelf->__PVT__flush_if));
    vlSelf->__PVT__id_to_exu_valid = ((IData)(vlSelf->__PVT__IDU__DOT__id_ready_go) 
                                      & ((~ (IData)(vlSelf->__PVT__flush_if)) 
                                         & (IData)(vlSelf->__PVT__idu_valid)));
    vlSelf->__PVT__IFU__DOT__if_allow_in = (1U & ((~ (IData)(vlSelf->__PVT__if_valid)) 
                                                  | (((IData)(vlSelf->__PVT__if_ready_go) 
                                                      & (IData)(vlSelf->__PVT__id_allow_in)) 
                                                     | (IData)(vlSelf->__PVT__flush_if))));
    vlSelf->__PVT__IFU__DOT__prefetch_pc = ((IData)(vlSelf->__PVT__flush_if)
                                             ? vlSelf->__PVT__jumppc
                                             : ((IData)(vlSelf->__PVT__IFU__DOT__is_jump_r)
                                                 ? vlSelf->__PVT__IFU__DOT__JumpPc_r
                                                 : 
                                                (4ULL 
                                                 + vlSelf->__PVT__IFU__DOT__if_pc)));
    vlSelf->__PVT__IDRegs__DOT__popline_wen = ((IData)(vlSelf->__PVT__IDRegs__DOT__if_to_id_valid) 
                                               & ((~ (IData)(vlSelf->IDRegs__DOT____VdfgTmp_hfc89a4ae__0)) 
                                                  & (IData)(vlSelf->__PVT__id_allow_in)));
    vlSelf->witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5 
        = ((~ (IData)(vlSelf->__PVT__isRAW)) & ((IData)(vlSelf->__PVT__o_id_RegWr) 
                                                & ((~ (IData)(vlSelf->__PVT__flush_if)) 
                                                   & ((IData)(vlSelf->__PVT__id_to_exu_valid) 
                                                      & ((IData)(vlSelf->__PVT__exu_allow_in) 
                                                         & (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelf->__PVT__id_inst 
                                                                >> 7U))))))));
    vlSelf->__PVT__ifu_cache_req = ((~ (((IData)((0U 
                                                  != 
                                                  (6U 
                                                   & vlSelf->ID_to_EXU_Regs__DOT____Vcellout__id_to_exu_pipeline_regs__dout[9U]))) 
                                         & (IData)(vlSelf->__PVT__exu_valid)) 
                                        | (((IData)(vlSelf->__PVT__o_id_isecall) 
                                            | (IData)(vlSelf->__PVT__o_id_ismret)) 
                                           | ((IData)(
                                                      (0U 
                                                       != 
                                                       (6U 
                                                        & vlSelf->EXU_to_LSU_Regs__DOT____Vcellout__exu_to_lus_pipeline_regs__dout[2U]))) 
                                              & (IData)(vlSelf->__PVT__lsu_valid))))) 
                                    & (IData)(vlSelf->__PVT__IFU__DOT__if_allow_in));
    if ((8U & (IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__icache__io_sram3_addr = 
            (0x3fU & (vlSelf->__PVT__icache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__icache_sram_addr[3U] = (0x3fU 
                                               & (vlSelf->__PVT__icache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__icache__io_sram3_addr = 
            (0x3fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                              >> 4U)));
        vlSelf->__PVT__icache_sram_addr[3U] = (0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                          >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__icache__io_sram2_addr = 
            (0x3fU & (vlSelf->__PVT__icache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__icache_sram_addr[2U] = (0x3fU 
                                               & (vlSelf->__PVT__icache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__icache__io_sram2_addr = 
            (0x3fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                              >> 4U)));
        vlSelf->__PVT__icache_sram_addr[2U] = (0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                          >> 4U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__icache__io_sram1_addr = 
            (0x3fU & (vlSelf->__PVT__icache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__icache_sram_addr[1U] = (0x3fU 
                                               & (vlSelf->__PVT__icache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__icache__io_sram1_addr = 
            (0x3fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                              >> 4U)));
        vlSelf->__PVT__icache_sram_addr[1U] = (0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                          >> 4U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen))) {
        vlSelf->__Vcellout__icache__io_sram0_addr = 
            (0x3fU & (vlSelf->__PVT__icache__DOT__addr_r 
                      >> 4U));
        vlSelf->__PVT__icache_sram_addr[0U] = (0x3fU 
                                               & (vlSelf->__PVT__icache__DOT__addr_r 
                                                  >> 4U));
    } else {
        vlSelf->__Vcellout__icache__io_sram0_addr = 
            (0x3fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                              >> 4U)));
        vlSelf->__PVT__icache_sram_addr[0U] = (0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                          >> 4U)));
    }
    vlSelf->__PVT__icache__DOT__tagv_rdata[0U] = vlSelf->__PVT__icache__DOT__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__DOT__tagv
        [(0x7fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                           >> 4U)))];
    vlSelf->__PVT__icache__DOT__tagv_rdata[1U] = vlSelf->__PVT__icache__DOT__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__DOT__tagv
        [(0x7fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                           >> 4U)))];
    vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__o_dout 
        = vlSelf->__PVT__icache__DOT__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__DOT__tagv
        [(0x7fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                           >> 4U)))];
    vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__o_dout 
        = vlSelf->__PVT__icache__DOT__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__DOT__tagv
        [(0x7fU & (IData)((vlSelf->__PVT__IFU__DOT__prefetch_pc 
                           >> 4U)))];
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
    vlSelf->__PVT__icache__DOT__recently_used_wen = 
        ((IData)(vlSelf->__PVT__ifu_cache_req) & (IData)(vlSelf->__PVT__icache_req_ready));
    vlSelf->__PVT__icache__DOT__hit_way0 = (((0x1fffffU 
                                              & (vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__o_dout 
                                                 >> 1U)) 
                                             == (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                            >> 0xbU)))) 
                                            & vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__o_dout);
    vlSelf->__PVT__icache__DOT__refill_waynum = (1U 
                                                 & ((1U 
                                                     & (vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__o_dout 
                                                        & vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__o_dout))
                                                     ? 
                                                    (~ 
                                                     (vlSelf->__PVT__icache__DOT__recently_used_way[
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                                   >> 4U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                                  >> 4U)))))
                                                     : vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__0__KET____DOT__tagv_regs__o_dout));
    vlSelf->__PVT__icache__DOT__hit_way1 = (((0x1fffffU 
                                              & (vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__o_dout 
                                                 >> 1U)) 
                                             == (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                            >> 0xbU)))) 
                                            & vlSelf->icache__DOT____Vcellout__tag_regs_gen__BRA__1__KET____DOT__tagv_regs__o_dout);
    vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_nxt 
        = ((IData)(vlSelf->__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__witf__DOT__wptr_r))));
    vlSelf->__PVT__icache__DOT__io_sram_rce = ((- (IData)((IData)(vlSelf->__PVT__icache__DOT__recently_used_wen))) 
                                               & ((8U 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                               >> 0xaU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ (IData)(
                                                                    (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                                     >> 0xaU))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                                     >> 0xaU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->__PVT__IFU__DOT__prefetch_pc 
                                                                         >> 0xaU))))))));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__127__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__126__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__125__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__124__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__123__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__122__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x7a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__121__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x790ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__120__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x780ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__119__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x770ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__118__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x760ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__117__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x750ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__116__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x740ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__115__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x730ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__114__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x720ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__113__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x710ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__112__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x700ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__111__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__110__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__109__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__108__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__107__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__106__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x6a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__105__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x690ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__104__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x680ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__103__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x670ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__102__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x660ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__101__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x650ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__100__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x640ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__99__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x630ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__98__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x620ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__97__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x610ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__96__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x600ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__95__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__94__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__93__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__92__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__91__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__90__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x5a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__89__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x590ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__88__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x580ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__87__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x570ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__86__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x560ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__85__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x550ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__84__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x540ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__83__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x530ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__82__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x520ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__81__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x510ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__80__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x500ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__79__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__78__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__77__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__76__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__75__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__74__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x4a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__73__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x490ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__72__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x480ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__71__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x470ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__70__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x460ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__69__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x450ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__68__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x440ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__67__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x430ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__66__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x420ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__65__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x410ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__64__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x400ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x3a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x390ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x380ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x370ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x360ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x350ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x340ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x330ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x320ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x310ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x300ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x2a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x290ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x280ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x270ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x260ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x250ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x240ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x230ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x220ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x210ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x200ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1f0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1e0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1d0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1c0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1b0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x1a0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x190ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x180ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x170ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x160ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x150ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x140ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x130ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x120ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x110ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x100ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xf0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xe0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xd0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xc0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xb0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen 
        = (IData)(((0xa0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x90ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x80ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x70ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x60ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x50ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x40ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x30ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x20ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen 
        = (IData)(((0x10ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen 
        = (IData)(((0ULL == (0x7f0ULL & vlSelf->__PVT__IFU__DOT__prefetch_pc)) 
                   & (IData)(vlSelf->__PVT__icache__DOT__recently_used_wen)));
    vlSelf->__PVT__icache__DOT__cache_hit = ((IData)(vlSelf->__PVT__icache__DOT__hit_way0) 
                                             | (IData)(vlSelf->__PVT__icache__DOT__hit_way1));
    vlSelf->__Vcellout__icache__io_sram3_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__icache__DOT__io_sram_rce)) 
                                                   >> 3U));
    vlSelf->__Vcellout__icache__io_sram2_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__icache__DOT__io_sram_rce)) 
                                                   >> 2U));
    vlSelf->__Vcellout__icache__io_sram1_cen = (1U 
                                                & (((IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen) 
                                                    | (IData)(vlSelf->__PVT__icache__DOT__io_sram_rce)) 
                                                   >> 1U));
    vlSelf->__Vcellout__icache__io_sram0_cen = (1U 
                                                & ((IData)(vlSelf->__PVT__icache__DOT__io_sram_wcen) 
                                                   | (IData)(vlSelf->__PVT__icache__DOT__io_sram_rce)));
    __Vtemp_hcc64379b__0[0U] = (IData)((((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hcc64379b__0[1U] = (IData)(((((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__63__KET____DOT__recently_used_reg__wen)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__62__KET____DOT__recently_used_reg__wen)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__61__KET____DOT__recently_used_reg__wen)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__60__KET____DOT__recently_used_reg__wen)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__59__KET____DOT__recently_used_reg__wen)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__58__KET____DOT__recently_used_reg__wen)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__57__KET____DOT__recently_used_reg__wen)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__56__KET____DOT__recently_used_reg__wen)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__55__KET____DOT__recently_used_reg__wen)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__54__KET____DOT__recently_used_reg__wen)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__53__KET____DOT__recently_used_reg__wen)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__52__KET____DOT__recently_used_reg__wen)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__51__KET____DOT__recently_used_reg__wen)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__50__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__49__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__48__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__47__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__46__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__45__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__44__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__43__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__42__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__41__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__40__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__39__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__38__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__37__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__36__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__35__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__34__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__33__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__32__KET____DOT__recently_used_reg__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__31__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__30__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__29__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__28__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__27__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__26__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__25__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__24__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__23__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__22__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__21__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__20__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__19__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__18__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__17__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__16__KET____DOT__recently_used_reg__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__15__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__14__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__13__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__12__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__11__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__10__KET____DOT__recently_used_reg__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__9__KET____DOT__recently_used_reg__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__8__KET____DOT__recently_used_reg__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__7__KET____DOT__recently_used_reg__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__6__KET____DOT__recently_used_reg__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__5__KET____DOT__recently_used_reg__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__4__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__3__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__2__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__1__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__0__KET____DOT__recently_used_reg__wen)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h70f4feae__0[2U] = (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__80__KET____DOT__recently_used_reg__wen) 
                                 << 0x10U) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__79__KET____DOT__recently_used_reg__wen) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__78__KET____DOT__recently_used_reg__wen) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__77__KET____DOT__recently_used_reg__wen) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__76__KET____DOT__recently_used_reg__wen) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__75__KET____DOT__recently_used_reg__wen) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__74__KET____DOT__recently_used_reg__wen) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__73__KET____DOT__recently_used_reg__wen) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__72__KET____DOT__recently_used_reg__wen) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__71__KET____DOT__recently_used_reg__wen) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__70__KET____DOT__recently_used_reg__wen) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__69__KET____DOT__recently_used_reg__wen) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__68__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__67__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__66__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__65__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__64__KET____DOT__recently_used_reg__wen)))))))))))))))));
    __Vtemp_h4baab0db__0[3U] = (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__112__KET____DOT__recently_used_reg__wen) 
                                 << 0x10U) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__111__KET____DOT__recently_used_reg__wen) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__110__KET____DOT__recently_used_reg__wen) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__109__KET____DOT__recently_used_reg__wen) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__108__KET____DOT__recently_used_reg__wen) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__107__KET____DOT__recently_used_reg__wen) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__106__KET____DOT__recently_used_reg__wen) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__105__KET____DOT__recently_used_reg__wen) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__104__KET____DOT__recently_used_reg__wen) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__103__KET____DOT__recently_used_reg__wen) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__102__KET____DOT__recently_used_reg__wen) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__101__KET____DOT__recently_used_reg__wen) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__100__KET____DOT__recently_used_reg__wen) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__99__KET____DOT__recently_used_reg__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__98__KET____DOT__recently_used_reg__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__97__KET____DOT__recently_used_reg__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__96__KET____DOT__recently_used_reg__wen)))))))))))))))));
    vlSelf->__PVT__icache__DOT__recently_used_wens[0U] 
        = __Vtemp_hcc64379b__0[0U];
    vlSelf->__PVT__icache__DOT__recently_used_wens[1U] 
        = __Vtemp_hcc64379b__0[1U];
    vlSelf->__PVT__icache__DOT__recently_used_wens[2U] 
        = (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__95__KET____DOT__recently_used_reg__wen) 
            << 0x1fU) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__94__KET____DOT__recently_used_reg__wen) 
                          << 0x1eU) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__93__KET____DOT__recently_used_reg__wen) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__92__KET____DOT__recently_used_reg__wen) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__91__KET____DOT__recently_used_reg__wen) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__90__KET____DOT__recently_used_reg__wen) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__89__KET____DOT__recently_used_reg__wen) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__88__KET____DOT__recently_used_reg__wen) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__87__KET____DOT__recently_used_reg__wen) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__86__KET____DOT__recently_used_reg__wen) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__85__KET____DOT__recently_used_reg__wen) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__84__KET____DOT__recently_used_reg__wen) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__83__KET____DOT__recently_used_reg__wen) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__82__KET____DOT__recently_used_reg__wen) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__81__KET____DOT__recently_used_reg__wen) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h70f4feae__0[2U])))))))))))))));
    vlSelf->__PVT__icache__DOT__recently_used_wens[3U] 
        = (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__127__KET____DOT__recently_used_reg__wen) 
            << 0x1fU) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__126__KET____DOT__recently_used_reg__wen) 
                          << 0x1eU) | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__125__KET____DOT__recently_used_reg__wen) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__124__KET____DOT__recently_used_reg__wen) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__123__KET____DOT__recently_used_reg__wen) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__122__KET____DOT__recently_used_reg__wen) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__121__KET____DOT__recently_used_reg__wen) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__120__KET____DOT__recently_used_reg__wen) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__119__KET____DOT__recently_used_reg__wen) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__118__KET____DOT__recently_used_reg__wen) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__117__KET____DOT__recently_used_reg__wen) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__116__KET____DOT__recently_used_reg__wen) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__115__KET____DOT__recently_used_reg__wen) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__114__KET____DOT__recently_used_reg__wen) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->icache__DOT____Vcellinp__recently_used_regs_gen__BRA__113__KET____DOT__recently_used_reg__wen) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_h4baab0db__0[3U])))))))))))))));
    vlSelf->__PVT__icache__DOT__curent_way = (((IData)(vlSelf->__PVT__icache__DOT__cache_hit) 
                                               & (IData)(vlSelf->__PVT__icache__DOT__hit_way1)) 
                                              | ((~ (IData)(vlSelf->__PVT__icache__DOT__cache_hit)) 
                                                 & (IData)(vlSelf->__PVT__icache__DOT__refill_waynum)));
    __Vtableidx1 = ((0x100U & ((~ (IData)(vlSelf->__PVT__icache__DOT__cache_hit)) 
                               << 8U)) | (((IData)(vlSelf->__PVT__ifu_cache_req) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__icache__DOT__cache_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__axi_icache_rd_ready) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__axi_icache_rlast) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__axi_icache_rvalid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__icache__DOT__cur_state)))))));
    vlSelf->__PVT__icache__DOT__next_state = Vtop__ConstPool__TABLE_hf5df7271_0
        [__Vtableidx1];
}
