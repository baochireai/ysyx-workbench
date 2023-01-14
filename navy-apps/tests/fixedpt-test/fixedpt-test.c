#include <stdio.h>
#include "fixedptc.h"
#include "math.h"
int main() {
  printf("floor(1.2):%d\n",(int)fixedpt_toint(fixedpt_ceil(fixedpt_fromint(1))));
  return 0;
}

