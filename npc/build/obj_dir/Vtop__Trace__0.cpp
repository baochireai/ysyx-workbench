// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<7>/*223:0*/ __Vtemp_hcd3257dc__0;
    VlWide<13>/*415:0*/ __Vtemp_h4cdbe8bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d27071d__0;
    VlWide<3>/*95:0*/ __Vtemp_hcef52ca4__0;
    VlWide<3>/*95:0*/ __Vtemp_h68119d76__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd71550a__0;
    VlWide<3>/*95:0*/ __Vtemp_haee3d321__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d27071d__1;
    VlWide<3>/*95:0*/ __Vtemp_hcef52ca4__1;
    VlWide<3>/*95:0*/ __Vtemp_h68119d76__1;
    VlWide<3>/*95:0*/ __Vtemp_h86051c63__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a0080b0__0;
    VlWide<9>/*287:0*/ __Vtemp_heddb9346__0;
    VlWide<7>/*223:0*/ __Vtemp_ha9f09867__0;
    VlWide<34>/*1087:0*/ __Vtemp_hc9e4b5e3__0;
    VlWide<9>/*287:0*/ __Vtemp_h952069fe__0;
    VlWide<9>/*287:0*/ __Vtemp_h24f97c38__0;
    VlWide<9>/*287:0*/ __Vtemp_h8ffe19e9__0;
    VlWide<11>/*351:0*/ __Vtemp_h75f56fbe__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[11]),4);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[12]),4);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[13]),4);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[14]),4);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[15]),4);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
        bufp->chgSData(oldp+31,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
        bufp->chgSData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
        bufp->chgSData(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
        bufp->chgSData(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
        bufp->chgCData(oldp+76,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        bufp->chgSData(oldp+88,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
        bufp->chgQData(oldp+121,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
        bufp->chgWData(oldp+124,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+127,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
        bufp->chgQData(oldp+132,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+142,(vlSymsp->TOP__top.__PVT__RegWdata),64);
        bufp->chgQData(oldp+144,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
        __Vtemp_hcd3257dc__0[0U] = (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__dout);
        __Vtemp_hcd3257dc__0[1U] = (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                            >> 0x20U));
        __Vtemp_hcd3257dc__0[2U] = (2U | ((IData)(((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                    ? vlSymsp->TOP__top.__PVT__clint_dout
                                                    : vlSymsp->TOP__top.__PVT__MemOut)) 
                                          << 2U));
        __Vtemp_hcd3257dc__0[3U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                               ? vlSymsp->TOP__top.__PVT__clint_dout
                                               : vlSymsp->TOP__top.__PVT__MemOut)) 
                                     >> 0x1eU) | ((IData)(
                                                          (((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                             ? vlSymsp->TOP__top.__PVT__clint_dout
                                                             : vlSymsp->TOP__top.__PVT__MemOut) 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_hcd3257dc__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 4U) | 
                                          ((IData)(
                                                   (((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                      ? vlSymsp->TOP__top.__PVT__clint_dout
                                                      : vlSymsp->TOP__top.__PVT__MemOut) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_hcd3257dc__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALUres 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hcd3257dc__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__ALUres 
                                             >> 0x20U)) 
                                    >> 0x1cU);
        bufp->chgWData(oldp+146,(__Vtemp_hcd3257dc__0),198);
        bufp->chgWData(oldp+153,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+156,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+159,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+162,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+164,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+166,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+168,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
        bufp->chgBit(oldp+170,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
        bufp->chgQData(oldp+171,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
        bufp->chgQData(oldp+173,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top.pc
                                   : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+175,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                   : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+177,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? ((0xffffffffffffff00ULL 
                                       & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                      | (QData)((IData)(
                                                        ((0x80U 
                                                          & ((IData)(
                                                                     (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                      >> 3U)) 
                                                             << 7U)) 
                                                         | ((0x70U 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                         >> 4U)) 
                                                                << 4U)) 
                                                            | (7U 
                                                               & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus)))))))
                                   : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                       ? ((0xffffffffffffff00ULL 
                                           & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                          | (QData)((IData)(
                                                            (0x80U 
                                                             | ((0x70U 
                                                                 & ((IData)(
                                                                            (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                             >> 4U)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                                >> 7U)) 
                                                                       << 3U)) 
                                                                   | (7U 
                                                                      & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus))))))))
                                       : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData))),64);
        __Vtemp_h4cdbe8bd__0[0U] = (IData)(((~ (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__top.Inst 
                                                                   >> 0xfU))))) 
                                            & vlSymsp->TOP__top__IntrUnit.__PVT__dout));
        __Vtemp_h4cdbe8bd__0[1U] = (IData)((((~ (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.Inst 
                                                                    >> 0xfU))))) 
                                             & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                            >> 0x20U));
        __Vtemp_h4cdbe8bd__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__top.Inst 
                                                                         >> 0xfU)))))) 
                                          << 3U));
        __Vtemp_h4cdbe8bd__0[3U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.Inst 
                                                                    >> 0xfU)))))) 
                                     >> 0x1dU) | ((IData)(
                                                          ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 3U));
        __Vtemp_h4cdbe8bd__0[4U] = (0x30U | (((IData)(
                                                      ((0xffffffffffffffe0ULL 
                                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                       | (QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__top.Inst 
                                                                             >> 0xfU)))))) 
                                              << 6U) 
                                             | ((IData)(
                                                        ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                >> 0x1dU)));
        __Vtemp_h4cdbe8bd__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
                                               & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.Inst 
                                                                    >> 0xfU)))))) 
                                     >> 0x1aU) | ((IData)(
                                                          (((0xffffffffffffffe0ULL 
                                                             & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h4cdbe8bd__0[6U] = (0x140U | (((IData)(
                                                       ((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                               << 9U) 
                                              | ((IData)(
                                                         (((0xffffffffffffffe0ULL 
                                                            & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                           | (QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__top.Inst 
                                                                                >> 0xfU))))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
        __Vtemp_h4cdbe8bd__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                              & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                     >> 0x17U) | ((IData)(
                                                          (((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                            & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                           >> 0x20U)) 
                                                  << 9U));
        __Vtemp_h4cdbe8bd__0[8U] = (0x600U | (((IData)(
                                                       (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                           & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
        __Vtemp_h4cdbe8bd__0[9U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                              | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                     >> 0x14U) | ((IData)(
                                                          ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                            | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h4cdbe8bd__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                                  << 0xfU) 
                                                 | ((IData)(
                                                            ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                              | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                             >> 0x20U)) 
                                                    >> 0x14U)));
        __Vtemp_h4cdbe8bd__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                       >> 0x11U) | 
                                      ((IData)((vlSymsp->TOP__top.__PVT__R_rs1 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_h4cdbe8bd__0[0xcU] = (0x8000U | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__R_rs1 
                                                          >> 0x20U)) 
                                                 >> 0x11U));
        bufp->chgWData(oldp+179,(__Vtemp_h4cdbe8bd__0),402);
        bufp->chgWData(oldp+192,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+195,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+198,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+201,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+204,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        bufp->chgWData(oldp+207,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        bufp->chgQData(oldp+210,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        bufp->chgQData(oldp+212,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        bufp->chgQData(oldp+214,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        bufp->chgQData(oldp+216,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        bufp->chgQData(oldp+218,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        bufp->chgQData(oldp+220,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
        bufp->chgQData(oldp+222,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+225,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
        bufp->chgIData(oldp+226,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
        bufp->chgQData(oldp+227,(vlSymsp->TOP__top.__PVT__inst_o),64);
        bufp->chgQData(oldp+229,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__top.__PVT__ram_rvalid));
        bufp->chgCData(oldp+232,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top.__PVT__AWREADY));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top.__PVT__WREADY));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__top.__PVT__BVALID));
        bufp->chgCData(oldp+236,(vlSymsp->TOP__top.__PVT__BRESP),2);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
        bufp->chgCData(oldp+238,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+240,(vlSymsp->TOP__top.Inst),32);
        bufp->chgQData(oldp+241,(vlSymsp->TOP__top.pc),64);
        bufp->chgQData(oldp+243,(vlSymsp->TOP__top.__PVT__rdata),64);
        bufp->chgQData(oldp+245,(vlSymsp->TOP__top.__PVT__R_rs1),64);
        bufp->chgQData(oldp+247,(vlSymsp->TOP__top.__PVT__R_rs2),64);
        bufp->chgCData(oldp+249,(((IData)(vlSymsp->TOP__top.__VdfgTmp_ha718ec2a__0)
                                   ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_h4f8fc337__0))),5);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__top.__PVT__Extop),3);
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top.__PVT__RegWr));
        bufp->chgBit(oldp+252,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                                 & (2U == (IData)(vlSymsp->TOP__top.__PVT__Extop))) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                   | ((3U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                      | (4U == (IData)(vlSymsp->TOP__top.__PVT__Extop)))))));
        bufp->chgCData(oldp+253,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
        bufp->chgQData(oldp+254,(vlSymsp->TOP__top.__PVT__Imm),64);
        bufp->chgQData(oldp+256,(vlSymsp->TOP__top.__PVT__ALUres),64);
        bufp->chgQData(oldp+258,((0xfffffffffffffffeULL 
                                  & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                       ? vlSymsp->TOP__top.__PVT__Imm
                                       : 4ULL) + ((1U 
                                                   & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                   ? vlSymsp->TOP__top.pc
                                                   : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
        bufp->chgCData(oldp+260,(vlSymsp->TOP__top.__PVT__Branch),3);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top.__PVT__Less));
        bufp->chgBit(oldp+262,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
        bufp->chgCData(oldp+263,(vlSymsp->TOP__top.__PVT__MemOP),3);
        bufp->chgCData(oldp+264,(vlSymsp->TOP__top.__PVT__RegSrc),2);
        bufp->chgBit(oldp+265,(vlSymsp->TOP__top.__PVT__MemWr));
        bufp->chgQData(oldp+266,(vlSymsp->TOP__top.__PVT__MemOut),64);
        bufp->chgBit(oldp+268,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                 & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgQData(oldp+269,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                   : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                       ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                       : vlSymsp->TOP__top.pc))),64);
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.__PVT__IntrEn));
        bufp->chgBit(oldp+272,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                                > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__top.__PVT__clint_we));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top.__PVT__clint_re));
        bufp->chgQData(oldp+275,(vlSymsp->TOP__top.__PVT__clint_dout),64);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__top.__PVT__isTuncate));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__top.__PVT__isSext));
        bufp->chgQData(oldp+279,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
        bufp->chgQData(oldp+281,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
        bufp->chgBit(oldp+283,(vlSymsp->TOP__top.__PVT__ALU__DOT__US_S));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
        bufp->chgBit(oldp+285,((1U == (IData)(vlSymsp->TOP__top.ALU__DOT____VdfgTmp_he7b65dc9__0))));
        bufp->chgQData(oldp+286,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
        __Vtemp_h5d27071d__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        __Vtemp_h5d27071d__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                            >> 0x20U));
        __Vtemp_h5d27071d__0[2U] = 0U;
        __Vtemp_hcef52ca4__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        __Vtemp_hcef52ca4__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                            >> 0x20U));
        __Vtemp_hcef52ca4__0[2U] = 0U;
        __Vtemp_h68119d76__0[0U] = vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add;
        __Vtemp_h68119d76__0[1U] = 0U;
        __Vtemp_h68119d76__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_hcd71550a__0, __Vtemp_hcef52ca4__0, __Vtemp_h68119d76__0);
        VL_ADD_W(3, __Vtemp_haee3d321__0, __Vtemp_h5d27071d__0, __Vtemp_hcd71550a__0);
        bufp->chgBit(oldp+288,((1U & __Vtemp_haee3d321__0[2U])));
        bufp->chgBit(oldp+289,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                >> 0x3fU))) 
                                 == (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                   >> 0x3fU)))) 
                                & ((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                  >> 0x3fU))) 
                                   != (1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+290,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                               >> 0x3fU)) 
                                      ^ (((1U & (IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                         >> 0x3fU))) 
                                          == (1U & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                         & ((1U & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                           >> 0x3fU))) 
                                            != (1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                           >> 0x3fU)))))))));
        __Vtemp_h5d27071d__1[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        __Vtemp_h5d27071d__1[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                            >> 0x20U));
        __Vtemp_h5d27071d__1[2U] = 0U;
        __Vtemp_hcef52ca4__1[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        __Vtemp_hcef52ca4__1[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                            >> 0x20U));
        __Vtemp_hcef52ca4__1[2U] = 0U;
        __Vtemp_h68119d76__1[0U] = vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add;
        __Vtemp_h68119d76__1[1U] = 0U;
        __Vtemp_h68119d76__1[2U] = 0U;
        VL_ADD_W(3, __Vtemp_h86051c63__0, __Vtemp_hcef52ca4__1, __Vtemp_h68119d76__1);
        VL_ADD_W(3, __Vtemp_h3a0080b0__0, __Vtemp_h5d27071d__1, __Vtemp_h86051c63__0);
        bufp->chgBit(oldp+291,(((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                                ^ __Vtemp_h3a0080b0__0[2U])));
        bufp->chgQData(oldp+292,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
        bufp->chgQData(oldp+294,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
        bufp->chgQData(oldp+296,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
        bufp->chgQData(oldp+298,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                  & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        bufp->chgQData(oldp+300,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
        bufp->chgQData(oldp+302,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
        bufp->chgQData(oldp+304,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
        bufp->chgQData(oldp+306,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
        bufp->chgQData(oldp+308,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        bufp->chgCData(oldp+310,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
        bufp->chgCData(oldp+311,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        bufp->chgQData(oldp+312,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra),64);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        __Vtemp_heddb9346__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                             ? ((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA))) 
                                                >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                             : vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra));
        __Vtemp_heddb9346__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                              ? ((((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA))) 
                                                 >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                              : vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra) 
                                            >> 0x20U));
        __Vtemp_heddb9346__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                          << 2U));
        __Vtemp_heddb9346__0[3U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_heddb9346__0[4U] = (0xcU | (((IData)(
                                                     ((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                       ? (QData)((IData)(
                                                                         ((0x1fU 
                                                                           >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                           >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                           : 0U)))
                                                       : 
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                       >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                                             << 4U) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp_heddb9346__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                               ? (QData)((IData)(
                                                                 ((0x1fU 
                                                                   >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   ? 
                                                                  ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                   >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                   : 0U)))
                                               : (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                  >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                                     >> 0x1cU) | ((IData)(
                                                          (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                             ? (QData)((IData)(
                                                                               ((0x1fU 
                                                                                >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                                >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                                 : 0U)))
                                                             : 
                                                            (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                             >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_heddb9346__0[6U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     << 6U) | ((IData)(
                                                       (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                          ? (QData)((IData)(
                                                                            ((0x1fU 
                                                                              >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                              >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                              : 0U)))
                                                          : 
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                          >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_heddb9346__0[7U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1aU) | ((IData)(
                                                          (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_heddb9346__0[8U] = (0x40U | ((IData)(
                                                     (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+315,(__Vtemp_heddb9346__0),264);
        bufp->chgWData(oldp+324,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+327,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+330,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+333,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+336,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+340,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+342,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        bufp->chgQData(oldp+344,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        bufp->chgBit(oldp+346,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        __Vtemp_ha9f09867__0[0U] = 4U;
        __Vtemp_ha9f09867__0[1U] = 0U;
        __Vtemp_ha9f09867__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__R_rs2) 
                                          << 2U));
        __Vtemp_ha9f09867__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__R_rs2) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__R_rs2 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_ha9f09867__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                           << 4U) | 
                                          ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__R_rs2 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_ha9f09867__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__Imm 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_ha9f09867__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__Imm 
                                             >> 0x20U)) 
                                    >> 0x1cU);
        bufp->chgWData(oldp+347,(__Vtemp_ha9f09867__0),198);
        bufp->chgWData(oldp+354,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+357,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+360,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+363,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+365,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+369,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        bufp->chgBit(oldp+371,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
        bufp->chgCData(oldp+372,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
        __Vtemp_hc9e4b5e3__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM);
        __Vtemp_hc9e4b5e3__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                            >> 0x20U));
        __Vtemp_hc9e4b5e3__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                            << 4U));
        __Vtemp_hc9e4b5e3__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hc9e4b5e3__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                              << 8U) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_hc9e4b5e3__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_hc9e4b5e3__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
        __Vtemp_hc9e4b5e3__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_hc9e4b5e3__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                << 0x10U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
        __Vtemp_hc9e4b5e3__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hc9e4b5e3__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                   << 0x14U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                              >> 0x20U)) 
                                                     >> 0x10U)));
        __Vtemp_hc9e4b5e3__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 0xcU) | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                            >> 0x20U)) 
                                                   << 0x14U));
        __Vtemp_hc9e4b5e3__0[0xcU] = (0xa00000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                    << 0x18U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_hc9e4b5e3__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 8U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x18U));
        __Vtemp_hc9e4b5e3__0[0xeU] = (0x9000000U | 
                                      (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                        << 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                 >> 0x20U)) 
                                        >> 8U)));
        __Vtemp_hc9e4b5e3__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x1cU));
        __Vtemp_hc9e4b5e3__0[0x10U] = (0x80000000U 
                                       | ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_hc9e4b5e3__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR);
        __Vtemp_hc9e4b5e3__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                               >> 0x20U));
        __Vtemp_hc9e4b5e3__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                             << 4U));
        __Vtemp_hc9e4b5e3__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                        >> 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_hc9e4b5e3__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                                 << 8U) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
        __Vtemp_hc9e4b5e3__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        >> 0x18U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_hc9e4b5e3__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                                  << 0xcU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 0x18U)));
        __Vtemp_hc9e4b5e3__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                        >> 0x14U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                 >> 0x20U)) 
                                        << 0xcU));
        __Vtemp_hc9e4b5e3__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                   << 0x10U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                              >> 0x20U)) 
                                                     >> 0x14U)));
        __Vtemp_hc9e4b5e3__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                        >> 0x10U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_hc9e4b5e3__0[0x1bU] = (0x30000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__Less) 
                                                    << 0x14U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                               >> 0x20U)) 
                                                      >> 0x10U)));
        __Vtemp_hc9e4b5e3__0[0x1cU] = 0U;
        __Vtemp_hc9e4b5e3__0[0x1dU] = (0x200000U | 
                                       ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        << 0x18U));
        __Vtemp_hc9e4b5e3__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        >> 8U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                           >> 0x20U)) 
                                                  << 0x18U));
        __Vtemp_hc9e4b5e3__0[0x1fU] = (0x1000000U | 
                                       (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                    >> 0x20U)) 
                                           >> 8U)));
        __Vtemp_hc9e4b5e3__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                        >> 4U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        __Vtemp_hc9e4b5e3__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                >> 0x20U)) 
                                       >> 4U);
        bufp->chgWData(oldp+373,(__Vtemp_hc9e4b5e3__0),1088);
        bufp->chgWData(oldp+407,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+410,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+413,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+416,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+419,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+422,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+425,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+428,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+434,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+437,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        bufp->chgWData(oldp+440,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
        bufp->chgWData(oldp+443,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
        bufp->chgWData(oldp+446,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
        bufp->chgWData(oldp+449,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
        bufp->chgWData(oldp+452,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
        bufp->chgQData(oldp+455,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        bufp->chgQData(oldp+457,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        bufp->chgQData(oldp+459,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        bufp->chgQData(oldp+461,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        bufp->chgQData(oldp+463,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        bufp->chgQData(oldp+465,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        bufp->chgQData(oldp+467,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        bufp->chgQData(oldp+469,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        bufp->chgQData(oldp+471,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        bufp->chgQData(oldp+473,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        bufp->chgQData(oldp+475,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        bufp->chgQData(oldp+477,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
        bufp->chgQData(oldp+479,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
        bufp->chgQData(oldp+481,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
        bufp->chgQData(oldp+483,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
        bufp->chgQData(oldp+485,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
        bufp->chgQData(oldp+487,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
        bufp->chgBit(oldp+489,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
        bufp->chgCData(oldp+490,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
        __Vtemp_h952069fe__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h6c9564d5__0;
        __Vtemp_h952069fe__0[1U] = 0U;
        __Vtemp_h952069fe__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h6c3e055f__0 
                                          << 2U));
        __Vtemp_h952069fe__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h6c3e055f__0 
                                    >> 0x1eU);
        __Vtemp_h952069fe__0[4U] = 0x14U;
        __Vtemp_h952069fe__0[5U] = 0U;
        __Vtemp_h952069fe__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                    << 6U);
        __Vtemp_h952069fe__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h952069fe__0[8U] = (0x80U | ((IData)(
                                                     (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+491,(__Vtemp_h952069fe__0),264);
        bufp->chgWData(oldp+500,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+503,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+506,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+509,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+512,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
        bufp->chgQData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
        bufp->chgQData(oldp+516,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
        bufp->chgQData(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
        bufp->chgQData(oldp+520,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
        bufp->chgBit(oldp+522,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
        __Vtemp_h24f97c38__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h6a5e94eb__0;
        __Vtemp_h24f97c38__0[1U] = 0U;
        __Vtemp_h24f97c38__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h6a5af48f__0 
                                          << 2U));
        __Vtemp_h24f97c38__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h6a5af48f__0 
                                    >> 0x1eU);
        __Vtemp_h24f97c38__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                          << 4U));
        __Vtemp_h24f97c38__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                     >> 0x1cU) | ((IData)(
                                                          (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h24f97c38__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     << 6U) | ((IData)(
                                                       (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_h24f97c38__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h24f97c38__0[8U] = (0x80U | ((IData)(
                                                     (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+523,(__Vtemp_h24f97c38__0),264);
        bufp->chgWData(oldp+532,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+535,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+538,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+541,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+544,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
        bufp->chgQData(oldp+546,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
        bufp->chgQData(oldp+548,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
        bufp->chgQData(oldp+550,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
        bufp->chgQData(oldp+552,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
        bufp->chgBit(oldp+554,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
        bufp->chgCData(oldp+555,((0x7fU & vlSymsp->TOP__top.Inst)),7);
        bufp->chgCData(oldp+556,((7U & (vlSymsp->TOP__top.Inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+557,((vlSymsp->TOP__top.Inst 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+558,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        bufp->chgCData(oldp+559,((5U & (vlSymsp->TOP__top.Inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+560,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        bufp->chgBit(oldp+561,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+562,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSymsp->TOP__top.Inst))) 
                                & (vlSymsp->TOP__top.Inst 
                                   >> 0x19U))));
        bufp->chgCData(oldp+563,(((3U == (7U & (vlSymsp->TOP__top.Inst 
                                                >> 0xcU)))
                                   ? 0xaU : ((((vlSymsp->TOP__top.Inst 
                                                >> 0x1eU) 
                                               & (0U 
                                                  != 
                                                  (0x7020U 
                                                   & vlSymsp->TOP__top.Inst))) 
                                              << 3U) 
                                             | (7U 
                                                & (vlSymsp->TOP__top.Inst 
                                                   >> 0xcU))))),5);
        bufp->chgCData(oldp+564,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                                  >> 9U)) 
                                           | (7U & 
                                              (vlSymsp->TOP__top.Inst 
                                               >> 0xcU))))),5);
        bufp->chgBit(oldp+565,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+566,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+567,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+568,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgCData(oldp+569,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        bufp->chgBit(oldp+570,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
        bufp->chgCData(oldp+571,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        bufp->chgBit(oldp+572,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
        bufp->chgBit(oldp+575,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
        bufp->chgBit(oldp+576,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
        bufp->chgCData(oldp+578,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                      >> 2U))));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
        bufp->chgCData(oldp+581,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 3U))),6);
        bufp->chgWData(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
        bufp->chgSData(oldp+586,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
        bufp->chgCData(oldp+587,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        bufp->chgBit(oldp+589,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
        __Vtemp_h8ffe19e9__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                        >> 7U))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                             : (QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))));
        __Vtemp_h8ffe19e9__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                              : (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                            >> 0x20U));
        __Vtemp_h8ffe19e9__0[2U] = (3U | ((IData)((
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))) 
                                          << 2U));
        __Vtemp_h8ffe19e9__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))) 
                                     >> 0x1eU) | ((IData)(
                                                          (((4U 
                                                             & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                             ? 
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                             : (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_h8ffe19e9__0[4U] = (8U | (((IData)(
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                     : (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                           << 4U) | 
                                          ((IData)(
                                                   (((4U 
                                                      & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                              >> 0xfU))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                      : (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_h8ffe19e9__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                               : (QData)((IData)(
                                                                 vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                     >> 0x1cU) | ((IData)(
                                                          (((4U 
                                                             & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                             : (QData)((IData)(
                                                                               vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h8ffe19e9__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                              << 6U) 
                                             | ((IData)(
                                                        (((4U 
                                                           & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                           : (QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h8ffe19e9__0[7U] = (((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h8ffe19e9__0[8U] = ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+590,(__Vtemp_h8ffe19e9__0),264);
        bufp->chgWData(oldp+599,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+602,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+605,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+608,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+611,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
        bufp->chgQData(oldp+613,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
        bufp->chgQData(oldp+615,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
        bufp->chgQData(oldp+617,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
        bufp->chgQData(oldp+619,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
        bufp->chgBit(oldp+621,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
        bufp->chgBit(oldp+622,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+623,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
        bufp->chgQData(oldp+624,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__Imm
                                   : 4ULL)),64);
        bufp->chgQData(oldp+626,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.pc
                                   : vlSymsp->TOP__top.__PVT__R_rs1)),64);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        bufp->chgQData(oldp+629,((QData)((IData)((0x898537eU 
                                                  | ((((0U 
                                                        != vlSymsp->TOP__top.__PVT__ALU__DOT__adder)
                                                        ? 1U
                                                        : 3U) 
                                                      << 0x1eU) 
                                                     | ((((0U 
                                                           != vlSymsp->TOP__top.__PVT__ALU__DOT__adder)
                                                           ? 3U
                                                           : 1U) 
                                                         << 0x19U) 
                                                        | ((((IData)(vlSymsp->TOP__top.__PVT__Less)
                                                              ? 3U
                                                              : 1U) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSymsp->TOP__top.__PVT__Less)
                                                                ? 1U
                                                                : 3U) 
                                                              << 0xaU)))))))),35);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+633,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        bufp->chgCData(oldp+640,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        bufp->chgCData(oldp+642,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        bufp->chgCData(oldp+643,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        bufp->chgCData(oldp+644,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        bufp->chgCData(oldp+645,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        bufp->chgBit(oldp+646,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
        bufp->chgIData(oldp+647,((IData)(vlSymsp->TOP__top.pc)),32);
        bufp->chgIData(oldp+648,((vlSymsp->TOP__top.Inst 
                                  >> 7U)),25);
        __Vtemp_h75f56fbe__0[0U] = (IData)((((- (QData)((IData)(
                                                                (vlSymsp->TOP__top.Inst 
                                                                 >> 0x1fU)))) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSymsp->TOP__top.Inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSymsp->TOP__top.Inst) 
                                                                  | ((0x800U 
                                                                      & (vlSymsp->TOP__top.Inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSymsp->TOP__top.Inst 
                                                                           >> 0x14U)))))))));
        __Vtemp_h75f56fbe__0[1U] = (IData)(((((- (QData)((IData)(
                                                                 (vlSymsp->TOP__top.Inst 
                                                                  >> 0x1fU)))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSymsp->TOP__top.Inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSymsp->TOP__top.Inst) 
                                                                   | ((0x800U 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSymsp->TOP__top.Inst 
                                                                            >> 0x14U)))))))) 
                                            >> 0x20U));
        __Vtemp_h75f56fbe__0[2U] = (6U | (0xffff8000U 
                                          & (vlSymsp->TOP__top.Inst 
                                             << 3U)));
        __Vtemp_h75f56fbe__0[3U] = (((- (IData)((vlSymsp->TOP__top.Inst 
                                                 >> 0x1fU))) 
                                     << 3U) | (0x7fffU 
                                               & (vlSymsp->TOP__top.Inst 
                                                  >> 0x1dU)));
        __Vtemp_h75f56fbe__0[4U] = (0x28U | (((IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU)))))) 
                                              << 0x13U) 
                                             | ((0x40000U 
                                                 & (vlSymsp->TOP__top.Inst 
                                                    >> 0xdU)) 
                                                | ((0x20000U 
                                                    & (vlSymsp->TOP__top.Inst 
                                                       << 0xaU)) 
                                                   | ((0x1f800U 
                                                       & (vlSymsp->TOP__top.Inst 
                                                          >> 0xeU)) 
                                                      | ((0x780U 
                                                          & (vlSymsp->TOP__top.Inst 
                                                             >> 1U)) 
                                                         | ((- (IData)(
                                                                       (vlSymsp->TOP__top.Inst 
                                                                        >> 0x1fU))) 
                                                            >> 0x1dU)))))));
        __Vtemp_h75f56fbe__0[5U] = (((IData)((0x7ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSymsp->TOP__top.Inst 
                                                                    >> 0x1fU)))))) 
                                     >> 0xdU) | ((IData)(
                                                         ((0x7ffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x13U));
        __Vtemp_h75f56fbe__0[6U] = (0x100U | (((IData)(
                                                       (0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSymsp->TOP__top.Inst 
                                                                              >> 0x1fU)))))) 
                                               << 0x15U) 
                                              | ((0x1fc000U 
                                                  & (vlSymsp->TOP__top.Inst 
                                                     >> 0xbU)) 
                                                 | ((0x3e00U 
                                                     & (vlSymsp->TOP__top.Inst 
                                                        << 2U)) 
                                                    | ((IData)(
                                                               ((0x7ffffffffffffULL 
                                                                 & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU))))) 
                                                                >> 0x20U)) 
                                                       >> 0xdU)))));
        __Vtemp_h75f56fbe__0[7U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSymsp->TOP__top.Inst 
                                                                    >> 0x1fU)))))) 
                                     >> 0xbU) | ((IData)(
                                                         ((0xfffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x15U));
        __Vtemp_h75f56fbe__0[8U] = (0x600U | (((IData)(
                                                       (((- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP__top.Inst 
                                                                           >> 0x14U))))) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         ((0xfffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 >> 0xbU)));
        __Vtemp_h75f56fbe__0[9U] = (((IData)((((- (QData)((IData)(
                                                                  (vlSymsp->TOP__top.Inst 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP__top.Inst 
                                                                 >> 0x14U))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSymsp->TOP__top.Inst 
                                                                               >> 0x14U)))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h75f56fbe__0[0xaU] = (0x2000U | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSymsp->TOP__top.Inst 
                                                                              >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 >> 0x14U));
        bufp->chgWData(oldp+649,(__Vtemp_h75f56fbe__0),335);
        bufp->chgWData(oldp+660,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+663,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+666,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+669,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+672,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+675,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+677,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+679,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+681,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        bufp->chgQData(oldp+683,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        bufp->chgQData(oldp+685,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        bufp->chgBit(oldp+687,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
        bufp->chgQData(oldp+688,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                    & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                   ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                       ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                       : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                           ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                           : vlSymsp->TOP__top.pc))
                                   : (0xfffffffffffffffeULL 
                                      & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                           ? vlSymsp->TOP__top.__PVT__Imm
                                           : 4ULL) 
                                         + ((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                             ? vlSymsp->TOP__top.pc
                                             : vlSymsp->TOP__top.__PVT__R_rs1))))),64);
        bufp->chgCData(oldp+690,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+691,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+692,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 7U))),5);
        bufp->chgQData(oldp+693,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
        bufp->chgQData(oldp+695,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
        bufp->chgQData(oldp+697,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
        bufp->chgQData(oldp+699,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
        bufp->chgQData(oldp+701,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
        bufp->chgQData(oldp+703,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
        bufp->chgQData(oldp+705,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
        bufp->chgQData(oldp+707,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
        bufp->chgQData(oldp+709,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
        bufp->chgQData(oldp+711,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
        bufp->chgQData(oldp+713,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
        bufp->chgQData(oldp+715,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
        bufp->chgQData(oldp+717,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
        bufp->chgQData(oldp+719,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
        bufp->chgQData(oldp+721,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
        bufp->chgQData(oldp+723,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
        bufp->chgQData(oldp+725,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
        bufp->chgQData(oldp+727,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
        bufp->chgQData(oldp+733,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
        bufp->chgQData(oldp+735,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
        bufp->chgQData(oldp+737,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
        bufp->chgQData(oldp+739,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
        bufp->chgQData(oldp+741,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
        bufp->chgQData(oldp+743,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
        bufp->chgQData(oldp+745,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
        bufp->chgQData(oldp+747,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
        bufp->chgQData(oldp+749,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
        bufp->chgQData(oldp+751,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
        bufp->chgQData(oldp+753,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
        bufp->chgQData(oldp+755,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
        bufp->chgQData(oldp+757,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
        bufp->chgQData(oldp+759,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
        bufp->chgBit(oldp+761,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+762,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+763,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
        bufp->chgSData(oldp+764,((vlSymsp->TOP__top.Inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+765,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
        bufp->chgQData(oldp+767,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
        bufp->chgQData(oldp+769,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
        bufp->chgQData(oldp+771,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
        bufp->chgBit(oldp+773,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 3U)))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                              >> 7U)))));
        bufp->chgBit(oldp+775,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
        bufp->chgQData(oldp+778,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
        bufp->chgBit(oldp+780,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
        bufp->chgBit(oldp+781,((0x305U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+782,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
        bufp->chgBit(oldp+783,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
        bufp->chgBit(oldp+785,((0x304U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+786,((0x344U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 7U)))));
        bufp->chgCData(oldp+788,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
        bufp->chgQData(oldp+789,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        bufp->chgBit(oldp+791,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
        bufp->chgBit(oldp+792,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+793,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+794,(((0x304U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        bufp->chgBit(oldp+795,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+796,(((0x305U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    }
    bufp->chgBit(oldp+797,(vlSelf->clk));
    bufp->chgBit(oldp+798,(vlSelf->rst));
    bufp->chgIData(oldp+799,(vlSelf->Inst),32);
    bufp->chgQData(oldp+800,(vlSelf->pc),64);
    bufp->chgQData(oldp+802,(vlSymsp->TOP__top__IntrUnit.mcase),64);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
