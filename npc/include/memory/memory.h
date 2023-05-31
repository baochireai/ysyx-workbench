#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "common.h"
#include "timer.h"
#include "difftest.h"

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

#define PG_ALIGN __attribute((aligned(4096)))

/*********device**********/
#if defined(__ARCH_X86_NEMU)
# define DEVICE_BASE 0x0
#else
# define DEVICE_BASE 0xa0000000
#endif

#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

static inline bool in_pmem(paddr_t addr) {
  return (addr >= CONFIG_MBASE) && (addr - CONFIG_MSIZE < (paddr_t)CONFIG_MBASE);
}

void init_mem();
extern "C" void pmem_read(int raddr, long long *rdata);
extern "C" void pmem_write(int waddr, long long wdata, char wmask);
uint8_t* guest_to_host(paddr_t paddr);

#endif