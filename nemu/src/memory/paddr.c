#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  //printf("(nemu) pc:%08lx,addr:%x,data:%lx\n",cpu.pc,addr,data);
  //if((long)addr==0x8009dec0) printf("(nemu) pc:%08lx,addr:%x,data:%lx\n",cpu.pc,addr,data);//  0x8000bfe8
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  printf("(nemu)malloc pmem\n");
  pmem = malloc(CONFIG_MSIZE);//134217728
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

uint64_t mtimecmp ;

word_t paddr_read(paddr_t addr, int len) {
  //先判断是在物理内存空间还是在设备空间，然后分别调用对应的读取函数
  //printf("paddr_read at 0x%8x\n",addr);
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  if(addr==0x02004000) return mtimecmp;//for diff
  out_of_bound(addr);
  return 0;
}

bool is_ref = false;
void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  //if(addr==0x8009dec0) printf("(nemu) pc:%08lx,addr:%x,data:%lx\n",cpu.pc,addr,data);//  0x8000bfe8
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  //Log("(nemu) addr:%08x \n",addr);
  if(addr==0x02004000) mtimecmp = data ;//for diff
  if(!is_ref) out_of_bound(addr);// 
}
