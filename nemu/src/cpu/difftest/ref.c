#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

typedef struct{
  uint64_t *gpr;
  uint64_t pc;
} diff_cpuState_t;

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction==DIFFTEST_TO_REF){
    /*copy to ref（nemu）*/
  for (size_t i = 0; i < n; i++) {
    paddr_write(addr+i,1,*((uint8_t*)buf+i));
  }
  //printf("\n");
  }
  else{
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  //uint64_t *cpu_gpr = NULL;
  if (direction == DIFFTEST_TO_REF) {
    diff_cpuState_t* ctx = (diff_cpuState_t*)dut;
    if(ctx->gpr==NULL){
      printf("gpr is NULL\n");
      assert(0);
    }
    cpu.pc=ctx->pc;
    for(size_t i=0;i<32;i++){
      cpu.gpr[i]=ctx->gpr[i];
    }
  } else {
    //isa_reg_display();
    CPU_state* ctx = (CPU_state*)dut;
    ctx->pc=cpu.pc;
    for(size_t i=0;i<32;i++){
      ctx->gpr[i]=cpu.gpr[i];
    }
  }
}

void difftest_exec(uint64_t n) {
  printf("ref step\n");
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
