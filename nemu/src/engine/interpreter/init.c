#include <cpu/cpu.h>

void sdb_mainloop();
void exit_device() ;

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
#endif
  IFDEF(CONFIG_DEVICE,exit_device());
}
