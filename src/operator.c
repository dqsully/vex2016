#include "main.h"

userState_t UserState = kNormalState;

void operatorControl() {
  char TopLine[17] = {0}, BottomLine[17] = {0};

  stopAllTasks();
  setGlobalPosition(0, 0, gPosition.r);
  registerTask(globalPositioningTask, NULL);

  set(kLiftLock, false);
  set(kLowerArmLock, true);

  while(true) {
    if(joystickGetDigital(1, 8, kBtnUp))
      UserState = kNormalState;

    // Display battery voltages
    lcdClear(kLCD);
    snprintf(TopLine, sizeof(TopLine), "Main Volt: %-f", powerLevelMain() / 1000.0);
    snprintf(BottomLine, sizeof(BottomLine), "Exp. Volt: %-f", get(kExpander) / 275.0);
    lcdSetText(kLCD, 0, TopLine);
    lcdSetText(kLCD, 1, BottomLine);

    updateArm();

    readMacroButtons();

    // Break out of macro control
    if(abs(joystickGetAnalog(2, 2)) > 20)
      UserState = kNormalState;

    doMacros();

    if(joystickGetDigital(1, 6, kBtnUp))
      set(kUpperArmLock, false);
    if(joystickGetDigital(1, 6, kBtnDown))
      set(kUpperArmLock, true);

    if(joystickGetDigital(1, 7, kBtnUp))
      set(kLiftLock, false);
    if(joystickGetDigital(1, 7, kBtnDown))
      set(kLiftLock, true);

    if(joystickGetDigital(1, 5, kBtnUp))
      set(kLowerArmLock, false);
    if(joystickGetDigital(1, 5, kBtnDown))
      set(kLowerArmLock, true);

    if(joystickGetDigital(1, 8, kBtnUp)) {
      set(kUpperArmLock, false);
      set(kLowerArmLock, false);
    }
    if(joystickGetDigital(1, 8, kBtnDown)) {
      set(kUpperArmLock, true);
      set(kLowerArmLock, true);
    }

    set(kDriveFL, joystickGetAnalog(1, 3));
    set(kDriveBL, joystickGetAnalog(1, 3));
    set(kDriveFR, joystickGetAnalog(1, 2));
    set(kDriveBR, joystickGetAnalog(1, 2));

    delay(2);
  }
}

// Comprehend the button inputs
void readMacroButtons() {
  if(joystickGetDigital(1, 6, kBtnUp)) {
    set(kUpperArmLock, false);
    set(kLowerArmLock, false);
  } else if(joystickGetDigital(1, 6, kBtnDown))
    UserState = kAutoGroundState;
  else if(joystickGetDigital(1, 5, kBtnUp))
    UserState = kLockState;
  else if(joystickGetDigital(1, 5, kBtnDown))
    UserState = kGroundState;
  else if(joystickGetDigital(1, 8, kBtnDown))
    UserState = kKnockOff;
}

// Do stuff from the given states
void doMacros() {
  switch(UserState) {
    case kGroundState:
      if(ArmHeight > 0)
        arm(-127);
      else
        UserState = kNormalState;
      break;

    case kAutoGroundState:
      if(ArmHeight > 40 && ArmLockState != kLockedAtGround) {
        arm(-127);
        set(kLowerArmLock, false);
        if(ArmLockState != kLockedAtLaunch)
          set(kUpperArmLock, false);
      } else {
        set(kLowerArmLock, true);
        set(kUpperArmLock, true);
        UserState = kNormalState;
      }
      break;

    case kLockState:
      set(kUpperArmLock, true);
      set(kLowerArmLock, true);
      break;

    case kKnockOff:
      doKnockOff();
      break;

    default:
      arm(joystickGetAnalog(2, 2));
  }
}

void doKnockOff() {
  if(ArmHeight > kGroundHeight) {
    arm(-127);
    set(kLiftLock, true);
    set(kUpperArmLock, false);
    set(kLowerArmLock, false);
  } else {
    arm(0);
    set(kLiftLock, false);
    UserState = kNormalState;
  }
}
