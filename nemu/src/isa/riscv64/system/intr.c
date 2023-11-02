#include <isa.h>

void isa_reg_display();

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc=epc;//mepc
  cpu.mcause=NO;
  cpu.mstatus=(cpu.mstatus&(~0x8)&(~0x80))|(BITS(cpu.mstatus,3,3)<<7);
  //isa_reg_display();
  return cpu.mtvec;//mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
