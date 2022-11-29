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
    VlWide<3>/*95:0*/ __Vtemp889;
    VlWide<3>/*95:0*/ __Vtemp890;
    VlWide<3>/*95:0*/ __Vtemp891;
    VlWide<3>/*95:0*/ __Vtemp892;
    VlWide<3>/*95:0*/ __Vtemp893;
    VlWide<3>/*95:0*/ __Vtemp896;
    VlWide<3>/*95:0*/ __Vtemp897;
    VlWide<3>/*95:0*/ __Vtemp898;
    VlWide<3>/*95:0*/ __Vtemp899;
    VlWide<3>/*95:0*/ __Vtemp900;
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
            tracep->chgSData(oldp+51,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
            tracep->chgSData(oldp+52,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
            tracep->chgSData(oldp+57,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+58,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+59,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+60,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
            tracep->chgWData(oldp+69,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+72,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[0]),2);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__key_list[1]),2);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[0]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__data_list[1]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__R_rs1),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__R_rs2),64);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__ALUct),5);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__Extop),3);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__RegWr));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__ALUAsr));
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__ALUBsr),2);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__Imm),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ALUres),64);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__Branch),3);
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__Less));
            tracep->chgBit(oldp+98,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU__DOT__adder))))));
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__MemOP),3);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__RegSrc),2);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__MemWr));
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__MemOut),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__RegWdata),64);
            tracep->chgBit(oldp+106,((((IData)(vlSelf->top__DOT__IntrEn) 
                                       & (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__IntrEn));
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__IntrOut),64);
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__clint_mtip));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__clint_we));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__clint_re));
            tracep->chgQData(oldp+113,(((- (QData)((IData)(vlSelf->top__DOT__clint_re))) 
                                        & ((0x200bff8ULL 
                                            == vlSelf->top__DOT__ALUres)
                                            ? vlSelf->top__DOT__clintU__DOT__mtime
                                            : ((0x2004000ULL 
                                                == vlSelf->top__DOT__ALUres)
                                                ? vlSelf->top__DOT__clintU__DOT__mtimecmp
                                                : 0ULL)))),64);
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__isTuncate));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__isSext));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                            >> 1U))));
            tracep->chgBit(oldp+118,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
            tracep->chgQData(oldp+119,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->top__DOT__Imm
                                         : 4ULL)),64);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+128,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+132,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+133,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+136,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
            tracep->chgCData(oldp+144,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
            tracep->chgCData(oldp+145,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
            tracep->chgCData(oldp+211,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__lut_out));
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__ContrGen__DOT__isIntr__DOT__hit));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
            tracep->chgCData(oldp+217,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__ContrGen__DOT__RegSrcMux__DOT__hit));
            tracep->chgWData(oldp+219,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
            tracep->chgWData(oldp+230,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+233,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+236,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+239,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+242,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+245,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+246,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+247,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+248,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                            >> 3U))));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            tracep->chgBit(oldp+269,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__ALU__DOT__adder),64);
            VL_EXTEND_WQ(65,64, __Vtemp889, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp890, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp891, __Vtemp889, __Vtemp890);
            VL_EXTEND_WI(65,1, __Vtemp892, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp893, __Vtemp891, __Vtemp892);
            tracep->chgBit(oldp+272,((1U & __Vtemp893[2U])));
            tracep->chgBit(oldp+273,((((1U & (IData)(
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
            tracep->chgBit(oldp+274,((1U & ((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp896, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp897, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp898, __Vtemp896, __Vtemp897);
            VL_EXTEND_WI(65,1, __Vtemp899, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp900, __Vtemp898, __Vtemp899);
            tracep->chgBit(oldp+275,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                            ^ (1U & 
                                               __Vtemp900[2U])))));
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__ALU__DOT__shift),64);
            tracep->chgQData(oldp+278,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+280,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+282,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+284,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__ALU__DOT__DIV),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__ALU__DOT__REM),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
            tracep->chgWData(oldp+299,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+302,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+305,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+308,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
            tracep->chgCData(oldp+310,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
            tracep->chgBit(oldp+319,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
            tracep->chgCData(oldp+322,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
            tracep->chgCData(oldp+323,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
            tracep->chgCData(oldp+324,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
            tracep->chgWData(oldp+325,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
            tracep->chgWData(oldp+334,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+337,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+343,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+346,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+348,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
            tracep->chgQData(oldp+350,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+354,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
            tracep->chgQData(oldp+358,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
            tracep->chgCData(oldp+361,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__key),2);
            tracep->chgWData(oldp+362,(vlSelf->top__DOT__ALU__DOT____Vcellinp__diver__lut),264);
            tracep->chgWData(oldp+371,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+374,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+377,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+380,(vlSelf->top__DOT__ALU__DOT__diver__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+383,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[0]),2);
            tracep->chgCData(oldp+384,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[1]),2);
            tracep->chgCData(oldp+385,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[2]),2);
            tracep->chgCData(oldp+386,(vlSelf->top__DOT__ALU__DOT__diver__DOT__key_list[3]),2);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[0]),64);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[1]),64);
            tracep->chgQData(oldp+391,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[2]),64);
            tracep->chgQData(oldp+393,(vlSelf->top__DOT__ALU__DOT__diver__DOT__data_list[3]),64);
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__ALU__DOT__diver__DOT__lut_out),64);
            tracep->chgBit(oldp+397,(vlSelf->top__DOT__ALU__DOT__diver__DOT__hit));
            tracep->chgCData(oldp+398,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__key),2);
            tracep->chgWData(oldp+399,(vlSelf->top__DOT__ALU__DOT____Vcellinp__remer__lut),264);
            tracep->chgWData(oldp+408,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+411,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+414,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__ALU__DOT__remer__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+420,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[0]),2);
            tracep->chgCData(oldp+421,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[1]),2);
            tracep->chgCData(oldp+422,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[2]),2);
            tracep->chgCData(oldp+423,(vlSelf->top__DOT__ALU__DOT__remer__DOT__key_list[3]),2);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[0]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[1]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[2]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__ALU__DOT__remer__DOT__data_list[3]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__ALU__DOT__remer__DOT__lut_out),64);
            tracep->chgBit(oldp+434,(vlSelf->top__DOT__ALU__DOT__remer__DOT__hit));
            tracep->chgCData(oldp+435,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__key),4);
            tracep->chgWData(oldp+436,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),748);
            tracep->chgWData(oldp+460,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+463,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+466,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+469,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+472,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+475,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+478,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+481,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
            tracep->chgWData(oldp+484,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
            tracep->chgWData(oldp+487,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
            tracep->chgWData(oldp+490,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
            tracep->chgCData(oldp+493,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),4);
            tracep->chgCData(oldp+494,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),4);
            tracep->chgCData(oldp+495,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),4);
            tracep->chgCData(oldp+496,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),4);
            tracep->chgCData(oldp+497,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),4);
            tracep->chgCData(oldp+498,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),4);
            tracep->chgCData(oldp+499,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),4);
            tracep->chgCData(oldp+500,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),4);
            tracep->chgCData(oldp+501,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[8]),4);
            tracep->chgCData(oldp+502,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[9]),4);
            tracep->chgCData(oldp+503,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[10]),4);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[8]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[9]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[10]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
            tracep->chgBit(oldp+528,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+529,(vlSelf->top__DOT__DataMem__DOT__clint_en));
            tracep->chgCData(oldp+530,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
            tracep->chgBit(oldp+531,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                            >> 2U))));
            tracep->chgBit(oldp+532,(vlSelf->top__DOT__DataMem__DOT__RdEn));
            tracep->chgCData(oldp+533,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                                 << 3U))),6);
            tracep->chgWData(oldp+534,(vlSelf->top__DOT__DataMem__DOT__data),128);
            tracep->chgSData(oldp+538,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
            tracep->chgCData(oldp+539,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
            tracep->chgCData(oldp+540,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
            tracep->chgBit(oldp+541,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
            tracep->chgWData(oldp+542,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
            tracep->chgWData(oldp+551,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+554,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+557,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+560,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+563,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
            tracep->chgCData(oldp+564,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
            tracep->chgCData(oldp+565,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
            tracep->chgCData(oldp+566,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
            tracep->chgQData(oldp+567,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
            tracep->chgQData(oldp+569,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
            tracep->chgQData(oldp+571,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
            tracep->chgQData(oldp+573,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
            tracep->chgQData(oldp+575,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
            tracep->chgBit(oldp+577,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
            tracep->chgWData(oldp+578,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),198);
            tracep->chgWData(oldp+585,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+588,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+591,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+594,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+595,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+596,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[2]),2);
            tracep->chgQData(oldp+597,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+599,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+601,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+603,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__IntrUnit__DOT__mepc),64);
            tracep->chgQData(oldp+608,(vlSelf->top__DOT__IntrUnit__DOT__mcase),64);
            tracep->chgQData(oldp+610,(vlSelf->top__DOT__IntrUnit__DOT__mtvec),64);
            tracep->chgQData(oldp+612,(vlSelf->top__DOT__IntrUnit__DOT__mstatus),64);
            tracep->chgQData(oldp+614,(vlSelf->top__DOT__IntrUnit__DOT__mie),64);
            tracep->chgBit(oldp+616,((1U & (IData)(
                                                   (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+617,((1U & (IData)(
                                                   (vlSelf->top__DOT__IntrUnit__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+618,(vlSelf->top__DOT__IntrUnit__DOT__timer_irq));
            tracep->chgBit(oldp+619,(vlSelf->top__DOT__IntrUnit__DOT__irq_raise));
            tracep->chgBit(oldp+620,(vlSelf->top__DOT__IntrUnit__DOT__mip_MTIP));
            tracep->chgBit(oldp+621,(vlSelf->top__DOT__IntrUnit__DOT__isecall));
            tracep->chgQData(oldp+622,(vlSelf->top__DOT__IntrUnit__DOT__eNo),64);
            tracep->chgBit(oldp+624,(vlSelf->top__DOT__IntrUnit__DOT__ismret));
            tracep->chgBit(oldp+625,(vlSelf->top__DOT__IntrUnit__DOT__ismepc));
            tracep->chgBit(oldp+626,(vlSelf->top__DOT__IntrUnit__DOT__ismcase));
            tracep->chgBit(oldp+627,(vlSelf->top__DOT__IntrUnit__DOT__ismstatus));
            tracep->chgQData(oldp+628,(vlSelf->top__DOT__IntrUnit__DOT__csrWData),64);
            tracep->chgQData(oldp+630,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                         ? vlSelf->top__DOT__IntrUnit__DOT__eNo
                                         : vlSelf->top__DOT__IntrUnit__DOT__csrWData)),64);
            tracep->chgBit(oldp+632,((1U & (IData)(
                                                   (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                    >> 7U)))));
            tracep->chgQData(oldp+633,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                         ? ((0xffffffffffffff00ULL 
                                             & vlSelf->top__DOT__IntrUnit__DOT__mstatus) 
                                            | (QData)((IData)(
                                                              ((0x80U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                            >> 3U)) 
                                                                   << 7U)) 
                                                               | ((0x70U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                               >> 4U)) 
                                                                      << 4U)) 
                                                                  | (7U 
                                                                     & (IData)(vlSelf->top__DOT__IntrUnit__DOT__mstatus)))))))
                                         : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                             ? ((0xffffffffffffff00ULL 
                                                 & vlSelf->top__DOT__IntrUnit__DOT__mstatus) 
                                                | (QData)((IData)(
                                                                  (0x80U 
                                                                   | ((0x70U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                                >> 4U)) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__IntrUnit__DOT__mstatus 
                                                                                >> 7U)) 
                                                                             << 3U)) 
                                                                         | (7U 
                                                                            & (IData)(vlSelf->top__DOT__IntrUnit__DOT__mstatus))))))))
                                             : vlSelf->top__DOT__IntrUnit__DOT__csrWData))),64);
            tracep->chgCData(oldp+635,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__CSRwEn__key),2);
            tracep->chgQData(oldp+636,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__lut_out),64);
            tracep->chgBit(oldp+638,(vlSelf->top__DOT__IntrUnit__DOT__CSRwEn__DOT__hit));
            tracep->chgWData(oldp+639,(vlSelf->top__DOT__IntrUnit__DOT____Vcellinp__scrDataSrc__lut),402);
            tracep->chgWData(oldp+652,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+655,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+658,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+661,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+664,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+667,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+670,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+671,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+672,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+673,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+674,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+675,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__key_list[5]),3);
            tracep->chgQData(oldp+676,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+678,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+680,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[2]),64);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[3]),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[4]),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__data_list[5]),64);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+690,(vlSelf->top__DOT__IntrUnit__DOT__scrDataSrc__DOT__hit));
            tracep->chgBit(oldp+691,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismepc) 
                                       & (IData)(vlSelf->top__DOT__IntrEn)) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
            tracep->chgBit(oldp+692,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismcase) 
                                       & (IData)(vlSelf->top__DOT__IntrEn)) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
            tracep->chgBit(oldp+693,((((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismstatus) 
                                       & (IData)(vlSelf->top__DOT__IntrEn)) 
                                      | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))));
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__clintU__DOT__mtime),64);
            tracep->chgQData(oldp+696,(vlSelf->top__DOT__clintU__DOT__mtimecmp),64);
            tracep->chgBit(oldp+698,((0x2004000ULL 
                                      == vlSelf->top__DOT__ALUres)));
            tracep->chgBit(oldp+699,((0x200bff8ULL 
                                      == vlSelf->top__DOT__ALUres)));
            tracep->chgBit(oldp+700,(((IData)(vlSelf->top__DOT__clint_we) 
                                      & (0x2004000ULL 
                                         == vlSelf->top__DOT__ALUres))));
        }
        tracep->chgBit(oldp+701,(vlSelf->clk));
        tracep->chgBit(oldp+702,(vlSelf->rst));
        tracep->chgIData(oldp+703,(vlSelf->Inst),32);
        tracep->chgQData(oldp+704,(vlSelf->pc),64);
        tracep->chgQData(oldp+706,((0xfffffffffffffffeULL 
                                    & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->top__DOT__Imm
                                         : 4ULL) + 
                                       ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->pc
                                         : vlSelf->top__DOT__R_rs1)))),64);
        tracep->chgQData(oldp+708,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                     ? vlSelf->top__DOT__IntrUnit__DOT__mtvec
                                     : ((IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)
                                         ? vlSelf->top__DOT__IntrUnit__DOT__mepc
                                         : vlSelf->pc))),64);
        tracep->chgQData(oldp+710,(((((IData)(vlSelf->top__DOT__IntrEn) 
                                      & (IData)(vlSelf->top__DOT__IntrUnit__DOT__ismret)) 
                                     | (IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise))
                                     ? ((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
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
        tracep->chgQData(oldp+712,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->chgCData(oldp+714,((0x1fU & (vlSelf->Inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+715,((0x1fU & (vlSelf->Inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+716,((0x1fU & (vlSelf->Inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+717,((0x7fU & vlSelf->Inst)),7);
        tracep->chgCData(oldp+718,((7U & (vlSelf->Inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+719,((vlSelf->Inst >> 0x19U)),7);
        tracep->chgIData(oldp+720,((vlSelf->Inst >> 7U)),25);
        tracep->chgSData(oldp+721,((vlSelf->Inst >> 0x14U)),12);
        tracep->chgBit(oldp+722,((0x305U == (vlSelf->Inst 
                                             >> 0x14U))));
        tracep->chgBit(oldp+723,((0x304U == (vlSelf->Inst 
                                             >> 0x14U))));
        tracep->chgBit(oldp+724,((0x344U == (vlSelf->Inst 
                                             >> 0x14U))));
        tracep->chgQData(oldp+725,(((IData)(vlSelf->top__DOT__IntrUnit__DOT__irq_raise)
                                     ? vlSelf->pc : vlSelf->top__DOT__IntrUnit__DOT__csrWData)),64);
        tracep->chgBit(oldp+727,(((0x305U == (vlSelf->Inst 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__IntrEn))));
        tracep->chgBit(oldp+728,(((0x304U == (vlSelf->Inst 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__IntrEn))));
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
