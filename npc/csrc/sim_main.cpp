#include <assert.h>
#include <time.h>
#include <getopt.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "difftest.h"
#include "commmon.h"

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define FMT_PADDR "0x%08x"
#define PG_ALIGN __attribute((aligned(4096)))
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static char *img_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
unsigned long img[]={0xffc10113,0xff010113,0x0b098993,0x01813a83,0x00100073};

typedef struct{
  uint64_t *gpr;
  uint64_t pc;
} cpu_state;

// extern Vtop* top;
// extern VerilatedVcdC* tfp;
// extern VerilatedContext* contextp;

VerilatedContext* contextp=new VerilatedContext;
VerilatedVcdC* tfp=new VerilatedVcdC;
Vtop* top=new Vtop(contextp);

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

int npc_state=npc_state;
/*******DPI******/
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

cpu_state cpu = {cpu_gpr,0};

bool isebreak= false;
extern "C" void setebreak() {
  isebreak=true;
}

bool is_invalid_inst= false;
extern "C" void set_invalid_inst() {
  is_invalid_inst=true;
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_mem() {
  printf("physical memory area [0x%08x, 0x%08x]\n",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp==NULL){
    printf("Can`t open ImgFile.\n");
    return 4096;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);//将镜像程序读取到指定内存地址
  assert(ret == 1);

  fclose(fp);
  return size;
}

// bool is_exit_bad(){
//   int good=(npc_state==NPC_END)&&(cpu_gpr[10]==0);
//   if(good){
//     printf("Hit good trap!");
//   }
//   else{
//     printf("Hit bad trap");
//   }
//   return !good;
// }


void cpu_exec_once(){
    cpu.pc=top->pc;
    printf("PC=%lx\n",cpu.pc);
    unsigned int Inst=*((unsigned int *)guest_to_host(cpu.pc));
    top->Inst=Inst;
    top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
    top->clk=0;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
    top->clk=1;top->eval();
}
void cpu_exec(uint64_t n){

  switch (npc_state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: npc_state = NPC_RUNNING;
  }

  for(;n>0;n--){
    cpu_exec_once();
    difftest_step(cpu.pc,top->pc);
    if(isebreak){
      npc_state=NPC_END;
      break;
    }
    else if (is_invalid_inst){
      npc_state=NPC_ABORT;
      printf("find undefine Inst!\n");
      break;
    }
  }
  switch (npc_state) {
    case NPC_RUNNING: npc_state = NPC_STOP; break;

    case NPC_END:
       if(cpu_gpr[10]==0){
        printf("npc: HIT GOOD TRAP!\n");
       }
       else printf("npc: HIT BAD TRAP!\n");
       break;
    case NPC_ABORT:
      printf("npc: ABORT\n");
      break;
    case NPC_QUIT:break;
  }
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
  //{"p","compute expression value.Syntax p EXPR,eg. p $eax + 1",cmd_p},
  //{"w","set watchpoint.Syntax:w EXPR,Eg. w *0x2000",cmd_w},
  //{"d","delete watchpoint n",cmd_d}
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

int main(int argc,char** argv,char** env) {
  /**初始化存储和IMG**/
  init_mem();
  parse_args(argc,argv);
  long img_size=load_img();
  init_difftest(diff_so_file, img_size, difftest_port);

	Verilated::mkdir("./build/logs");
	// VerilatedContext* contextp=new VerilatedContext;
	contextp->commandArgs(argc,argv);
	contextp->traceEverOn(true);
	// VerilatedVcdC* tfp=new VerilatedVcdC;
	// Vtop* top=new Vtop(contextp);
	top->trace(tfp,99);
	tfp->open("./build/logs/top.vcd");

	top->rst=1;
	top->clk=0;
	top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
	top->clk=1;
	top->eval();
	top->rst=0;
  is_invalid_inst=false;
  sdb_mainloop();
	top->final();
	tfp->close();
	delete tfp;
	delete top;
	delete contextp;
  return 0;
}
