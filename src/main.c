#include <stdbool.h>

#include "engine/init.h"
#include "engine/render/render.h"
App app;

int main(int argc, char *argv[]) {

  init(&app);

  bool exit = false;
  while (!exit) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        exit = true;
      }
    }
		
		render(&app);
  }

  return 0;
}
