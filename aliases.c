#include "aliases.h"

void memcpy(void *rDestination, void *rSource, int cBytes) {
  for(int i=0; i<cBytes; i++)
    *(rDestination + i) = *(rSource + i);
}
