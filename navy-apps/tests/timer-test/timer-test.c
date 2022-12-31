#include <stdio.h>
#include <timer.h>

int main() {
  int half_sec = 1;
  struct timeval *tv;
  gettimeofday(tv);
  while(true){
    while (tv->tv_usec/500000<half_sec){
      gettimeofday(tv);
    }
    half_sec++;
    printf("%d half_secs pass \n",half_sec);
  }
}

