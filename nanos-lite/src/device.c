#include <device.h>
#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  const char* databuf=(const char*)buf;
  for(size_t i=0;i<len;i++){
    outb(SERIAL_PORT, databuf[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd = io_read(AM_INPUT_KEYBRD);
  if(kbd.keycode==0) return 0;
  //检查最大写入len个字符
  size_t length= snprintf((char*)buf,len,"%s %s\n", kbd.keydown ? "kd" : "ku",keyname[kbd.keycode]);
  return length;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg=io_read(AM_GPU_CONFIG);
  size_t length=snprintf((char*)buf,len,"WIDTH:%d\nHEIGHT:%d\n",cfg.width,cfg.height);
  return length;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  //1.根据offset推算位置
  int screem_width=io_read(AM_GPU_CONFIG).width;
  int x=offset%screem_width;
  int y=offset/screem_width;
  //uint32_t *pixelbuf=(uint32_t*)buf;
  io_write(AM_GPU_FBDRAW, x, y, (uint32_t*)buf, len/sizeof(uint32_t), 1, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
