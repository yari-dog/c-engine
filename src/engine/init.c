#include "init.h"
#include "render/render_init.h"

int init(App *app) {
	render_init(app);
	return 0;
}
