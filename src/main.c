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
		poll_events(&state);
		
		render(&app);
  }

  return 0;
}
