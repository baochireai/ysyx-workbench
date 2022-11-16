// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp901;
    VlWide<3>/*95:0*/ __Vtemp902;
    VlWide<3>/*95:0*/ __Vtemp903;
    VlWide<3>/*95:0*/ __Vtemp904;
    VlWide<3>/*95:0*/ __Vtemp905;
    VlWide<3>/*95:0*/ __Vtemp908;
    VlWide<3>/*95:0*/ __Vtemp909;
    VlWide<3>/*95:0*/ __Vtemp910;
    VlWide<3>/*95:0*/ __Vtemp911;
    VlWide<3>/*95:0*/ __Vtemp912;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
            tracep->chgSData(oldp+6,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
            tracep->chgSData(oldp+7,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
            tracep->chgSData(oldp+8,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
            tracep->chgSData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
            tracep->chgSData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__data_list[0]));
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
            tracep->chgSData(oldp+51,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+52,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+53,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+54,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0]),3);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1]),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[2]),3);
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0]));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1]));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[2]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__R_rs1),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__R_rs2),64);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__ALUct),5);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__Extop),3);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__RegWr));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__ALUAsr));
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__ALUBsr),2);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__Imm),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__ALUres),64);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__Branch),3);
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__Less));
            tracep->chgBit(oldp+89,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU__DOT__adder))))));
            tracep->chgCData(oldp+90,(vlSelf->top__DOT__MemOP),3);
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__RegSrc),2);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__MemWr));
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__MemOut),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__RegWdata),64);
            tracep->chgBit(oldp+97,(((IData)(vlSelf->top__DOT__IntrEn) 
                                     & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                        | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__IntrEn));
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__IntrOut),64);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__isTuncate));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__isSext));
            tracep->chgBit(oldp+103,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                            >> 1U))));
            tracep->chgBit(oldp+104,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
            tracep->chgQData(oldp+105,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->top__DOT__Imm
                                         : 4ULL)),64);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
            tracep->chgCData(oldp+110,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+112,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+113,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+114,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+118,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
            tracep->chgCData(oldp+128,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+198,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
            tracep->chgBit(oldp+200,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit));
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
            tracep->chgWData(oldp+203,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
            tracep->chgWData(oldp+214,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+217,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+220,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+223,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+226,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+229,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+231,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+232,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgCData(oldp+233,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
            tracep->chgBit(oldp+251,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                            >> 3U))));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            tracep->chgBit(oldp+253,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__ALU__DOT__adder),64);
            VL_EXTEND_WQ(65,64, __Vtemp901, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp902, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp903, __Vtemp901, __Vtemp902);
            VL_EXTEND_WI(65,1, __Vtemp904, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp905, __Vtemp903, __Vtemp904);
            tracep->chgBit(oldp+256,((1U & __Vtemp905[2U])));
            tracep->chgBit(oldp+257,((((1U & (IData)(
                                                     (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                      >> 0x3fU))) 
                                       == (1U & (IData)(
                                                        (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                         >> 0x3fU)))) 
                                      & ((1U & (IData)(
                                                       (vlSelf->top__DOT__ALU__DOT__adder 
                                                        >> 0x3fU))) 
                                         != (1U & (IData)(
                                                          (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                           >> 0x3fU)))))));
            tracep->chgBit(oldp+258,((1U & ((IData)(
                                                    (vlSelf->top__DOT__ALU__DOT__adder 
                                                     >> 0x3fU)) 
                                            ^ (((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__adder 
                                                              >> 0x3fU))) 
                                                  != 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
            VL_EXTEND_WQ(65,64, __Vtemp908, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp909, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp910, __Vtemp908, __Vtemp909);
            VL_EXTEND_WI(65,1, __Vtemp911, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp912, __Vtemp910, __Vtemp911);
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                            ^ (1U & 
                                               __Vtemp912[2U])))));
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__ALU__DOT__shift),64);
            tracep->chgQData(oldp+262,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+264,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+266,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+268,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__ALU__DOT__DIV),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__ALU__DOT__REM),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
            tracep->chgWData(oldp+276,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
            tracep->chgWData(oldp+283,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+286,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+289,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+292,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
            tracep->chgCData(oldp+293,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
            tracep->chgCData(oldp+294,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
            tracep->chgCData(oldp+306,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
            tracep->chgCData(oldp+307,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
            tracep->chgCData(oldp+308,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
            tracep->chgWData(oldp+318,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+321,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+324,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+327,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+330,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+331,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+332,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
            tracep->chgCData(oldp+345,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key),2);
            tracep->chgWData(oldp+346,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut),264);
            tracep->chgWData(oldp+355,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+358,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+361,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+364,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+367,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0]),2);
            tracep->chgCData(oldp+368,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1]),2);
            tracep->chgCData(oldp+369,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2]),2);
            tracep->chgCData(oldp+370,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3]),2);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0]),64);
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1]),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2]),64);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3]),64);
            tracep->chgQData(oldp+379,(vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out),64);
            tracep->chgBit(oldp+381,(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit));
            tracep->chgCData(oldp+382,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key),2);
            tracep->chgWData(oldp+383,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut),264);
            tracep->chgWData(oldp+392,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+395,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+398,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+401,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0]),2);
            tracep->chgCData(oldp+405,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1]),2);
            tracep->chgCData(oldp+406,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2]),2);
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3]),2);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out),64);
            tracep->chgBit(oldp+418,(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit));
            tracep->chgCData(oldp+419,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key),4);
            tracep->chgWData(oldp+420,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),748);
            tracep->chgWData(oldp+444,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+447,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+450,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+453,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+456,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+459,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+462,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+465,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
            tracep->chgWData(oldp+468,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
            tracep->chgWData(oldp+471,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
            tracep->chgWData(oldp+474,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
            tracep->chgCData(oldp+477,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
            tracep->chgCData(oldp+478,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
            tracep->chgCData(oldp+479,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),4);
            tracep->chgCData(oldp+480,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),4);
            tracep->chgCData(oldp+481,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),4);
            tracep->chgCData(oldp+482,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),4);
            tracep->chgCData(oldp+483,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),4);
            tracep->chgCData(oldp+484,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),4);
            tracep->chgCData(oldp+485,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8]),4);
            tracep->chgCData(oldp+486,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9]),4);
            tracep->chgCData(oldp+487,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[10]),4);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[10]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
            tracep->chgBit(oldp+512,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
            tracep->chgCData(oldp+513,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
            tracep->chgBit(oldp+514,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                            >> 2U))));
            tracep->chgBit(oldp+515,((0U != (IData)(vlSelf->top__DOT__MemOP))));
            tracep->chgCData(oldp+516,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                                 << 3U))),6);
            tracep->chgWData(oldp+517,(vlSelf->top__DOT__DataMem__DOT__data),128);
            tracep->chgSData(oldp+521,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
            tracep->chgCData(oldp+522,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
            tracep->chgCData(oldp+523,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
            tracep->chgBit(oldp+524,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
            tracep->chgWData(oldp+525,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
            tracep->chgWData(oldp+534,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+537,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+540,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+543,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+546,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
            tracep->chgCData(oldp+547,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
            tracep->chgCData(oldp+548,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
            tracep->chgCData(oldp+549,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
            tracep->chgBit(oldp+560,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
            tracep->chgWData(oldp+561,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),198);
            tracep->chgWData(oldp+568,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+571,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+574,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+577,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+578,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+579,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2]),2);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
            tracep->chgBit(oldp+588,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__IntrUnit__DOT__mepc),64);
            tracep->chgQData(oldp+591,(vlSelf->top__DOT__IntrUnit__DOT__mcase),64);
            tracep->chgQData(oldp+593,(vlSelf->top__DOT__IntrUnit__DOT__mtvec),64);
            tracep->chgQData(oldp+595,(vlSelf->top__DOT__IntrUnit__DOT__mstatus),64);
            tracep->chgBit(oldp+597,(vlSelf->top__DOT__IntrUnit__DOT__isCSRw));
            tracep->chgBit(oldp+598,(vlSelf->top__DOT__IntrUnit__DOT__isecall));
            tracep->chgQData(oldp+599,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                         ? 0xbULL : 0xefffffffffffffffULL)),64);
            tracep->chgBit(oldp+601,(vlSelf->top__DOT__IntrUnit__DOT__ismret));
            tracep->chgBit(oldp+602,(vlSelf->top__DOT__IntrUnit__DOT__ismepc));
            tracep->chgBit(oldp+603,(vlSelf->top__DOT__IntrUnit__DOT__ismcase));
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__IntrUnit__DOT__mcaseData),64);
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__IntrUnit__DOT__mepcData),64);
            tracep->chgQData(oldp+608,(vlSelf->top__DOT__IntrUnit__DOT__csrData),64);
            tracep->chgBit(oldp+610,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out));
            tracep->chgBit(oldp+611,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit));
            tracep->chgWData(oldp+612,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mcaseDataSrc__lut),201);
            tracep->chgWData(oldp+619,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+622,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+625,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+628,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+629,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+630,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__key_list[2]),3);
            tracep->chgQData(oldp+631,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+633,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+635,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__data_list[2]),64);
            tracep->chgQData(oldp+637,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+639,(vlSelf->top__DOT__IntrUnit__DOT__mcaseDataSrc__DOT__hit));
            tracep->chgWData(oldp+640,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__mepcDataSrc__lut),201);
            tracep->chgWData(oldp+647,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+650,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+653,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+657,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+658,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__key_list[2]),3);
            tracep->chgQData(oldp+659,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+661,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+663,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__data_list[2]),64);
            tracep->chgQData(oldp+665,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+667,(vlSelf->top__DOT__IntrUnit__DOT__mepcDataSrc__DOT__hit));
            tracep->chgWData(oldp+668,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut),134);
            tracep->chgWData(oldp+673,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+676,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1]),67);
            tracep->chgCData(oldp+679,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+680,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1]),3);
            tracep->chgQData(oldp+681,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+683,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+685,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+687,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit));
            tracep->chgBit(oldp+688,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc) 
                                      & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
            tracep->chgBit(oldp+689,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase) 
                                      & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        }
        tracep->chgBit(oldp+690,(vlSelf->clk));
        tracep->chgBit(oldp+691,(vlSelf->rst));
        tracep->chgIData(oldp+692,(vlSelf->Inst),32);
        tracep->chgQData(oldp+693,(vlSelf->pc),64);
        tracep->chgQData(oldp+695,((0xfffffffffffffffeULL 
                                    & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->top__DOT__Imm
                                         : 4ULL) + 
                                       ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->pc
                                         : vlSelf->top__DOT__R_rs1)))),64);
        tracep->chgQData(oldp+697,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                     ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                     : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                         ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                         : vlSelf->pc))),64);
        tracep->chgQData(oldp+699,((((IData)(vlSelf->top__DOT__IntrEn) 
                                     & ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall) 
                                        | (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)))
                                     ? ((IData)(vlSelf->top__DOT__IntrUnit__DOT__isecall)
                                         ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                         : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                             ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                             : vlSelf->pc))
                                     : (0xfffffffffffffffeULL 
                                        & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                             ? vlSelf->top__DOT__Imm
                                             : 4ULL) 
                                           + ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                               ? vlSelf->pc
                                               : vlSelf->top__DOT__R_rs1))))),64);
        tracep->chgQData(oldp+701,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->chgCData(oldp+703,((0x1fU & (vlSelf->Inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+704,((0x1fU & (vlSelf->Inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+705,((0x1fU & (vlSelf->Inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+706,((0x7fU & vlSelf->Inst)),7);
        tracep->chgCData(oldp+707,((7U & (vlSelf->Inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+708,((vlSelf->Inst >> 0x19U)),7);
        tracep->chgIData(oldp+709,((vlSelf->Inst >> 7U)),25);
        tracep->chgSData(oldp+710,((vlSelf->Inst >> 0x14U)),12);
        tracep->chgBit(oldp+711,((0x305U == (vlSelf->Inst 
                                             >> 0x14U))));
        tracep->chgBit(oldp+712,((0x300U == (vlSelf->Inst 
                                             >> 0x14U))));
        tracep->chgBit(oldp+713,(((0x305U == (vlSelf->Inst 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
        tracep->chgBit(oldp+714,(((0x300U == (vlSelf->Inst 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__IntrUnit__DOT__isCSRw))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
