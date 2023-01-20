#include <NDL.h>
#include <SDL.h>
#include <stdlib.h>
#include <string.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}


uint8_t SDL_GetKeyFromName(const char* getkeyname){
  for(uint8_t i=0;i<255;i++){
    if(strcmp(getkeyname,keyname[i])==0) return i;
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char* buf=(char*)malloc(64*sizeof(char));
  while(!NDL_PollEvent(buf,sizeof(buf)));//kd keyname/ku keyname

  event->type=(buf[0]=='k'&&buf[1]=='d')?SDL_KEYDOWN:SDL_KEYUP;
  event->key.type=event->type;
  printf("key:%s\n",buf+3);
  event->key.keysym.sym=SDL_GetKeyFromName(buf+3);//keyname->keycode
  printf("keycode:%d",event->key.keysym.sym);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
