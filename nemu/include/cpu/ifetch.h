#ifndef __CPU_IFETCH_H__

#include <memory/vaddr.h>

static uint32_t inst_fetch(vaddr_t *pc, int len) {//inline
  uint32_t inst = vaddr_ifetch(*pc, len);
  (*pc) += len;
  return inst;
}

#endif
