#include <am.h>
#include <nemu.h>
#include <klib.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // int w = inw(VGACTL_ADDR+2);  // TODO: get the correct width
  // int h = inw(VGACTL_ADDR);  // TODO: get the correct height
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  int w = inw(VGACTL_ADDR+2);
  int h = inw(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = w*h*sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
  else{
    //FB_ADDR
    //int block_size = ctl->w * ctl->h;
    //printf("color rcv:%x\n",*((uint32_t*)ctl->pixels));
    int block_w=ctl->w,block_h=ctl->h;
    int w = inw(VGACTL_ADDR+2);
    int h=inw(VGACTL_ADDR);
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    for(int j=0;j<block_h;j++){
      for(int i=0;i<block_w;i++){
        int x=ctl->x+i,y=ctl->y+j;
        if(x<w&&y<h){
          fb[y*w+x]=((uint32_t*)ctl->pixels)[j*block_w+i];
          printf("%x,fb:%x\n",(uintptr_t)FB_ADDR+y*w+x,&fb[y*w+x]);
          // outl((uintptr_t)FB_ADDR+y*w+x,((uint32_t*)ctl->pixels)[j*block_w+i]);
        }
      }
    }
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
