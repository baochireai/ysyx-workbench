#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11://环境调用异常
        c->mepc+=4;
        ev.event=EVENT_YIELD;break;
      case 0x8000000000000007:
        ev.event=EVENT_IRQ_TIMER;break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  if(enable){
    asm volatile("csrsi mstatus, 8");//打开全局中断
    asm volatile("li t1, 0x80;csrs mie, t1");//打开定时器中断
  }
  else{
    asm volatile("csrci mstatus, 8");
    asm volatile("li t1, 0x80;csrc mie, t1");
  }
}
