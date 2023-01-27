#include <common.h>
#include "syscall.h"
#include "fs.h"
#include "device.h"
#include "sys/time.h"
#include <sys/stat.h>
//#define strace
// void SYS_yield(){
//   asm volatile("li a7, -1; ecall");
// }


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;//syscall number
  //printf("GPR2:%d")
#ifdef strace
  printf("(SYS_call)");
  switch (a[0]) {
    case SYS_exit:
      printf("halt(a0)\n");
      halt(c->GPRx);break;
    case SYS_yield:
      printf("SYS_yield()\n");
      yield();c->GPRx=0;
      break;
    case SYS_open:{
      const char *path=(const char *)c->GPRx;
      c->GPRx=fs_open(path,0,0);
      break;
    }
    case SYS_close:{
      int fd=c->GPRx;
      c->GPRx=fs_close(fd);
      break;
    }
    case SYS_write:{
      int fd=c->GPRx;
      char* buf=(char*)c->GPR4;
      size_t count=c->GPR3;
      printf("SYS_write(%d,\"%s\",%d)\n",fd,(char*)buf,count);
      if(fd==1||fd==2){//stdout/stderr
        for(size_t i=0;i<count;i++){
          putch(buf[i]);
        }
      }
      else{
        count=fs_write(fd,buf,count);
      }
      c->GPRx=count;
      break;
    }
    case SYS_read:{
      int fd=c->GPRx;
      char* buf=(char*)c->GPR4;
      size_t count=c->GPR3;
      count=fs_read(fd,buf,count);
      c->GPRx=count;
      break;
    }
    case SYS_lseek:{
      int fd=c->GPRx;
      size_t offset=c->GPR4;
      int whence=c->GPR3;  
      c->GPRx=fs_lseek(fd,offset,whence);
      break;
    }
    case SYS_brk://用户栈区内存申请
      printf("SYS_brk(0x%x)",c->GPRx);
      c->GPRx=0;//返回0 栈区调整成功
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
#else
  switch (a[0]) {
    case SYS_exit:
      halt(c->GPRx);break;
    case SYS_yield:
      yield();c->GPRx=0;
      break;
    case SYS_open:{
      const char *path=(const char *)c->GPRx;
      c->GPRx=fs_open(path,0,0);
      break;
    }
    case SYS_close:{
      int fd=c->GPRx;
      c->GPRx=fs_close(fd);
      break;
    }
    case SYS_write:{
      int fd=c->GPRx;
      char* buf=(char*)c->GPR4;
      size_t count=c->GPR3;
      if(fd==1||fd==2){//stdout/stderr
        for(size_t i=0;i<count;i++){
          putch(buf[i]);
        }
      }
      else{
        count=fs_write(fd,buf,count);
      }
      c->GPRx=count;
      break;
    }
    case SYS_read:{
      int fd=c->GPRx;
      char* buf=(char*)c->GPR4;
      size_t count=c->GPR3;
      count=fs_read(fd,buf,count);
      c->GPRx=count;
      break;
    }
    case SYS_lseek:{
      int fd=c->GPRx;
      size_t offset=c->GPR4;
      int whence=c->GPR3;  
      c->GPRx=fs_lseek(fd,offset,whence);
      break;
    }
    case SYS_brk://用户栈区内存申请
      c->GPRx=0;//返回0 栈区调整成功
      break;
    case SYS_gettimeofday:{
      struct timeval *tv=(struct timeval*)c->GPRx;
      tv->tv_usec=((uint64_t)inl(RTC_ADDR+4))|(uint64_t)inl(RTC_ADDR);
      c->GPRx=0;
      break;
    }
    case SYS_fstat:{
      int fd=c->GPRx;
      struct stat* statbuf=(struct stat*)c->GPR4;
      statbuf->st_size=fs_size(fd);
      c->GPRx=0;//0获取成功 -1error
      break;
    }
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
#endif
}
