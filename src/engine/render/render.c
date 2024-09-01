#include "render.h"

void render(App *app) {
	SDL_SetRenderDrawColor(app->renderer, 0, 0, 0, 255);
	SDL_RenderClear(app->renderer);
	SDL_RenderPresent(app->renderer);
}
