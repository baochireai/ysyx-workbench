#include "sdb.h"

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#define NR_CMD ARRLEN(cmd_table)

void free_wp(int n);
bool new_wp(char *strexpr);

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
  npc_state = NPC_QUIT;
  return -1;
}

static int cmd_info(char *args) {
  if (strcmp(args, "r") == 0){
    dump_gpr();
  }
  else if (strcmp(args, "w") == 0){
    printf("info w hasn't been completed!\n");
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
    sscanf(strAdd,"%x",(unsigned int *)&Addr);
  }
  else {
    printf("Please input memory addr!\n");
    return 0;
  }
  printf("Output %d*4 bytes data at 0x%08x\n",N,Addr);
  for(int i=0;i<N;i++){
    paddr_t curAddr=Addr+i*sizeof(uint32_t);
    printf("0x%08x:\t0x%08x\n",curAddr,*(unsigned int*)guest_to_host(curAddr));
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

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  //{ "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","execute N cmds,default N=1",cmd_si},
  {"info","print pragram state,r -> register, w -> monitor point info,eg info r",cmd_info},
  {"x","scan memory,eg x N EXPR",cmd_x},
  {"p","compute expression value.Syntax p EXPR,eg. p $eax + 1",cmd_p},
  {"w","set watchpoint.Syntax:w EXPR,Eg. w *0x2000",cmd_w},
  {"d","delete watchpoint n",cmd_d}
};


static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void sdb_mainloop() {
  // cmd_c(NULL);
  // return;
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