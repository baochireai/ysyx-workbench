#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

unsigned long img[]={0xffc10113,0xff010113,0x0b098993,0x01813a83};

int main(int argc,char** argv,char** env) {
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
	top->eval();
	top->clk=1;
	top->eval();
	top->rst=0;
	printf("top->ALU->ALUres:%lx",top->ALU->ALUres);
	while(!contextp->gotFinish()){

		for(int i=0;i<4;i++){
			unsigned long pc=top->pc;
			printf("PC=%lx\n",pc);
			unsigned int Inst=img[pc-0x80000000];
			top->Inst=Inst;
			top->eval();
			contextp->timeInc(1);
			tfp->dump(contextp->time());
			top->clk=0;top->eval();
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
