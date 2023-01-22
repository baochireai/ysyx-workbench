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

uint8_t SDL_GetKeyFromName(const char* getkeyname){
  for(uint8_t i=0;i<83;i++){
    //printf("%d:%s\n",i,keyname[i]);
    if(strcmp(getkeyname,keyname[i])==0) return i;
  }
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char* buf=(char*)malloc(64*sizeof(char));
  if(NDL_PollEvent(buf,64)){//kd keyname/ku keyname
    ev->type=(buf[0]=='k'&&buf[1]=='d')?SDL_KEYDOWN:SDL_KEYUP;
    ev->key.type=ev->type;
    buf[strlen(buf)-1]='\0';//把\n去掉
    printf("%s\n",buf);
    ev->key.keysym.sym=SDL_GetKeyFromName(buf+3);//keyname->keycode
    free(buf);
    return 1;
  }
  else{
    free(buf);
    return 0;
  }
}

int SDL_WaitEvent(SDL_Event *event) {
  char* buf=(char*)malloc(64*sizeof(char));
  while(!NDL_PollEvent(buf,64));//kd keyname/ku keyname
  event->type=(buf[0]=='k'&&buf[1]=='d')?SDL_KEYDOWN:SDL_KEYUP;
  event->key.type=event->type;
  buf[strlen(buf)-1]='\0';//把\n去掉
  printf("%s\n",buf);
  event->key.keysym.sym=SDL_GetKeyFromName(buf+3);//keyname->keycode
  free(buf);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
