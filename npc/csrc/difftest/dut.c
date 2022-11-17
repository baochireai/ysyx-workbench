#include <dlfcn.h>
#include "difftest.h"
#include "common.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
static int skip_dut_nextInst = 0;
// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

void difftest_skip_nextRef(){
  printf("skip one inst at pc:0x%016lx\n",cpu.pc);
  skip_dut_nextInst++;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);//打开动态库文件
  assert(handle);
  /*
  对动态库中的API符号进行符号解析与地址重定位，返回它们地址
  */
  ref_difftest_memcpy =  (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) =  (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);


  printf("Differential testing: ON\n");//"\33[1;32m"
  printf("The result of every instruction will be compared with %s. \n", ref_so_file);
  printf("This will help you a lot for debugging, but also significantly reduce the performance.\n");
  printf("If it is not necessary, you can turn it off in menuconfig.\n");

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu.gpr[i]){
       printf("gpr[%d] is error! right=%lx,error=%lx\n",i,ref_r->gpr[i],cpu.gpr[i]);
       return false;
    }
  }
  if(cpu.pc!=ref_r->pc){
    printf("pc is error! right=%lx,error=%lx\n",ref_r->pc,cpu.pc);
    return false;
  }
  return true;
}

void dump_ref_gpr(CPU_state *ref){
  for(int i=0;i<32;i++){
    printf("%s:\t0x%016lx\t%ld\n",regs[i],ref->gpr[i],ref->gpr[i]);
  }
}
static void checkregs(CPU_state *ref, vaddr_t pc) {
  
  if (!difftest_checkregs(ref, pc)) {
    npc_state= NPC_ABORT;
    printf("diff error happens at pc=%16lx\n",pc);
    dump_ref_gpr(ref);
    dump_gpr();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);// 获取REF的寄存器状态到`dut`;
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)//执行完需跳过比较的指令后pc指向不一样
      printf("can not catch up with ref.pc = %lx at pc = %lx",ref_r.pc, pc);
    return;
  }

  // if(skip_dut_nextInst>0){
  //   if(skip_dut_nextInst>=3){
  //     printf("skip one inst at pc = %16lx\n",pc);
  //     skip_dut_nextInst-=3;
  //     ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  //     return;
  //   }
  //   skip_dut_nextInst++;
  // }
  if (is_skip_ref) {
    printf("skip one inst at pc = %16lx\n",pc);
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);//REF执行指令
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);// 获取REF的寄存器状态到`dut`;
  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif
