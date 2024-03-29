#include <common.h>

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {//异常处理程序
  switch (e.event) {
    case EVENT_YIELD:
      printf("Get EVENT_YIELD!\n");break;
    case EVENT_SYSCALL:
      do_syscall(c);break;
    default: panic("Unhandled event ID = %d\n", e.event);//panic
  }
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);//传入异常处理程序入口地址
}
