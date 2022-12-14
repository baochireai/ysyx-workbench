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
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+3,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+4,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+5,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
            tracep->chgSData(oldp+6,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
            tracep->chgSData(oldp+7,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
            tracep->chgSData(oldp+8,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
            tracep->chgSData(oldp+9,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
            tracep->chgSData(oldp+10,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
            tracep->chgSData(oldp+11,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
            tracep->chgCData(oldp+12,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
            tracep->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
            tracep->chgCData(oldp+18,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
            tracep->chgCData(oldp+19,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
            tracep->chgCData(oldp+24,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
            tracep->chgCData(oldp+27,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
            tracep->chgCData(oldp+28,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
            tracep->chgCData(oldp+29,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
            tracep->chgCData(oldp+30,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
            tracep->chgCData(oldp+31,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
            tracep->chgCData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
            tracep->chgCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
            tracep->chgCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
            tracep->chgBit(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
            tracep->chgSData(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
            tracep->chgSData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
            tracep->chgSData(oldp+57,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+58,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+59,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+60,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
            tracep->chgCData(oldp+61,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
            tracep->chgCData(oldp+62,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
            tracep->chgCData(oldp+64,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
            tracep->chgCData(oldp+66,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
            tracep->chgCData(oldp+67,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
            tracep->chgCData(oldp+68,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
            tracep->chgWData(oldp+69,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+72,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
            tracep->chgQData(oldp+77,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
            tracep->chgQData(oldp+79,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+81,(vlSymsp->TOP__top.Inst),32);
            tracep->chgQData(oldp+82,(vlSymsp->TOP__top.pc),64);
            tracep->chgQData(oldp+84,(vlSymsp->TOP__top.__PVT__rdata),64);
            tracep->chgQData(oldp+86,(vlSymsp->TOP__top.__PVT__R_rs1),64);
            tracep->chgQData(oldp+88,(vlSymsp->TOP__top.__PVT__R_rs2),64);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__top.__PVT__ALUct),5);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__top.__PVT__Extop),3);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__top.__PVT__RegWr));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__top.__PVT__ALUAsr));
            tracep->chgCData(oldp+94,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
            tracep->chgQData(oldp+95,(vlSymsp->TOP__top.__PVT__Imm),64);
            tracep->chgQData(oldp+97,(vlSymsp->TOP__top.__PVT__ALUres),64);
            tracep->chgQData(oldp+99,((0xfffffffffffffffeULL 
                                       & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                            ? vlSymsp->TOP__top.__PVT__Imm
                                            : 4ULL) 
                                          + ((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                              ? vlSymsp->TOP__top.pc
                                              : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__top.__PVT__Branch),3);
            tracep->chgBit(oldp+102,(vlSymsp->TOP__top.__PVT__Less));
            tracep->chgBit(oldp+103,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
            tracep->chgCData(oldp+104,(vlSymsp->TOP__top.__PVT__MemOP),3);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__top.__PVT__RegSrc),2);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__top.__PVT__MemWr));
            tracep->chgQData(oldp+107,(vlSymsp->TOP__top.__PVT__MemOut),64);
            tracep->chgQData(oldp+109,(vlSymsp->TOP__top.__PVT__RegWdata),64);
            tracep->chgBit(oldp+111,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                       & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgQData(oldp+112,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                         : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                             ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                             : vlSymsp->TOP__top.pc))),64);
            tracep->chgBit(oldp+114,(vlSymsp->TOP__top.__PVT__IntrEn));
            tracep->chgQData(oldp+115,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__top.__PVT__clint_mtip));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__top.__PVT__clint_we));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__top.__PVT__clint_re));
            tracep->chgQData(oldp+120,(((- (QData)((IData)(vlSymsp->TOP__top.__PVT__clint_re))) 
                                        & ((0x200bff8ULL 
                                            == vlSymsp->TOP__top.__PVT__ALUres)
                                            ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtime
                                            : ((0x2004000ULL 
                                                == vlSymsp->TOP__top.__PVT__ALUres)
                                                ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp
                                                : 0ULL)))),64);
            tracep->chgBit(oldp+122,(vlSymsp->TOP__top.__PVT__isTuncate));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__top.__PVT__isSext));
            tracep->chgQData(oldp+124,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                          & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                         | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                         ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                             ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                             : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                                 ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                                 : vlSymsp->TOP__top.pc))
                                         : (0xfffffffffffffffeULL 
                                            & (((2U 
                                                 & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                 ? vlSymsp->TOP__top.__PVT__Imm
                                                 : 4ULL) 
                                               + ((1U 
                                                   & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                   ? vlSymsp->TOP__top.pc
                                                   : vlSymsp->TOP__top.__PVT__R_rs1))))),64);
            tracep->chgBit(oldp+126,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                            >> 1U))));
            tracep->chgBit(oldp+127,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
            tracep->chgQData(oldp+128,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSymsp->TOP__top.__PVT__Imm
                                         : 4ULL)),64);
            tracep->chgQData(oldp+130,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSymsp->TOP__top.pc
                                         : vlSymsp->TOP__top.__PVT__R_rs1)),64);
            tracep->chgCData(oldp+132,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
            tracep->chgQData(oldp+133,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
            tracep->chgCData(oldp+135,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+136,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+137,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+138,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+140,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+144,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+145,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+146,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+147,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
            tracep->chgCData(oldp+148,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
            tracep->chgCData(oldp+149,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
            tracep->chgCData(oldp+150,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
            tracep->chgCData(oldp+151,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
            tracep->chgCData(oldp+152,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
            tracep->chgCData(oldp+153,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
            tracep->chgCData(oldp+154,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
            tracep->chgCData(oldp+155,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
            tracep->chgCData(oldp+156,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
            tracep->chgBit(oldp+157,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
            tracep->chgCData(oldp+158,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+159,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+160,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 7U))),5);
            tracep->chgQData(oldp+161,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+163,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+165,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+167,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+169,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+171,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+173,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+175,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+177,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+179,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+181,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+183,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+185,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+187,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+189,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+191,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+193,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+195,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+197,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+199,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+201,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+203,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+205,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+207,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+209,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+211,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+213,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+215,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+217,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+219,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+221,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+223,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
            tracep->chgCData(oldp+225,((0x7fU & vlSymsp->TOP__top.Inst)),7);
            tracep->chgCData(oldp+226,((7U & (vlSymsp->TOP__top.Inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+227,((vlSymsp->TOP__top.Inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+229,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+230,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
            tracep->chgBit(oldp+231,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
            tracep->chgCData(oldp+234,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
            tracep->chgBit(oldp+235,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
            tracep->chgIData(oldp+236,((vlSymsp->TOP__top.Inst 
                                        >> 7U)),25);
            tracep->chgWData(oldp+237,(vlSymsp->TOP__top.ImmGen__DOT____Vcellinp__isRegWr__lut),335);
            tracep->chgWData(oldp+248,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+251,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+254,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+257,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+260,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+263,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+264,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+265,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+266,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgCData(oldp+267,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
            tracep->chgQData(oldp+268,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+270,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+272,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+274,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
            tracep->chgQData(oldp+276,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
            tracep->chgQData(oldp+278,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
            tracep->chgBit(oldp+280,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
            tracep->chgQData(oldp+281,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
            tracep->chgQData(oldp+283,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
            tracep->chgBit(oldp+285,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                            >> 3U))));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
            tracep->chgBit(oldp+287,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
            tracep->chgQData(oldp+288,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
            VL_EXTEND_WQ(65,64, __Vtemp18, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp19, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
            VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
            tracep->chgBit(oldp+290,((1U & __Vtemp22[2U])));
            tracep->chgBit(oldp+291,((((1U & (IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                      >> 0x3fU))) 
                                       == (1U & (IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                         >> 0x3fU)))) 
                                      & ((1U & (IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                        >> 0x3fU))) 
                                         != (1U & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                           >> 0x3fU)))))));
            tracep->chgBit(oldp+292,((1U & ((IData)(
                                                    (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                     >> 0x3fU)) 
                                            ^ (((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                              >> 0x3fU))) 
                                                  != 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
            VL_EXTEND_WQ(65,64, __Vtemp25, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp26, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp27, __Vtemp25, __Vtemp26);
            VL_EXTEND_WI(65,1, __Vtemp28, (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                                            ^ (1U & 
                                               __Vtemp29[2U])))));
            tracep->chgQData(oldp+294,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
            tracep->chgQData(oldp+296,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        ^ vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+298,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        | vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+300,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+302,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        * vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+304,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
            tracep->chgQData(oldp+306,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
            tracep->chgQData(oldp+308,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
            tracep->chgWData(oldp+310,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deALUBsr__lut),198);
            tracep->chgWData(oldp+317,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+320,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+323,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+326,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
            tracep->chgCData(oldp+327,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
            tracep->chgCData(oldp+328,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
            tracep->chgQData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+331,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+333,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+335,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
            tracep->chgBit(oldp+337,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
            tracep->chgQData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
            tracep->chgCData(oldp+340,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
            tracep->chgCData(oldp+341,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
            tracep->chgCData(oldp+342,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
            tracep->chgWData(oldp+343,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
            tracep->chgWData(oldp+352,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+355,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+358,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+361,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+364,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+365,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+366,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
            tracep->chgCData(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
            tracep->chgQData(oldp+368,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+370,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+372,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+374,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
            tracep->chgQData(oldp+376,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
            tracep->chgBit(oldp+378,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
            tracep->chgCData(oldp+379,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
            tracep->chgWData(oldp+380,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__lut),264);
            tracep->chgWData(oldp+389,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+392,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+395,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+398,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+401,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
            tracep->chgCData(oldp+402,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
            tracep->chgCData(oldp+403,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
            tracep->chgQData(oldp+405,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
            tracep->chgQData(oldp+407,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
            tracep->chgQData(oldp+409,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
            tracep->chgQData(oldp+411,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
            tracep->chgQData(oldp+413,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
            tracep->chgBit(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
            tracep->chgCData(oldp+416,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__key),2);
            tracep->chgWData(oldp+417,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__lut),264);
            tracep->chgWData(oldp+426,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+429,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+432,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+435,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+438,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
            tracep->chgCData(oldp+439,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
            tracep->chgCData(oldp+440,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
            tracep->chgCData(oldp+441,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
            tracep->chgQData(oldp+442,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
            tracep->chgQData(oldp+444,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
            tracep->chgQData(oldp+446,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
            tracep->chgQData(oldp+448,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
            tracep->chgQData(oldp+450,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
            tracep->chgBit(oldp+452,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
            tracep->chgCData(oldp+453,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
            tracep->chgWData(oldp+454,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__lut),748);
            tracep->chgWData(oldp+478,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+481,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+484,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+487,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+490,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+493,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+496,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+499,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
            tracep->chgWData(oldp+502,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
            tracep->chgWData(oldp+505,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
            tracep->chgWData(oldp+508,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
            tracep->chgCData(oldp+511,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
            tracep->chgCData(oldp+512,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
            tracep->chgCData(oldp+513,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
            tracep->chgCData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
            tracep->chgCData(oldp+515,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
            tracep->chgCData(oldp+516,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
            tracep->chgCData(oldp+517,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
            tracep->chgCData(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
            tracep->chgCData(oldp+519,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
            tracep->chgCData(oldp+520,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
            tracep->chgCData(oldp+521,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
            tracep->chgQData(oldp+522,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
            tracep->chgQData(oldp+524,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
            tracep->chgQData(oldp+526,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
            tracep->chgQData(oldp+528,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
            tracep->chgQData(oldp+530,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
            tracep->chgQData(oldp+532,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
            tracep->chgQData(oldp+534,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
            tracep->chgQData(oldp+536,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
            tracep->chgQData(oldp+538,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
            tracep->chgQData(oldp+540,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
            tracep->chgQData(oldp+542,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
            tracep->chgQData(oldp+544,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
            tracep->chgBit(oldp+546,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+547,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
            tracep->chgCData(oldp+548,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
            tracep->chgBit(oldp+549,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                            >> 2U))));
            tracep->chgBit(oldp+550,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
            tracep->chgCData(oldp+551,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                                 << 3U))),6);
            tracep->chgWData(oldp+552,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
            tracep->chgSData(oldp+556,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
            tracep->chgCData(oldp+557,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
            tracep->chgCData(oldp+558,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
            tracep->chgBit(oldp+559,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
            tracep->chgWData(oldp+560,(vlSymsp->TOP__top.DataMem__DOT____Vcellinp__sext__lut),264);
            tracep->chgWData(oldp+569,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+572,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+575,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+578,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+581,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
            tracep->chgCData(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
            tracep->chgCData(oldp+583,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
            tracep->chgCData(oldp+584,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
            tracep->chgQData(oldp+585,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
            tracep->chgQData(oldp+587,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
            tracep->chgQData(oldp+589,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
            tracep->chgQData(oldp+591,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
            tracep->chgQData(oldp+593,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
            tracep->chgBit(oldp+595,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
            tracep->chgWData(oldp+596,(vlSymsp->TOP__top.__Vcellinp__RegWsrcMux__lut),198);
            tracep->chgWData(oldp+603,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+606,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+609,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+612,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+613,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+614,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
            tracep->chgQData(oldp+615,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+617,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+619,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+621,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
            tracep->chgBit(oldp+623,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
            tracep->chgQData(oldp+624,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
            tracep->chgQData(oldp+626,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
            tracep->chgBit(oldp+628,((0x2004000ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)));
            tracep->chgBit(oldp+629,((0x200bff8ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)));
            tracep->chgBit(oldp+630,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                      & (0x2004000ULL 
                                         == vlSymsp->TOP__top.__PVT__ALUres))));
            tracep->chgSData(oldp+631,((vlSymsp->TOP__top.Inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+632,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
            tracep->chgQData(oldp+634,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
            tracep->chgQData(oldp+636,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
            tracep->chgQData(oldp+638,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
            tracep->chgBit(oldp+640,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+641,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+642,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
            tracep->chgBit(oldp+644,(vlSymsp->TOP__top__IntrUnit.__PVT__mip_MTIP));
            tracep->chgBit(oldp+645,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
            tracep->chgQData(oldp+646,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
            tracep->chgBit(oldp+648,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
            tracep->chgBit(oldp+649,((0x305U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+650,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
            tracep->chgBit(oldp+651,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
            tracep->chgBit(oldp+652,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
            tracep->chgBit(oldp+653,((0x304U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+654,((0x344U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgQData(oldp+655,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
            tracep->chgQData(oldp+657,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top.pc
                                         : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
            tracep->chgQData(oldp+659,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                         : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
            tracep->chgBit(oldp+661,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                    >> 7U)))));
            tracep->chgQData(oldp+662,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
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
            tracep->chgCData(oldp+664,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
            tracep->chgQData(oldp+665,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
            tracep->chgBit(oldp+667,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
            tracep->chgWData(oldp+668,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__scrDataSrc__lut),402);
            tracep->chgWData(oldp+681,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+684,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+687,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+690,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+693,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+696,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+699,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+700,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+701,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+702,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+703,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+704,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
            tracep->chgQData(oldp+705,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+707,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+709,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
            tracep->chgQData(oldp+711,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
            tracep->chgQData(oldp+713,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
            tracep->chgQData(oldp+715,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
            tracep->chgQData(oldp+717,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+719,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
            tracep->chgBit(oldp+720,(((0x305U == (vlSymsp->TOP__top.Inst 
                                                  >> 0x14U)) 
                                      & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
            tracep->chgBit(oldp+721,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+722,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+723,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+724,(((0x304U == (vlSymsp->TOP__top.Inst 
                                                  >> 0x14U)) 
                                      & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        }
        tracep->chgBit(oldp+725,(vlSelf->clk));
        tracep->chgBit(oldp+726,(vlSelf->rst));
        tracep->chgIData(oldp+727,(vlSelf->Inst),32);
        tracep->chgQData(oldp+728,(vlSelf->pc),64);
        tracep->chgQData(oldp+730,(vlSymsp->TOP__top__IntrUnit.mcase),64);
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
