#include "main.h"

//--------------------------------- Functions --------------------------------//

autonSettings_t AutonSettings;
autonFunc_t SelectedAuton;

// Encoder references
int kEncoderLeft, kEncoderRight;

void handleLCDOption(int *iScreen, int iOption, screen_t Screen) {
  // TODO
}

void initializeIO() {
  // Pneumatics Setup
  pinMode(kLiftLock - kDigital, OUTPUT);
  pinMode(kUpperArmLock - kDigital, OUTPUT);
  pinMode(kLowerArmLock - kDigital, OUTPUT);

  // Motors setup
  motorSetDirection(kDriveBR - kMotor, REVERSED);
  motorSetDirection(kDriveFR - kMotor, REVERSED);
  motorSetDirection(kArmL0 - kMotor, REVERSED);
  motorSetDirection(kArmL1 - kMotor, REVERSED);
}

void initialize() {
  // Encoders Setup
  kEncoderLeft = (int)encoderInit(kEncoderL1, kEncoderL2, NORMAL);
  kEncoderRight = (int)encoderInit(kEncoderR1, kEncoderR2, REVERSED);

  // LCD Selection and Setup here
  lcdInit(kLCD);
  lcdClear(kLCD);
  runSetupQuestions();
}
