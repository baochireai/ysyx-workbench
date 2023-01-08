#include <proc.h>
#include <elf.h>
#include <fs.h>
//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//close read
#include <unistd.h>

#ifdef __LP64__
# define __64__
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
# define EXPECT_TYPE EM_X86_64  // see /usr/include/elf.h to get the right type

#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV  // see /usr/include/elf.h to get the right type

#else
# error Unsupported ISA
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  // //1.open .elf binary file
  // int fd=open("./build/ramdisk.img",O_RDONLY);
  // if(fd==-1){
  //   printf("Open img fail!\n");
  // }
  // size_t ramdisk_size=get_ramdisk_size();
  // char* elf_start=(char*)malloc(ramdisk_size);
  // read(fd,elf_start,ramdisk_size);
  // //2.parse .elf file
  // Elf_Ehdr* hdr =(Elf_Ehdr*)elf_start;//ElfHeader
  // assert(*(uint32_t *)hdr->e_ident == 0x464c457f);//check Magic
  // assert(hdr->e_machine == EXPECT_TYPE);//check ISA type
  // Elf_Phdr* phdr=(Elf_Phdr*)(elf_start+hdr->e_phoff);
  // //3.parse programer header
  // for(int i=0; i < hdr->e_phnum; ++i){
  //     if(phdr[i].p_type != PT_LOAD) {
  //             continue;
  //     }
  //     ramdisk_read((void*)phdr[i].p_vaddr,phdr[i].p_offset,phdr[i].p_filesz);//loader code and data
  // }
  // close(fd);
  // return hdr->e_entry;
  //am中没有文件系统
  int fd=fs_open("/bin/bmp-test",0,0);
  //fs_read()
  if(fd==-1){
    printf("Open img fail!\n");
  }
  size_t ramdisk_size=fs_size(fd);
  char* elf_start=(char*)malloc(ramdisk_size+1);
  fs_read(fd,elf_start,ramdisk_size);
  Elf_Ehdr* hdr =(Elf_Ehdr*)elf_start;//ElfHeader
//  assert(*(uint32_t *)hdr->e_ident == 0x464c457f);//check Magic
  assert(hdr->e_machine == EXPECT_TYPE);//check ISA type
  Elf_Phdr* phdr=(Elf_Phdr*)(elf_start+hdr->e_phoff);
  //3.parse programer header
  for(int i=0; i < hdr->e_phnum; ++i){
      if(phdr[i].p_type != PT_LOAD) {
              continue;
      }
      ramdisk_read((void*)phdr[i].p_vaddr,fs_diskoffset(fd)+phdr[i].p_offset,phdr[i].p_filesz);//loader code and data
  }
  fs_close(fd);
  return hdr->e_entry;
//  return (uintptr_t)(0x83004f48);

  // close(fd);
  // ramdisk_read((void*)0x83000000,0,0x5a18);
  // ramdisk_read((void*)0x83006a18,0x5a18,0xff0);
  // memset((void*)(0x830069b8+0xff0),0,(0x1040-0xff0));
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p",(void *)entry);
  ((void(*)())entry) ();//执行用户程序
}

