#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
bool new_wp(char *strexpr);
void info_watchpoints();
void free_wp(int n);
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_si(char *args) {
  int n=1;
  if(args!=NULL) sscanf(args,"%d",&n);
  cpu_exec(n);
  return 0;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_info(char *args) {
  if (strcmp(args, "r") == 0){
    isa_reg_display();
  }
  else if (strcmp(args, "w") == 0){
    info_watchpoints();
  }
  else{
    printf("info %s doesn't exist!\n",args);
  }
  return 0;
}

static int cmd_x(char *args){
  char *strN = strtok(NULL, " ");
  char *strAdd=strtok(NULL, " ");
  int N;
  if(strN!=NULL){
    sscanf(strN,"%d",&N);
  }
  else{
    printf("Please input bytes numbers!\n");
    return 0;
  }
  paddr_t Addr;
  if(strAdd!=NULL){
    //sscanf(strAdd,"%x",(unsigned int *)&Addr);
    bool success;
    Addr=expr(strAdd,&success);
    if(!success){
      Log("addr expr error!");
      return 0;
    }
  }
  else {
    printf("Please input memory addr!\n");
    return 0;
  }
  printf("Output %d*4 bytes data at 0x%08x\n",N,Addr);
  for(int i=0;i<N;i++){
    paddr_t curAddr=Addr+i*sizeof(uint32_t);
    printf("0x%08x:\t0x%08x\n",curAddr,(unsigned int)vaddr_read(curAddr,4));
  }
  printf("\n");
  return 0;
}
static int cmd_p(char *arg){
  bool success=true;
  word_t value=expr(arg,&success);
  if(!success){
    printf("bad expression!\n");
    return 0;
  }
  printf("expression value:%lu  0x%lx\n",value,value);
  return 0;
}

static int cmd_w(char *arg){
  new_wp(arg);
  return 0;
}
static int cmd_d(char *arg){
  char *strN = strtok(NULL, " ");
  if(strN==NULL){
    printf("when delete watchpoint n, get n fail!\n");
    assert(0);
  }
  int n=0;
  sscanf(strN,"%d",&n);
  free_wp(n);
  return 0;
}
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","execute N cmds,default N=1",cmd_si},
  {"info","print pragram state,r -> register, w -> monitor point info,eg info r",cmd_info},
  {"x","scan memory,eg x N EXPR",cmd_x},
  {"p","compute expression value.Syntax p EXPR,eg. p $eax + 1",cmd_p},
  {"w","set watchpoint.Syntax:w EXPR,Eg. w *0x2000",cmd_w},
  {"d","delete watchpoint n",cmd_d}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");//第一次parse需要输入待处理字符串，后续对同一个字串处理输入NULL
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
