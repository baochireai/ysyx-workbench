#include "vga.h"

#define SCREEN_W 400
#define SCREEN_H 300

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

static uint32_t screen_width() {
  return SCREEN_W;//400
}

static uint32_t screen_height() {
  return SCREEN_H;//300
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NPC", "riscv64");
  SDL_Init(SDL_INIT_VIDEO);//没有SDL_Quit 导致内存泄漏吗？？
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2 ,
      SCREEN_H * 2 ,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  /*
  SDL_Texture* SDL_CreateTexture(SDL_Renderer* renderer,Uint32 format,int access,int w,int h);
  format:像素渲染格式；access：texture访问格式；
  */
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if(vgactl_port_base[1]==1){//vgactl_port_base[1]同步信号
    vgactl_port_base[1]=0;
    update_screen();
  }
}

void init_vga() {
  vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();//写入屏幕的宽高

  printf("vgactl_port_base[0]:%u\n",vgactl_port_base[0]);
  
  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);//VGA显示控制寄存器

  vmem = new_space(screen_size());
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);//VGA帧缓冲寄存器
  init_screen();
  memset(vmem, 0, screen_size());
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}


void exit_vga(){

    SDL_DestroyTexture( texture );

    //Destroy window    
    SDL_DestroyRenderer( renderer );
    //SDL_DestroyWindow( window );

    //Quit SDL subsystems
    SDL_Quit();    

}