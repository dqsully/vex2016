#include "FreeRTOS.h"

#include "API.h"

// Store the locations of the original motor functions before the macros in main.h override the names
int (*pMotorGetOriginal)(uint8_t channel) = motorGet;
void (*pMotorSetOriginal)(uint8_t channel, int speed) = motorSet;

#include "main.h"

int _motorGet(uint8_t channel) {
  if(motorGetDirection(channel))
    return -(*pMotorGetOriginal)(channel);
  return (*pMotorGetOriginal)(channel);
}
void _motorSet(uint8_t channel, int speed) {
  if(motorGetDirection(channel))
    (*pMotorSetOriginal)(channel, -speed);
  else
    (*pMotorSetOriginal)(channel, speed);
}

typedef struct {
  volatile int32_t value;
  volatile uint16_t flags;
  volatile uint8_t portTop;
  volatile uint8_t portBottom;
  volatile void *eventTrigger;
  volatile uint32_t lastValue;
} Sensor_TypeDef;

// Modified code from https://github.com/purduesigbots/pros/blob/master/src/encoder.c (encoderReset)
// encoderSet - Sets the value of the encoder
void encoderSet(Encoder enc, int32_t value) {
  Sensor_TypeDef *encoder = (Sensor_TypeDef *)enc;
  if(encoder) {
    _enterCritical();
    {
      encoder->value = value;
      encoder->lastValue = value;
    }
    _exitCritical();
  }
}
