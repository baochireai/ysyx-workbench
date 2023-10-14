#include "cpu_exec.h"
#include "verilated_vpi.h"
 
VerilatedContext* contextp;
VerilatedVcdC* tfp; 
Vtop* top;

cpu_state cpu;
bool is_WP_change();

/*****DPI****/
bool isebreak= false;
extern "C" void setebreak() {
  isebreak=true;
  npc_state=NPC_END; 
}
bool is_invalid_inst= false;
extern "C" void set_invalid_inst() {
  is_invalid_inst=true;
  npc_state=NPC_ABORT; 
  //unsigned int Inst=*((unsigned int *)guest_to_host(cpu.pc));
  printf("find undefine Inst at PC=%08lx!\n",cpu.pc);//pc位置有问题  
}

bool wave = true ;

  
void cpu_exec_once(){ 
  int cnt = 0 ;
  do
  {
    top->clk=0;top->eval(); 
    
    if(wave) {IFDEF(CONFIG_WAVETRACE,contextp->timeInc(1),tfp->dump(contextp->time()));}
    top->clk=1;top->eval();
    
    if(wave) {IFDEF(CONFIG_WAVETRACE,contextp->timeInc(1),tfp->dump(contextp->time()));}
    cnt++;
    if(cnt>30) {
      printf("stall at pc:0x%08lx\n",cpu.pc);
    }
  } while (top->valid!=1);     
    
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


void device_update(){
  static uint64_t last = 0;
  uint64_t now = get_time();  
  if (now - last < 1000000 / TIMER_HZ) {//以TIMER_HZ频率刷新
    return;
  }
  last = now;  
  vga_update_screen();
      
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state = NPC_QUIT; 
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;     
    }
  }  
}

void cpu_exec(uint64_t n){

  switch (npc_state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state = NPC_RUNNING;
  }
 
  for(;n>0;n--){

    vaddr_t pc=cpu.pc;
    //unsigned int Inst_RTL=top->Inst;
    //printf("(npc) pc:%08lx\n",pc);
    cpu_exec_once();

    // //VPI方式
    // VerilatedVpi::callValueCbs();
    // ref_difftest_raise_intr(get_mcause());
    // //DPI方式
    // printf("mcause:%016lx\n",((uint64_t)svmcausep[1].aval<<32)|(uint64_t)svmcausep[0].aval);
    // ref_difftest_raise_intr(((uint64_t)svmcausep[1].aval<<32)|(uint64_t)svmcausep[0].aval);

#ifndef CONFIG_PURE_MODE 
   
    IFDEF(CONFIG_DIFFTEST,difftest_step(pc,cpu.pc)); 
    if(is_WP_change()){
      npc_state=NPC_STOP; 
    }
    
#endif
  
  IFDEF(CONFIG_DEVICE,device_update());
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
  top=new Vtop(contextp);
	Verilated::mkdir("./build/logs");
	contextp->commandArgs(argc,argv);

#ifdef CONFIG_WAVETRACE
  tfp=new VerilatedVcdC;
  contextp->traceEverOn(true);
	top->trace(tfp,99);
	tfp->open("./build/logs/top.vcd");
#endif

  top->rst=1; top->clk=0; top->eval();//(cpu_gpr==NULL) eval启动后cpu_gpr才被初始化
  
  IFDEF(CONFIG_WAVETRACE,contextp->timeInc(1),tfp->dump(contextp->time()));
	top->clk=1; top->eval();
  
  IFDEF(CONFIG_WAVETRACE,contextp->timeInc(1),tfp->dump(contextp->time()));
	top->rst=0;

  cpu_exec_once();

  is_invalid_inst=false;
  cpu.gpr=cpu_gpr;
  cpu.pc=top->pc;   
} 
     
void device_exit(){ 
  free_map();
  exit_vga();
}

void cpu_exit(){
  top->final();
#ifdef CONFIG_WAVETRACE  
	tfp->close();
	delete tfp;
#endif
	delete top;
	delete contextp;
  device_exit();
}