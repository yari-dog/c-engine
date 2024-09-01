#include "render_init.h"

int render_init(App *app) {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    printf("failed to load SDL2\n");
    exit(1);
  }
  app->window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED,
                                 SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);
  if (!app->window) {
    printf("failed to create window\n");
    exit(1);
  }
  app->renderer = SDL_CreateRenderer(
      app->window, -1, SDL_RENDERER_ACCELERATED || SDL_RENDERER_PRESENTVSYNC);
  if (!app->renderer) {
    printf("failed to create renderer\n");
    exit(1);
  }
	return 0;
}
