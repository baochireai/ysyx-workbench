#include <NDL.h>
#include <SDL.h>
#include <stdlib.h>
#include <string.h>
#define keyname(k) #k,

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t keystate[ARRLEN(keyname)];

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent undo\n") ;
  return 0;
}

uint8_t SDL_GetKeyFromName(const char* getkeyname){
  for(uint8_t i=0;i<83;i++){
    //printf("%d:%s\n",i,keyname[i]);
    if(strcmp(getkeyname,keyname[i])==0) return i;
  }
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  
  char buf[100];
  if(NDL_PollEvent(buf,64)){//kd keyname/ku keyname
    if(buf[0]=='k'&&buf[1]=='d') ev->type=SDL_KEYDOWN;
    else if(buf[0]=='k'&&buf[1]=='u') ev->type=SDL_KEYUP;
    else {
      
      return 0;      
    }
    ev->key.type=ev->type;
    buf[strlen(buf)-1]='\0';//把\n去掉
    //printf("%s\n",buf);
    uint8_t keycode = SDL_GetKeyFromName(buf+3) ;
    ev->key.keysym.sym=keycode;//keyname->keycode
    keystate[keycode] = (ev->type == SDL_KEYDOWN) ? 1:0; 
    
    return 1;
  }
  
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  
  // char buf[100];
  // while(!NDL_PollEvent(buf,64));//kd keyname/ku keyname
  // event->type=(buf[0]=='k'&&buf[1]=='d')?SDL_KEYDOWN:SDL_KEYUP;
  // event->key.type=event->type;
  // buf[strlen(buf)-1]='\0';//把\n去掉
  // //printf("%s\n",buf);
  // event->key.keysym.sym=SDL_GetKeyFromName(buf+3);//keyname->keycode
  while(SDL_PollEvent(event) == 0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents undo\n") ;  
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  if(numkeys != NULL){
    *numkeys = ARRLEN(keyname);
  }
  return keystate;
}
