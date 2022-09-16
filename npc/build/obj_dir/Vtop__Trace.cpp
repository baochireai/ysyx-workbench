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
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<3>/*95:0*/ __Vtemp467;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp473;
    VlWide<3>/*95:0*/ __Vtemp474;
    VlWide<3>/*95:0*/ __Vtemp475;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<3>/*95:0*/ __Vtemp482;
    VlWide<3>/*95:0*/ __Vtemp483;
    VlWide<3>/*95:0*/ __Vtemp484;
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
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),11);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),3);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__R_rs1),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__R_rs2),64);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__ALUct),4);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__Extop),3);
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__RegWr));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__ALUAsr));
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__ALUBsr),2);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__Imm),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ALUres),64);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__Branch),3);
            VL_EXTEND_WQ(65,64, __Vtemp466, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp467, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp468, __Vtemp466, __Vtemp467);
            VL_EXTEND_WI(65,1, __Vtemp469, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp470, __Vtemp468, __Vtemp469);
            tracep->chgBit(oldp+58,((1U & ((8U & (IData)(vlSelf->top__DOT__ALUct))
                                            ? ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                               ^ (1U 
                                                  & __Vtemp470[2U]))
                                            : ((IData)(
                                                       (vlSelf->top__DOT__ALU__DOT__adder 
                                                        >> 0x3fU)) 
                                               ^ ((
                                                   (1U 
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
                                                                 >> 0x3fU))))))))));
            tracep->chgBit(oldp+59,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ALU__DOT__adder))))));
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__MemOP),3);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__MemtoReg));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__MemWr));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__MemOut),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__RegWdata),64);
            tracep->chgBit(oldp+67,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                           >> 1U))));
            tracep->chgBit(oldp+68,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
            tracep->chgQData(oldp+69,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                        ? vlSelf->top__DOT__Imm
                                        : 4ULL)),64);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
            tracep->chgIData(oldp+72,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),25);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
            tracep->chgCData(oldp+154,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
            tracep->chgWData(oldp+158,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+172,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+175,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+178,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+181,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+184,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
            tracep->chgCData(oldp+185,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
            tracep->chgCData(oldp+186,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
            tracep->chgCData(oldp+187,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
            tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                            >> 3U))));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            tracep->chgBit(oldp+208,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__ALU__DOT__adder),64);
            VL_EXTEND_WQ(65,64, __Vtemp473, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp474, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp475, __Vtemp473, __Vtemp474);
            VL_EXTEND_WI(65,1, __Vtemp476, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp477, __Vtemp475, __Vtemp476);
            tracep->chgBit(oldp+211,((1U & __Vtemp477[2U])));
            tracep->chgBit(oldp+212,((((1U & (IData)(
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
            tracep->chgBit(oldp+213,((1U & ((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp480, vlSelf->top__DOT__ALU__DOT__ALUA);
            VL_EXTEND_WQ(65,64, __Vtemp481, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
            VL_ADD_W(3, __Vtemp482, __Vtemp480, __Vtemp481);
            VL_EXTEND_WI(65,1, __Vtemp483, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
            VL_ADD_W(3, __Vtemp484, __Vtemp482, __Vtemp483);
            tracep->chgBit(oldp+214,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                            ^ (1U & 
                                               __Vtemp484[2U])))));
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__ALU__DOT__shift),64);
            tracep->chgQData(oldp+217,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+219,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgQData(oldp+221,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                        & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
            tracep->chgWData(oldp+223,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
            tracep->chgWData(oldp+230,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+233,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+236,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+239,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
            tracep->chgCData(oldp+240,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
            tracep->chgCData(oldp+241,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
            tracep->chgCData(oldp+253,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
            tracep->chgCData(oldp+254,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
            tracep->chgWData(oldp+255,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
            tracep->chgWData(oldp+264,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+267,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+270,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+273,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+276,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
            tracep->chgCData(oldp+277,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
            tracep->chgCData(oldp+278,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
            tracep->chgBit(oldp+290,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
            tracep->chgCData(oldp+291,((7U & (IData)(vlSelf->top__DOT__ALUct))),3);
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),536);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+312,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+315,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+318,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+321,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+324,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+327,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),67);
            tracep->chgWData(oldp+330,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),67);
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),3);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),3);
            tracep->chgCData(oldp+335,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),3);
            tracep->chgCData(oldp+336,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),3);
            tracep->chgCData(oldp+337,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),3);
            tracep->chgCData(oldp+338,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),3);
            tracep->chgCData(oldp+339,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),3);
            tracep->chgCData(oldp+340,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),3);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
            tracep->chgQData(oldp+351,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
            tracep->chgQData(oldp+353,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
            tracep->chgQData(oldp+355,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
            tracep->chgQData(oldp+361,(((0U == (IData)(vlSelf->top__DOT__MemOP))
                                         ? 0x80000000ULL
                                         : vlSelf->top__DOT__ALUres)),64);
            tracep->chgCData(oldp+363,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
            tracep->chgWData(oldp+365,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),130);
            tracep->chgWData(oldp+370,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+373,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+376,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]));
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]));
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
            tracep->chgBit(oldp+384,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        }
        tracep->chgBit(oldp+385,(vlSelf->clk));
        tracep->chgBit(oldp+386,(vlSelf->rst));
        tracep->chgIData(oldp+387,(vlSelf->Inst),32);
        tracep->chgQData(oldp+388,(vlSelf->pc),64);
        tracep->chgQData(oldp+390,((0xfffffffffffffffeULL 
                                    & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->top__DOT__Imm
                                         : 4ULL) + 
                                       ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                         ? vlSelf->pc
                                         : vlSelf->top__DOT__R_rs1)))),64);
        tracep->chgQData(oldp+392,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->chgCData(oldp+394,((0x1fU & (vlSelf->Inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+395,((0x1fU & (vlSelf->Inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+396,((0x1fU & (vlSelf->Inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+397,((0x7fU & vlSelf->Inst)),7);
        tracep->chgCData(oldp+398,((7U & (vlSelf->Inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+399,((vlSelf->Inst >> 0x19U)),7);
        tracep->chgIData(oldp+400,((vlSelf->Inst >> 7U)),25);
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
