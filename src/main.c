#include "main.h"
// File only created to hosue code which doesn't fit anywhere else

#ifdef mDebug

status_t _error(status_t Status, char *Message) {
  gErrorMessage = Message;

  return Status;
}

#endif
