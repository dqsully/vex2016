#include "ch.h"
#include "hal.h"
#include "vex.h"

#include "aliases.h"

// Named motor ports
#define kDriveFL kVexMotor_8
#define kDriveFR kVexMotor_2
#define kDriveBL kVexMotor_9
#define kDriveBR kVexMotor_3
#define kArmR0 kVexMotor_4
#define kArmR1 kVexMotor_5
#define kArmL0 kVexMotor_6
#define kArmL1 kVexMotor_7
#define kLiftLock kVexDigital_10
#define kArmLock kVexDigital_9

// Named encoder channels
typedef enum {
  kEncoderBR, // reversed
  kEncoderFR, // reversed
  kEncoderFL,
  kEncoderBL
} SensorChannels_t;

// Digital IO config
static fDigital_t fDigital[kVexDigital_Num] = {
  {kVexDigital_1,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderBR},
  {kVexDigital_2,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderBR},
  {kVexDigital_3,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderBL},
  {kVexDigital_4,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderBL},
  {kVexDigital_5,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderFL},
  {kVexDigital_6,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderFL},
  {kVexDigital_7,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderFR},
  {kVexDigital_8,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderFR},
  {kVexDigital_9,  kVexSensorDigitalOutput, kVexConfigOutput,    0},
  {kVexDigital_10, kVexSensorDigitalOutput, kVexConfigOutput,    0},
  {kVexDigital_11, kVexSensorDigitalInput,  kVexConfigInput,     0},
  {kVexDigital_12, kVexSensorDigitalInput,  kVexConfigInput,     0},
};

// Motor config
static fMotors_t fMotors[kVexMotorNum] = {
  {kVexMotor_1,  kVexMotorUndefined, kVexMotorNormal,   kVexSensorNone,        0}, // Broken
  {kVexMotor_2,  kVexMotor393S,      kVexMotorReversed, kVexSensorQuadEncoder, kEncoderFR},
  {kVexMotor_3,  kVexMotor393S,      kVexMotorReversed, kVexSensorQuadEncoder, kEncoderBR},
  {kVexMotor_4,  kVexMotor393T,      kVexMotorReversed, kVexSensorNone,        0},
  {kVexMotor_5,  kVexMotor393T,      kVexMotorReversed, kVexSensorNone,        0},
  {kVexMotor_6,  kVexMotor393T,      kVexMotorNormal,   kVexSensorNone,        0},
  {kVexMotor_7,  kVexMotor393T,      kVexMotorNormal,   kVexSensorNone,        0},
  {kVexMotor_8,  kVexMotor393S,      kVexMotorNormal,   kVexSensorQuadEncoder, kEncoderFL},
  {kVexMotor_9,  kVexMotor393S,      kVexMotorNormal,   kVexSensorQuadEncoder, kEncoderBL},
  {kVexMotor_10, kVexMotorUndefined, kVexMotorNormal,   kVexSensorNone,        0} // Broken
};

/* User-defined setup
  The digital motor ports can (and should) be configured here.
    */
void vexUserSetup() {
  vexDigitalConfigure(fDigital, DIG_CONFIG_SIZE(fDigital));
  vexMotorConfigure(fMotors, MOT_CONFIG_SIZE(fMotors));
}
