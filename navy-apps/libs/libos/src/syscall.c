#include <unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <assert.h>
#include <time.h>
#include "syscall.h"

// helper macros
#define _concat(x, y) x ## y
#define concat(x, y) _concat(x, y)
#define _args(n, list) concat(_arg, n) list
#define _arg0(a0, ...) a0
#define _arg1(a0, a1, ...) a1
#define _arg2(a0, a1, a2, ...) a2
#define _arg3(a0, a1, a2, a3, ...) a3
#define _arg4(a0, a1, a2, a3, a4, ...) a4
#define _arg5(a0, a1, a2, a3, a4, a5, ...) a5

// extract an argument from the macro array
#define SYSCALL  _args(0, ARGS_ARRAY)
#define GPR1 _args(1, ARGS_ARRAY)
#define GPR2 _args(2, ARGS_ARRAY)
#define GPR3 _args(3, ARGS_ARRAY)
#define GPR4 _args(4, ARGS_ARRAY)
#define GPRx _args(5, ARGS_ARRAY)

// ISA-depedent definitions
#if defined(__ISA_X86__)
# define ARGS_ARRAY ("int $0x80", "eax", "ebx", "ecx", "edx", "eax")
#elif defined(__ISA_MIPS32__)
# define ARGS_ARRAY ("syscall", "v0", "a0", "a1", "a2", "v0")
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define ARGS_ARRAY ("ecall", "a7", "a0", "a1", "a2", "a0")
#elif defined(__ISA_AM_NATIVE__)
# define ARGS_ARRAY ("call *0x100000", "rdi", "rsi", "rdx", "rcx", "rax")
#elif defined(__ISA_X86_64__)
# define ARGS_ARRAY ("int $0x80", "rdi", "rsi", "rdx", "rcx", "rax")
#elif defined(__ISA_LOONGARCH32R__)
# define ARGS_ARRAY ("syscall 0", "a7", "a0", "a1", "a2", "a0")
#else
#error _syscall_ is not implemented
#endif

intptr_t _syscall_(intptr_t type, intptr_t a0, intptr_t a1, intptr_t a2) {
  register intptr_t _gpr1 asm (GPR1) = type;//syscall number
  register intptr_t _gpr2 asm (GPR2) = a0;//a0-a5 syscall arguments
  register intptr_t _gpr3 asm (GPR3) = a1;
  register intptr_t _gpr4 asm (GPR4) = a2;
  register intptr_t ret asm (GPRx);
  asm volatile (SYSCALL : "=r" (ret) : "r"(_gpr1), "r"(_gpr2), "r"(_gpr3), "r"(_gpr4));
  return ret;
}

void _exit(int status) {
  _syscall_(SYS_exit, status, 0, 0);
  while (1);
}

int _open(const char *path, int flags, mode_t mode) {
  //_exit(SYS_open);
  assert(path!=NULL);
  return _syscall_(SYS_open, path, flags, mode);
}

int _write(int fd, void *buf, size_t count) {
  return _syscall_(SYS_write, fd, buf, count);
}

extern char _end;

void *_sbrk(intptr_t increment) {
  //brk初始位置_end
  static void* brk=&_end;
  //根据brk位置和increnment得新的brk位置
  void* new_brk=brk+increment;
  //通过系统调用让操作系统更新brk位置
  if(_syscall_(SYS_brk,new_brk,0,0)==0){
    //系统调用调用成功返回0，则_sbrk更新brk位置,并将旧的brk位置作为返回值
    brk=new_brk;
    return brk-increment;
  }
  else return (void*)-1;//若系统调用失败，则返回-1
  //return (void *)-1;
}

int _read(int fd, void *buf, size_t count) {
  //_exit(SYS_read);
  return _syscall_(SYS_read, fd, (intptr_t)buf, count);
}

int _close(int fd) {
  return _syscall_(SYS_close, fd,0,0);
}

off_t _lseek(int fd, off_t offset, int whence) {
  return _syscall_(SYS_lseek, fd,offset,whence);
}

int _gettimeofday(struct timeval *tv, struct timezone *tz) {
  return _syscall_(SYS_gettimeofday,tv,tz,0);
}

int _execve(const char *fname, char * const argv[], char *const envp[]) {
  //assert(0);
  _exit(SYS_execve);
  return 0;
}

// Syscalls below are not used in Nanos-lite.
// But to pass linking, they are defined as dummy functions.

int _fstat(int fd, struct stat *buf) {
  return _syscall_(SYS_fstat,fd,buf,0);
}

int _stat(const char *fname, struct stat *buf) {
  assert(0);
  return -1;
}

int _kill(int pid, int sig) {
  _exit(-SYS_kill);
  return -1;
}

pid_t _getpid() {
  _exit(-SYS_getpid);
  return 1;
}

pid_t _fork() {
  assert(0);
  return -1;
}

pid_t vfork() {
  assert(0);
  return -1;
}

int _link(const char *d, const char *n) {
  assert(0);
  return -1;
}

int _unlink(const char *n) {
  assert(0);
  return -1;
}

pid_t _wait(int *status) {
  assert(0);
  return -1;
}

clock_t _times(void *buf) {
  assert(0);
  return 0;
}

int pipe(int pipefd[2]) {
  assert(0);
  return -1;
}

int dup(int oldfd) {
  assert(0);
  return -1;
}

int dup2(int oldfd, int newfd) {
  return -1;
}

unsigned int sleep(unsigned int seconds) {
  assert(0);
  return -1;
}

ssize_t readlink(const char *pathname, char *buf, size_t bufsiz) {
  assert(0);
  return -1;
}

int symlink(const char *target, const char *linkpath) {
  assert(0);
  return -1;
}

int ioctl(int fd, unsigned long request, ...) {
  return -1;
}
