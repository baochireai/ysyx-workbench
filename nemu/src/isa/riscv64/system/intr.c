#include <isa.h>

void isa_reg_display();

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[1]=epc;//mepc
  cpu.csr[2]=NO;
  //isa_reg_display();
  return cpu.csr[5];//mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
