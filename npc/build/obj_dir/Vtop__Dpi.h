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
    // DPI import at /home/mrxue/ysyx-workbench/npc/vsrc/RegisterFile.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/mrxue/ysyx-workbench/npc/vsrc/ContrGen.v:1:30
    extern void set_invalid_inst();
    // DPI import at /home/mrxue/ysyx-workbench/npc/vsrc/top.v:1:30
    extern void setebreak();

#ifdef __cplusplus
}
#endif
