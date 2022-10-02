#ifndef __REG_H__
#define __REG_H__

#include"common.h"

extern const char *regs[];
extern uint64_t *cpu_gpr;


extern "C" void set_gpr_ptr(const svOpenArrayHandle r);
void dump_gpr();

#endif