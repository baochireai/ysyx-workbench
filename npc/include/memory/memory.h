#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "common.h"

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

#define PG_ALIGN __attribute((aligned(4096)))

void init_mem();
extern "C" void pmem_read(long long raddr, long long *rdata);
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);
uint8_t* guest_to_host(paddr_t paddr);

#endif