#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char strexpr[256];
  unsigned value;
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
bool new_wp(char *strexpr){
    if(free_==NULL){
      printf("All Watchpoint has been used.\n");
      return false;
    }
    WP* t=free_;    free_=free_->next;
    bool success=true;
    t->value=expr(strexpr,&success);
    strcpy(t->strexpr,strexpr);
    t->next=head;
    head=t;
    return true;
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

bool is_WP_change(){
  WP *phead=head;
  while(phead){
    bool success=true;
    unsigned curValue=expr(phead->strexpr,&success);
    if(!success) assert(0);
    if(curValue!=phead->value){
      phead->value=curValue;
      printf("%d watchpoint change:%s  org value:%u  curVal:%u\n",phead->NO,phead->strexpr,phead->value,curValue);
      return true;
    }
    phead=phead->next;
  }
  return false;
}