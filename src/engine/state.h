#ifndef STATE_H
#define STATE_H
#include <stdbool.h>

typedef struct State {
  int running;
  bool exit;
} State;

void poll_events(State *state);

#endif // !DEBUG
