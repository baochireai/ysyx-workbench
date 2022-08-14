// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegisterFile__Syms.h"


void VRegisterFile___024root__traceInitSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VRegisterFile___024root__traceInitTop(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VRegisterFile___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VRegisterFile___024root__traceInitSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+65,"rs1", false,-1, 31,0);
        tracep->declBus(c+66,"rs2", false,-1, 31,0);
        tracep->declBus(c+67,"waddr", false,-1, 31,0);
        tracep->declQuad(c+68,"R_rs1", false,-1, 63,0);
        tracep->declQuad(c+70,"R_rs2", false,-1, 63,0);
        tracep->declBit(c+72,"clk", false,-1);
        tracep->declQuad(c+73,"wdata", false,-1, 63,0);
        tracep->declBit(c+75,"wen", false,-1);
        tracep->declBus(c+76,"RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+77,"RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+65,"RegisterFile rs1", false,-1, 31,0);
        tracep->declBus(c+66,"RegisterFile rs2", false,-1, 31,0);
        tracep->declBus(c+67,"RegisterFile waddr", false,-1, 31,0);
        tracep->declQuad(c+68,"RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+70,"RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+72,"RegisterFile clk", false,-1);
        tracep->declQuad(c+73,"RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+75,"RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"RegisterFile rf", true,(i+0), 63,0);}}
    }
}

void VRegisterFile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VRegisterFile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VRegisterFile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VRegisterFile___024root__traceRegister(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VRegisterFile___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VRegisterFile___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VRegisterFile___024root__traceCleanup, vlSelf);
    }
}

void VRegisterFile___024root__traceFullSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VRegisterFile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VRegisterFile___024root* const __restrict vlSelf = static_cast<VRegisterFile___024root*>(voidSelf);
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VRegisterFile___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VRegisterFile___024root__traceFullSub0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->RegisterFile__DOT__rf[31]),64);
        tracep->fullIData(oldp+65,(vlSelf->rs1),32);
        tracep->fullIData(oldp+66,(vlSelf->rs2),32);
        tracep->fullIData(oldp+67,(vlSelf->waddr),32);
        tracep->fullQData(oldp+68,(vlSelf->R_rs1),64);
        tracep->fullQData(oldp+70,(vlSelf->R_rs2),64);
        tracep->fullBit(oldp+72,(vlSelf->clk));
        tracep->fullQData(oldp+73,(vlSelf->wdata),64);
        tracep->fullBit(oldp+75,(vlSelf->wen));
        tracep->fullIData(oldp+76,(0x20U),32);
        tracep->fullIData(oldp+77,(0x40U),32);
    }
}
