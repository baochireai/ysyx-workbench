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
    VlWide<13>/*415:0*/ __Vtemp_h1699453b__0;
    VlWide<7>/*223:0*/ __Vtemp_h8ea2cfd7__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<7>/*223:0*/ __Vtemp_hef6aeef8__0;
    VlWide<9>/*287:0*/ __Vtemp_h76b581e7__0;
    VlWide<9>/*287:0*/ __Vtemp_h2d6007f7__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_hdf62be76__0;
    VlWide<9>/*287:0*/ __Vtemp_hbbbb0901__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
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
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [7U]) | vlSelf->__Vm_traceActivity
                     [8U]))) {
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
        bufp->chgWData(oldp+150,(__Vtemp_h1699453b__0),402);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgWData(oldp+163,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+166,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+169,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+172,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+175,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        bufp->chgWData(oldp+178,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        bufp->chgQData(oldp+181,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        bufp->chgQData(oldp+183,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        bufp->chgQData(oldp+185,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        bufp->chgQData(oldp+187,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        bufp->chgQData(oldp+189,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        bufp->chgQData(oldp+191,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0xbU]))) {
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
        bufp->chgWData(oldp+193,(__Vtemp_h8ea2cfd7__0),198);
        bufp->chgWData(oldp+200,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+203,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+206,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+209,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+211,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+213,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[2]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+215,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout),64);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData),64);
        bufp->chgQData(oldp+219,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                   ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo
                                   : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
        bufp->chgQData(oldp+221,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+224,(vlSymsp->TOP__top.__PVT__ram_rvalid));
        bufp->chgCData(oldp+225,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
        bufp->chgBit(oldp+226,(vlSymsp->TOP__top.__PVT__AWREADY));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__top.__PVT__WREADY));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__top.__PVT__BVALID));
        bufp->chgCData(oldp+229,(vlSymsp->TOP__top.__PVT__BRESP),2);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
        bufp->chgCData(oldp+232,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top.__PVT__lsu_valid));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__top.__PVT__clint_mtip));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__top.__PVT__ifu_valid));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__top.__PVT__idu_valid));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__top.__PVT__exu_valid));
        bufp->chgQData(oldp+239,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
        bufp->chgCData(oldp+241,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
        bufp->chgQData(oldp+242,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
        bufp->chgCData(oldp+245,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
        bufp->chgBit(oldp+246,(vlSymsp->TOP__top.__PVT__exu_RegWr));
        bufp->chgCData(oldp+247,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
        bufp->chgBit(oldp+249,(vlSymsp->TOP__top.__PVT__exu_MemWr));
        bufp->chgCData(oldp+250,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top.__PVT__witf_full));
        bufp->chgBit(oldp+252,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                                 == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                   == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
        bufp->chgQData(oldp+253,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
        bufp->chgCData(oldp+255,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
        bufp->chgBit(oldp+256,(vlSymsp->TOP__top.__PVT__mem_MemWr));
        bufp->chgCData(oldp+257,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
        bufp->chgCData(oldp+259,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
        bufp->chgBit(oldp+260,(vlSymsp->TOP__top.__PVT__wb_RegWr));
        bufp->chgQData(oldp+261,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
        bufp->chgQData(oldp+263,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                      >> 3U))));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
        bufp->chgBit(oldp+267,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
        bufp->chgCData(oldp+268,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__top.__PVT__IFU__DOT__nextpc_valid_r));
        bufp->chgBit(oldp+271,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
        bufp->chgCData(oldp+272,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
        bufp->chgBit(oldp+273,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                      >> 2U))));
        bufp->chgCData(oldp+274,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
        bufp->chgCData(oldp+275,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        bufp->chgBit(oldp+276,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
        bufp->chgCData(oldp+277,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
        bufp->chgCData(oldp+279,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
        bufp->chgCData(oldp+280,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0) 
                                   << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0) 
                                              << 6U) 
                                             | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0) 
                                                    << 4U) 
                                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0))))))))),8);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r));
        bufp->chgBit(oldp+290,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r));
        bufp->chgBit(oldp+292,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)))));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena));
        bufp->chgCData(oldp+294,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r))))),3);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+297,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+301,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+302,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+303,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+304,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+305,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+307,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+308,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4));
        bufp->chgCData(oldp+309,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4),5);
        bufp->chgBit(oldp+310,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+311,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__exu_Imm
                                   : 4ULL)),64);
        bufp->chgQData(oldp+313,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                   ? vlSymsp->TOP__top.__PVT__ex_pc
                                   : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
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
        bufp->chgBit(oldp+315,((1U & __Vtemp_hdd5810e3__0[2U])));
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
        bufp->chgWData(oldp+316,(__Vtemp_hef6aeef8__0),198);
        bufp->chgWData(oldp+323,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+326,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+329,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
        bufp->chgQData(oldp+332,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+334,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+336,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
        bufp->chgBit(oldp+338,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                   & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
        bufp->chgBit(oldp+339,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
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
        bufp->chgWData(oldp+340,(__Vtemp_h76b581e7__0),264);
        bufp->chgCData(oldp+349,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                    | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                   << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                              << 6U) 
                                             | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                                  | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                                     | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                                    << 4U) 
                                                   | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                        | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                                       << 3U) 
                                                      | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                           | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                              | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                                               | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)))))))))),8);
        bufp->chgCData(oldp+350,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                             | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)) 
                                            << 7U)) 
                                  | ((0x40U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)) 
                                               << 6U)) 
                                     | ((0x20U & ((
                                                   (~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                              | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                                 | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                                         | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)) 
                                                          | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))))),8);
        bufp->chgCData(oldp+351,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
        bufp->chgCData(oldp+352,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
        bufp->chgBit(oldp+353,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
        bufp->chgBit(oldp+354,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
        bufp->chgCData(oldp+355,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r))))),3);
        bufp->chgBit(oldp+356,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+357,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0))));
        bufp->chgBit(oldp+358,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0))));
        bufp->chgBit(oldp+360,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+361,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0))));
        bufp->chgBit(oldp+362,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+363,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0))));
        bufp->chgBit(oldp+364,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+365,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0))));
        bufp->chgBit(oldp+366,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+367,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0))));
        bufp->chgBit(oldp+368,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+369,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0))));
        bufp->chgBit(oldp+370,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                      | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)))));
        bufp->chgBit(oldp+371,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0))));
        bufp->chgBit(oldp+372,(((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                                & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                   >> 7U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+373,(vlSymsp->TOP__top__WB.__PVT__isIntrPC));
        bufp->chgQData(oldp+374,(vlSymsp->TOP__top__WB.__PVT__IntrPC),64);
        bufp->chgBit(oldp+376,(vlSymsp->TOP__top__WB.__PVT__wb_valid));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__top__WB.__PVT__wb_ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgQData(oldp+378,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc),64);
        bufp->chgQData(oldp+380,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec),64);
        bufp->chgQData(oldp+382,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus),64);
        bufp->chgQData(oldp+384,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie),64);
        bufp->chgBit(oldp+386,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                              >> 3U)))));
        bufp->chgBit(oldp+387,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie 
                                              >> 7U)))));
        bufp->chgBit(oldp+388,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                              >> 7U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgQData(oldp+389,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
        bufp->chgBit(oldp+391,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r1));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+393,(vlSymsp->TOP__top.__PVT__wb_inst),32);
        bufp->chgQData(oldp+394,(vlSymsp->TOP__top.__PVT__wb_pc),64);
        bufp->chgQData(oldp+396,(vlSymsp->TOP__top.__PVT__ALUres),64);
        bufp->chgCData(oldp+398,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+399,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+400,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+401,(vlSymsp->TOP__top.__PVT__RegWr_d));
        bufp->chgBit(oldp+402,(vlSymsp->TOP__top.__PVT__ifu_is_jump));
        bufp->chgQData(oldp+403,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                   ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
        bufp->chgQData(oldp+405,(vlSymsp->TOP__top.__PVT__id_pc),64);
        bufp->chgIData(oldp+407,(vlSymsp->TOP__top.__PVT__id_inst),32);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__top.__PVT__exu_isSext));
        bufp->chgQData(oldp+410,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
        bufp->chgBit(oldp+412,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
        bufp->chgQData(oldp+413,(vlSymsp->TOP__top.__PVT__ex_pc),64);
        bufp->chgIData(oldp+415,(vlSymsp->TOP__top.__PVT__ex_inst),32);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__top.__PVT__isRAW));
        bufp->chgQData(oldp+417,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
        bufp->chgQData(oldp+420,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
        bufp->chgQData(oldp+424,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
        bufp->chgBit(oldp+426,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
        bufp->chgBit(oldp+427,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
        bufp->chgBit(oldp+428,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+429,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        bufp->chgQData(oldp+430,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
        bufp->chgCData(oldp+432,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        bufp->chgQData(oldp+433,((QData)((IData)((0x898537eU 
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
        bufp->chgCData(oldp+435,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+437,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+439,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+440,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+441,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+442,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        bufp->chgCData(oldp+449,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        bufp->chgBit(oldp+450,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        bufp->chgIData(oldp+451,((0x248adfU | ((0x1000000U 
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
        bufp->chgCData(oldp+452,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+453,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+454,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+455,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+456,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+457,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+458,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
        bufp->chgBit(oldp+459,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
        bufp->chgQData(oldp+468,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
        bufp->chgQData(oldp+470,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
        bufp->chgQData(oldp+472,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
        bufp->chgBit(oldp+474,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                >> 0x3fU))) 
                                 == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                   >> 0x3fU)))) 
                                & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                  >> 0x3fU))) 
                                   != (1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
        bufp->chgQData(oldp+477,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
        bufp->chgQData(oldp+479,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
        bufp->chgQData(oldp+481,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
        bufp->chgQData(oldp+483,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
        bufp->chgQData(oldp+485,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
        bufp->chgQData(oldp+487,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
        bufp->chgQData(oldp+489,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
        bufp->chgQData(oldp+491,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
        bufp->chgQData(oldp+493,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
        bufp->chgCData(oldp+495,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
        bufp->chgCData(oldp+496,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
        bufp->chgQData(oldp+497,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
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
        bufp->chgWData(oldp+499,(__Vtemp_h2d6007f7__0),264);
        bufp->chgWData(oldp+508,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+511,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+514,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+517,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+520,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        bufp->chgQData(oldp+522,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        bufp->chgQData(oldp+524,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        bufp->chgQData(oldp+526,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        bufp->chgQData(oldp+528,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        bufp->chgBit(oldp+530,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        bufp->chgQData(oldp+531,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
        bufp->chgBit(oldp+533,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
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
        bufp->chgWData(oldp+534,(__Vtemp_h9798c001__0),1088);
        bufp->chgWData(oldp+568,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
        bufp->chgWData(oldp+571,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
        bufp->chgWData(oldp+574,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
        bufp->chgWData(oldp+577,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
        bufp->chgWData(oldp+580,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
        bufp->chgWData(oldp+583,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
        bufp->chgWData(oldp+586,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
        bufp->chgWData(oldp+589,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
        bufp->chgWData(oldp+592,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
        bufp->chgWData(oldp+595,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
        bufp->chgWData(oldp+598,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
        bufp->chgWData(oldp+601,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
        bufp->chgWData(oldp+604,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
        bufp->chgWData(oldp+607,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
        bufp->chgWData(oldp+610,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
        bufp->chgWData(oldp+613,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
        bufp->chgQData(oldp+616,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
        bufp->chgQData(oldp+618,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
        bufp->chgQData(oldp+620,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
        bufp->chgQData(oldp+622,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
        bufp->chgQData(oldp+624,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
        bufp->chgQData(oldp+626,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
        bufp->chgQData(oldp+628,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
        bufp->chgQData(oldp+630,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
        bufp->chgQData(oldp+632,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
        bufp->chgQData(oldp+634,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
        bufp->chgQData(oldp+636,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
        bufp->chgQData(oldp+638,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
        bufp->chgQData(oldp+640,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
        bufp->chgQData(oldp+642,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
        bufp->chgQData(oldp+644,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
        bufp->chgQData(oldp+646,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
        bufp->chgQData(oldp+648,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
        bufp->chgBit(oldp+650,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
        bufp->chgCData(oldp+651,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
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
        bufp->chgWData(oldp+652,(__Vtemp_hdf62be76__0),264);
        bufp->chgWData(oldp+661,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+664,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+667,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+670,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+673,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
        bufp->chgQData(oldp+675,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
        bufp->chgQData(oldp+677,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
        bufp->chgQData(oldp+679,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
        bufp->chgQData(oldp+681,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
        bufp->chgBit(oldp+683,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
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
        bufp->chgWData(oldp+684,(__Vtemp_hbbbb0901__0),264);
        bufp->chgWData(oldp+693,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+696,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+699,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+702,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+705,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
        bufp->chgQData(oldp+707,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
        bufp->chgQData(oldp+709,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
        bufp->chgQData(oldp+711,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
        bufp->chgQData(oldp+713,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
        bufp->chgCData(oldp+716,((((0x17U == (0x7fU 
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
        bufp->chgQData(oldp+717,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
        bufp->chgBit(oldp+719,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                                | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                      | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
        bufp->chgCData(oldp+720,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
        bufp->chgCData(oldp+721,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                   ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xcU))
                                   : ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                       ? 6U : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst))
                                                ? 7U
                                                : 2U)))),3);
        bufp->chgBit(oldp+722,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
        bufp->chgCData(oldp+723,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
        bufp->chgBit(oldp+725,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
        bufp->chgCData(oldp+728,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
        bufp->chgCData(oldp+729,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
        bufp->chgCData(oldp+730,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+731,((vlSymsp->TOP__top.__PVT__id_inst 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+732,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgCData(oldp+733,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+734,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
        bufp->chgBit(oldp+735,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+736,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst))) 
                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                   >> 0x19U))));
        bufp->chgCData(oldp+737,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
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
        bufp->chgCData(oldp+738,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                  >> 9U)) 
                                           | (7U & 
                                              (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 0xcU))))),5);
        bufp->chgBit(oldp+739,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+740,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+741,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgBit(oldp+742,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
        bufp->chgIData(oldp+743,((vlSymsp->TOP__top.__PVT__id_inst 
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
        bufp->chgWData(oldp+744,(__Vtemp_hf0d68bd5__0),335);
        bufp->chgWData(oldp+755,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+758,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+761,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+764,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+767,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+770,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
        bufp->chgQData(oldp+772,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
        bufp->chgQData(oldp+774,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
        bufp->chgQData(oldp+776,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
        bufp->chgQData(oldp+778,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
        bufp->chgQData(oldp+780,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
        bufp->chgBit(oldp+782,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
        bufp->chgCData(oldp+783,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
        bufp->chgBit(oldp+784,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
        bufp->chgCData(oldp+785,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
        bufp->chgBit(oldp+786,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
        bufp->chgQData(oldp+791,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
        bufp->chgBit(oldp+793,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
        bufp->chgQData(oldp+796,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
        bufp->chgCData(oldp+798,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                           << 3U))),6);
        bufp->chgWData(oldp+799,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
        bufp->chgSData(oldp+803,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
        bufp->chgWData(oldp+804,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+807,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+810,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+813,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+816,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        bufp->chgQData(oldp+818,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        bufp->chgQData(oldp+820,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        bufp->chgQData(oldp+822,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        bufp->chgQData(oldp+824,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
        bufp->chgBit(oldp+827,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+828,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        bufp->chgBit(oldp+829,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                                & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
        bufp->chgCData(oldp+830,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
        bufp->chgBit(oldp+831,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__top.witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5));
        bufp->chgCData(oldp+841,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+842,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0xfU))),5);
        bufp->chgSData(oldp+843,((vlSymsp->TOP__top.__PVT__wb_inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+844,((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+845,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isecall));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret));
        bufp->chgBit(oldp+847,((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus));
        bufp->chgBit(oldp+849,((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+850,((0x344U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+851,(((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
        bufp->chgBit(oldp+852,(((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                            >> 0x14U)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+853,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__timer_irq));
        bufp->chgBit(oldp+854,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise));
        bufp->chgQData(oldp+855,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo),64);
        bufp->chgBit(oldp+857,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase));
        bufp->chgCData(oldp+859,(vlSymsp->TOP__top__WB__IntrUnit.__Vcellinp__CSRwEn__key),2);
        bufp->chgQData(oldp+860,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        bufp->chgBit(oldp+862,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgQData(oldp+863,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
        bufp->chgBit(oldp+865,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r1));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2));
        bufp->chgQData(oldp+867,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[0]),64);
        bufp->chgQData(oldp+869,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[1]),64);
        bufp->chgQData(oldp+871,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[2]),64);
        bufp->chgQData(oldp+873,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[3]),64);
        bufp->chgQData(oldp+875,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[4]),64);
        bufp->chgQData(oldp+877,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[5]),64);
        bufp->chgQData(oldp+879,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[6]),64);
        bufp->chgQData(oldp+881,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[7]),64);
        bufp->chgQData(oldp+883,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[8]),64);
        bufp->chgQData(oldp+885,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[9]),64);
        bufp->chgQData(oldp+887,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[10]),64);
        bufp->chgQData(oldp+889,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[11]),64);
        bufp->chgQData(oldp+891,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[12]),64);
        bufp->chgQData(oldp+893,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[13]),64);
        bufp->chgQData(oldp+895,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[14]),64);
        bufp->chgQData(oldp+897,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[15]),64);
        bufp->chgQData(oldp+899,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[16]),64);
        bufp->chgQData(oldp+901,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[17]),64);
        bufp->chgQData(oldp+903,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[18]),64);
        bufp->chgQData(oldp+905,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[19]),64);
        bufp->chgQData(oldp+907,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[20]),64);
        bufp->chgQData(oldp+909,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[21]),64);
        bufp->chgQData(oldp+911,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[22]),64);
        bufp->chgQData(oldp+913,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[23]),64);
        bufp->chgQData(oldp+915,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[24]),64);
        bufp->chgQData(oldp+917,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[25]),64);
        bufp->chgQData(oldp+919,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[26]),64);
        bufp->chgQData(oldp+921,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[27]),64);
        bufp->chgQData(oldp+923,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[28]),64);
        bufp->chgQData(oldp+925,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[29]),64);
        bufp->chgQData(oldp+927,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[30]),64);
        bufp->chgQData(oldp+929,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+931,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
        bufp->chgIData(oldp+932,((IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc)),32);
        bufp->chgBit(oldp+933,(vlSymsp->TOP__top.__PVT__idu_ready));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__top.__PVT__EXU__DOT__popline_wen));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
        bufp->chgQData(oldp+936,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
        bufp->chgBit(oldp+938,(vlSymsp->TOP__top.__PVT__LSU__DOT__popline_wen));
    }
    bufp->chgBit(oldp+939,(vlSelf->clk));
    bufp->chgBit(oldp+940,(vlSelf->rst));
    bufp->chgIData(oldp+941,(vlSelf->Inst),32);
    bufp->chgQData(oldp+942,(vlSelf->pc),64);
    bufp->chgBit(oldp+944,(vlSelf->valid));
    bufp->chgQData(oldp+945,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                             [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+947,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                             [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0x14U))]),64);
    bufp->chgBit(oldp+949,(vlSymsp->TOP__top.__PVT__exu_ready));
    bufp->chgBit(oldp+950,(vlSymsp->TOP__top.__PVT__lsu_ready));
    bufp->chgQData(oldp+951,(vlSymsp->TOP__top.__PVT__memout),64);
    bufp->chgBit(oldp+953,((((~ (IData)(vlSymsp->TOP__top.__PVT__lsu_ready)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)) 
                            | ((IData)(vlSymsp->TOP__top.__PVT__exu_ready) 
                               & (IData)(vlSymsp->TOP__top.__VdfgTmp_h6b23342a__0)))));
    bufp->chgBit(oldp+954,(vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r1));
    bufp->chgBit(oldp+955,(vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2));
    bufp->chgBit(oldp+956,((((~ (IData)(vlSymsp->TOP__top.__PVT__exu_ready)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__idu_valid)) 
                            | ((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                               & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                  & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                     & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0)))))));
    bufp->chgBit(oldp+957,((((~ (IData)(vlSymsp->TOP__top.__PVT__idu_ready)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__ifu_valid)) 
                            | (IData)(vlSymsp->TOP__top.__PVT__ifu_arvalid))));
    bufp->chgIData(oldp+958,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                               ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                               : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                          >> 0x20U)))),32);
    bufp->chgBit(oldp+959,((((~ (IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)) 
                            | ((IData)(vlSymsp->TOP__top.__PVT__lsu_ready) 
                               & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)))));
    bufp->chgQData(oldp+960,(((- (QData)((IData)(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                  & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                     & (0U 
                                                        != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                              & ((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)
                                  ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                  : ((0x2004000ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)
                                      ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                      : 0ULL)))),64);
    bufp->chgBit(oldp+962,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                            > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
    bufp->chgQData(oldp+963,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
    bufp->chgBit(oldp+965,((((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                             & (IData)(vlSymsp->TOP__top__WB.__PVT__wb_valid)) 
                            | ((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                               & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)))));
    bufp->chgBit(oldp+966,(((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                            & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid))));
    bufp->chgQData(oldp+967,(vlSymsp->TOP__top__WB.__PVT__RegWdata),64);
    bufp->chgQData(oldp+969,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                               ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                               : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                   ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                   : vlSymsp->TOP__top.__PVT__wb_pc))),64);
    bufp->chgBit(oldp+971,((((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                             & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                            | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->chgQData(oldp+972,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__lut_out),64);
    bufp->chgBit(oldp+974,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__hit));
    bufp->chgBit(oldp+975,(vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r1));
    bufp->chgBit(oldp+976,(vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r2));
    bufp->chgQData(oldp+977,(vlSymsp->TOP__top__WB__IntrUnit.mcase),64);
    bufp->chgQData(oldp+979,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                               ? vlSymsp->TOP__top.__PVT__wb_pc
                               : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
    bufp->chgQData(oldp+981,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
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
    bufp->chgBit(oldp+983,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                            | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->chgBit(oldp+984,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                            | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->chgBit(oldp+985,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                            | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
}
