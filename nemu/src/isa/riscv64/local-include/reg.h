#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>
#include <isa.h>

extern const char* regs[];

static inline int check_reg_idx(int idx) {
  if(!(idx >= 0 && idx < 32)){
    printf("pc:%08lx\n",cpu.pc);
  }
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  return regs[check_reg_idx(idx)];
}

#endif
