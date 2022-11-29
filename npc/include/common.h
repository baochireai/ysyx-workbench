#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include "verilated_dpi.h"

//#define CONFIG_DIFFTEST
#define CONFIG_WAVETRACE
#define RESET_VECTOR 0x80000000

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

typedef uint32_t paddr_t;

typedef uint64_t word_t;
typedef int64_t  sword_t;

typedef word_t vaddr_t;

uint8_t* guest_to_host(paddr_t paddr);

typedef struct{
  uint64_t *gpr;
  uint64_t pc;
} cpu_state;

extern cpu_state cpu;
extern int npc_state;

extern const char* regs[];

void dump_gpr();

#endif