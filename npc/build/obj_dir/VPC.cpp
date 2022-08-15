// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPC.h"
#include "VPC__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPC::VPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPC__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pc{vlSymsp->TOP.pc}
    , rootp{&(vlSymsp->TOP)}
{
}

VPC::VPC(const char* _vcname__)
    : VPC(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPC::~VPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPC___024root___eval_initial(VPC___024root* vlSelf);
void VPC___024root___eval_settle(VPC___024root* vlSelf);
void VPC___024root___eval(VPC___024root* vlSelf);
QData VPC___024root___change_request(VPC___024root* vlSelf);
#ifdef VL_DEBUG
void VPC___024root___eval_debug_assertions(VPC___024root* vlSelf);
#endif  // VL_DEBUG
void VPC___024root___final(VPC___024root* vlSelf);

static void _eval_initial_loop(VPC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPC___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPC___024root___eval_settle(&(vlSymsp->TOP));
        VPC___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/PC.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPC___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPC___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/PC.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPC___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VPC::final() {
    VPC___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VPC::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VPC___024root__traceInitTop(VPC___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPC___024root*>(voidSelf);
    VPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPC___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VPC___024root__traceRegister(VPC___024root* vlSelf, VerilatedVcd* tracep);

void VPC::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VPC___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
