#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define CONFIG_DIFFTEST
#define RESET_VECTOR 0x80000000

typedef uint32_t paddr_t;

typedef uint64_t word_t;
typedef int64_t  sword_t;

typedef word_t vaddr_t;
#endif