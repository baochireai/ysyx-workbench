#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <getopt.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


typedef uint32_t paddr_t;

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define FMT_PADDR "0x%08x"
#define PG_ALIGN __attribute((aligned(4096)))

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static char *img_file = NULL;
unsigned long img[]={0xffc10113,0xff010113,0x0b098993,0x01813a83,0x00100073};

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
    printf("%s\n",optarg);
    switch (o) {
      case 1: img_file = optarg; return 0;
      default:
        printf("parse_args false\n");
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

int main(int argc,char** argv,char** env) {
  /**初始化存储和IMG**/
  init_mem();
  parse_args(argc,argv);
  long size=load_img();
  printf("success\n");

	Verilated::mkdir("./build/logs");
	VerilatedContext* contextp=new VerilatedContext;
	contextp->commandArgs(argc,argv);
	contextp->traceEverOn(true);
	VerilatedVcdC* tfp=new VerilatedVcdC;
	Vtop* top=new Vtop(contextp);
	top->trace(tfp,99);
	tfp->open("./build/logs/top.vcd");

	top->rst=1;
	top->clk=0;
	top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
	top->clk=1;
	top->eval();
	top->rst=0;
	//printf("top->top->ALU->ALUres:%lx",top->ALUres);
	while(!contextp->gotFinish()){

		for(int i=0;i<20;i++){
			unsigned long pc=top->pc;
			printf("PC=%lx\n",pc);
			unsigned int Inst=*((unsigned int *)guest_to_host(pc));
			top->Inst=Inst;
			top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
			top->clk=0;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
			top->clk=1;top->eval();
		}
		break;
		// contextp->timeInc(1);
		// if(contextp->time() >10){
		// 	break;
		// }
		//tfp->dump(contextp->time());

		//assert(top->f==a^b);
	}
	top->final();
	tfp->close();
	delete tfp;
	delete top;
	delete contextp;
  return 0;
}
