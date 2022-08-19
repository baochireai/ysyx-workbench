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
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

/*
  FILE *file=fopen("./tools/gen-expr/log2","r");
  if(file==NULL){
    printf("file open fail\n");
    return 0;
  }
  char buffer[65536]={};
  int cnt=0;
  while (fgets(buffer,sizeof(buffer),file))
  {
    cnt++;
    unsigned res;
    bool success;
    buffer[strlen(buffer)-1]='\0';
    //printf("buffer:%s\n",buffer);
    sscanf(buffer,"%u %[^\t\n]",&res,buffer);
    //printf("buf:%s\n",buf);
    unsigned value=expr(buffer,&success);
    if(!success){
      printf("compute value fail\n");
      return -1;
    }
    printf("%d\n",cnt);
    if(res!=value){
      printf("res:%u , value:%u\n",res,value);
      printf("Error valie\n");
      //return -1;
    }
  }
  return 0;
*/