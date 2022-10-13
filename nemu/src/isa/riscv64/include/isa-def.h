#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  //控制状态寄存器CSR
  word_t csr[8];
  // csr[0] mstatus;//存放处理器状态 
  // csr[1] mepc;//存放发生异常的pc 用于异常处理返回
  // csr[2] mcause;//存放触发异常的原因  进入对应异常处理程序
  // csr[5] mtvec;//存放异常入口地址 
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
