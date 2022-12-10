#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

//避免可执行文件的编译架构和预设的指令架构不一致
#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE ...  // see /usr/include/elf.h to get the right type
...
#else
# error Unsupported ISA
#endif


static uintptr_t loader(PCB *pcb, const char *filename) {
  ramdisk_read(void *buf, size_t offset, get_ramdisk_size());
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();//执行用户程序
}

