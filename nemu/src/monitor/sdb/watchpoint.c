#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char strexpr[256];
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(char *strexpr){
    WP* t=free_;
    strcpy(t->strexpr,strexpr);
    if(free_==NULL) assert(0);
    free_=free_->next;
    t->next=head;
    head=t;
    return head;
}
void free_wp(int n){
  WP *phead=head,*t=NULL;
  if(phead->NO==n){
    t=phead;
    head=head->next;
  }
  else{
    while (phead->next){
      t=phead->next;
      if(t->NO==n){
        phead->next=t->next;
        break;
      }
      phead=t;
    }
  }
  t->next=free_;
  free_=t;
}
