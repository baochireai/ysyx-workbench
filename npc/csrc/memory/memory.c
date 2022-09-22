#include"memory.h"

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
unsigned long img[]={0xffc10113,0xff010113,0x0b098993,0x01813a83,0x00100073};

/**DPI**/
extern "C" void pmem_read(long long raddr, long long *rdata) {
  bool mread_debug=false;
  if(mread_debug){
    printf("(npc)pc:%08lx\traddr:%08llx\t",cpu.pc+4,raddr);
  }
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  raddr=raddr&~0x7ull;
  //printf("pc:%08lx\n",raddr);
  uint8_t* pdata=(uint8_t*)rdata;
  for(int i=0;i<8;i++){
    pdata[i]=*(guest_to_host(raddr+i));
  }
  if(mread_debug){
    printf("rdata:%016llx\n",*rdata);
  }
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  waddr=waddr & ~0x7ull;
  //bool wflag=false;
  //printf("wmask:%x\n",wmask);
  for(int i=0;i<8;i++){
    if((wmask>>i)&0x1){
      //wflag=true;
      *(guest_to_host(waddr+i))=(uint8_t)BITS(wdata,(i+1)*8-1, i*8);
    }
  }
  // if(wflag){
  //   printf("pc:%08lx\twaddr:%08lx\twdata:%lx\n",cpu.pc,waddr,wdata);
  // }
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

void init_mem() {
  printf("physical memory area [0x%08x, 0x%08x]\n",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

