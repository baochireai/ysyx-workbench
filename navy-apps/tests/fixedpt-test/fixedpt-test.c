#include <stdio.h>
#include "fixedptc.h"
#include "math.h"
int main() {
  printf("floor(1.2):%d\n",(int)fixedpt_toint(fixedpt_ceil(fixedpt_ceil(1.2))));
  return 0;
}

