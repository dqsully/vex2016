/*
  -----------------------------Naming Conventions-----------------------------
    # typedef Declarations always end with "_t"

    (syntax): [prefix]X[Y][suffix] - Capital X and Y are the variable names

    * Types
    gX    :=  global variable
    kX    :=  constant value
    sX    :=  struct type

    * Purposes
    eX    :=  does X exist?
    pX    :=  pointer to X
    dX    :=  difference between two values of X
    cX    :=  count of X's
    fX    :=  X is for configuration
    mXY  :=  array of Y's indexed by X (read as "map from X to Y")
    rX   :=  array of X's indexed by the number iX (read as "range X")
    iX    :=  index of the array rgX
    bX    :=  relative offset to an X
    XFirst:=  the first X in a set
    XLast :=  the last X in a set
    XLim  :=  the strict limit of X's in a set
    XMax  :=  the strict limit for X's
    XMac  :=  the current limit for X's
    XNil  :=  a distinguished Nil value for X's
    XT    :=  temporary X
    XP    :=  previous X

    * Custom
    XFL   :=  front left
    XFR   :=  front right
    XBL   :=  back left
    XBR   :=  back right
                                                                              */

#include "vexuser.h"

//-------------------------------Initialization-------------------------------//
int16_t x, y, r, arm;
int i;
float fl, fr, bl, br, max, nml;

bool enableCurve = 1, armLock = 1, armLockP, liftLock = 1, liftLockP;
Motor_t rArmMotors[] = { kArmL0, kArmL1, kArmR0, kArmR1 };

/* User-defined setup
  The digital motor ports can (and should) be configured here.
    */
void vexUserSetup() {
  vexDigitalConfigure(fDigital, DIG_CONFIG_SIZE(fDigital));
  vexMotorConfigure(fMotors, MOT_CONFIG_SIZE(fMotors));

  vexDigitalPinSet(kArmLock, armLock);
  vexDigitalPinSet(kLiftLock, liftLock);
}

// (let usetup.h access global variables)

/* User-defined initialization
This function is called after all setup is complete and communication has been
established with the master processor. Start other tasks and initialize user
variables here.
*/
void vexUserInit() {
  vexDigitalPinSet(kArmLock, armLock);
  vexDigitalPinSet(kLiftLock, liftLock);
}

/* Autonomous control
  This thread is started when the autonomous period is started
    */
msg_t vexAutonomous(void *arg) {
  (void)arg;
  vexTaskRegister("auton"); // must be called for competition

  while(!chThdShouldTerminate()) {

    vexSleep(25); // must be called, even if for no time
  }

  return (msg_t)0; // no error
}

/* Driver control
  This thread is started when the driver control period is started
    */
msg_t vexOperator(void *arg) {
  (void)arg;
  vexTaskRegister("operator"); // must be called for competition

  while(!chThdShouldTerminate()) {
    //-------------------------Controller Inputs--------------------------//
    // Driving
    x = vexControllerGet(Ch1);
    y = vexControllerGet(Ch2);
    r = vexControllerGet(Ch4);

    // Exponential Curve
    if(vexControllerGet(Btn6U)) enableCurve = 1;
    else if(vexControllerGet(Btn6D)) enableCurve = 0;

    // Arm
    arm = vexControllerGet(Ch2Xmtr2);
    if(vexControllerGet(Btn6DXmtr2)) armLock = 0;
    else if(vexControllerGet(Btn6UXmtr2)) armLock = 1;
    if(vexControllerGet(Btn5DXmtr2)) liftLock = 0;
    else if(vexControllerGet(Btn5UXmtr2)) liftLock = 1;


    //-------------------------Controller Mapping-------------------------//
    vexLcdPrintf(0, 0, "%d", enableCurve);

    if(enableCurve) {
      // Map controller inputs exponentially
      x = kMapControllerInput(x);
      y = kMapControllerInput(y);
      r = kMapControllerInput(r);
    }

    //--------------------------------Arm---------------------------------//
    // Run Arm
    for(i=0; i<4; i++) {
      vexMotorSet(rArmMotors[i], kMapControllerInput(arm));
    }

    // Set arm lock
    if(armLock != armLockP) {
      armLockP = armLock;
      vexDigitalPinSet(kArmLock, armLock);
    }

    // Set lift lock
    if(liftLock != liftLockP) {
      liftLockP = liftLock;
      vexDigitalPinSet(kLiftLock, liftLock);
    }


    //------------------------------Driving-------------------------------//
    // Calculate raw wheel powers
    fl = y + x + r;
    fr = y - x - r;
    bl = y - x + r;
    br = y + x - r;

    // Get maximum absolute value of wheel powers
    max = abs(fl);
    if(abs(fl) > max) max = abs(fr);
    if(abs(bl) > max) max = abs(bl);
    if(abs(br) > max) max = abs(br);

    // Get ratio of greatest wheel power to max power
    if(max > 127) nml = 127.0 / max;
    else nml = 1; // don't change values otherwise

    // Set drive motors to normalized, calculated powers
    vexMotorSet(kDriveFL, (int16_t)(fl * nml));
    vexMotorSet(kDriveFR, (int16_t)(fr * nml));
    vexMotorSet(kDriveBL, (int16_t)(bl * nml));
    vexMotorSet(kDriveBR, (int16_t)(br * nml));


    //--------------------------------------------------------------------//

    vexSleep(25); // must be called, even if for no time
  }

  return (msg_t)0; // no error
}
