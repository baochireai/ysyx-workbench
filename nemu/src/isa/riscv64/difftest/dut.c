#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]!=gpr(i)){
      printf("Checkregs fails!\n");
      printf("********ref********\n");
      for(int t=0;t<32;t++){
        printf("%s:\t0x%016lx\t%ld\n",regs[t],ref_r->gpr[t],ref_r->gpr[t]);
      }
      return false;
    }
  }
  if(ref_r->pc!=pc){
    printf("Check-pc fails!\n");
    printf("(ref)pc:%08lx\t(dut)pc:%08lx\n",ref_r->pc,pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
