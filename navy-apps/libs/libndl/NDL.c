#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <assert.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int Canvas_w=0,Canvas_h=0;
uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_usec;
}
//读出有效事件返回1，否则返回0,这里我返回了读出的字节数
int NDL_PollEvent(char *buf, int len) {
  return read(3, buf, len);//fd=3 "/dev/events"
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  if(*w==0&&*h==0){
    Canvas_w=screen_w;
    Canvas_h=screen_h;
  }
  else{
    Canvas_w=*w;
    Canvas_h=*h;  
    if(Canvas_w>screen_w) Canvas_w=screen_w;
    if(Canvas_h>screen_h) Canvas_h=screen_h;
  }
}

void NDL_getScreenShape(int *w,int *h){
  *w=screen_w;*h=screen_h;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //（x,y）为相对画布的位置
  //1.计算画布的位置（剧中）
  int Canvas_startx=(screen_w-Canvas_w)/2;
  int Canvas_starty=(screen_h-Canvas_h)/2;
  //2.计算Rect位置
  int Rect_startx=Canvas_startx+x;
  int Rect_starty=Canvas_starty+y;
  //3.按行顺序将像素发送到显存
  if(w==0&&h==0){
    w=Canvas_w;
    h=Canvas_h;
  }
  int fd =open("/dev/fb",0,0);
  for(int i=0;i<h;i++){
    int offset=((Rect_starty+i)*screen_w+Rect_startx)*sizeof(uint32_t);
    lseek(fd,offset,SEEK_SET);
    write(fd,(void*)(pixels+i*w),w*sizeof(uint32_t));
  }
  // for(int i=0;i<h;i++){
  //   int offset=((Rect_starty+i)*screen_w+Rect_startx)*sizeof(uint32_t);
  //   lseek(fd,offset,SEEK_SET);
  //   write(fd,(void*)(pixels+i*w),w*sizeof(uint32_t));
  // }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  /******获取系统屏幕大小*****/
  char disinfo_buf[50];
  size_t length=read(4,disinfo_buf,sizeof(disinfo_buf));//fd=4 /proc/dispinfo
  printf("%s\n",disinfo_buf);
  for(size_t i=0;i<length;i++){
    if(screen_w==0){
      while(disinfo_buf[i]>='0'&&disinfo_buf[i]<='9'){
        screen_w=screen_w*10+disinfo_buf[i]-'0';i++;
      }    
    }
    else{
      while(disinfo_buf[i]>='0'&&disinfo_buf[i]<='9'){
        screen_h=screen_h*10+disinfo_buf[i]-'0';i++;
      } 
      if(screen_h!=0) break;         
    }
  }
  assert(screen_w==400);
  assert(screen_h==300);
  printf("(NDL)screen_w:%d\tscreen_h:%d\n",screen_w,screen_h);
  return 0;
}

void NDL_Quit() {
}
