// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegisterFile.h"
#include "VRegisterFile__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegisterFile::VRegisterFile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRegisterFile__Syms(_vcontextp__, _vcname__, this)}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , waddr{vlSymsp->TOP.waddr}
    , R_rs1{vlSymsp->TOP.R_rs1}
    , R_rs2{vlSymsp->TOP.R_rs2}
    , clk{vlSymsp->TOP.clk}
    , wdata{vlSymsp->TOP.wdata}
    , wen{vlSymsp->TOP.wen}
    , rootp{&(vlSymsp->TOP)}
{
}

VRegisterFile::VRegisterFile(const char* _vcname__)
    : VRegisterFile(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRegisterFile::~VRegisterFile() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegisterFile___024root___eval_initial(VRegisterFile___024root* vlSelf);
void VRegisterFile___024root___eval_settle(VRegisterFile___024root* vlSelf);
void VRegisterFile___024root___eval(VRegisterFile___024root* vlSelf);
QData VRegisterFile___024root___change_request(VRegisterFile___024root* vlSelf);
#ifdef VL_DEBUG
void VRegisterFile___024root___eval_debug_assertions(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
void VRegisterFile___024root___final(VRegisterFile___024root* vlSelf);

static void _eval_initial_loop(VRegisterFile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegisterFile___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegisterFile___024root___eval_settle(&(vlSymsp->TOP));
        VRegisterFile___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VRegisterFile___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/RegisterFile.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VRegisterFile___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRegisterFile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegisterFile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegisterFile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegisterFile___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VRegisterFile___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mrxue/ysyx-workbench/npc/vsrc/RegisterFile.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VRegisterFile___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VRegisterFile::final() {
    VRegisterFile___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VRegisterFile::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRegisterFile::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VRegisterFile___024root__traceInitTop(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile___024root*>(voidSelf);
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRegisterFile___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VRegisterFile___024root__traceRegister(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep);

void VRegisterFile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VRegisterFile___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
