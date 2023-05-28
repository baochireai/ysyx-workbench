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
    VlWide<34>/*1087:0*/ __Vtemp_h77e10e19__0;
    VlWide<9>/*287:0*/ __Vtemp_h2e3a2547__0;
    VlWide<9>/*287:0*/ __Vtemp_h875f5da5__0;
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
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
        bufp->chgIData(oldp+225,(vlSymsp->TOP__top.Inst),32);
        bufp->chgQData(oldp+226,(vlSymsp->TOP__top.pc),64);
        bufp->chgQData(oldp+228,(vlSymsp->TOP__top.__PVT__R_rs1),64);
        bufp->chgQData(oldp+230,(vlSymsp->TOP__top.__PVT__R_rs2),64);
        bufp->chgCData(oldp+232,(((IData)(vlSymsp->TOP__top.__VdfgTmp_h39e626ab__0)
                                   ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_he69c8120__0))),5);
        bufp->chgCData(oldp+233,(vlSymsp->TOP__top.__PVT__Extop),3);
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top.__PVT__RegWr));
        bufp->chgBit(oldp+235,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                                 & (2U == (IData)(vlSymsp->TOP__top.__PVT__Extop))) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                   | ((3U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                      | (4U == (IData)(vlSymsp->TOP__top.__PVT__Extop)))))));
        bufp->chgCData(oldp+236,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
        bufp->chgQData(oldp+237,(vlSymsp->TOP__top.__PVT__Imm),64);
        bufp->chgQData(oldp+239,(vlSymsp->TOP__top.__PVT__ALUres),64);
        bufp->chgQData(oldp+241,(((0U != vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)
                                   ? vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp
                                   : 0x80000000ULL)),64);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__top.__PVT__Branch),3);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__top.__PVT__Less));
        bufp->chgBit(oldp+245,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
        bufp->chgCData(oldp+246,(vlSymsp->TOP__top.__PVT__MemOP),3);
        bufp->chgCData(oldp+247,(vlSymsp->TOP__top.__PVT__RegSrc),2);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top.__PVT__MemWr));
        bufp->chgQData(oldp+249,(vlSymsp->TOP__top.__PVT__MemOut),64);
        bufp->chgBit(oldp+251,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                 & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgQData(oldp+252,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                   : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                       ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                       : vlSymsp->TOP__top.pc))),64);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__top.__PVT__IntrEn));
        bufp->chgBit(oldp+255,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                                > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__top.__PVT__clint_we));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__top.__PVT__clint_re));
        bufp->chgQData(oldp+258,(vlSymsp->TOP__top.__PVT__clint_dout),64);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
        bufp->chgIData(oldp+261,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
        bufp->chgQData(oldp+262,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top.__PVT__ram_rvalid));
        bufp->chgCData(oldp+265,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
        bufp->chgBit(oldp+266,(vlSymsp->TOP__top.__PVT__AWREADY));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top.__PVT__WREADY));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top.__PVT__BVALID));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top.__PVT__BRESP),2);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top.__PVT__isTuncate));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.__PVT__isSext));
        bufp->chgQData(oldp+272,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
        bufp->chgQData(oldp+274,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
        bufp->chgBit(oldp+276,(vlSymsp->TOP__top.__PVT__ALU__DOT__US_S));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
        bufp->chgBit(oldp+278,((1U == (IData)(vlSymsp->TOP__top.ALU__DOT____VdfgTmp_he7b65dc9__0))));
        bufp->chgQData(oldp+279,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
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
        bufp->chgBit(oldp+281,((1U & __Vtemp_haee3d321__0[2U])));
        bufp->chgBit(oldp+282,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                >> 0x3fU))) 
                                 == (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                   >> 0x3fU)))) 
                                & ((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                  >> 0x3fU))) 
                                   != (1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+283,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
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
        bufp->chgBit(oldp+284,(((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                                ^ __Vtemp_h3a0080b0__0[2U])));
        bufp->chgQData(oldp+285,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
        bufp->chgQData(oldp+287,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
        bufp->chgQData(oldp+289,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
        bufp->chgQData(oldp+291,(vlSymsp->TOP__top.__PVT__ALU__DOT__AND),64);
        bufp->chgQData(oldp+293,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
        bufp->chgQData(oldp+295,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
        bufp->chgQData(oldp+297,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
        bufp->chgQData(oldp+299,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
        bufp->chgQData(oldp+301,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        bufp->chgCData(oldp+303,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        bufp->chgQData(oldp+305,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra),64);
        bufp->chgCData(oldp+307,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
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
        bufp->chgWData(oldp+308,(__Vtemp_heddb9346__0),264);
        bufp->chgWData(oldp+317,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+320,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+323,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+326,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+331,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+333,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+335,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        bufp->chgQData(oldp+337,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        bufp->chgBit(oldp+339,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
        bufp->chgWData(oldp+340,(__Vtemp_ha9f09867__0),198);
        bufp->chgWData(oldp+347,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+350,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+353,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+356,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+358,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+360,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+362,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
        bufp->chgCData(oldp+365,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
        __Vtemp_h77e10e19__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM);
        __Vtemp_h77e10e19__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                            >> 0x20U));
        __Vtemp_h77e10e19__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                            << 4U));
        __Vtemp_h77e10e19__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h77e10e19__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                              << 8U) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h77e10e19__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h77e10e19__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
        __Vtemp_h77e10e19__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h77e10e19__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                << 0x10U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
        __Vtemp_h77e10e19__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h77e10e19__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                   << 0x14U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                              >> 0x20U)) 
                                                     >> 0x10U)));
        __Vtemp_h77e10e19__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 0xcU) | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                            >> 0x20U)) 
                                                   << 0x14U));
        __Vtemp_h77e10e19__0[0xcU] = (0xa00000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                    << 0x18U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_h77e10e19__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 8U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x18U));
        __Vtemp_h77e10e19__0[0xeU] = (0x9000000U | 
                                      (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                        << 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                 >> 0x20U)) 
                                        >> 8U)));
        __Vtemp_h77e10e19__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                       >> 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x1cU));
        __Vtemp_h77e10e19__0[0x10U] = (0x80000000U 
                                       | ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_h77e10e19__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__AND);
        __Vtemp_h77e10e19__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__AND 
                                               >> 0x20U));
        __Vtemp_h77e10e19__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                             << 4U));
        __Vtemp_h77e10e19__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                        >> 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_h77e10e19__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                                 << 8U) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
        __Vtemp_h77e10e19__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        >> 0x18U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_h77e10e19__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                                  << 0xcU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 0x18U)));
        __Vtemp_h77e10e19__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                        >> 0x14U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                 >> 0x20U)) 
                                        << 0xcU));
        __Vtemp_h77e10e19__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                   << 0x10U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                              >> 0x20U)) 
                                                     >> 0x14U)));
        __Vtemp_h77e10e19__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                        >> 0x10U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_h77e10e19__0[0x1bU] = (0x30000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__Less) 
                                                    << 0x14U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                               >> 0x20U)) 
                                                      >> 0x10U)));
        __Vtemp_h77e10e19__0[0x1cU] = 0U;
        __Vtemp_h77e10e19__0[0x1dU] = (0x200000U | 
                                       ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        << 0x18U));
        __Vtemp_h77e10e19__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                        >> 8U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                           >> 0x20U)) 
                                                  << 0x18U));
        __Vtemp_h77e10e19__0[0x1fU] = (0x1000000U | 
                                       (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                    >> 0x20U)) 
                                           >> 8U)));
        __Vtemp_h77e10e19__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                        >> 4U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        __Vtemp_h77e10e19__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                >> 0x20U)) 
                                       >> 4U);
        bufp->chgWData(oldp+366,(__Vtemp_h77e10e19__0),1088);
        bufp->chgWData(oldp+400,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+403,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+406,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+409,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+412,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+418,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+421,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+424,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+427,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+430,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        bufp->chgWData(oldp+433,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
        bufp->chgWData(oldp+436,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
        bufp->chgWData(oldp+439,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
        bufp->chgWData(oldp+442,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
        bufp->chgWData(oldp+445,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
        bufp->chgQData(oldp+448,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        bufp->chgQData(oldp+450,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        bufp->chgQData(oldp+452,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        bufp->chgQData(oldp+454,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        bufp->chgQData(oldp+456,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        bufp->chgQData(oldp+458,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        bufp->chgQData(oldp+460,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        bufp->chgQData(oldp+462,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        bufp->chgQData(oldp+464,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        bufp->chgQData(oldp+466,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        bufp->chgQData(oldp+468,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        bufp->chgQData(oldp+470,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
        bufp->chgQData(oldp+472,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
        bufp->chgQData(oldp+474,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
        bufp->chgQData(oldp+476,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
        bufp->chgQData(oldp+478,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
        bufp->chgQData(oldp+480,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
        bufp->chgBit(oldp+482,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
        bufp->chgCData(oldp+483,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
        __Vtemp_h2e3a2547__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h67f42b9f__0;
        __Vtemp_h2e3a2547__0[1U] = 0U;
        __Vtemp_h2e3a2547__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h640e0a55__0 
                                          << 2U));
        __Vtemp_h2e3a2547__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h640e0a55__0 
                                    >> 0x1eU);
        __Vtemp_h2e3a2547__0[4U] = 0x14U;
        __Vtemp_h2e3a2547__0[5U] = 0U;
        __Vtemp_h2e3a2547__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                    << 6U);
        __Vtemp_h2e3a2547__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h2e3a2547__0[8U] = (0x80U | ((IData)(
                                                     (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+484,(__Vtemp_h2e3a2547__0),264);
        bufp->chgWData(oldp+493,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+496,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+499,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+502,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+505,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
        bufp->chgQData(oldp+507,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
        bufp->chgQData(oldp+509,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
        bufp->chgQData(oldp+511,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
        bufp->chgQData(oldp+513,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
        bufp->chgBit(oldp+515,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
        __Vtemp_h875f5da5__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h67898f21__0;
        __Vtemp_h875f5da5__0[1U] = 0U;
        __Vtemp_h875f5da5__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h67859fa5__0 
                                          << 2U));
        __Vtemp_h875f5da5__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h67859fa5__0 
                                    >> 0x1eU);
        __Vtemp_h875f5da5__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                          << 4U));
        __Vtemp_h875f5da5__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                     >> 0x1cU) | ((IData)(
                                                          (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h875f5da5__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     << 6U) | ((IData)(
                                                       (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_h875f5da5__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h875f5da5__0[8U] = (0x80U | ((IData)(
                                                     (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+516,(__Vtemp_h875f5da5__0),264);
        bufp->chgWData(oldp+525,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+528,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+531,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+534,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+537,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
        bufp->chgQData(oldp+539,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
        bufp->chgQData(oldp+541,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
        bufp->chgQData(oldp+543,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
        bufp->chgQData(oldp+545,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
        bufp->chgBit(oldp+547,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
        bufp->chgCData(oldp+548,((0x7fU & vlSymsp->TOP__top.Inst)),7);
        bufp->chgCData(oldp+549,((7U & (vlSymsp->TOP__top.Inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+550,((vlSymsp->TOP__top.Inst 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+551,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        bufp->chgCData(oldp+552,((5U & (vlSymsp->TOP__top.Inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+553,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        bufp->chgBit(oldp+554,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+555,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSymsp->TOP__top.Inst))) 
                                & (vlSymsp->TOP__top.Inst 
                                   >> 0x19U))));
        bufp->chgCData(oldp+556,(((3U == (7U & (vlSymsp->TOP__top.Inst 
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
        bufp->chgCData(oldp+557,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                                  >> 9U)) 
                                           | (7U & 
                                              (vlSymsp->TOP__top.Inst 
                                               >> 0xcU))))),5);
        bufp->chgBit(oldp+558,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+559,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+560,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgBit(oldp+561,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
        bufp->chgCData(oldp+562,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
        bufp->chgCData(oldp+564,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        bufp->chgBit(oldp+565,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
        bufp->chgCData(oldp+571,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
        bufp->chgBit(oldp+572,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                      >> 2U))));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
        bufp->chgCData(oldp+574,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 3U))),6);
        bufp->chgWData(oldp+575,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
        bufp->chgSData(oldp+579,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
        bufp->chgCData(oldp+580,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
        bufp->chgCData(oldp+581,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        bufp->chgBit(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
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
        bufp->chgWData(oldp+583,(__Vtemp_h8ffe19e9__0),264);
        bufp->chgWData(oldp+592,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+595,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+598,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+601,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+604,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
        bufp->chgQData(oldp+606,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
        bufp->chgQData(oldp+608,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
        bufp->chgQData(oldp+610,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
        bufp->chgQData(oldp+612,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
        bufp->chgBit(oldp+614,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
        bufp->chgBit(oldp+615,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+616,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
        bufp->chgQData(oldp+617,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__Imm
                                   : 4ULL)),64);
        bufp->chgQData(oldp+619,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.pc
                                   : vlSymsp->TOP__top.__PVT__R_rs1)),64);
        bufp->chgQData(oldp+621,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp),64);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        bufp->chgQData(oldp+624,((QData)((IData)((0x898537eU 
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
        bufp->chgCData(oldp+626,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+629,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+630,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+633,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        bufp->chgCData(oldp+640,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        bufp->chgBit(oldp+641,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
        bufp->chgIData(oldp+642,((vlSymsp->TOP__top.Inst 
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
        bufp->chgWData(oldp+643,(__Vtemp_h75f56fbe__0),335);
        bufp->chgWData(oldp+654,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+657,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+660,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+663,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+666,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+669,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+671,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+673,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+675,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        bufp->chgQData(oldp+677,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        bufp->chgQData(oldp+679,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        bufp->chgBit(oldp+681,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
        bufp->chgQData(oldp+682,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                    & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                   ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                       ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                       : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                           ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                           : vlSymsp->TOP__top.pc))
                                   : ((0U != vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)
                                       ? vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp
                                       : 0x80000000ULL))),64);
        bufp->chgCData(oldp+684,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+685,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+686,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 7U))),5);
        bufp->chgQData(oldp+687,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
        bufp->chgQData(oldp+689,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
        bufp->chgQData(oldp+691,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
        bufp->chgQData(oldp+693,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
        bufp->chgQData(oldp+695,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
        bufp->chgQData(oldp+697,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
        bufp->chgQData(oldp+699,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
        bufp->chgQData(oldp+701,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
        bufp->chgQData(oldp+703,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
        bufp->chgQData(oldp+705,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
        bufp->chgQData(oldp+707,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
        bufp->chgQData(oldp+709,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
        bufp->chgQData(oldp+711,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
        bufp->chgQData(oldp+713,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
        bufp->chgQData(oldp+715,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
        bufp->chgQData(oldp+717,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
        bufp->chgQData(oldp+719,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
        bufp->chgQData(oldp+721,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
        bufp->chgQData(oldp+723,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
        bufp->chgQData(oldp+725,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
        bufp->chgQData(oldp+727,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
        bufp->chgQData(oldp+733,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
        bufp->chgQData(oldp+735,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
        bufp->chgQData(oldp+737,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
        bufp->chgQData(oldp+739,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
        bufp->chgQData(oldp+741,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
        bufp->chgQData(oldp+743,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
        bufp->chgQData(oldp+745,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
        bufp->chgQData(oldp+747,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
        bufp->chgQData(oldp+749,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
        bufp->chgQData(oldp+751,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
        bufp->chgQData(oldp+753,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
        bufp->chgBit(oldp+755,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+756,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+757,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
        bufp->chgIData(oldp+758,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
        bufp->chgSData(oldp+761,((vlSymsp->TOP__top.Inst 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+762,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
        bufp->chgQData(oldp+764,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
        bufp->chgQData(oldp+766,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
        bufp->chgQData(oldp+768,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
        bufp->chgBit(oldp+770,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 3U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                              >> 7U)))));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
        bufp->chgBit(oldp+774,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
        bufp->chgQData(oldp+775,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
        bufp->chgBit(oldp+777,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
        bufp->chgBit(oldp+778,((0x305U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+779,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
        bufp->chgBit(oldp+782,((0x304U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+783,((0x344U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 7U)))));
        bufp->chgCData(oldp+785,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
        bufp->chgQData(oldp+786,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        bufp->chgBit(oldp+788,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
        bufp->chgBit(oldp+789,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+790,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+791,(((0x304U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        bufp->chgBit(oldp+792,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+793,(((0x305U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    }
    bufp->chgBit(oldp+794,(vlSelf->clk));
    bufp->chgBit(oldp+795,(vlSelf->rst));
    bufp->chgIData(oldp+796,(vlSelf->Inst),32);
    bufp->chgQData(oldp+797,(vlSelf->pc),64);
    bufp->chgQData(oldp+799,(vlSymsp->TOP__top__IntrUnit.mcase),64);
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
}
