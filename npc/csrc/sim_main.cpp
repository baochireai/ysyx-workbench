#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
int main(int argc,char** argv,char** env) {
	Verilated::mkdir("./build/logs");
	VerilatedContext* contextp=new VerilatedContext;
	contextp->commandArgs(argc,argv);
	contextp->traceEverOn(true);
	VerilatedVcdC* tfp=new VerilatedVcdC;
	Vtop* top=new Vtop(contextp);
	top->trace(tfp,99);
	tfp->open("./build/logs/top.vcd");
	while(!contextp->gotFinish()){
		int a=rand()&1;
		int b=rand()&1;
		top->a=a;
		top->b=b;
		top->eval();
		contextp->timeInc(1);
		printf("a=%d,b=%d,f=%d\n",a,b,top->f);
		tfp->dump(contextp->time());
		assert(top->f==a^b);
	}
	tfp->close();
	delete tfp;
	delete top;
	delete contextp;
  return 0;
}
