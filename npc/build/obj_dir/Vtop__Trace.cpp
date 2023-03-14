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
            tracep->chgCData(oldp+126,((0x7fU & vlSymsp->TOP__top.Inst)),7);
            tracep->chgCData(oldp+127,((7U & (vlSymsp->TOP__top.Inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+128,((vlSymsp->TOP__top.Inst 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+129,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
            tracep->chgCData(oldp+130,((5U & (vlSymsp->TOP__top.Inst 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+131,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
            tracep->chgBit(oldp+132,((0x67U == (0x7fU 
                                                & vlSymsp->TOP__top.Inst))));
            tracep->chgBit(oldp+133,((((0x33U == (0x7fU 
                                                  & vlSymsp->TOP__top.Inst)) 
                                       | (0x3bU == 
                                          (0x7fU & vlSymsp->TOP__top.Inst))) 
                                      & (vlSymsp->TOP__top.Inst 
                                         >> 0x19U))));
            tracep->chgCData(oldp+134,(((3U == (7U 
                                                & (vlSymsp->TOP__top.Inst 
                                                   >> 0xcU)))
                                         ? 0xaU : (
                                                   (8U 
                                                    & ((vlSymsp->TOP__top.Inst 
                                                        >> 0x1bU) 
                                                       & ((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7020U 
                                                                    & vlSymsp->TOP__top.Inst))) 
                                                          << 3U))) 
                                                   | (7U 
                                                      & (vlSymsp->TOP__top.Inst 
                                                         >> 0xcU))))),5);
            tracep->chgCData(oldp+135,((0x10U | ((8U 
                                                  & (vlSymsp->TOP__top.Inst 
                                                     >> 9U)) 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top.Inst 
                                                       >> 0xcU))))),5);
            tracep->chgBit(oldp+136,((0x37U == (0x7fU 
                                                & vlSymsp->TOP__top.Inst))));
            tracep->chgBit(oldp+137,((0x17U == (0x7fU 
                                                & vlSymsp->TOP__top.Inst))));
            tracep->chgBit(oldp+138,((0x23U == (0x7fU 
                                                & vlSymsp->TOP__top.Inst))));
            tracep->chgBit(oldp+139,((3U == (0x7fU 
                                             & vlSymsp->TOP__top.Inst))));
            tracep->chgCData(oldp+140,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+141,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
            tracep->chgCData(oldp+146,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
            tracep->chgBit(oldp+147,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                            >> 1U))));
            tracep->chgBit(oldp+149,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
            tracep->chgQData(oldp+150,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSymsp->TOP__top.__PVT__Imm
                                         : 4ULL)),64);
            tracep->chgQData(oldp+152,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSymsp->TOP__top.pc
                                         : vlSymsp->TOP__top.__PVT__R_rs1)),64);
            tracep->chgCData(oldp+154,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
            tracep->chgQData(oldp+155,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
            tracep->chgCData(oldp+157,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+159,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+160,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+161,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+162,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+163,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+164,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+165,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+166,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+167,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+168,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+169,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
            tracep->chgCData(oldp+170,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
            tracep->chgCData(oldp+171,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
            tracep->chgCData(oldp+172,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
            tracep->chgCData(oldp+173,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
            tracep->chgCData(oldp+174,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
            tracep->chgCData(oldp+175,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
            tracep->chgCData(oldp+176,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
            tracep->chgCData(oldp+177,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
            tracep->chgCData(oldp+178,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
            tracep->chgBit(oldp+179,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
            tracep->chgCData(oldp+180,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+181,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+182,((0x1fU & (vlSymsp->TOP__top.Inst 
                                                 >> 7U))),5);
            tracep->chgQData(oldp+183,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+185,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+187,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+189,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+191,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+193,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+195,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+197,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+199,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+201,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+203,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+205,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+207,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+209,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+211,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+213,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+215,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+217,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+219,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+221,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+223,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+225,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+227,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+229,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+231,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+233,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+235,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+237,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+239,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+241,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+243,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+245,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
            tracep->chgIData(oldp+247,((vlSymsp->TOP__top.Inst 
                                        >> 7U)),25);
            tracep->chgWData(oldp+248,(vlSymsp->TOP__top.ImmGen__DOT____Vcellinp__isRegWr__lut),335);
            tracep->chgWData(oldp+259,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+262,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+265,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+268,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+271,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+274,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+275,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+276,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+277,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgCData(oldp+278,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
            tracep->chgQData(oldp+279,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+281,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+283,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+285,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
            tracep->chgQData(oldp+287,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
            tracep->chgQData(oldp+289,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
            tracep->chgBit(oldp+291,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
            tracep->chgQData(oldp+292,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
            tracep->chgQData(oldp+294,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
            tracep->chgBit(oldp+296,((1U & (~ ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                               >> 3U)))));
            tracep->chgBit(oldp+297,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                            >> 3U))));
            tracep->chgBit(oldp+298,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
            tracep->chgQData(oldp+299,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
            VL_EXTEND_WQ(65,64, __Vtemp18, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp19, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
            VL_EXTEND_WI(65,1, __Vtemp21, (1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                                 >> 3U)));
            VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
            tracep->chgBit(oldp+301,((1U & __Vtemp22[2U])));
            tracep->chgBit(oldp+302,((((1U & (IData)(
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
            tracep->chgBit(oldp+303,((1U & ((IData)(
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
            VL_EXTEND_WI(65,1, __Vtemp28, (1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                                 >> 3U)));
            VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
            tracep->chgBit(oldp+304,((1U & (((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                             >> 3U) 
                                            ^ (1U & 
                                               __Vtemp29[2U])))));
            tracep->chgQData(oldp+305,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
            tracep->chgQData(oldp+307,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        ^ vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+309,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        | vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+311,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+313,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
            tracep->chgQData(oldp+315,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
            tracep->chgQData(oldp+317,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
            tracep->chgQData(oldp+319,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
            tracep->chgWData(oldp+321,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deALUBsr__lut),198);
            tracep->chgWData(oldp+328,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+331,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+334,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+337,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
            tracep->chgCData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
            tracep->chgCData(oldp+339,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
            tracep->chgQData(oldp+340,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+342,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+344,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+346,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
            tracep->chgBit(oldp+348,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
            tracep->chgQData(oldp+349,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
            tracep->chgCData(oldp+351,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
            tracep->chgCData(oldp+352,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
            tracep->chgWData(oldp+354,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
            tracep->chgWData(oldp+363,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+366,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+369,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+372,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+375,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+376,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+377,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
            tracep->chgCData(oldp+378,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
            tracep->chgQData(oldp+379,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+381,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+383,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+385,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
            tracep->chgQData(oldp+387,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
            tracep->chgBit(oldp+389,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
            tracep->chgCData(oldp+390,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
            tracep->chgWData(oldp+391,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__lut),264);
            tracep->chgWData(oldp+400,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+403,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+406,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+409,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+412,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
            tracep->chgCData(oldp+413,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
            tracep->chgCData(oldp+414,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
            tracep->chgCData(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
            tracep->chgQData(oldp+416,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
            tracep->chgQData(oldp+418,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
            tracep->chgQData(oldp+420,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
            tracep->chgQData(oldp+422,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
            tracep->chgQData(oldp+424,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
            tracep->chgBit(oldp+426,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
            tracep->chgCData(oldp+427,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__key),2);
            tracep->chgWData(oldp+428,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__lut),264);
            tracep->chgWData(oldp+437,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+440,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+443,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+446,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+449,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
            tracep->chgCData(oldp+450,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
            tracep->chgCData(oldp+451,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
            tracep->chgCData(oldp+452,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
            tracep->chgQData(oldp+453,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
            tracep->chgQData(oldp+455,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
            tracep->chgQData(oldp+457,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
            tracep->chgQData(oldp+459,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
            tracep->chgQData(oldp+461,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
            tracep->chgBit(oldp+463,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
            tracep->chgCData(oldp+464,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
            tracep->chgWData(oldp+465,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__lut),1088);
            tracep->chgWData(oldp+499,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+502,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+505,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+508,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+511,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+517,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
            tracep->chgWData(oldp+520,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
            tracep->chgWData(oldp+523,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
            tracep->chgWData(oldp+526,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
            tracep->chgWData(oldp+529,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
            tracep->chgWData(oldp+532,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
            tracep->chgWData(oldp+535,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
            tracep->chgWData(oldp+538,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
            tracep->chgWData(oldp+541,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
            tracep->chgWData(oldp+544,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
            tracep->chgCData(oldp+547,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
            tracep->chgCData(oldp+548,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
            tracep->chgCData(oldp+550,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
            tracep->chgCData(oldp+551,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
            tracep->chgCData(oldp+552,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
            tracep->chgCData(oldp+553,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
            tracep->chgCData(oldp+554,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
            tracep->chgCData(oldp+555,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
            tracep->chgCData(oldp+556,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
            tracep->chgCData(oldp+557,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
            tracep->chgCData(oldp+558,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[11]),4);
            tracep->chgCData(oldp+559,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[12]),4);
            tracep->chgCData(oldp+560,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[13]),4);
            tracep->chgCData(oldp+561,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[14]),4);
            tracep->chgCData(oldp+562,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[15]),4);
            tracep->chgQData(oldp+563,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
            tracep->chgQData(oldp+565,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
            tracep->chgQData(oldp+567,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
            tracep->chgQData(oldp+569,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
            tracep->chgQData(oldp+571,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
            tracep->chgQData(oldp+573,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
            tracep->chgQData(oldp+575,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
            tracep->chgQData(oldp+577,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
            tracep->chgQData(oldp+579,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
            tracep->chgQData(oldp+581,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
            tracep->chgQData(oldp+583,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
            tracep->chgQData(oldp+585,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
            tracep->chgQData(oldp+587,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
            tracep->chgQData(oldp+589,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
            tracep->chgQData(oldp+591,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
            tracep->chgQData(oldp+593,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
            tracep->chgQData(oldp+595,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
            tracep->chgBit(oldp+597,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+598,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
            tracep->chgCData(oldp+599,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
            tracep->chgBit(oldp+600,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                            >> 2U))));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
            tracep->chgCData(oldp+602,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                                 << 3U))),6);
            tracep->chgWData(oldp+603,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
            tracep->chgSData(oldp+607,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
            tracep->chgCData(oldp+608,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
            tracep->chgCData(oldp+609,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
            tracep->chgBit(oldp+610,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
            tracep->chgWData(oldp+611,(vlSymsp->TOP__top.DataMem__DOT____Vcellinp__sext__lut),264);
            tracep->chgWData(oldp+620,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+623,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+626,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+629,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+632,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
            tracep->chgCData(oldp+633,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
            tracep->chgCData(oldp+634,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
            tracep->chgCData(oldp+635,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
            tracep->chgQData(oldp+636,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
            tracep->chgQData(oldp+638,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
            tracep->chgQData(oldp+640,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
            tracep->chgQData(oldp+642,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
            tracep->chgQData(oldp+644,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
            tracep->chgBit(oldp+646,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
            tracep->chgWData(oldp+647,(vlSymsp->TOP__top.__Vcellinp__RegWsrcMux__lut),198);
            tracep->chgWData(oldp+654,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+657,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+660,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+663,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+664,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+665,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
            tracep->chgQData(oldp+666,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+668,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+670,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+672,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
            tracep->chgBit(oldp+674,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
            tracep->chgQData(oldp+675,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
            tracep->chgQData(oldp+677,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
            tracep->chgBit(oldp+679,((0x2004000ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)));
            tracep->chgBit(oldp+680,((0x200bff8ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres)));
            tracep->chgBit(oldp+681,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                      & (0x2004000ULL 
                                         == vlSymsp->TOP__top.__PVT__ALUres))));
            tracep->chgSData(oldp+682,((vlSymsp->TOP__top.Inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+683,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
            tracep->chgQData(oldp+685,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
            tracep->chgQData(oldp+687,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
            tracep->chgQData(oldp+689,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+692,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+693,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
            tracep->chgBit(oldp+694,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
            tracep->chgBit(oldp+695,(vlSymsp->TOP__top__IntrUnit.__PVT__mip_MTIP));
            tracep->chgBit(oldp+696,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
            tracep->chgQData(oldp+697,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
            tracep->chgBit(oldp+699,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
            tracep->chgBit(oldp+700,((0x305U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+701,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
            tracep->chgBit(oldp+702,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
            tracep->chgBit(oldp+703,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
            tracep->chgBit(oldp+704,((0x304U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgBit(oldp+705,((0x344U == (vlSymsp->TOP__top.Inst 
                                                 >> 0x14U))));
            tracep->chgQData(oldp+706,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
            tracep->chgQData(oldp+708,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top.pc
                                         : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
            tracep->chgQData(oldp+710,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                         ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                         : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
            tracep->chgBit(oldp+712,((1U & (IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                    >> 7U)))));
            tracep->chgQData(oldp+713,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
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
            tracep->chgCData(oldp+715,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
            tracep->chgQData(oldp+716,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
            tracep->chgBit(oldp+718,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
            tracep->chgWData(oldp+719,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__scrDataSrc__lut),402);
            tracep->chgWData(oldp+732,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+735,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+738,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+741,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+744,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+747,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+750,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+751,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+752,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+753,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+754,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+755,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
            tracep->chgQData(oldp+756,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
            tracep->chgQData(oldp+758,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
            tracep->chgQData(oldp+760,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
            tracep->chgQData(oldp+762,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
            tracep->chgQData(oldp+764,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
            tracep->chgQData(oldp+766,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
            tracep->chgQData(oldp+768,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
            tracep->chgBit(oldp+770,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
            tracep->chgBit(oldp+771,(((0x305U == (vlSymsp->TOP__top.Inst 
                                                  >> 0x14U)) 
                                      & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
            tracep->chgBit(oldp+772,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+773,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+774,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                       & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                      | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
            tracep->chgBit(oldp+775,(((0x304U == (vlSymsp->TOP__top.Inst 
                                                  >> 0x14U)) 
                                      & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        }
        tracep->chgBit(oldp+776,(vlSelf->clk));
        tracep->chgBit(oldp+777,(vlSelf->rst));
        tracep->chgIData(oldp+778,(vlSelf->Inst),32);
        tracep->chgQData(oldp+779,(vlSelf->pc),64);
        tracep->chgQData(oldp+781,(vlSymsp->TOP__top__IntrUnit.mcase),64);
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
