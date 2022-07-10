#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vlight.h"
#include "verilated.h"
#include "nvboard.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vlight* top);

void simple_cycle(){
	dut.clk=0;dut.eval();
	dut.clk=1;dut.eval();
}
void reset(int n){
	dut.rst=1;
	while (n--) simple_cycle();
	dut.rst=0;
}
int main() {
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	reset(10);
	while(1){
		nvboard_update();
        simple_cycle();
	}
  return 0;
}
