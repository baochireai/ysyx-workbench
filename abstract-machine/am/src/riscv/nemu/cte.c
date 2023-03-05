#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {//内联汇编__am_asm_trap（异常入口地址）代码中调用了
  c->mepc+=4;//有时候不需要加4
  if (user_handler) {
    Event ev = {0};
    //将执行流切换的原因打包成事件
    switch (c->mcause) {
      case 11:
        switch (c->GPR1){//根据任务号执行不同任务
          case -1:ev.event=EVENT_YIELD;break;
          default:ev.event = EVENT_SYSCALL;break;
        }
        break;
      default: ev.event = EVENT_ERROR; break;
    }
    c = user_handler(ev, c);//user_handler->nanos中的do_event()
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));//异常入口地址写入mtvec
  /*
  内联汇编，插入汇编代码（__am_asm_trap为汇编程序标识符）
  __am_asm_trap中实现了异常处理过程（从保存pc，设置mcase的等，到进入用户异常处理程序，再mret返回恢复pc）
  */
  // register event handler
  user_handler = handler;//用户事件处理回调函数

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
  //li a7,-1; a7寄存器存放异常编号，以执行对应异常处理  -1为EVENT_YIELD
  //ecall:触发异常 进入mtvec的异常入口地址（进行异常处理流程）
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
