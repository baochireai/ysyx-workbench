// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VContrGen.h"
#include "VContrGen__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VContrGen::VContrGen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VContrGen__Syms(_vcontextp__, _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , func3{vlSymsp->TOP.func3}
    , func7{vlSymsp->TOP.func7}
    , ALUct{vlSymsp->TOP.ALUct}
    , Extop{vlSymsp->TOP.Extop}
    , RegWr{vlSymsp->TOP.RegWr}
    , ALUAsrc{vlSymsp->TOP.ALUAsrc}
    , ALUBsrc{vlSymsp->TOP.ALUBsrc}
    , rootp{&(vlSymsp->TOP)}
{
}

VContrGen::VContrGen(const char* _vcname__)
    : VContrGen(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VContrGen::~VContrGen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VContrGen___024root___eval_initial(VContrGen___024root* vlSelf);
void VContrGen___024root___eval_settle(VContrGen___024root* vlSelf);
void VContrGen___024root___eval(VContrGen___024root* vlSelf);
QData VContrGen___024root___change_request(VContrGen___024root* vlSelf);
#ifdef VL_DEBUG
void VContrGen___024root___eval_debug_assertions(VContrGen___024root* vlSelf);
#endif  // VL_DEBUG
void VContrGen___024root___final(VContrGen___024root* vlSelf);

static void _eval_initial_loop(VContrGen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VContrGen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VContrGen___024root___eval_settle(&(vlSymsp->TOP));
        VContrGen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VContrGen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/ContrGen.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VContrGen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VContrGen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VContrGen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VContrGen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VContrGen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VContrGen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/ContrGen.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VContrGen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VContrGen::final() {
    VContrGen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VContrGen::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VContrGen::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VContrGen___024root__traceInitTop(VContrGen___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VContrGen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VContrGen___024root*>(voidSelf);
    VContrGen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VContrGen___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VContrGen___024root__traceRegister(VContrGen___024root* vlSelf, VerilatedVcd* tracep);

void VContrGen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VContrGen___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
