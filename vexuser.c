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

/* User-defined initialization
  This function is called after all setup is complete and communication has been
  established with the master processor. Start other tasks and initialize user
  variables here.
    */
void vexUserInit() {

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

  // driving variables
  int16_t x, y, r;
  float fl, fr, bl, br, max, nml;

  bool enableCurve;


  while(!chThdShouldTerminate()) {
    // Get joystick values
    x = vexControllerGet(Ch4);
    y = vexControllerGet(Ch3);
    r = vexControllerGet(Ch1);

    // Detect if curve should be enabled
    if(vexControllerGet(Btn6U) == 1) enableCurve = 1;
    else if(vexControllerGet(Btn5U)) enableCurve = 0;

    vexLcdPrintf(0, 0, "%d", x);

    if(enableCurve) {
      // Map controller inputs exponentially
      x = kMapControllerInput(x);
      y = kMapControllerInput(y);
      r = kMapControllerInput(r);
    }

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

    vexSleep(25); // must be called, even if for no time
  }

  return (msg_t)0; // no error
}
