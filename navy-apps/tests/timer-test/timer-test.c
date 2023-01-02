#include <stdio.h>
//#include <sys/timer.h>

int main() {
  NDL_Init(0);
  printf("Timer Test\n");
  int half_sec = 1;
  while(1){
    while (NDL_GetTicks()/500000<half_sec){
    }
    half_sec++;
    printf("%d half_secs pass \n",half_sec);
  }
}

