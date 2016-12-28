#include "hal.h"
#include "ulib.h"

static halrtcnt_t timerOffset;

Timer newTimer() {
  Timer t = {0};

  if(!timerOffset) {
    resetTimer(&t);
    resetTimer(&t);
    timerOffset = t.delta;
  }

  return t;
}
void resetTimer(Timer *t) {
  t->end = halGetCounterValue();
  t->delta = t->start - t->end;
  t->start = halGetCounterValue();
}
