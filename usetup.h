#include "aliases.h"

// Named motor ports
#define kDriveFL kVexMotor_7
#define kDriveFR kVexMotor_4
#define kDriveBL kVexMotor_8
#define kDriveBR kVexMotor_3
#define kArmR0 kVexMotor_5
#define kArmR1 kVexMotor_2
#define kArmL0 kVexMotor_6
#define kArmL1 kVexMotor_9
#define kLiftLock kVexDigital_9
#define kArmLock kVexDigital_10

// Named encoder channels
typedef enum {
  kEncoderBR, // reversed
  kEncoderFR, // reversed
  kEncoderFL,
  kEncoderBL
} SensorChannels_t;

// Digital IO config
static fDigital_t fDigital[kVexDigital_Num] = {
  {kVexDigital_1,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderBL},
  {kVexDigital_2,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderBL},
  {kVexDigital_3,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderFL},
  {kVexDigital_4,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderFL},
  {kVexDigital_5,  kVexSensorQuadEncoder,   kVexConfigQuadEnc1,  kEncoderBR},
  {kVexDigital_6,  kVexSensorQuadEncoder,   kVexConfigQuadEnc2,  kEncoderBR},
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
  {kVexMotor_2,  kVexMotor393T,      kVexMotorNormal,   kVexSensorNone,        0},
  {kVexMotor_3,  kVexMotor393S,      kVexMotorReversed, kVexSensorQuadEncoder, kEncoderBR},
  {kVexMotor_4,  kVexMotor393S,      kVexMotorReversed, kVexSensorQuadEncoder, kEncoderFR},
  {kVexMotor_5,  kVexMotor393T,      kVexMotorNormal,   kVexSensorNone,        0},
  {kVexMotor_6,  kVexMotor393T,      kVexMotorReversed, kVexSensorNone,        0},
  {kVexMotor_7,  kVexMotor393S,      kVexMotorNormal,   kVexSensorQuadEncoder, kEncoderFL},
  {kVexMotor_8,  kVexMotor393S,      kVexMotorNormal,   kVexSensorQuadEncoder, kEncoderBL},
  {kVexMotor_9,  kVexMotor393T,      kVexMotorReversed, kVexSensorNone,        0},
  {kVexMotor_10, kVexMotorUndefined, kVexMotorNormal,   kVexSensorNone,        0} // Broken
};
