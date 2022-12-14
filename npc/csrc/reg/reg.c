#include"reg.h"
#include"difftest.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
/*DPI*/
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

uint64_t mcause=0;
bool timerIntr=false;

extern "C" void timerIntr_raise(const svLogicVecVal* mcauseRegp){
  //svLogicVecVal每个元素对应32bit
  //printf("timerIntr_raise at pc=0x%08lx\n",cpu.pc);
  mcause=((uint64_t)mcauseRegp[1].aval<<32)|(uint64_t)mcauseRegp[0].aval;
  difftest_skip_nextRef();
  timerIntr=true;
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d](%s) = 0x%lx\n", i,regs[i], cpu_gpr[i]);
  }
}