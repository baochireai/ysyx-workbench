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
    VlWide<13>/*415:0*/ __Vtemp_hea9901dc__0;
    VlWide<9>/*287:0*/ __Vtemp_h84a4ae12__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<9>/*287:0*/ __Vtemp_hb9b196fc__0;
    VlWide<7>/*223:0*/ __Vtemp_ha9f09867__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_hc36182de__0;
    VlWide<9>/*287:0*/ __Vtemp_h964d057a__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+1,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+2,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[0]),2);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[1]),2);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[2]),2);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0]),4);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[1]),4);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[2]),4);
        bufp->chgCData(oldp+40,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[3]),4);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[4]),4);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[5]),4);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[6]),4);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[7]),4);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[8]),4);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[9]),4);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[10]),4);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[11]),4);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[12]),4);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[13]),4);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[14]),4);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[15]),4);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[0]),2);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[1]),2);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[2]),2);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[3]),2);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[0]),2);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[1]),2);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[2]),2);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[3]),2);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4]),3);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+67,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[1]),9);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[0]),7);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[1]),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[0]),2);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[1]),2);
        bufp->chgSData(oldp+72,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+73,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+76,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+79,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+80,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+81,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[9]),10);
        bufp->chgSData(oldp+82,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[10]),10);
        bufp->chgSData(oldp+83,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[11]),10);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0]),7);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[1]),7);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[2]),7);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[3]),7);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[4]),7);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[5]),7);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[6]),7);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[7]),7);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[8]),7);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[9]),7);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[10]),7);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[11]),7);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0]),3);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[1]),3);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[2]),3);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[3]),3);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[4]),3);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[5]),3);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[6]),3);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[7]),3);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[8]),3);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[9]),3);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[10]),3);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[11]),3);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[0]),7);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[0]));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[0]));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[1]));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[2]));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[3]));
        bufp->chgCData(oldp+123,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
        bufp->chgQData(oldp+126,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
        bufp->chgQData(oldp+128,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
        bufp->chgWData(oldp+131,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+134,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
        bufp->chgQData(oldp+139,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
        bufp->chgQData(oldp+141,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+149,(vlSymsp->TOP__top.__PVT__RegWdata),64);
        bufp->chgQData(oldp+151,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
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
        bufp->chgWData(oldp+153,(__Vtemp_hcd3257dc__0),198);
        bufp->chgWData(oldp+160,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+163,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+166,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+169,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+171,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+173,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+175,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
        bufp->chgQData(oldp+178,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
        bufp->chgQData(oldp+180,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top.pc
                                   : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+182,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                   : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+184,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
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
        __Vtemp_hea9901dc__0[0U] = (IData)(((~ (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__top.Inst 
                                                                   >> 0xfU))))) 
                                            & vlSymsp->TOP__top__IntrUnit.__PVT__dout));
        __Vtemp_hea9901dc__0[1U] = (IData)((((~ (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.Inst 
                                                                    >> 0xfU))))) 
                                             & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                            >> 0x20U));
        __Vtemp_hea9901dc__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__top.Inst 
                                                                         >> 0xfU)))))) 
                                          << 3U));
        __Vtemp_hea9901dc__0[3U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
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
        __Vtemp_hea9901dc__0[4U] = (0x30U | (((IData)(
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
        __Vtemp_hea9901dc__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
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
        __Vtemp_hea9901dc__0[6U] = (0x140U | (((IData)(
                                                       ((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
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
        __Vtemp_hea9901dc__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                              & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                     >> 0x17U) | ((IData)(
                                                          (((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                            & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                           >> 0x20U)) 
                                                  << 9U));
        __Vtemp_hea9901dc__0[8U] = (0x600U | (((IData)(
                                                       (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__mem_Rrs1)) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                           & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
        __Vtemp_hea9901dc__0[9U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                              | vlSymsp->TOP__top.__PVT__mem_Rrs1)) 
                                     >> 0x14U) | ((IData)(
                                                          ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                            | vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_hea9901dc__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                  << 0xfU) 
                                                 | ((IData)(
                                                            ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                              | vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                             >> 0x20U)) 
                                                    >> 0x14U)));
        __Vtemp_hea9901dc__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                       >> 0x11U) | 
                                      ((IData)((vlSymsp->TOP__top.__PVT__mem_Rrs1 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_hea9901dc__0[0xcU] = (0x8000U | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__mem_Rrs1 
                                                          >> 0x20U)) 
                                                 >> 0x11U));
        bufp->chgWData(oldp+186,(__Vtemp_hea9901dc__0),402);
        bufp->chgWData(oldp+199,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+202,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+205,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+208,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+211,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        bufp->chgWData(oldp+214,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        bufp->chgQData(oldp+219,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        bufp->chgQData(oldp+221,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        bufp->chgQData(oldp+223,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        bufp->chgQData(oldp+225,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        bufp->chgQData(oldp+227,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
        bufp->chgQData(oldp+229,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+232,(vlSymsp->TOP__top.Inst),32);
        bufp->chgQData(oldp+233,(vlSymsp->TOP__top.pc),64);
        bufp->chgQData(oldp+235,(vlSymsp->TOP__top.__PVT__R_rs1),64);
        bufp->chgQData(oldp+237,(vlSymsp->TOP__top.__PVT__R_rs2),64);
        bufp->chgCData(oldp+239,(vlSymsp->TOP__top.__PVT__ALUct),5);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top.__PVT__RegWr));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top.__PVT__ALUAsr));
        bufp->chgCData(oldp+242,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
        bufp->chgQData(oldp+243,(vlSymsp->TOP__top.__PVT__Imm),64);
        bufp->chgQData(oldp+245,(vlSymsp->TOP__top.__PVT__ALUres),64);
        bufp->chgQData(oldp+247,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                   ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__top.__PVT__Branch),3);
        bufp->chgCData(oldp+250,(vlSymsp->TOP__top.__PVT__MemOP),3);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__top.__PVT__RegSrc),2);
        bufp->chgBit(oldp+252,(vlSymsp->TOP__top.__PVT__MemWr));
        bufp->chgQData(oldp+253,(vlSymsp->TOP__top.__PVT__MemOut),64);
        bufp->chgBit(oldp+255,((((IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn) 
                                 & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgQData(oldp+256,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                   : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                       ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                       : vlSymsp->TOP__top.pc))),64);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__top.__PVT__IntrEn));
        bufp->chgBit(oldp+259,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                                > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__clint_we));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top.__PVT__clint_re));
        bufp->chgQData(oldp+262,(vlSymsp->TOP__top.__PVT__clint_dout),64);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
        bufp->chgIData(oldp+265,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top.__PVT__ram_rvalid));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top.__PVT__AWREADY));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.__PVT__WREADY));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__top.__PVT__BVALID));
        bufp->chgCData(oldp+273,(vlSymsp->TOP__top.__PVT__BRESP),2);
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top.__PVT__is_jump));
        bufp->chgQData(oldp+275,(vlSymsp->TOP__top.__PVT__id_pc),64);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__top.__PVT__id_inst),32);
        bufp->chgQData(oldp+278,(vlSymsp->TOP__top.__PVT__ex_pc),64);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__top.__PVT__ex_inst),32);
        bufp->chgCData(oldp+281,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+282,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+283,(vlSymsp->TOP__top.__PVT__isTuncate));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__top.__PVT__isSext));
        bufp->chgQData(oldp+285,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
        bufp->chgQData(oldp+287,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
        bufp->chgCData(oldp+289,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
        bufp->chgBit(oldp+290,(vlSymsp->TOP__top.__PVT__mem_MemWr));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
        bufp->chgCData(oldp+292,(vlSymsp->TOP__top.__PVT__BW_RegSrc),2);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
        bufp->chgCData(oldp+294,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
        bufp->chgBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                      >> 2U))));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
        bufp->chgCData(oldp+297,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 3U))),6);
        bufp->chgWData(oldp+298,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
        bufp->chgSData(oldp+302,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
        bufp->chgCData(oldp+303,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
        __Vtemp_h84a4ae12__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[2U] = (3U | ((IData)((
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                             & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[4U] = (8U | (((IData)(
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                      & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                             & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                              << 6U) 
                                             | ((IData)(
                                                        (((4U 
                                                           & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
        __Vtemp_h84a4ae12__0[7U] = (((IData)((((QData)((IData)(
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
        __Vtemp_h84a4ae12__0[8U] = ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+306,(__Vtemp_h84a4ae12__0),264);
        bufp->chgWData(oldp+315,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+318,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+321,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+324,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+327,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
        bufp->chgQData(oldp+329,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
        bufp->chgQData(oldp+331,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
        bufp->chgQData(oldp+333,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
        bufp->chgQData(oldp+335,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
        bufp->chgBit(oldp+337,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
        bufp->chgQData(oldp+338,(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__isSext)
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                       : (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                   : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)),64);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
        bufp->chgBit(oldp+341,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
        bufp->chgBit(oldp+342,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+343,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        bufp->chgQData(oldp+344,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__Imm
                                   : 4ULL)),64);
        bufp->chgQData(oldp+346,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__ex_pc
                                   : vlSymsp->TOP__top.__PVT__R_rs1)),64);
        bufp->chgQData(oldp+348,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
        bufp->chgCData(oldp+350,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        bufp->chgQData(oldp+351,((QData)((IData)((0x898537eU 
                                                  | ((((0U 
                                                        != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)
                                                        ? 1U
                                                        : 3U) 
                                                      << 0x1eU) 
                                                     | ((((0U 
                                                           != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)
                                                           ? 3U
                                                           : 1U) 
                                                         << 0x19U) 
                                                        | ((((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)
                                                              ? 3U
                                                              : 1U) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)
                                                                ? 1U
                                                                : 3U) 
                                                              << 0xaU)))))))),35);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+356,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+357,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        bufp->chgCData(oldp+364,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        bufp->chgCData(oldp+365,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        bufp->chgCData(oldp+367,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        bufp->chgBit(oldp+368,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        bufp->chgIData(oldp+369,((0x248adfU | ((0x1000000U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))) 
                                                   << 0x18U)) 
                                               | (((IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less) 
                                                      << 0xcU) 
                                                     | (0x100U 
                                                        & ((~ (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)) 
                                                           << 8U))))))),28);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+372,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+376,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
        bufp->chgBit(oldp+377,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
        bufp->chgQData(oldp+386,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
        bufp->chgQData(oldp+388,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
        bufp->chgBit(oldp+390,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                      >> 3U))));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
        bufp->chgBit(oldp+392,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
        bufp->chgQData(oldp+393,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
        __Vtemp_h0f2e9b02__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA);
        __Vtemp_h0f2e9b02__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                            >> 0x20U));
        __Vtemp_h0f2e9b02__0[2U] = 0U;
        __Vtemp_h7583f5cb__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin);
        __Vtemp_h7583f5cb__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                            >> 0x20U));
        __Vtemp_h7583f5cb__0[2U] = 0U;
        __Vtemp_hc27bab0e__0[0U] = vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add;
        __Vtemp_hc27bab0e__0[1U] = 0U;
        __Vtemp_hc27bab0e__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_h2b84e3f2__0, __Vtemp_h7583f5cb__0, __Vtemp_hc27bab0e__0);
        VL_ADD_W(3, __Vtemp_hdd5810e3__0, __Vtemp_h0f2e9b02__0, __Vtemp_h2b84e3f2__0);
        bufp->chgBit(oldp+395,((1U & __Vtemp_hdd5810e3__0[2U])));
        bufp->chgBit(oldp+396,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                >> 0x3fU))) 
                                 == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                   >> 0x3fU)))) 
                                & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                  >> 0x3fU))) 
                                   != (1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
        bufp->chgQData(oldp+399,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
        bufp->chgQData(oldp+403,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
        bufp->chgQData(oldp+405,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
        bufp->chgQData(oldp+407,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
        bufp->chgQData(oldp+409,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
        bufp->chgQData(oldp+411,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
        bufp->chgQData(oldp+413,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
        bufp->chgQData(oldp+415,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
        bufp->chgCData(oldp+417,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
        bufp->chgQData(oldp+419,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        __Vtemp_hb9b196fc__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                             ? ((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                                                >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                             : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra));
        __Vtemp_hb9b196fc__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                              ? ((((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                                                 >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                              : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra) 
                                            >> 0x20U));
        __Vtemp_hb9b196fc__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                          << 2U));
        __Vtemp_hb9b196fc__0[3U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_hb9b196fc__0[4U] = (0xcU | (((IData)(
                                                     ((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                       ? (QData)((IData)(
                                                                         ((0x1fU 
                                                                           >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                           >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                           : 0U)))
                                                       : 
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                       >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt)))) 
                                             << 4U) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp_hb9b196fc__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                               ? (QData)((IData)(
                                                                 ((0x1fU 
                                                                   >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                   ? 
                                                                  ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                   >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                   : 0U)))
                                               : (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt)))) 
                                     >> 0x1cU) | ((IData)(
                                                          (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                             ? (QData)((IData)(
                                                                               ((0x1fU 
                                                                                >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                                >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                                 : 0U)))
                                                             : 
                                                            (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                             >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hb9b196fc__0[6U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     << 6U) | ((IData)(
                                                       (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                          ? (QData)((IData)(
                                                                            ((0x1fU 
                                                                              >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                              >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                              : 0U)))
                                                          : 
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                          >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_hb9b196fc__0[7U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1aU) | ((IData)(
                                                          (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hb9b196fc__0[8U] = (0x40U | ((IData)(
                                                     (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+422,(__Vtemp_hb9b196fc__0),264);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+434,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+437,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+440,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+443,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+445,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+447,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+449,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        bufp->chgQData(oldp+451,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
        bufp->chgWData(oldp+454,(__Vtemp_ha9f09867__0),198);
        bufp->chgWData(oldp+461,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+464,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+467,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+470,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+472,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+474,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+476,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
        bufp->chgBit(oldp+478,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
        bufp->chgCData(oldp+479,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
        __Vtemp_h9798c001__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM);
        __Vtemp_h9798c001__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                            >> 0x20U));
        __Vtemp_h9798c001__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM) 
                                            << 4U));
        __Vtemp_h9798c001__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h9798c001__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                              << 8U) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h9798c001__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h9798c001__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                          >> 0x20U)) 
                                                 >> 0x18U)));
        __Vtemp_h9798c001__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h9798c001__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                                << 0x10U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
        __Vtemp_h9798c001__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h9798c001__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                                   << 0x14U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                              >> 0x20U)) 
                                                     >> 0x10U)));
        __Vtemp_h9798c001__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                       >> 0xcU) | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                            >> 0x20U)) 
                                                   << 0x14U));
        __Vtemp_h9798c001__0[0xcU] = (0xa00000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                                    << 0x18U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_h9798c001__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                       >> 8U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x18U));
        __Vtemp_h9798c001__0[0xeU] = (0x9000000U | 
                                      (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                        << 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                 >> 0x20U)) 
                                        >> 8U)));
        __Vtemp_h9798c001__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                       >> 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                          >> 0x20U)) 
                                                 << 0x1cU));
        __Vtemp_h9798c001__0[0x10U] = (0x80000000U 
                                       | ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_h9798c001__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND);
        __Vtemp_h9798c001__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND 
                                               >> 0x20U));
        __Vtemp_h9798c001__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR) 
                                             << 4U));
        __Vtemp_h9798c001__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR) 
                                        >> 0x1cU) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_h9798c001__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                                 << 8U) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR 
                                                            >> 0x20U)) 
                                                   >> 0x1cU)));
        __Vtemp_h9798c001__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                        >> 0x18U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_h9798c001__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR) 
                                                  << 0xcU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 0x18U)));
        __Vtemp_h9798c001__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR) 
                                        >> 0x14U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR 
                                                 >> 0x20U)) 
                                        << 0xcU));
        __Vtemp_h9798c001__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                   << 0x10U) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR 
                                                              >> 0x20U)) 
                                                     >> 0x14U)));
        __Vtemp_h9798c001__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                        >> 0x10U) | 
                                       ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_h9798c001__0[0x1bU] = (0x30000U | (
                                                   ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less) 
                                                    << 0x14U) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                                                               >> 0x20U)) 
                                                      >> 0x10U)));
        __Vtemp_h9798c001__0[0x1cU] = 0U;
        __Vtemp_h9798c001__0[0x1dU] = (0x200000U | 
                                       ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                        << 0x18U));
        __Vtemp_h9798c001__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                        >> 8U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                           >> 0x20U)) 
                                                  << 0x18U));
        __Vtemp_h9798c001__0[0x1fU] = (0x1000000U | 
                                       (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                    >> 0x20U)) 
                                           >> 8U)));
        __Vtemp_h9798c001__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder) 
                                        >> 4U) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        __Vtemp_h9798c001__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                >> 0x20U)) 
                                       >> 4U);
        bufp->chgWData(oldp+480,(__Vtemp_h9798c001__0),1088);
        bufp->chgWData(oldp+514,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+517,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+520,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+523,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+526,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+529,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+532,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+535,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+538,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+541,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+544,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
        bufp->chgWData(oldp+547,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
        bufp->chgWData(oldp+550,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
        bufp->chgWData(oldp+553,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
        bufp->chgWData(oldp+556,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
        bufp->chgWData(oldp+559,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
        bufp->chgQData(oldp+562,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
        bufp->chgQData(oldp+564,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
        bufp->chgQData(oldp+566,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
        bufp->chgQData(oldp+568,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
        bufp->chgQData(oldp+570,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
        bufp->chgQData(oldp+572,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
        bufp->chgQData(oldp+574,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
        bufp->chgQData(oldp+576,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
        bufp->chgQData(oldp+578,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
        bufp->chgQData(oldp+580,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
        bufp->chgQData(oldp+582,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
        bufp->chgQData(oldp+584,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
        bufp->chgQData(oldp+586,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
        bufp->chgQData(oldp+588,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
        bufp->chgQData(oldp+590,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
        bufp->chgQData(oldp+592,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
        bufp->chgQData(oldp+594,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
        bufp->chgCData(oldp+597,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
        __Vtemp_hc36182de__0[0U] = vlSymsp->TOP__top.__VdfgTmp_hb7acd690__0;
        __Vtemp_hc36182de__0[1U] = 0U;
        __Vtemp_hc36182de__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_hb77b0b4a__0 
                                          << 2U));
        __Vtemp_hc36182de__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_hb77b0b4a__0 
                                    >> 0x1eU);
        __Vtemp_hc36182de__0[4U] = 0x14U;
        __Vtemp_hc36182de__0[5U] = 0U;
        __Vtemp_hc36182de__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                    << 6U);
        __Vtemp_hc36182de__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hc36182de__0[8U] = (0x80U | ((IData)(
                                                     (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+598,(__Vtemp_hc36182de__0),264);
        bufp->chgWData(oldp+607,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+610,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+613,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+616,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+619,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
        bufp->chgQData(oldp+621,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
        bufp->chgQData(oldp+623,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
        bufp->chgQData(oldp+625,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
        bufp->chgQData(oldp+627,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
        bufp->chgBit(oldp+629,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
        __Vtemp_h964d057a__0[0U] = vlSymsp->TOP__top.__VdfgTmp_hb4203cea__0;
        __Vtemp_h964d057a__0[1U] = 0U;
        __Vtemp_h964d057a__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_hb7fc8cae__0 
                                          << 2U));
        __Vtemp_h964d057a__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_hb7fc8cae__0 
                                    >> 0x1eU);
        __Vtemp_h964d057a__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                          << 4U));
        __Vtemp_h964d057a__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                     >> 0x1cU) | ((IData)(
                                                          (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h964d057a__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     << 6U) | ((IData)(
                                                       (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_h964d057a__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h964d057a__0[8U] = (0x80U | ((IData)(
                                                     (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+630,(__Vtemp_h964d057a__0),264);
        bufp->chgWData(oldp+639,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+642,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+645,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+648,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+651,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
        bufp->chgQData(oldp+653,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
        bufp->chgQData(oldp+655,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
        bufp->chgQData(oldp+657,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
        bufp->chgQData(oldp+659,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
        bufp->chgBit(oldp+661,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
        bufp->chgQData(oldp+662,(vlSymsp->TOP__top.__PVT__IDU__DOT__R_rs1_o),64);
        bufp->chgQData(oldp+664,(vlSymsp->TOP__top.__PVT__IDU__DOT__R_rs2_o),64);
        bufp->chgCData(oldp+666,((((0x17U == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst)) 
                                   | ((0x23U == (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst)) 
                                         | (IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0))))
                                   ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                            ? (2U | 
                                               (8U 
                                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                                   >> 0xaU)))
                                            : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst))
                                                ? 3U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__top.__PVT__id_inst)) 
                                                     | (0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSymsp->TOP__top.__PVT__id_inst))) 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0x19U))
                                                    ? 
                                                   (0x10U 
                                                    | ((8U 
                                                        & (vlSymsp->TOP__top.__PVT__id_inst 
                                                           >> 9U)) 
                                                       | (7U 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0xcU))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 0xcU)))
                                                     ? 0xaU
                                                     : 
                                                    ((((vlSymsp->TOP__top.__PVT__id_inst 
                                                        >> 0x1eU) 
                                                       & (0U 
                                                          != 
                                                          (0x7020U 
                                                           & vlSymsp->TOP__top.__PVT__id_inst))) 
                                                      << 3U) 
                                                     | (7U 
                                                        & (vlSymsp->TOP__top.__PVT__id_inst 
                                                           >> 0xcU))))))))),5);
        bufp->chgQData(oldp+667,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
        bufp->chgBit(oldp+669,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                      | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
        bufp->chgCData(oldp+670,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
                                   ? 2U : ((1U & ((2U 
                                                   == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                  | ((0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 2U))) 
                                                     | ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 2U))) 
                                                        | ((~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                           >> 2U))))) 
                                                           | (3U 
                                                              == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))))
                                            ? 0U : 
                                           (((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                             | (4U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))
                                             ? 1U : 3U)))),2);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d));
        bufp->chgCData(oldp+672,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                   ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xcU))
                                   : ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                       ? 6U : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst))
                                                ? 7U
                                                : 2U)))),3);
        bufp->chgBit(oldp+673,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
        bufp->chgCData(oldp+674,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
        bufp->chgBit(oldp+676,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
        bufp->chgBit(oldp+678,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
        bufp->chgCData(oldp+679,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
        bufp->chgCData(oldp+680,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
        bufp->chgCData(oldp+681,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+682,((vlSymsp->TOP__top.__PVT__id_inst 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+683,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgCData(oldp+684,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+685,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgBit(oldp+686,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+687,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst))) 
                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                   >> 0x19U))));
        bufp->chgCData(oldp+688,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                >> 0xcU)))
                                   ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                                >> 0x1eU) 
                                               & (0U 
                                                  != 
                                                  (0x7020U 
                                                   & vlSymsp->TOP__top.__PVT__id_inst))) 
                                              << 3U) 
                                             | (7U 
                                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                                   >> 0xcU))))),5);
        bufp->chgCData(oldp+689,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                  >> 9U)) 
                                           | (7U & 
                                              (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 0xcU))))),5);
        bufp->chgBit(oldp+690,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+691,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+692,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+693,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgIData(oldp+694,((vlSymsp->TOP__top.__PVT__id_inst 
                                  >> 7U)),25);
        __Vtemp_hf0d68bd5__0[0U] = (IData)((((- (QData)((IData)(
                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                 >> 0x1fU)))) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSymsp->TOP__top.__PVT__id_inst) 
                                                                  | ((0x800U 
                                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                           >> 0x14U)))))))));
        __Vtemp_hf0d68bd5__0[1U] = (IData)(((((- (QData)((IData)(
                                                                 (vlSymsp->TOP__top.__PVT__id_inst 
                                                                  >> 0x1fU)))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSymsp->TOP__top.__PVT__id_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                            >> 0x14U)))))))) 
                                            >> 0x20U));
        __Vtemp_hf0d68bd5__0[2U] = (6U | (0xffff8000U 
                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                             << 3U)));
        __Vtemp_hf0d68bd5__0[3U] = (((- (IData)((vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x1fU))) 
                                     << 3U) | (0x7fffU 
                                               & (vlSymsp->TOP__top.__PVT__id_inst 
                                                  >> 0x1dU)));
        __Vtemp_hf0d68bd5__0[4U] = (0x28U | (((IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU)))))) 
                                              << 0x13U) 
                                             | ((0x40000U 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xdU)) 
                                                | ((0x20000U 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       << 0xaU)) 
                                                   | ((0x1f800U 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0xeU)) 
                                                      | ((0x780U 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 1U)) 
                                                         | ((- (IData)(
                                                                       (vlSymsp->TOP__top.__PVT__id_inst 
                                                                        >> 0x1fU))) 
                                                            >> 0x1dU)))))));
        __Vtemp_hf0d68bd5__0[5U] = (((IData)((0x7ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSymsp->TOP__top.__PVT__id_inst 
                                                                    >> 0x1fU)))))) 
                                     >> 0xdU) | ((IData)(
                                                         ((0x7ffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x13U));
        __Vtemp_hf0d68bd5__0[6U] = (0x100U | (((IData)(
                                                       (0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSymsp->TOP__top.__PVT__id_inst 
                                                                              >> 0x1fU)))))) 
                                               << 0x15U) 
                                              | ((0x1fc000U 
                                                  & (vlSymsp->TOP__top.__PVT__id_inst 
                                                     >> 0xbU)) 
                                                 | ((0x3e00U 
                                                     & (vlSymsp->TOP__top.__PVT__id_inst 
                                                        << 2U)) 
                                                    | ((IData)(
                                                               ((0x7ffffffffffffULL 
                                                                 & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU))))) 
                                                                >> 0x20U)) 
                                                       >> 0xdU)))));
        __Vtemp_hf0d68bd5__0[7U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSymsp->TOP__top.__PVT__id_inst 
                                                                    >> 0x1fU)))))) 
                                     >> 0xbU) | ((IData)(
                                                         ((0xfffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x15U));
        __Vtemp_hf0d68bd5__0[8U] = (0x600U | (((IData)(
                                                       (((- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP__top.__PVT__id_inst 
                                                                           >> 0x14U))))) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         ((0xfffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 >> 0xbU)));
        __Vtemp_hf0d68bd5__0[9U] = (((IData)((((- (QData)((IData)(
                                                                  (vlSymsp->TOP__top.__PVT__id_inst 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                 >> 0x14U))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSymsp->TOP__top.__PVT__id_inst 
                                                                               >> 0x14U)))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_hf0d68bd5__0[0xaU] = (0x2000U | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSymsp->TOP__top.__PVT__id_inst 
                                                                              >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 >> 0x14U));
        bufp->chgWData(oldp+695,(__Vtemp_hf0d68bd5__0),335);
        bufp->chgWData(oldp+706,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+709,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+712,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+715,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+718,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+721,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+723,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+725,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+727,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
        bufp->chgBit(oldp+733,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
        bufp->chgCData(oldp+734,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
        bufp->chgCData(oldp+736,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
        bufp->chgQData(oldp+742,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
        bufp->chgQData(oldp+744,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
        bufp->chgIData(oldp+746,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                   ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                   : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                              >> 0x20U)))),32);
        bufp->chgCData(oldp+747,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 7U))),5);
        bufp->chgQData(oldp+748,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
        bufp->chgQData(oldp+750,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
        bufp->chgQData(oldp+752,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
        bufp->chgQData(oldp+754,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
        bufp->chgQData(oldp+756,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
        bufp->chgQData(oldp+758,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
        bufp->chgQData(oldp+760,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
        bufp->chgQData(oldp+762,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
        bufp->chgQData(oldp+764,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
        bufp->chgQData(oldp+766,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
        bufp->chgQData(oldp+768,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
        bufp->chgQData(oldp+770,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
        bufp->chgQData(oldp+772,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
        bufp->chgQData(oldp+774,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
        bufp->chgQData(oldp+776,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
        bufp->chgQData(oldp+778,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
        bufp->chgQData(oldp+780,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
        bufp->chgQData(oldp+782,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
        bufp->chgQData(oldp+784,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
        bufp->chgQData(oldp+786,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
        bufp->chgQData(oldp+788,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
        bufp->chgQData(oldp+790,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
        bufp->chgQData(oldp+792,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
        bufp->chgQData(oldp+794,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
        bufp->chgQData(oldp+796,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
        bufp->chgQData(oldp+798,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
        bufp->chgQData(oldp+800,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
        bufp->chgQData(oldp+802,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
        bufp->chgQData(oldp+804,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
        bufp->chgQData(oldp+806,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
        bufp->chgQData(oldp+808,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
        bufp->chgQData(oldp+810,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
        bufp->chgBit(oldp+812,(((IData)(vlSymsp->TOP__top.__PVT__RegWr) 
                                & (0U != (0x1fU & (vlSymsp->TOP__top.Inst 
                                                   >> 7U))))));
        bufp->chgQData(oldp+813,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
        bufp->chgQData(oldp+815,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
        bufp->chgBit(oldp+817,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+818,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+819,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
        bufp->chgIData(oldp+820,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
        bufp->chgCData(oldp+823,((0x1fU & (vlSymsp->TOP__top.Inst 
                                           >> 0xfU))),5);
        bufp->chgSData(oldp+824,((vlSymsp->TOP__top.Inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+825,((7U & (vlSymsp->TOP__top.Inst 
                                        >> 0xcU))),3);
        bufp->chgQData(oldp+826,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
        bufp->chgQData(oldp+828,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
        bufp->chgQData(oldp+830,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
        bufp->chgQData(oldp+832,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
        bufp->chgBit(oldp+834,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 3U)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                              >> 7U)))));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
        bufp->chgQData(oldp+839,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
        bufp->chgBit(oldp+842,((0x305U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
        bufp->chgBit(oldp+846,((0x304U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+847,((0x344U == (vlSymsp->TOP__top.Inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                              >> 7U)))));
        bufp->chgCData(oldp+849,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
        bufp->chgQData(oldp+850,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        bufp->chgBit(oldp+852,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
        bufp->chgBit(oldp+853,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+854,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+855,(((0x304U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn))));
        bufp->chgBit(oldp+856,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+857,(((0x305U == (vlSymsp->TOP__top.Inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn))));
    }
    bufp->chgBit(oldp+858,(vlSelf->clk));
    bufp->chgBit(oldp+859,(vlSelf->rst));
    bufp->chgIData(oldp+860,(vlSelf->Inst),32);
    bufp->chgQData(oldp+861,(vlSelf->pc),64);
    bufp->chgQData(oldp+863,(vlSymsp->TOP__top__IntrUnit.mcase),64);
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
