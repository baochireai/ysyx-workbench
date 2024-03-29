#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <common.h>
#include <reg.h>
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
}CPU_state;

#ifdef CONFIG_DIFFTEST
void difftest_skip_ref();
void difftest_skip_nextRef();
void difftest_skip_dut(int nr_ref, int nr_dut);
void difftest_set_patch(void (*fn)(void *arg), void *arg);
void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_detach();
void difftest_attach();
void init_difftest(char *ref_so_file, long img_size, int port);
#else
static inline void difftest_skip_ref() {}
static inline void difftest_skip_nextRef() {}
static inline void difftest_skip_dut(int nr_ref, int nr_dut) {}
static inline void difftest_set_patch(void (*fn)(void *arg), void *arg) {}
static inline void difftest_step(vaddr_t pc, vaddr_t npc) {}
static inline void difftest_detach() {}
static inline void difftest_attach() {}
void init_difftest(char *ref_so_file, long img_size, int port);
#endif

extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);

static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
  if (ref != dut) {
    // Log("%s is different after executing instruction at pc = " FMT_WORD
    //     ", right = " FMT_WORD ", wrong = " FMT_WORD ", diff = " FMT_WORD,
    //     name, pc, ref, dut, ref ^ dut);
    return false;
  }
  return true;
}

#endif
