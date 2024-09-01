#ifndef ENGINE_INIT_H
#define ENGINE_INIT_H
#include <SDL2/SDL.h>
typedef struct App {
  SDL_Window *window;
  SDL_Renderer *renderer;
} App;

int init(App *app);
#endif // !DEBUG
