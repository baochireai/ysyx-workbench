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
    VlWide<7>/*223:0*/ __Vtemp_h8ea2cfd7__0;
    VlWide<13>/*415:0*/ __Vtemp_h1699453b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<9>/*287:0*/ __Vtemp_h2d6007f7__0;
    VlWide<7>/*223:0*/ __Vtemp_hef6aeef8__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_hdf62be76__0;
    VlWide<9>/*287:0*/ __Vtemp_hbbbb0901__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
    VlWide<9>/*287:0*/ __Vtemp_h76b581e7__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__ifu_ready));
        bufp->chgCData(oldp+1,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[0]),2);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[1]),2);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[2]),2);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0]),4);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[1]),4);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[2]),4);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[3]),4);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[4]),4);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[5]),4);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[6]),4);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[7]),4);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[8]),4);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[9]),4);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[10]),4);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[11]),4);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[12]),4);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[13]),4);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[14]),4);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[15]),4);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[0]),2);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[1]),2);
        bufp->chgCData(oldp+40,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[2]),2);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[3]),2);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[0]),2);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[1]),2);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[2]),2);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[3]),2);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4]),3);
        bufp->chgSData(oldp+51,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+52,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[1]),9);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[0]),7);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[1]),7);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[0]),2);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[1]),2);
        bufp->chgSData(oldp+57,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+58,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+59,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+60,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+61,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+62,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+63,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+64,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+65,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[9]),10);
        bufp->chgSData(oldp+67,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[10]),10);
        bufp->chgSData(oldp+68,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[11]),10);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0]),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[1]),7);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[2]),7);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[3]),7);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[4]),7);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[5]),7);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[6]),7);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[7]),7);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[8]),7);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[9]),7);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[10]),7);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[11]),7);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0]),3);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[1]),3);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[2]),3);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[3]),3);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[4]),3);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[5]),3);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[6]),3);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[7]),3);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[8]),3);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[9]),3);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[10]),3);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[11]),3);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[0]),7);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[0]));
        bufp->chgCData(oldp+96,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[0]),3);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[1]),3);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[2]),3);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[3]),3);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[0]));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[1]));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[2]));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[3]));
        bufp->chgSData(oldp+108,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+109,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+110,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+111,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
        bufp->chgQData(oldp+124,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
        bufp->chgQData(oldp+126,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[0]),2);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[1]),2);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[2]),2);
        bufp->chgWData(oldp+132,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+135,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
        bufp->chgQData(oldp+142,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        bufp->chgCData(oldp+144,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+150,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout),64);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__top__WB.__PVT__RegWdata),64);
        __Vtemp_h8ea2cfd7__0[0U] = (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout);
        __Vtemp_h8ea2cfd7__0[1U] = (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                            >> 0x20U));
        __Vtemp_h8ea2cfd7__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__memout) 
                                          << 2U));
        __Vtemp_h8ea2cfd7__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__memout) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__memout 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_h8ea2cfd7__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__wb_ALUres) 
                                           << 4U) | 
                                          ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__memout 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_h8ea2cfd7__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__wb_ALUres) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__wb_ALUres 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h8ea2cfd7__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__wb_ALUres 
                                             >> 0x20U)) 
                                    >> 0x1cU);
        bufp->chgWData(oldp+154,(__Vtemp_h8ea2cfd7__0),198);
        bufp->chgWData(oldp+161,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+164,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+167,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+170,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+174,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+176,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__lut_out),64);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__hit));
        bufp->chgQData(oldp+179,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData),64);
        bufp->chgQData(oldp+181,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top.__PVT__wb_pc
                                   : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+183,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo
                                   : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+185,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                   ? ((0xffffffffffffff00ULL 
                                       & vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus) 
                                      | (QData)((IData)(
                                                        ((0x80U 
                                                          & ((IData)(
                                                                     (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                      >> 3U)) 
                                                             << 7U)) 
                                                         | ((0x70U 
                                                             & ((IData)(
                                                                        (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                         >> 4U)) 
                                                                << 4U)) 
                                                            | (7U 
                                                               & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus)))))))
                                   : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                       ? ((0xffffffffffffff00ULL 
                                           & vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus) 
                                          | (QData)((IData)(
                                                            (0x80U 
                                                             | ((0x70U 
                                                                 & ((IData)(
                                                                            (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                             >> 4U)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                                >> 7U)) 
                                                                       << 3U)) 
                                                                   | (7U 
                                                                      & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus))))))))
                                       : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData))),64);
        __Vtemp_h1699453b__0[0U] = (IData)(((~ (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                   >> 0xfU))))) 
                                            & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout));
        __Vtemp_h1699453b__0[1U] = (IData)((((~ (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                    >> 0xfU))))) 
                                             & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                            >> 0x20U));
        __Vtemp_h1699453b__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                         >> 0xfU)))))) 
                                          << 3U));
        __Vtemp_h1699453b__0[3U] = (((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                    >> 0xfU)))))) 
                                     >> 0x1dU) | ((IData)(
                                                          ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 3U));
        __Vtemp_h1699453b__0[4U] = (0x30U | (((IData)(
                                                      ((0xffffffffffffffe0ULL 
                                                        & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                       | (QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                             >> 0xfU)))))) 
                                              << 6U) 
                                             | ((IData)(
                                                        ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                >> 0x1dU)));
        __Vtemp_h1699453b__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
                                               & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                    >> 0xfU)))))) 
                                     >> 0x1aU) | ((IData)(
                                                          (((0xffffffffffffffe0ULL 
                                                             & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                                >> 0xfU))))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h1699453b__0[6U] = (0x140U | (((IData)(
                                                       ((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                        & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout)) 
                                               << 9U) 
                                              | ((IData)(
                                                         (((0xffffffffffffffe0ULL 
                                                            & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                           | (QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                                >> 0xfU))))) 
                                                          >> 0x20U)) 
                                                 >> 0x1aU)));
        __Vtemp_h1699453b__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                              & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout)) 
                                     >> 0x17U) | ((IData)(
                                                          (((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                            & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                           >> 0x20U)) 
                                                  << 9U));
        __Vtemp_h1699453b__0[8U] = (0x600U | (((IData)(
                                                       (vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__wb_Rrs1)) 
                                               << 0xcU) 
                                              | ((IData)(
                                                         (((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                           & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                          >> 0x20U)) 
                                                 >> 0x17U)));
        __Vtemp_h1699453b__0[9U] = (((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                              | vlSymsp->TOP__top.__PVT__wb_Rrs1)) 
                                     >> 0x14U) | ((IData)(
                                                          ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                            | vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h1699453b__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                  << 0xfU) 
                                                 | ((IData)(
                                                            ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                              | vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                             >> 0x20U)) 
                                                    >> 0x14U)));
        __Vtemp_h1699453b__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                       >> 0x11U) | 
                                      ((IData)((vlSymsp->TOP__top.__PVT__wb_Rrs1 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_h1699453b__0[0xcU] = (0x8000U | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__wb_Rrs1 
                                                          >> 0x20U)) 
                                                 >> 0x11U));
        bufp->chgWData(oldp+187,(__Vtemp_h1699453b__0),402);
        bufp->chgWData(oldp+200,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+203,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+206,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+209,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+212,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        bufp->chgWData(oldp+215,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        bufp->chgQData(oldp+218,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        bufp->chgQData(oldp+220,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        bufp->chgQData(oldp+222,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        bufp->chgQData(oldp+224,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        bufp->chgQData(oldp+226,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        bufp->chgQData(oldp+228,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
        bufp->chgQData(oldp+230,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+233,(vlSymsp->TOP__top.__PVT__wb_inst),32);
        bufp->chgQData(oldp+234,(vlSymsp->TOP__top.__PVT__wb_pc),64);
        bufp->chgBit(oldp+236,(vlSymsp->TOP__top.__PVT__lsu_valid));
        bufp->chgQData(oldp+237,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                                 [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+239,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                                 [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+241,(vlSymsp->TOP__top.__PVT__ALUres),64);
        bufp->chgBit(oldp+243,(vlSymsp->TOP__top.__PVT__clint_mtip));
        bufp->chgCData(oldp+244,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+245,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+246,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+247,(((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d) 
                                & ((~ (IData)(vlSymsp->TOP__top.__PVT__is_jump)) 
                                   & ((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen) 
                                      & (0U != (0x1fU 
                                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                                   >> 7U))))))));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top.__PVT__is_jump));
        bufp->chgQData(oldp+249,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                   ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top__WB.__PVT__isIntrPC));
        bufp->chgQData(oldp+252,(vlSymsp->TOP__top__WB.__PVT__IntrPC),64);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
        bufp->chgIData(oldp+255,((IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc)),32);
        bufp->chgQData(oldp+256,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__top.__PVT__ram_rvalid));
        bufp->chgCData(oldp+259,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__AWREADY));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__top.__PVT__WREADY));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__top.__PVT__BVALID));
        bufp->chgCData(oldp+263,(vlSymsp->TOP__top.__PVT__BRESP),2);
        bufp->chgQData(oldp+264,(vlSymsp->TOP__top.__PVT__id_pc),64);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__top.__PVT__id_inst),32);
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top.__PVT__ifu_valid));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top.__PVT__idu_valid));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__top.__PVT__idu_ready));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top.__PVT__exu_valid));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__top.__PVT__exu_ready));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__top.__PVT__lsu_ready));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__top__WB.__PVT__wb_valid));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__top__WB.__PVT__wb_ready));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__top.__PVT__exu_isSext));
        bufp->chgQData(oldp+277,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
        bufp->chgQData(oldp+279,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
        bufp->chgBit(oldp+281,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
        bufp->chgCData(oldp+282,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
        bufp->chgQData(oldp+283,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
        bufp->chgBit(oldp+285,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
        bufp->chgCData(oldp+286,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
        bufp->chgQData(oldp+287,(vlSymsp->TOP__top.__PVT__ex_pc),64);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__top.__PVT__ex_inst),32);
        bufp->chgBit(oldp+290,(vlSymsp->TOP__top.__PVT__exu_RegWr));
        bufp->chgCData(oldp+291,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__top.__PVT__exu_MemWr));
        bufp->chgCData(oldp+294,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
        bufp->chgBit(oldp+295,(vlSymsp->TOP__top.__PVT__isRAW));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top.__PVT__witf_full));
        bufp->chgBit(oldp+297,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                                 == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                   == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__top.__PVT__idu_isebreak));
        bufp->chgQData(oldp+299,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
        bufp->chgQData(oldp+301,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
        bufp->chgCData(oldp+303,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
        bufp->chgBit(oldp+304,(vlSymsp->TOP__top.__PVT__mem_MemWr));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
        bufp->chgCData(oldp+306,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
        bufp->chgBit(oldp+307,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
        bufp->chgQData(oldp+308,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
        bufp->chgCData(oldp+312,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
        bufp->chgBit(oldp+313,(vlSymsp->TOP__top.__PVT__wb_RegWr));
        bufp->chgQData(oldp+314,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
        bufp->chgQData(oldp+316,(vlSymsp->TOP__top.__PVT__memout),64);
        bufp->chgQData(oldp+318,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
        bufp->chgBit(oldp+320,(vlSymsp->TOP__top__WB.__PVT__wb_en));
        bufp->chgBit(oldp+321,((((~ (IData)(vlSymsp->TOP__top.__PVT__lsu_ready)) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)) 
                                | ((IData)(vlSymsp->TOP__top.__PVT__exu_ready) 
                                   & (IData)(vlSymsp->TOP__top.__VdfgTmp_h6b23342a__0)))));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__top.__PVT__EXU__DOT__popline_wen));
        bufp->chgQData(oldp+323,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                   ? ((IData)(vlSymsp->TOP__top.__PVT__exu_isSext)
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
        bufp->chgBit(oldp+325,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
        bufp->chgBit(oldp+326,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__top.__PVT__EXU__DOT__is_jump_d));
        bufp->chgBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+329,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        bufp->chgQData(oldp+330,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__exu_Imm
                                   : 4ULL)),64);
        bufp->chgQData(oldp+332,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__ex_pc
                                   : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
        bufp->chgQData(oldp+334,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        bufp->chgQData(oldp+337,((QData)((IData)((0x898537eU 
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
        bufp->chgCData(oldp+339,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+345,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        bufp->chgCData(oldp+347,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        bufp->chgCData(oldp+348,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        bufp->chgCData(oldp+349,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        bufp->chgCData(oldp+350,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        bufp->chgCData(oldp+351,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        bufp->chgIData(oldp+355,((0x248adfU | ((0x1000000U 
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
        bufp->chgCData(oldp+356,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+357,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
        bufp->chgBit(oldp+363,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
        bufp->chgQData(oldp+372,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
        bufp->chgQData(oldp+374,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
        bufp->chgBit(oldp+376,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                      >> 3U))));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
        bufp->chgBit(oldp+378,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
        bufp->chgQData(oldp+379,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
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
        bufp->chgBit(oldp+381,((1U & __Vtemp_hdd5810e3__0[2U])));
        bufp->chgBit(oldp+382,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                >> 0x3fU))) 
                                 == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                   >> 0x3fU)))) 
                                & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                  >> 0x3fU))) 
                                   != (1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
        bufp->chgQData(oldp+385,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
        bufp->chgQData(oldp+387,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
        bufp->chgQData(oldp+389,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
        bufp->chgQData(oldp+391,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
        bufp->chgQData(oldp+393,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
        bufp->chgQData(oldp+395,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
        bufp->chgQData(oldp+397,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
        bufp->chgQData(oldp+399,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
        bufp->chgCData(oldp+403,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
        bufp->chgCData(oldp+404,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
        bufp->chgQData(oldp+405,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        __Vtemp_h2d6007f7__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        __Vtemp_h2d6007f7__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        __Vtemp_h2d6007f7__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                          << 2U));
        __Vtemp_h2d6007f7__0[3U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_h2d6007f7__0[4U] = (0xcU | (((IData)(
                                                     ((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        __Vtemp_h2d6007f7__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
                                                          (((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        __Vtemp_h2d6007f7__0[6U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     << 6U) | ((IData)(
                                                       (((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        __Vtemp_h2d6007f7__0[7U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                     >> 0x1aU) | ((IData)(
                                                          (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h2d6007f7__0[8U] = (0x40U | ((IData)(
                                                     (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+408,(__Vtemp_h2d6007f7__0),264);
        bufp->chgWData(oldp+417,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+420,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+423,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+426,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+429,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+431,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+433,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+435,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        bufp->chgQData(oldp+437,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        __Vtemp_hef6aeef8__0[0U] = 4U;
        __Vtemp_hef6aeef8__0[1U] = 0U;
        __Vtemp_hef6aeef8__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                          << 2U));
        __Vtemp_hef6aeef8__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                     >> 0x1eU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_hef6aeef8__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__exu_Imm) 
                                           << 4U) | 
                                          ((IData)(
                                                   (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_hef6aeef8__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__exu_Imm) 
                                     >> 0x1cU) | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__exu_Imm 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hef6aeef8__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__exu_Imm 
                                             >> 0x20U)) 
                                    >> 0x1cU);
        bufp->chgWData(oldp+440,(__Vtemp_hef6aeef8__0),198);
        bufp->chgWData(oldp+447,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+450,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+453,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+456,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+458,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+460,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+462,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
        bufp->chgBit(oldp+464,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
        bufp->chgCData(oldp+465,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
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
        bufp->chgWData(oldp+466,(__Vtemp_h9798c001__0),1088);
        bufp->chgWData(oldp+500,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+503,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+506,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+509,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+512,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+515,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+518,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+521,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+524,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+527,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+530,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
        bufp->chgWData(oldp+533,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
        bufp->chgWData(oldp+536,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
        bufp->chgWData(oldp+539,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
        bufp->chgWData(oldp+542,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
        bufp->chgWData(oldp+545,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
        bufp->chgQData(oldp+548,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
        bufp->chgQData(oldp+550,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
        bufp->chgQData(oldp+552,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
        bufp->chgQData(oldp+554,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
        bufp->chgQData(oldp+556,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
        bufp->chgQData(oldp+558,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
        bufp->chgQData(oldp+560,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
        bufp->chgQData(oldp+562,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
        bufp->chgQData(oldp+564,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
        bufp->chgQData(oldp+566,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
        bufp->chgQData(oldp+568,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
        bufp->chgQData(oldp+570,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
        bufp->chgQData(oldp+572,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
        bufp->chgQData(oldp+574,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
        bufp->chgQData(oldp+576,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
        bufp->chgQData(oldp+578,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
        bufp->chgQData(oldp+580,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
        bufp->chgBit(oldp+582,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
        bufp->chgCData(oldp+583,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
        __Vtemp_hdf62be76__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h77a512b4__0;
        __Vtemp_hdf62be76__0[1U] = 0U;
        __Vtemp_hdf62be76__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h7418121e__0 
                                          << 2U));
        __Vtemp_hdf62be76__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h7418121e__0 
                                    >> 0x1eU);
        __Vtemp_hdf62be76__0[4U] = 0x14U;
        __Vtemp_hdf62be76__0[5U] = 0U;
        __Vtemp_hdf62be76__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                    << 6U);
        __Vtemp_hdf62be76__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hdf62be76__0[8U] = (0x80U | ((IData)(
                                                     (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+584,(__Vtemp_hdf62be76__0),264);
        bufp->chgWData(oldp+593,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+596,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+599,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+602,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+605,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
        bufp->chgQData(oldp+607,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
        bufp->chgQData(oldp+609,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
        bufp->chgQData(oldp+611,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
        bufp->chgQData(oldp+613,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
        bufp->chgBit(oldp+615,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
        __Vtemp_hbbbb0901__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h749ef897__0;
        __Vtemp_hbbbb0901__0[1U] = 0U;
        __Vtemp_hbbbb0901__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h7492a8f3__0 
                                          << 2U));
        __Vtemp_hbbbb0901__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h7492a8f3__0 
                                    >> 0x1eU);
        __Vtemp_hbbbb0901__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                          << 4U));
        __Vtemp_hbbbb0901__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                     >> 0x1cU) | ((IData)(
                                                          (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hbbbb0901__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     << 6U) | ((IData)(
                                                       (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                        >> 0x20U)) 
                                               >> 0x1cU));
        __Vtemp_hbbbb0901__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                     >> 0x1aU) | ((IData)(
                                                          (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hbbbb0901__0[8U] = (0x80U | ((IData)(
                                                     (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                      >> 0x20U)) 
                                             >> 0x1aU));
        bufp->chgWData(oldp+616,(__Vtemp_hbbbb0901__0),264);
        bufp->chgWData(oldp+625,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+628,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+631,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+634,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+637,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
        bufp->chgQData(oldp+639,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
        bufp->chgQData(oldp+641,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
        bufp->chgQData(oldp+643,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
        bufp->chgQData(oldp+645,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
        bufp->chgBit(oldp+648,((((~ (IData)(vlSymsp->TOP__top.__PVT__exu_ready)) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__idu_valid)) 
                                | ((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                                   & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                      & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                         & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0)))))));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
        bufp->chgCData(oldp+650,((((0x17U == (0x7fU 
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
        bufp->chgQData(oldp+651,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
        bufp->chgBit(oldp+653,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                      | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
        bufp->chgCData(oldp+654,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
        bufp->chgCData(oldp+655,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                   ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xcU))
                                   : ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                       ? 6U : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst))
                                                ? 7U
                                                : 2U)))),3);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
        bufp->chgCData(oldp+657,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
        bufp->chgBit(oldp+659,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d));
        bufp->chgBit(oldp+663,(((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d) 
                                & (IData)(((0x100000U 
                                            == (0x1f00000U 
                                                & vlSymsp->TOP__top.__PVT__id_inst)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0xcU))))))))));
        bufp->chgCData(oldp+664,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
        bufp->chgCData(oldp+665,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
        bufp->chgCData(oldp+666,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+667,((vlSymsp->TOP__top.__PVT__id_inst 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+668,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgCData(oldp+669,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+670,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgBit(oldp+671,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+672,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst))) 
                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                   >> 0x19U))));
        bufp->chgCData(oldp+673,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
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
        bufp->chgCData(oldp+674,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                  >> 9U)) 
                                           | (7U & 
                                              (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 0xcU))))),5);
        bufp->chgBit(oldp+675,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+676,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+677,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+678,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgIData(oldp+679,((vlSymsp->TOP__top.__PVT__id_inst 
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
        bufp->chgWData(oldp+680,(__Vtemp_hf0d68bd5__0),335);
        bufp->chgWData(oldp+691,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+694,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+697,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+700,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+703,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+706,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+708,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+710,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+712,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
        bufp->chgQData(oldp+714,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
        bufp->chgQData(oldp+716,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
        bufp->chgBit(oldp+718,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
        bufp->chgCData(oldp+719,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
        bufp->chgCData(oldp+721,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
        bufp->chgBit(oldp+722,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
        bufp->chgBit(oldp+725,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__top.__PVT__IFU__DOT__popline_wen));
        bufp->chgBit(oldp+728,((((~ (IData)(vlSymsp->TOP__top.__PVT__idu_ready)) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__ifu_valid)) 
                                | (IData)(vlSymsp->TOP__top.__PVT__ifu_arvalid))));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__top.__PVT__IFU__DOT__nextpc_valid_r));
        bufp->chgQData(oldp+730,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
        bufp->chgQData(oldp+732,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
        bufp->chgIData(oldp+734,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                   ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                   : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                              >> 0x20U)))),32);
        bufp->chgBit(oldp+735,((((~ (IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready)) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)) 
                                | ((IData)(vlSymsp->TOP__top.__PVT__lsu_ready) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)))));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__top.__PVT__LSU__DOT__popline_wen));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
        bufp->chgBit(oldp+738,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
        bufp->chgBit(oldp+741,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                   & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
        bufp->chgQData(oldp+742,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
        bufp->chgQData(oldp+744,(((- (QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                      & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                         & (0U 
                                                            != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                                  & ((0x200bff8ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)
                                      ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                      : ((0x2004000ULL 
                                          == vlSymsp->TOP__top.__PVT__ALUres)
                                          ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                          : 0ULL)))),64);
        bufp->chgBit(oldp+746,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                                > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
        bufp->chgCData(oldp+747,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
        bufp->chgBit(oldp+748,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                      >> 2U))));
        bufp->chgBit(oldp+749,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
        bufp->chgCData(oldp+750,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 3U))),6);
        bufp->chgWData(oldp+751,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
        bufp->chgSData(oldp+755,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
        bufp->chgCData(oldp+756,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
        bufp->chgCData(oldp+757,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        bufp->chgBit(oldp+758,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
        __Vtemp_h76b581e7__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                        >> 7U))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                             : (QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))));
        __Vtemp_h76b581e7__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                              : (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                            >> 0x20U));
        __Vtemp_h76b581e7__0[2U] = (3U | ((IData)((
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))) 
                                          << 2U));
        __Vtemp_h76b581e7__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))) 
                                     >> 0x1eU) | ((IData)(
                                                          (((4U 
                                                             & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                             ? 
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                             : (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                                           >> 0x20U)) 
                                                  << 2U));
        __Vtemp_h76b581e7__0[4U] = (8U | (((IData)(
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                     : (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                           << 4U) | 
                                          ((IData)(
                                                   (((4U 
                                                      & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                              >> 0xfU))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                      : (QData)((IData)(
                                                                        (0xffffU 
                                                                         & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
        __Vtemp_h76b581e7__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                               : (QData)((IData)(
                                                                 vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                     >> 0x1cU) | ((IData)(
                                                          (((4U 
                                                             & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                             : (QData)((IData)(
                                                                               vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h76b581e7__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                              << 6U) 
                                             | ((IData)(
                                                        (((4U 
                                                           & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                           : (QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h76b581e7__0[7U] = (((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h76b581e7__0[8U] = ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+759,(__Vtemp_h76b581e7__0),264);
        bufp->chgWData(oldp+768,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+771,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+774,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+777,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+780,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        bufp->chgQData(oldp+782,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        bufp->chgQData(oldp+784,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        bufp->chgQData(oldp+786,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        bufp->chgQData(oldp+788,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
        bufp->chgQData(oldp+791,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
        bufp->chgQData(oldp+793,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
        bufp->chgBit(oldp+795,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+796,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+797,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                                & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
        bufp->chgIData(oldp+798,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
        bufp->chgCData(oldp+800,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
        bufp->chgBit(oldp+801,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
        bufp->chgCData(oldp+802,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
        bufp->chgCData(oldp+804,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                   << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                              << 6U) 
                                             | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                    << 4U) 
                                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4))))))))),8);
        bufp->chgCData(oldp+805,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                   << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                              << 6U) 
                                             | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                                    << 4U) 
                                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))),8);
        bufp->chgCData(oldp+806,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0) 
                                   << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0) 
                                              << 6U) 
                                             | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0) 
                                                    << 4U) 
                                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0))))))))),8);
        bufp->chgCData(oldp+807,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                    | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                   << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                              << 6U) 
                                             | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                                  | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                                     | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                        | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                                       << 3U) 
                                                      | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                           | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                              | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                                               | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)))))))))),8);
        bufp->chgCData(oldp+808,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                             | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)) 
                                            << 7U)) 
                                  | ((0x40U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)) 
                                               << 6U)) 
                                     | ((0x20U & ((
                                                   (~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                              | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                                 | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                                         | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)) 
                                                          | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))))),8);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
        bufp->chgCData(oldp+817,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xfU)))) 
                                   << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                               & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0xfU)))) 
                                              << 6U) 
                                             | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                                  & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 0xfU)))) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                     & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__top.__PVT__id_inst 
                                                            >> 0xfU)))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                        & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top.__PVT__id_inst 
                                                               >> 0xfU)))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                           & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                  >> 0xfU)))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                              & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                     >> 0xfU)))) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                               & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                      >> 0xfU)))))))))))),8);
        bufp->chgCData(oldp+818,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0x14U)))) 
                                   << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                               & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0x14U)))) 
                                              << 6U) 
                                             | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                                  & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 0x14U)))) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                     & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__top.__PVT__id_inst 
                                                            >> 0x14U)))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                        & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top.__PVT__id_inst 
                                                               >> 0x14U)))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                           & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                  >> 0x14U)))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                              & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                     >> 0x14U)))) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                               & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                      >> 0x14U)))))))))))),8);
        bufp->chgBit(oldp+819,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xfU)))) 
                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xfU)))) 
                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                       & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xfU)))) 
                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                             == (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xfU)))) 
                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xfU)))) 
                                            | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0xfU)))) 
                                               | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                   & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0xfU)))) 
                                                  | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                     & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__top.__PVT__id_inst 
                                                            >> 0xfU)))))))))))));
        bufp->chgBit(oldp+820,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x14U)))) 
                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0x14U)))) 
                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                       & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x14U)))) 
                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                             == (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0x14U)))) 
                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0x14U)))) 
                                            | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0x14U)))) 
                                               | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                   & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0x14U)))) 
                                                  | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                     & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__top.__PVT__id_inst 
                                                            >> 0x14U)))))))))))));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r));
        bufp->chgBit(oldp+822,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena));
        bufp->chgCData(oldp+824,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r))))),3);
        bufp->chgBit(oldp+825,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r));
        bufp->chgBit(oldp+826,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)))));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena));
        bufp->chgCData(oldp+828,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r))))),3);
        bufp->chgBit(oldp+829,(vlSymsp->TOP__top.witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
        bufp->chgCData(oldp+830,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+832,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+834,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0))));
        bufp->chgCData(oldp+835,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+837,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+839,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0))));
        bufp->chgCData(oldp+840,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+842,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+844,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0))));
        bufp->chgCData(oldp+845,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+846,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+847,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+849,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0))));
        bufp->chgCData(oldp+850,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+851,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+852,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+854,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0))));
        bufp->chgCData(oldp+855,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+857,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+859,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0))));
        bufp->chgCData(oldp+860,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+861,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+862,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+864,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0))));
        bufp->chgCData(oldp+865,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+866,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+867,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4));
        bufp->chgBit(oldp+869,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0))));
        bufp->chgBit(oldp+870,((((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                                 & (IData)(vlSymsp->TOP__top__WB.__PVT__wb_valid)) 
                                | ((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)))));
        bufp->chgBit(oldp+871,(((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid))));
        bufp->chgQData(oldp+872,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                   : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                       ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                       : vlSymsp->TOP__top.__PVT__wb_pc))),64);
        bufp->chgBit(oldp+874,((((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                                 & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                                | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
        bufp->chgCData(oldp+875,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 7U))),5);
        bufp->chgQData(oldp+876,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[0]),64);
        bufp->chgQData(oldp+878,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[1]),64);
        bufp->chgQData(oldp+880,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[2]),64);
        bufp->chgQData(oldp+882,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[3]),64);
        bufp->chgQData(oldp+884,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[4]),64);
        bufp->chgQData(oldp+886,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[5]),64);
        bufp->chgQData(oldp+888,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[6]),64);
        bufp->chgQData(oldp+890,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[7]),64);
        bufp->chgQData(oldp+892,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[8]),64);
        bufp->chgQData(oldp+894,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[9]),64);
        bufp->chgQData(oldp+896,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[10]),64);
        bufp->chgQData(oldp+898,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[11]),64);
        bufp->chgQData(oldp+900,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[12]),64);
        bufp->chgQData(oldp+902,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[13]),64);
        bufp->chgQData(oldp+904,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[14]),64);
        bufp->chgQData(oldp+906,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[15]),64);
        bufp->chgQData(oldp+908,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[16]),64);
        bufp->chgQData(oldp+910,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[17]),64);
        bufp->chgQData(oldp+912,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[18]),64);
        bufp->chgQData(oldp+914,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[19]),64);
        bufp->chgQData(oldp+916,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[20]),64);
        bufp->chgQData(oldp+918,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[21]),64);
        bufp->chgQData(oldp+920,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[22]),64);
        bufp->chgQData(oldp+922,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[23]),64);
        bufp->chgQData(oldp+924,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[24]),64);
        bufp->chgQData(oldp+926,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[25]),64);
        bufp->chgQData(oldp+928,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[26]),64);
        bufp->chgQData(oldp+930,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[27]),64);
        bufp->chgQData(oldp+932,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[28]),64);
        bufp->chgQData(oldp+934,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[29]),64);
        bufp->chgQData(oldp+936,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[30]),64);
        bufp->chgQData(oldp+938,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[31]),64);
        bufp->chgBit(oldp+940,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__isw));
        bufp->chgCData(oldp+941,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0xfU))),5);
        bufp->chgSData(oldp+942,((vlSymsp->TOP__top.__PVT__wb_inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+943,((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0xcU))),3);
        bufp->chgQData(oldp+944,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc),64);
        bufp->chgQData(oldp+946,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec),64);
        bufp->chgQData(oldp+948,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus),64);
        bufp->chgQData(oldp+950,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie),64);
        bufp->chgBit(oldp+952,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                              >> 3U)))));
        bufp->chgBit(oldp+953,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie 
                                              >> 7U)))));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__timer_irq));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isecall));
        bufp->chgQData(oldp+957,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo),64);
        bufp->chgBit(oldp+959,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret));
        bufp->chgBit(oldp+960,((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus));
        bufp->chgBit(oldp+964,((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+965,((0x344U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                              >> 7U)))));
        bufp->chgCData(oldp+967,(vlSymsp->TOP__top__WB__IntrUnit.__Vcellinp__CSRwEn__key),2);
        bufp->chgQData(oldp+968,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        bufp->chgBit(oldp+970,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__hit));
        bufp->chgBit(oldp+971,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+972,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+973,(((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
        bufp->chgBit(oldp+974,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus) 
                                 & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                                | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
        bufp->chgBit(oldp+975,(((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    }
    bufp->chgBit(oldp+976,(vlSelf->clk));
    bufp->chgBit(oldp+977,(vlSelf->rst));
    bufp->chgIData(oldp+978,(vlSelf->Inst),32);
    bufp->chgQData(oldp+979,(vlSelf->pc),64);
    bufp->chgBit(oldp+981,(vlSelf->valid));
    bufp->chgBit(oldp+982,(((IData)(vlSymsp->TOP__top.__PVT__is_jump) 
                            | (IData)(vlSelf->rst))));
    bufp->chgBit(oldp+983,(((IData)(vlSelf->rst) | 
                            ((IData)(vlSymsp->TOP__top.__PVT__is_jump) 
                             | (IData)(vlSymsp->TOP__top.__PVT__idu_isebreak)))));
    bufp->chgQData(oldp+984,(vlSymsp->TOP__top__WB__IntrUnit.mcase),64);
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
