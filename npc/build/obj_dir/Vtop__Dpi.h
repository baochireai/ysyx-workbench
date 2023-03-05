// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/mrxue/ysyx/npc/vsrc/top.v:3:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/mrxue/ysyx/npc/vsrc/top.v:5:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/mrxue/ysyx/npc/vsrc/RegisterFile.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/mrxue/ysyx/npc/vsrc/ContrGen.v:1:30
    extern void set_invalid_inst();
    // DPI import at /home/mrxue/ysyx/npc/vsrc/top.v:1:30
    extern void setebreak();
    // DPI import at /home/mrxue/ysyx/npc/vsrc/Intr.v:1:30
    extern void timerIntr_raise(const svLogicVecVal* mcauseRegp);

#ifdef __cplusplus
}
#endif
