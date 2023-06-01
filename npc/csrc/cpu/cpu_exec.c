#include "cpu_exec.h"
#include "verilated_vpi.h"
VerilatedContext* contextp;
VerilatedVcdC* tfp;
Vtop* top;

cpu_state cpu;

/*****DPI****/
bool isebreak= false;
extern "C" void setebreak() {
  isebreak=true;
}
bool is_invalid_inst= false;
extern "C" void set_invalid_inst() {
  is_invalid_inst=true;
}

void cpu_exec_once(){
    //printf("PC=%lx\n",cpu.pc);
    //printf("Inst=%x\n",Inst);
  //printf("PC=%lx\n",top->IntrUnit->mcase);
#ifdef CONFIG_WAVETRACE
  top->clk=0;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
  top->clk=1;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
#else
  top->clk=0;top->eval();
  top->clk=1;top->eval();
#endif
  cpu.pc=top->pc;
}

uint64_t get_mcause(){
  //verilog中通过/*verilator public*/对reg使能该功能，这样verilator仿真器在进行编译成C++代码的时候就会生成改变量
  vpiHandle vh1 = vpi_handle_by_name((PLI_BYTE8*)"TOP.top.IntrUnit.mcase", NULL);
  if (!vh1) vl_fatal(__FILE__, __LINE__, "sim_main", "No handle found");
  // const char* name = vpi_get_str(vpiName, vh1);
  // printf("Module name: %s\n", name);  // Prints "readme"

  s_vpi_value v;
  v.format = vpiVectorVal;
  vpi_get_value(vh1, &v);
  uint64_t mcause=(uint64_t)v.value.vector[7].aval<<56|(uint64_t)v.value.vector[6].aval<<48|(uint64_t)v.value.vector[5].aval<<40|\
  (uint64_t)v.value.vector[4].aval<<32|(uint64_t)v.value.vector[3].aval<<24|(uint64_t)v.value.vector[2].aval<<16|(uint64_t)v.value.vector[1].aval<<8|(uint64_t)v.value.vector[0].aval;
  return mcause;
}

void cpu_exec(uint64_t n){

  switch (npc_state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: npc_state = NPC_RUNNING;
  }

  for(;n>0;n--){
#ifdef CONFIG_DIFFTEST
    vaddr_t pc=cpu.pc;
    unsigned int Inst_RTL=top->Inst;
    printf("PC=%08x\tInst_RTL=%08x\n",pc,Inst_RTL);
    cpu_exec_once();
    printf("next_pc=%08x\n",cpu.pc);
    // if(cpu.pc==0x80001300){
    //   //VPI方式
    //   VerilatedVpi::callValueCbs();
    //   ref_difftest_raise_intr(get_mcause());
    //   //DPI方式
    //   printf("mcause:%016lx\n",((uint64_t)svmcausep[1].aval<<32)|(uint64_t)svmcausep[0].aval);
    //   ref_difftest_raise_intr(((uint64_t)svmcausep[1].aval<<32)|(uint64_t)svmcausep[0].aval);
    // }
    //printf("pc=%lx\tdpc=%lx\n",pc,top->pc);
    difftest_step(pc,cpu.pc);
#else
    cpu_exec_once();
#endif
    if(isebreak){
      npc_state=NPC_END;
      break;
    }
    else if (is_invalid_inst){
      npc_state=NPC_ABORT;
      //unsigned int Inst=*((unsigned int *)guest_to_host(cpu.pc));
      printf("find undefine Inst at PC=%08lx!\n",cpu.pc);//pc位置有问题
      break;
    }
    if (npc_state != NPC_RUNNING) break;
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


void init_cpu_exec(int argc,char** argv){
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  top=new Vtop(contextp);
  //init_difftest(diff_so_file, img_size, difftest_port);
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
	top->eval();//(cpu_gpr==NULL) eval启动后cpu_gpr才被初始化
  contextp->timeInc(1);tfp->dump(contextp->time());
	top->clk=1;
	top->eval();
  contextp->timeInc(1);tfp->dump(contextp->time());
	top->rst=0;

  for(int i=0;i<4;i++){
  top->clk=0;
  top->eval();//(cpu_gpr==NULL) eval启动后cpu_gpr才被初始化
  contextp->timeInc(1);tfp->dump(contextp->time());
  top->clk=1;
  top->eval();
  contextp->timeInc(1);tfp->dump(contextp->time());      
  }

  is_invalid_inst=false;
  cpu.gpr=cpu_gpr;cpu.pc=top->pc;
}

void cpu_exit(){
  top->final();
	tfp->close();
	delete tfp;
	delete top;
	delete contextp;
}