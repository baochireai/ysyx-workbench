#ifndef __CPU_EXEC_H__
#define __CPU_EXEC_H__

#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "common.h"
#include "difftest.h"
#include "monitor.h"
#include "reg.h"

void init_cpu_exec(int argc,char** argv);
extern "C" void setebreak();
extern "C" void set_invalid_inst();
void cpu_exec(uint64_t n);
void cpu_exit();

#endif
