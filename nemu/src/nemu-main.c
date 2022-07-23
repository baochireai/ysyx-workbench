#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);
int main(int argc, char *argv[]) {
  unsigned test=(unsigned)1378778669*1428021905;
  printf("%u",test);
  return 0;
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  FILE *file=fopen("./tools/gen-expr/log","r");
  if(file==NULL){
    printf("file open fail\n");
    return 0;
  }
  char buffer[65536]={};
  while (fgets(buffer,65536,file))
  {
    unsigned res;
    bool success;
    char buf[65536]={};
    buffer[strlen(buffer)-1]='\0';
    printf("buffer:%s",buffer);
    sscanf(buffer,"%u %[^\t\n]",&res,buf);
    printf("buf:%s",buf);
    unsigned value=expr(buf,&success);
    if(!success){
      printf("compute value fail\n");
      return -1;
    }
    if(res!=value){
      printf("res:%u , value:%u",res,value);
      printf("Error valie\n");
      return -1;
    }
  }
  
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
