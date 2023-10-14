#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);

int main() {
  extern const char logo[];
  printf("%s", logo);
  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  init_mm();//get heap start

  init_device();//ioe init

  init_ramdisk();//the position of bin file (defined in resources)

#ifdef HAS_CTE
  init_irq(); // init cte
#endif

  init_fs(); // register file table( abstract file rd/wr funcition)

  init_proc(); // loader app

  Log("Finish initialization");

#ifdef HAS_CTE
  yield(); // 
#endif
  panic("Should not reach here");
}
