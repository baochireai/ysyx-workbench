// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0U] = 0xdU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1U] = 0xbU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2U] = 5U;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3U] = 3U;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0U] = 0x1ffU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0U] = 0x31cU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1U] = 0x11bU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2U] = 0x33aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3U] = 0x37eU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4U] = 0x1bdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5U] = 0xbdU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6U] = 0x199U;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7U] = 0x1aU;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[8U] = 0x9aU;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3U] 
        = (1U & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0U] 
        = (0xffU & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list
                 [0U] >> 8U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8U] 
        = (7U & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list
                    [8U] >> 3U));
}

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->pc = 0x80000000ULL;
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->top__DOT__RegisterFile__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp241;
    VlWide<3>/*95:0*/ __Vtemp242;
    VlWide<7>/*223:0*/ __Vtemp243;
    VlWide<9>/*287:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp286;
    VlWide<3>/*95:0*/ __Vtemp310;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp344;
    VlWide<3>/*95:0*/ __Vtemp346;
    VlWide<3>/*95:0*/ __Vtemp347;
    VlWide<3>/*95:0*/ __Vtemp348;
    VlWide<3>/*95:0*/ __Vtemp349;
    VlWide<3>/*95:0*/ __Vtemp350;
    VlWide<13>/*415:0*/ __Vtemp361;
    VlWide<15>/*479:0*/ __Vtemp363;
    VlWide<3>/*95:0*/ __Vtemp428;
    // Body
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__waddr, vlSelf->top__DOT__wdata, (IData)(vlSelf->top__DOT__wmask));
    vlSelf->Inst = ((0U == (7U & (IData)(vlSelf->pc)))
                     ? (IData)(vlSelf->top__DOT__rdata)
                     : (IData)((vlSelf->top__DOT__rdata 
                                >> 0x20U)));
    if ((0x100073U == vlSelf->Inst)) {
        Vtop___024unit____Vdpiimwrap_setebreak_TOP____024unit();
    }
    vlSelf->top__DOT__R_rs1 = vlSelf->top__DOT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0xfU))];
    if (((((((((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst))))) 
               | (0x17U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) 
              | (0x37U == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst)))))) 
             | (0x6fU == (0x7fU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
            | (0x67U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
           | (0x1a3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->Inst 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->Inst)))))) 
          | (0x183U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                               >> 0xfU)) 
                                  | ((0x380U & (vlSelf->Inst 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->Inst)))))) 
         | (0x33U == ((0x1fc00U & (vlSelf->Inst >> 0xfU)) 
                      | ((0x380U & (vlSelf->Inst >> 5U)) 
                         | (0x7fU & vlSelf->Inst)))))) {
        if ((0x13U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                              >> 0xfU)) 
                                 | ((0x380U & (vlSelf->Inst 
                                               >> 5U)) 
                                    | (0x7fU & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x17U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x37U == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 1U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x6fU == (0x7fU & ((0x1fc00U & 
                                        (vlSelf->Inst 
                                         >> 0xfU)) 
                                       | ((0x380U & 
                                           (vlSelf->Inst 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 2U;
            vlSelf->top__DOT__Branch = 1U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x67U == (0x3ffU & ((0x1fc00U & 
                                         (vlSelf->Inst 
                                          >> 0xfU)) 
                                        | ((0x380U 
                                            & (vlSelf->Inst 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 0U;
            vlSelf->top__DOT__ALUBsr = 2U;
            vlSelf->top__DOT__Branch = 2U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x1a3U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 1U;
            vlSelf->top__DOT__MemOP = 1U;
            vlSelf->top__DOT__MemtoReg = 0U;
        } else if ((0x183U == (0x3ffU & ((0x1fc00U 
                                          & (vlSelf->Inst 
                                             >> 0xfU)) 
                                         | ((0x380U 
                                             & (vlSelf->Inst 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & vlSelf->Inst)))))) {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 0U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 1U;
            vlSelf->top__DOT__MemtoReg = 1U;
        } else {
            vlSelf->top__DOT__ALUct = 0U;
            vlSelf->top__DOT__ALUAsr = 1U;
            vlSelf->top__DOT__ALUBsr = 1U;
            vlSelf->top__DOT__Branch = 0U;
            vlSelf->top__DOT__MemWr = 0U;
            vlSelf->top__DOT__MemOP = 0U;
            vlSelf->top__DOT__MemtoReg = 0U;
        }
    } else if ((0x8033U == ((0x1fc00U & (vlSelf->Inst 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->Inst 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->Inst))))) {
        vlSelf->top__DOT__ALUct = 8U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__MemtoReg = 0U;
    } else if ((0x193U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                  >> 0xfU)) 
                                     | ((0x380U & (vlSelf->Inst 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 0xaU;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 0U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__MemtoReg = 0U;
    } else if ((0x63U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 8U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 4U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__MemtoReg = 0U;
    } else if ((0xe3U == (0x3ffU & ((0x1fc00U & (vlSelf->Inst 
                                                 >> 0xfU)) 
                                    | ((0x380U & (vlSelf->Inst 
                                                  >> 5U)) 
                                       | (0x7fU & vlSelf->Inst)))))) {
        vlSelf->top__DOT__ALUct = 8U;
        vlSelf->top__DOT__ALUAsr = 1U;
        vlSelf->top__DOT__ALUBsr = 1U;
        vlSelf->top__DOT__Branch = 5U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__MemtoReg = 0U;
    } else {
        vlSelf->top__DOT__ALUct = 1U;
        vlSelf->top__DOT__ALUAsr = 0U;
        vlSelf->top__DOT__ALUBsr = 0U;
        vlSelf->top__DOT__Branch = 0U;
        vlSelf->top__DOT__MemWr = 0U;
        vlSelf->top__DOT__MemOP = 0U;
        vlSelf->top__DOT__MemtoReg = 0U;
        Vtop___024unit____Vdpiimwrap_set_invalid_inst_TOP____024unit();
    }
    vlSelf->top__DOT__R_rs2 = vlSelf->top__DOT__RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->Inst >> 0x14U))];
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->Inst) == 
                          vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit) 
           | ((0x7fU & vlSelf->Inst) == vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list
              [8U]));
    vlSelf->top__DOT__Extop = ((IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out)
                                : 0U);
    __Vtemp241[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (vlSelf->Inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->Inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->Inst 
                                                                      >> 0x14U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp242[1U] = (((IData)((((- (QData)((IData)(
                                                    (vlSelf->Inst 
                                                     >> 0x1fU)))) 
                                 << 0xdU) | (QData)((IData)(
                                                            ((0x1000U 
                                                              & (vlSelf->Inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (vlSelf->Inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->Inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->Inst 
                                                                         >> 7U))))))))) 
                       >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x1fU)))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->Inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->Inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->Inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->Inst 
                                                                             >> 7U)))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp243[2U] = (0x20U | (((IData)((((- (QData)((IData)(
                                                             (vlSelf->Inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->Inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->Inst 
                                                                  >> 7U))))))) 
                                << 6U) | ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->Inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlSelf->Inst 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->Inst 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->Inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->Inst 
                                                                                >> 7U)))))))) 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp243[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->Inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->Inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->Inst 
                                                                         >> 7U))))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->Inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->Inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->Inst 
                                                                               >> 7U))))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSelf->Inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->Inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->Inst 
                                                                                >> 7U)))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp243[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (vlSelf->Inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->Inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->Inst 
                                                                         >> 7U)))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (vlSelf->Inst 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSelf->Inst 
                                                             >> 0x14U))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (vlSelf->Inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->Inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->Inst 
                                                                               >> 7U)))))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp243[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->Inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->Inst 
                                                                   >> 0x14U))))) 
                             >> 0x17U)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->Inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->Inst 
                                                                         >> 0x14U))))) 
                                             >> 0x17U)) 
                                           | ((0x1c0U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->Inst 
                                                                              >> 0x14U))))) 
                                                  >> 0x17U)) 
                                              | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (vlSelf->Inst 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->Inst 
                                                                              >> 0x14U)))) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    __Vtemp243[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                           (vlSelf->Inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->Inst 
                                                                    >> 0x14U)))) 
                                      >> 0x20U)) >> 0x17U)) 
                      | (__Vtemp241[4U] << 3U));
    __Vtemp245[2U] = (0x28U | (((IData)((((- (QData)((IData)(
                                                             (vlSelf->Inst 
                                                              >> 0x1fU)))) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->Inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->Inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->Inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->Inst 
                                                                        >> 7U))))))))) 
                                << 6U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->Inst 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->Inst)))) 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0U] 
        = (IData)((((- (QData)((IData)((vlSelf->Inst 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->Inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->Inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->Inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->Inst 
                                                             >> 0x14U)))))))));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->Inst 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->Inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->Inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->Inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->Inst 
                                                              >> 0x14U)))))))) 
                   >> 0x20U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
        = (6U | ((IData)((((QData)((IData)((- (IData)(
                                                      (vlSelf->Inst 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(
                                                       (0xfffff000U 
                                                        & vlSelf->Inst))))) 
                 << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
        = (((IData)((((QData)((IData)((- (IData)((vlSelf->Inst 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)((0xfffff000U 
                                                   & vlSelf->Inst))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->Inst 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->Inst)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
        = __Vtemp245[2U];
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
        = ((7U & ((IData)((((- (QData)((IData)((vlSelf->Inst 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->Inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->Inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->Inst 
                                                                    >> 7U))))))))) 
                  >> 0x1aU)) | (__Vtemp242[1U] << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
        = ((__Vtemp242[1U] >> 0x1dU) | (__Vtemp243[2U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
        = ((__Vtemp243[2U] >> 0x1dU) | (__Vtemp243[3U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
        = ((__Vtemp243[3U] >> 0x1dU) | (__Vtemp243[4U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
        = ((__Vtemp243[4U] >> 0x1dU) | (__Vtemp243[5U] 
                                        << 3U));
    vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
        = ((__Vtemp243[5U] >> 0x1dU) | (__Vtemp243[6U] 
                                        << 3U));
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__MemOP) 
                       == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MemOP) == vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list
           [0U]);
    vlSelf->top__DOT__DataMem__DOT__wmask = ((IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit)
                                              ? (IData)(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out)
                                              : 0U);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key 
        = ((2U & ((IData)(vlSelf->top__DOT__ALUct) 
                  >> 2U)) | (1U == (7U & (IData)(vlSelf->top__DOT__ALUct))));
    vlSelf->top__DOT__ALU__DOT__Sub_Add = ((2U == (7U 
                                                   & (IData)(vlSelf->top__DOT__ALUct))) 
                                           | (8U == (IData)(vlSelf->top__DOT__ALUct)));
    vlSelf->top__DOT__ALU__DOT__ALUA = ((IData)(vlSelf->top__DOT__ALUAsr)
                                         ? vlSelf->top__DOT__R_rs1
                                         : vlSelf->pc);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
            [0U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [1U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [2U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__Extop) == 
               vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
               [3U]) & vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->top__DOT__RegWr = ((IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit) 
                               & (IData)(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0U];
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[1U];
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                 >> 6U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
            << 0x17U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[6U] 
                         >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
            << 0x17U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[7U] 
                         >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                 >> 9U));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
            << 0x14U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                               == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
        = (vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__Extop) 
                                  == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Extop) == vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list
              [4U]));
    vlSelf->top__DOT__Imm = ((IData)(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit)
                              ? vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out
                              : 0ULL);
    VL_EXTEND_WQ(66,64, __Vtemp286, vlSelf->top__DOT__Imm);
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[0U] = 4U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[1U] = 0U;
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__R_rs2) << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
        = (((IData)(vlSelf->top__DOT__R_rs2) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__R_rs2 >> 0x20U)) 
              << 2U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
        = (4U | ((__Vtemp286[0U] << 4U) | ((IData)(
                                                   (vlSelf->top__DOT__R_rs2 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
        = ((__Vtemp286[0U] >> 0x1cU) | (__Vtemp286[1U] 
                                        << 4U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
        = ((__Vtemp286[1U] >> 0x1cU) | (__Vtemp286[2U] 
                                        << 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[0U];
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[1U];
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                               == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALUBsr) == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                                  == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALUBsr) == 
              vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALUBsr) 
                                  == vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALUBsr) == 
              vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__ALUB = ((IData)(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit)
                                         ? vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out
                                         : 0ULL);
    vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
        = ((- (QData)((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add))) 
           ^ vlSelf->top__DOT__ALU__DOT__ALUB);
    VL_EXTEND_WQ(66,64, __Vtemp310, (vlSelf->top__DOT__ALU__DOT__ALUA 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U] 
        = (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                   >> (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U] 
        = (IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                    >> (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))) 
                   >> 0x20U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
        = (3U | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                          << (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                 << 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     << (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
            >> 0x1eU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   << (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
        = (8U | (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                           >> (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
                  << 4U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                      << (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     >> (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB)))) 
            >> 0x1cU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   >> (0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
        = (0x10U | ((__Vtemp310[0U] << 6U) | ((IData)(
                                                      ((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
        = ((__Vtemp310[0U] >> 0x1aU) | (__Vtemp310[1U] 
                                        << 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
        = ((__Vtemp310[1U] >> 0x1aU) | (__Vtemp310[2U] 
                                        << 6U));
    VL_EXTEND_WI(65,1, __Vtemp317, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
    vlSelf->top__DOT__ALU__DOT__adder = ((vlSelf->top__DOT__ALU__DOT__ALUA 
                                          + vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin) 
                                         + (((QData)((IData)(
                                                             __Vtemp317[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp317[0U]))));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[0U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[1U];
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[2U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
            << 0x1eU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[3U] 
                         >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                 >> 2U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[4U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
            << 0x1cU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[5U] 
                         >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                 >> 4U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[6U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[7U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut[8U] 
                 >> 6U));
    vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
        = (0x13aa14U | ((((0U != vlSelf->top__DOT__ALU__DOT__adder)
                           ? 1U : 3U) << 5U) | ((0U 
                                                 != vlSelf->top__DOT__ALU__DOT__adder)
                                                 ? 3U
                                                 : 1U)));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0U] 
        = (0x1fU & vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1U] 
        = (0x1fU & (vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                    >> 5U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2U] 
        = (0x1fU & (vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                    >> 0xaU));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3U] 
        = (0x1fU & (vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                    >> 0xfU));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4U] 
        = (0x1fU & (vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut 
                    >> 0x14U));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                               == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
           == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
                                  == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key) 
              == vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__shift = ((IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit)
                                          ? vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out
                                          : 0ULL);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4U] 
        = (3U & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4U] 
        = (7U & (vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list
                 [4U] >> 2U));
    VL_EXTEND_WQ(67,64, __Vtemp344, vlSelf->top__DOT__ALU__DOT__adder);
    VL_EXTEND_WQ(65,64, __Vtemp346, vlSelf->top__DOT__ALU__DOT__ALUA);
    VL_EXTEND_WQ(65,64, __Vtemp347, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
    VL_ADD_W(3, __Vtemp348, __Vtemp346, __Vtemp347);
    VL_EXTEND_WI(65,1, __Vtemp349, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
    VL_ADD_W(3, __Vtemp350, __Vtemp348, __Vtemp349);
    __Vtemp361[0xaU] = (0x3000U | (((IData)((QData)((IData)(
                                                            (1U 
                                                             & ((8U 
                                                                 & (IData)(vlSelf->top__DOT__ALUct))
                                                                 ? 
                                                                ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                                                 ^ 
                                                                 (1U 
                                                                  & __Vtemp350[2U]))
                                                                 : 
                                                                ((IData)(
                                                                         (vlSelf->top__DOT__ALU__DOT__adder 
                                                                          >> 0x3fU)) 
                                                                 ^ 
                                                                 (((1U 
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
                                                                                >> 0x3fU))))))))))) 
                                    << 0xfU) | ((IData)(
                                                        (vlSelf->top__DOT__ALU__DOT__ALUB 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp361[0xbU] = (((IData)((QData)((IData)((1U 
                                                  & ((8U 
                                                      & (IData)(vlSelf->top__DOT__ALUct))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                                      ^ 
                                                      (1U 
                                                       & __Vtemp350[2U]))
                                                      : 
                                                     ((IData)(
                                                              (vlSelf->top__DOT__ALU__DOT__adder 
                                                               >> 0x3fU)) 
                                                      ^ 
                                                      (((1U 
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
                                                                      >> 0x3fU))))))))))) 
                         >> 0x11U) | ((IData)(((QData)((IData)(
                                                               (1U 
                                                                & ((8U 
                                                                    & (IData)(vlSelf->top__DOT__ALUct))
                                                                    ? 
                                                                   ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                                                    ^ 
                                                                    (1U 
                                                                     & __Vtemp350[2U]))
                                                                    : 
                                                                   ((IData)(
                                                                            (vlSelf->top__DOT__ALU__DOT__adder 
                                                                             >> 0x3fU)) 
                                                                    ^ 
                                                                    (((1U 
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
                                                                                >> 0x3fU)))))))))) 
                                               >> 0x20U)) 
                                      << 0xfU));
    __Vtemp363[0xcU] = (0x10000U | (((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                                     << 0x12U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (1U 
                                                                            & ((8U 
                                                                                & (IData)(vlSelf->top__DOT__ALUct))
                                                                                ? 
                                                                               ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                                                                ^ 
                                                                                (1U 
                                                                                & __Vtemp350[2U]))
                                                                                : 
                                                                               ((IData)(
                                                                                (vlSelf->top__DOT__ALU__DOT__adder 
                                                                                >> 0x3fU)) 
                                                                                ^ 
                                                                                (((1U 
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
                                                                                >> 0x3fU)))))))))) 
                                                           >> 0x20U)) 
                                                  >> 0x11U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0U] 
        = (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                   & vlSelf->top__DOT__ALU__DOT__ALUB));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[1U] 
        = (IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                    & vlSelf->top__DOT__ALU__DOT__ALUB) 
                   >> 0x20U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U] 
        = (7U | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                          | vlSelf->top__DOT__ALU__DOT__ALUB)) 
                 << 3U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     | vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x1dU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   | vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
        = (0x30U | (((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
                     << 6U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                         | vlSelf->top__DOT__ALU__DOT__ALUB) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
        = (((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
            >> 0x1aU) | ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
        = (0x140U | (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                               ^ vlSelf->top__DOT__ALU__DOT__ALUB)) 
                      << 9U) | ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
        = (((IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)) 
            >> 0x17U) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                   ^ vlSelf->top__DOT__ALU__DOT__ALUB) 
                                  >> 0x20U)) << 9U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
        = (0x800U | (((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
                      << 0xcU) | ((IData)(((vlSelf->top__DOT__ALU__DOT__ALUA 
                                            ^ vlSelf->top__DOT__ALU__DOT__ALUB) 
                                           >> 0x20U)) 
                                  >> 0x17U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
        = (((IData)(vlSelf->top__DOT__ALU__DOT__ALUB) 
            >> 0x14U) | ((IData)((vlSelf->top__DOT__ALU__DOT__ALUB 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
        = __Vtemp361[0xaU];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
        = __Vtemp361[0xbU];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
        = __Vtemp363[0xcU];
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
        = (((IData)(vlSelf->top__DOT__ALU__DOT__shift) 
            >> 0xeU) | ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                 >> 0x20U)) << 0x12U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
        = (0x40000U | ((__Vtemp344[0U] << 0x15U) | 
                       ((IData)((vlSelf->top__DOT__ALU__DOT__shift 
                                 >> 0x20U)) >> 0xeU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
        = ((__Vtemp344[0U] >> 0xbU) | (__Vtemp344[1U] 
                                       << 0x15U));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
        = ((__Vtemp344[1U] >> 0xbU) | (__Vtemp344[2U] 
                                       << 0x15U));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                       == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Branch) == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
           [0U]);
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [1U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [1U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [2U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [2U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [3U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [3U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Branch) 
                          == vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list
              [4U]));
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Branch) == 
              vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list
              [4U]));
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out 
        = ((IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit)
            ? (IData)(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out)
            : 1U);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[1U];
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[2U] 
                         >> 3U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[3U] 
                         >> 3U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
                 >> 3U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[4U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[5U] 
                         >> 6U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
                 >> 6U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
            << 0x17U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[6U] 
                         >> 9U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
            << 0x17U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[7U] 
                         >> 9U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
                 >> 9U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
            << 0x14U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
            << 0x11U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xaU] 
                         >> 0xfU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
            << 0x11U) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xbU] 
                         >> 0xfU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                 >> 0xfU));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
            << 0xeU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xcU] 
                        >> 0x12U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
            << 0xeU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xdU] 
                        >> 0x12U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                 >> 0x12U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
            << 0xbU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xeU] 
                        >> 0x15U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
            << 0xbU) | (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0xfU] 
                        >> 0x15U));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7U][2U] 
        = (7U & (vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut[0x10U] 
                 >> 0x15U));
    vlSelf->top__DOT__GenNextPC__DOT__Bsrc = ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                               ? vlSelf->pc
                                               : vlSelf->top__DOT__R_rs1);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7U] 
        = (7U & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                               == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((7U & (IData)(vlSelf->top__DOT__ALUct)) == 
         vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
         [0U]);
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [1U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [2U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [3U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [4U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [5U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [6U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out 
           | ((- (QData)((IData)(((7U & (IData)(vlSelf->top__DOT__ALUct)) 
                                  == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit) 
         | ((7U & (IData)(vlSelf->top__DOT__ALUct)) 
            == vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list
            [7U]));
    vlSelf->top__DOT__ALUres = ((IData)(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit)
                                 ? vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out
                                 : 0ULL);
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__MemOP))
                                                            ? 0x80000000ULL
                                                            : vlSelf->top__DOT__ALUres), vlSelf->__Vtask_pmem_read__5__rdata);
    vlSelf->top__DOT__MemOut = vlSelf->__Vtask_pmem_read__5__rdata;
    if (vlSelf->top__DOT__MemWr) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__ALUres, vlSelf->top__DOT__R_rs2, (IData)(vlSelf->top__DOT__DataMem__DOT__wmask));
    }
    VL_EXTEND_WQ(65,64, __Vtemp428, vlSelf->top__DOT__ALUres);
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[0U] 
        = __Vtemp428[0U];
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[1U] 
        = __Vtemp428[1U];
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U] 
        = (((IData)(vlSelf->top__DOT__MemOut) << 1U) 
           | __Vtemp428[2U]);
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
        = (((IData)(vlSelf->top__DOT__MemOut) >> 0x1fU) 
           | ((IData)((vlSelf->top__DOT__MemOut >> 0x20U)) 
              << 1U));
    vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
        = (2U | ((IData)((vlSelf->top__DOT__MemOut 
                          >> 0x20U)) >> 0x1fU));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[0U];
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[1U];
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[2U] 
                         >> 1U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
            << 0x1fU) | (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[3U] 
                         >> 1U));
    vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut[4U] 
                 >> 1U));
    vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__RegWsrcMux__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = ((- (QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__MemtoReg) 
                                                                      == 
                                                                      vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                                      [0U])))) 
                                                  & vlSelf->top__DOT__RegWsrcMux__DOT__data_list
                                                  [0U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->top__DOT__MemtoReg) 
                                              == vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                              [0U]);
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = (vlSelf->top__DOT__RegWsrcMux__DOT__lut_out 
                                                  | ((- (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__MemtoReg) 
                                                                         == 
                                                                         vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                                         [1U])))) 
                                                     & vlSelf->top__DOT__RegWsrcMux__DOT__data_list
                                                     [1U]));
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = ((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__hit) 
                                              | ((IData)(vlSelf->top__DOT__MemtoReg) 
                                                 == 
                                                 vlSelf->top__DOT__RegWsrcMux__DOT__key_list
                                                 [1U]));
    vlSelf->top__DOT__RegWdata = ((IData)(vlSelf->top__DOT__RegWsrcMux__DOT__hit)
                                   ? vlSelf->top__DOT__RegWsrcMux__DOT__lut_out
                                   : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__4(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->Inst = 0;
    vlSelf->pc = 0;
    vlSelf->top__DOT__rdata = 0;
    vlSelf->top__DOT__waddr = 0;
    vlSelf->top__DOT__wdata = 0;
    vlSelf->top__DOT__wmask = 0;
    vlSelf->top__DOT__R_rs1 = 0;
    vlSelf->top__DOT__R_rs2 = 0;
    vlSelf->top__DOT__ALUct = 0;
    vlSelf->top__DOT__Extop = 0;
    vlSelf->top__DOT__RegWr = 0;
    vlSelf->top__DOT__ALUAsr = 0;
    vlSelf->top__DOT__ALUBsr = 0;
    vlSelf->top__DOT__Imm = 0;
    vlSelf->top__DOT__ALUres = 0;
    vlSelf->top__DOT__Branch = 0;
    vlSelf->top__DOT__MemOP = 0;
    vlSelf->top__DOT__MemtoReg = 0;
    vlSelf->top__DOT__MemWr = 0;
    vlSelf->top__DOT__MemOut = 0;
    vlSelf->top__DOT__RegWdata = 0;
    VL_ZERO_RESET_W(130, vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut);
    vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut = 0;
    vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out = 0;
    vlSelf->top__DOT__GenNextPC__DOT__Bsrc = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out = 0;
    vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RegisterFile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit = 0;
    VL_ZERO_RESET_W(335, vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out = 0;
    vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit = 0;
    vlSelf->top__DOT__ALU__DOT__ALUA = 0;
    vlSelf->top__DOT__ALU__DOT__ALUB = 0;
    VL_ZERO_RESET_W(198, vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut);
    vlSelf->top__DOT__ALU__DOT__Sub_Add = 0;
    vlSelf->top__DOT__ALU__DOT__adder = 0;
    vlSelf->top__DOT__ALU__DOT__shift = 0;
    VL_ZERO_RESET_W(536, vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit = 0;
    vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut);
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out = 0;
    vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit = 0;
    vlSelf->top__DOT__DataMem__DOT__wmask = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out = 0;
    vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(65, vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__RegWsrcMux__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__RegWsrcMux__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__RegWsrcMux__DOT__lut_out = 0;
    vlSelf->top__DOT__RegWsrcMux__DOT__hit = 0;
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
