#include"memory.h"

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
unsigned long img[]={0xffc10113,0xff010113,0x0b098993,0x01813a83,0x00100073};

/**DPI**/
extern "C" void pmem_read(int raddr, long long *rdata,int len) {
  
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  uint8_t* pdata=(uint8_t*)rdata;
  if(!in_pmem(raddr)){
    //printf("skip one inst at pc:0x%016lx raddr:%08x\n",cpu.pc,raddr);
    difftest_skip_nextRef();
    if(raddr == RTC_ADDR){
      *rdata=get_time();
    }
    else if (raddr == RTC_ADDR + 4) *rdata = 0 ;
    else {
      int shiftmat = 0 ;      
      len = pow( 2 , len );
      //printf("(npc)pc:%08lx\traddr:%08x\tlen:%d\n",cpu.pc+4,raddr,len);  
      shiftmat = raddr & 0x7ull ;
      *rdata = mmio_read(raddr,len);
      *rdata = (*rdata) << (shiftmat<<3) ;
    }
  }
  else{
    raddr=raddr&~0x7ull;
    for(int i=0;i<8;i++){
      pdata[i]=*(guest_to_host(raddr+i));
    }
  }
}



extern "C" void pmem_write(int waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变

  if(!in_pmem(waddr)){

    if(waddr==SERIAL_PORT){
      printf("%c",(uint8_t)BITS(wdata,7,0));
    }
    else{
      int wlen=0,shiftmat=0;
      for(int i=0;i<8;i++){
        if( (wmask>>i) & 0x1 ) wlen++;
        // else if(wlen!=0) break;
      }
      shiftmat = waddr & 0x7ull ;
      wdata = wdata >> (shiftmat<<3) ;
      // printf("wlen:%d,waddr:0x%08x wdara:0x%016lx at pc 0x%08x\n",wlen,waddr,wdata,cpu.pc);
      mmio_write(waddr, wlen, wdata);
    }
  }
  else{
    waddr = waddr & ~0x7ull;
    for(int i=0;i<8;i++){
      if((wmask>>i)&0x1){
        *(guest_to_host(waddr+i))=(uint8_t)BITS(wdata,(i+1)*8-1, i*8);
      }
    }
  }
  // if(wflag){
  //   printf("pc:%08lx\twaddr:%08lx\twdata:%lx\n",cpu.pc,waddr,wdata);
  // }
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0) ; return 0;
  }
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    default: assert(0);
  }
}

word_t paddr_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

word_t vaddr_read(vaddr_t addr, int len) {
  return paddr_read(addr, len);
}


void init_mem() {
  printf("physical memory area [0x%08x, 0x%08x]\n",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

