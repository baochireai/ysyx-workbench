#include "monitor.h"
#include "sdb.h"
#include "cpu_exec.h"


int main(int argc,char** argv,char** env) {

  init_monitor(argc,argv);
  sdb_mainloop();
  cpu_exit();
  return 0;
}
