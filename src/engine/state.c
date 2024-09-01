#include <SDL2/SDL.h>
#include "state.h"

void poll_events(State *state) {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    if (event.type == SDL_QUIT) {
      state->exit = true;
    }
  }
}
