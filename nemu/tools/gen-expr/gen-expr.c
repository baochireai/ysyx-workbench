#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
unsigned int length=0;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = (unsigned)%s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
int choose(int n){
  return rand()%n;
}

// static void gen_rand_expr() {
//   buf[0]='\0';
//   switch (choose(3)) {
//     case 0: gen_num(); break;
//     case 1: gen('('); gen_rand_expr(); gen(')'); break;
//     default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
//   }
// }
void gen_num(){
  unsigned int num=rand()+1;
  char strnum[20]={};
  
  sprintf(strnum,"%u",num);
  strcat(buf,strnum);
  length=strlen(buf);
}
void gen_rand_op(){
  switch (choose(4))
  {
  case 0:buf[length++]='+';break;
  case 1:buf[length++]='-';break;
  case 2:buf[length++]='*';break;
  default:buf[length++]='/';break;
  }
}
static void gen_rand_expr() {
  if(length>65520) return;
  switch (rand()%3) {
    case 0: gen_num(); break;
    case 1: buf[length++]='('; gen_rand_expr(); buf[length++]=')'; break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
  int randSpace=choose(4);
  for(int i=0;i<randSpace;i++){
    buf[length++]=' ';
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    length=65521;
    while (length>65520)
    {
      length=0;
      memset(buf,0,65536);
      gen_rand_expr();
    }
    
    sprintf(code_buf, code_format, buf);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror=div-by-zero /tmp/.code.c -o /tmp/.expr");//执行shell命令
    if (ret != 0){
      i--;
      continue;
    }

    //FILE *popen(const char *command, const char *type);
    //启动shell并执行command  并返回执行结果输入输出流
    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
