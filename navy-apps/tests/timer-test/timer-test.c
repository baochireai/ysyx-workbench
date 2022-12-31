#include <stdio.h>
//#include <sys/timer.h>

int main() {
  printf("Timer Test\n");
  int half_sec = 1;
  struct timeval *tv;
  gettimeofday(tv,NULL);
  while(1){
    while (tv->tv_usec/500000<half_sec){
      gettimeofday(tv,NULL);
    }
    half_sec++;
    printf("%d half_secs pass \n",half_sec);
  }
}

