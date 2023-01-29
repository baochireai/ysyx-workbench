#include <fs.h>
#include <device.h>
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t fd_size;
size_t* open_offset;


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS,FD_DISPINFO,FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},//0
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},//1
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},//2
  [FD_EVENTS] ={"/dev/events",0,0,events_read,invalid_write},//3
  [FD_DISPINFO] ={"/proc/dispinfo",0,0,dispinfo_read,invalid_write},//4
  [FD_FB] ={"/dev/fb",0,0,invalid_read,fb_write},//5
#include "files.h"
};


int fs_open(const char *pathname, int flags, int mode){
  for(size_t i=0;i<fd_size;i++){
    if(strcmp(pathname,file_table[i].name)==0){
      return i;
    }
  }
  assert(0);
  return -1;
}

size_t fs_size(int fd){
  return file_table[fd].size;
}

size_t fs_diskoffset(int fd){
  return file_table[fd].disk_offset;
}

size_t fs_read(int fd, void *buf, size_t len){
  if(file_table[fd].read!=NULL){
    //printf("read %s\n",file_table[fd].name);
    return file_table[fd].read(buf,0,len);
  }
  if(open_offset[fd]+len>file_table[fd].size){//检查是否越界
    printf("read file(%s) cross the border!\n",file_table[fd].name);
    len=file_table[fd].size-open_offset[fd];
  }
  printf("disk_offset:%d\n",file_table[fd].disk_offset+open_offset[fd]);
  size_t offset=ramdisk_read(buf,file_table[fd].disk_offset+open_offset[fd],  len);
  open_offset[fd]+=offset;
  return offset;
}

int fs_close(int fd){
  open_offset[fd]=0;
  return 0;
}

size_t fs_write(int fd, const void *buf, size_t len){
  if(file_table[fd].write!=NULL){
    size_t offset=file_table[fd].write(buf,file_table[fd].disk_offset+open_offset[fd],len);
    open_offset[fd]+=offset;
    return offset;
  }
  if(open_offset[fd]+len>file_table[fd].size){//检查是否越界
    len=file_table[fd].size-open_offset[fd];
  }
  size_t offset=ramdisk_write(buf,file_table[fd].disk_offset+open_offset[fd],  len);
  open_offset[fd]+=offset;
  return offset;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  if(whence==SEEK_SET){
    if(offset>file_table[fd].size) open_offset[fd]=file_table[fd].size;
    else open_offset[fd]=offset;
  }
  else if(whence==SEEK_CUR){
    if(open_offset[fd]+offset>file_table[fd].size) open_offset[fd]=file_table[fd].size;
    else open_offset[fd]+=offset;
  }
  else if(whence==SEEK_END){
    open_offset[fd]=file_table[fd].size;
  }
  else{
    printf("lseek don`t find!\n");
    return -1;
  }
  return open_offset[fd];
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
  fd_size=sizeof(file_table)/sizeof(Finfo);
  open_offset=(size_t*)malloc(fd_size*sizeof(size_t));
  file_table[FD_FB].size=io_read(AM_GPU_CONFIG).vmemsz;
}
