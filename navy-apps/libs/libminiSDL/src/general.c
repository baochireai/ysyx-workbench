#include <NDL.h>
#include <assert.h>
int SDL_Init(uint32_t flags) {
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  printf("SDL_SetError\n");
  assert(0);
  return -1;
}

int SDL_ShowCursor(int toggle) {
  printf("SDL_ShowCursor undo\n");
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  printf("SDL_WM_SetCaption undo\n");
}
