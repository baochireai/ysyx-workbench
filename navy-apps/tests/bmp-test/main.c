#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

void show_bmp(uint32_t *bmp, int w, int h){
  printf("***********show_bmp************\n");
  for(int y=0 ; y<h ; y++ ){
    for ( int x=0 ; x<w; x++ ){
      printf("%d ",bmp[y*w+x]);
    }
    printf("\n");
  }
}

int main() {
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  printf("bmp size: %d*%d\n",w,h);
  //show_bmp(bmp,w,h);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
