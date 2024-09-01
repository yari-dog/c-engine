#include <stdbool.h>

#include "engine/init.h"
#include "engine/render/render.h"
#include "engine/state.h"

App app;
State state;

int main(int argc, char *argv[]) {

  init(&app);

  state.exit = false;
  while (!state.exit) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        state.exit = true;
      }
    }
		
		render(&app);
  }

  return 0;
}
