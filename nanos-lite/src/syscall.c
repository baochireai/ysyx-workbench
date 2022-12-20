#include <common.h>
#include "syscall.h"

#define strace
// void SYS_yield(){
//   asm volatile("li a7, -1; ecall");
// }


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;//syscall number
  //printf("GPR2:%d")
#ifdef strace
  //printf("(SYS_call)");
  switch (a[0]) {
    case SYS_exit:
      printf("halt(a0)\n");
      halt(c->GPRx);break;
    case SYS_yield:
      printf("SYS_yield()\n");
      yield();c->GPRx=0;
      break;
    case SYS_write:{
      int fd=c->GPRx;
      char* buf=(char*)c->GPR4;
      size_t count=c->GPR3;
      //printf("SYS_write(%d,\"%s\",%d)\n",fd,(char*)buf,count);
      if(fd==0||fd==1){//stdout/stderr
        for(size_t i=0;i<count;i++){
          putch(buf[i]);
        }
      }
      c->GPRx=count;
      break;
    }
    case SYS_brk://用户栈区内存申请
      //printf("SYS_brk(0x%lx)",c->GPRx);
      c->GPRx=0;//返回0 栈区调整成功
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
#elif
  switch (a[0]) {
    case 0:
      halt(a[0]);break;
    case 1:
      SYS_yield();c->GPRx=0;break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
#endif
}
