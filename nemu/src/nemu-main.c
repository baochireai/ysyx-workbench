#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);
int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  int ret=system("pwd");
  if(ret!=0){
    return 0;
  }
  FILE *file=fopen("/home/mrxue/ysyx-workbench/nemu/tools/gen-expr/log","r");
  if(file==NULL){
    printf("file open fail\n");
    return 0;
  }
  char buffer[65536]={};
  while (fgets(buffer,65536,file))
  {
    unsigned res;
    bool success;
    sscanf(buffer,"%u %s",&res,buffer);
    unsigned value=expr(buffer,&success);
    if(!success){
      printf("compute value fail\n");
      return -1;
    }
    if(res!=value){
      printf("res:%u , value:%u",res,value);
      printf("Error valie\n");
      return -1;
    }
    else{
      printf("Success!\n");
    }
  }
  
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
