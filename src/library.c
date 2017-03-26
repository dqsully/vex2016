#include "main.h"

//--------------------------- Forward Declarations ---------------------------//

// Do no use these in your code, instead use set(kSomethingLock, value)
void setUpperArmLock(int Value);
int getUpperArmLock();
void setLowerArmLock(int Value);
int getLowerArmLock();
void setLiftLock(int Value);
int getLiftLock();



//--------------------------------- Constants --------------------------------//


// All of the autonomous routines
const autonFunc_t aAutonomousFunctions[] = {
  mAutonFunc(autoScore),
  mAutonFunc(autoHang),
  mAutonFunc(autoSkills),
};

// All of the screens for Pre-Autonomous
const screen_t aPreAutonScreens[] = {
  {"Red or Blue?", mOptions("Red", "Blue", "Skills")},
  {"Hot Dog or Hamburger?", mOptions("Hot Dog", "Hamburger")},
  {"Hanging Zone?", mOptions("Yes", "No")},
  {"Autonomous", {-1, NULL}}, // -1 represents autonomous
};

//                        Universalizing Device Library                       //

// Array of proxies (middle-man functions) for specific devices, to let setting the locks be reversed
const deviceProxy_t aDeviceProxies[] = {
  {kUpperArmLock, getUpperArmLock, setUpperArmLock},
  {kLowerArmLock, getLowerArmLock, setLowerArmLock},
  {kLiftLock, getLiftLock, setLiftLock},
};


//                         Global Positioning Library                         //

// Number of times to approximate cardinal sin
const int kTrackingPrecision = 128;
// Physical proportions/properties for tracking
const float kWheelWidth = 370.0, kWheelDiameter = 70.0, kRotationFix = 1/0.971;


//                     Arm Positioning and Locking Library                    //

// Different heights
const int
  kGroundHeight = 100,
  kLockHeight = 550,
  kSoftLaunchHeight = 2900,
  kHardLaunchHeight = 3200;

// Physical properties of the locks and arm reading
const int kUpperLockPosition = 410, kLowerLockPosition = 60, kArmTrim = -50;



//----------------------------- Library Functions ----------------------------//

//                            Extra Math Functions                            //

int min(int a, int b) {
  if(a > b)
    return b;
  return a;
}
int max(int a, int b) {
  if(a < b)
    return b;
  return a;
}
// Returns max(abs(a), abs(b))
float fabsMax(float a, float b) {
  return fmax(fabs(a), fabs(b));
}
// Returns min(abs(a), abs(b))
float fabsMin(float a, float b) {
  return fmin(fabs(a), fabs(b));
}
// Returns min(max(f, a), b), if a is low and b is high
float bound(float f, float a, float b) {
  if(a < b)
    return fmax(fmin(f, b), a);

  return fmin(fmax(f, a), b);
}
// Returns the sign (-1, 0, 1) of the input float
int sign(float n) {
  if(n > 0)
    return 1;
  if(n < 0)
    return -1;
  return 0;
}
// Returns the modulo of the division operation
float mod(float Divisor, float Dividend) {
  return Divisor - Dividend * floor(Divisor / Dividend);
}


//                        Universalizing Device Library                       //


// Gets the appropriate device proxy for the devcice
deviceProxy_t *getProxyForDevice(int DeviceID) {
  int i;

  // Iterate through every proxy
  for(i = 0; i < sizeof(aDeviceProxies); i++)
    // If DeviceID matches, return pointer to that proxy
    if(aDeviceProxies[i].DeviceID == DeviceID)
      return (deviceProxy_t *)(int)(aDeviceProxies + i);

  return NULL;
}

// Gets the value for the appropriate device
int get(int DeviceID) {
  deviceProxy_t *pProxy = getProxyForDevice(DeviceID);

  // If proxy is found and has get member, use it
  if(pProxy != NULL && pProxy->get != NULL)
    return pProxy->get();

  // fallthrough: Proxy not found, continue as normal

  // DeviceID is huge, must be a pointer; treat it like an encoder
  if(DeviceID > 0x08000000)
    return encoderGet((encoder_t)DeviceID);

  // DeviceID is larger than the digital ports; treat it like a motor
  if(DeviceID > kDigital)
    return motorGet(DeviceID - kMotor);

  // DeviceID is larger than the analog ports; treat it like a digital port
  if(DeviceID > kAnalog)
    return digitalRead(DeviceID - kDigital);

  // fallthrough: DeviceID must be an analog port
  return analogRead(DeviceID - kAnalog);
}

// Sets the value for the appropriate device
void set(int DeviceID, int Value) {
  deviceProxy_t *pProxy = getProxyForDevice(DeviceID);

  // If proxy is found and has set member, use it
  if(pProxy != NULL && pProxy->set != NULL)
    return pProxy->set(Value);

  // fallthrough: Proxy not found, continue as normal

  // DeviceID is huge, must be a poiner; treat it like an encoder
  if(DeviceID > 0x08000000)
    return (void)encoderSet((encoder_t)DeviceID, Value);

  // DeviceID is larger than the digital ports; treat it like a motor
  if(DeviceID > kDigital)
    return (void)motorSet(DeviceID - kMotor, Value);

  // DeviceID is larger than the analog ports; treat it like a digital port
  if(DeviceID > kAnalog)
    return (void)digitalWrite(DeviceID - kDigital, Value);

  // fallthrough: DeviceID must be an analog port; do nothing
}

void drive(int power) {
  set(kDriveFL, power);
  set(kDriveFR, power);
  set(kDriveBL, power);
  set(kDriveBR, power);
}


//                           Revamped Motor Library                           //

// A flag-array of booleans indicating the motor directions (0 is normal, 1 is reversed)
uint16_t fMotorDirections;

void motorSetDirection(uint8_t channel, bool direction) {
  // Replace the specific bit with `direction`
  fMotorDirections = (fMotorDirections & ~mMask(fMotorDirections, channel)) | (direction * mMask(fMotorDirections, channel));
}
bool motorGetDirection(uint8_t channel) {
  return fMotorDirections & mMask(fMotorDirections, channel);
}


//                                Task Library                                //

// A flag variable, allowing for up to 32 different registered tasks
uint32_t fTasks;
// Maximum numnber of tasks
const int kMaxTasks = sizeof(fTasks);
// Array of allocated task ids
task_t aTaskIDs[sizeof(fTasks) * 8];
// Array of task handles
taskHandle_t aTaskHandles[sizeof(fTasks) * 8];

// Creates and stores or gets the respective id for a task pointer
status_t getIDForTask(task_t pTask, int *TaskID) {
  int FirstEmpty = -1, i;

  // Iterate through every ID and associated task
  for(i = 0; i < kMaxTasks; i++) {
    // Return the task id if task is found
    if(aTaskIDs[i] == pTask) {
      *TaskID = i;
      return eNone;
    }
    // Record the first empty spot
    if(aTaskIDs[i] == NULL && FirstEmpty == -1) {
      FirstEmpty = i;
    }
  }
  // fallthrough: Task not found; try assigning ID

  // If there are no empty spots left, return an error
  mAssert(FirstEmpty != -1, eTooMany, "There are already the maximum number of tasks registered");

  // A blank spot exists, assign it and output the ID
  aTaskIDs[FirstEmpty] = pTask;
  *TaskID = FirstEmpty;
  return eNone;
}

// Make an fTasks bit true and starts the task
status_t registerTask(task_t pTask, void *Parameters) {
  int ErrorCode, TaskID;

  // Retrieve the ID for the task
  ErrorCode = getIDForTask(pTask, &TaskID);

  // Mark the task (by id) as active in fTasks
  fTasks |= mMask(fTasks, TaskID);

  // Start the task and store its instance
  aTaskHandles[TaskID] = taskCreate((TaskCode)pTask, kTaskDefaultStackSize, Parameters, kTaskPriorityDefault);

  // Return the error code, if there was one
  return ErrorCode;
}

// Make an fTasks bit false and stops the task
status_t deregisterTask(task_t pTask) {
  int ErrorCode, TaskID;

  // Retrieve the ID for the task
  ErrorCode = getIDForTask(pTask, &TaskID);

  // Mark the task (by id) as inactive in fTasks
  fTasks &= ~mMask(fTasks, TaskID);

  // Stop the task
  taskDelete(aTaskHandles[TaskID]);
  aTaskHandles[TaskID] = 0;

  return ErrorCode;
}

// Read an fTasks bit, based on the provided task
bool isTaskActive(task_t pTask) {
  int i;

  // Iterate through every ID and associated task
  for(i = 0; i < kMaxTasks; i++) {
    // If task found, return its state
    if(aTaskIDs[i] == pTask)
      return fTasks & mMask(fTasks, i);
  }
  // fallthrough: Task ID not found; Task cannot be active; return false
  return false;
}

// Resets task registration, but does not actually stop any tasks
void stopAllTasks() {
  int i;

  for(i = 0; i < sizeof(fTasks) * 8; i++) {
    if(fTasks & mMask(fTasks, i))
      deregisterTask(aTaskIDs[i]);
  }
}

// Wait until all tasks represented in arguments stop (should only be called by the mWaitForTasks macro)
void _waitForTasks(int cArgs, ...) {
  typeof(fTasks) Mask = 0;
  va_list TaskArgs;
  task_t Task;
  int i, TaskID;

  // Initialize for reading from the variadic arguments
  va_start(TaskArgs, cArgs);

  // Iterate through the variadic arguments
  for(i = 0; i < cArgs; i++) {
    // Read argument into Task variable
    Task = va_arg(TaskArgs, task_t);
    // Read ID for Task into TaskID variable
    getIDForTask(Task, &TaskID);
    // Add TaskID mask to Mask
    Mask |= mMask(Mask, TaskID);
  }

  // Deinitialize for reading from the variadic arguments
  va_end(TaskArgs);

  // Wait for specified tasks to deregister using generated mask
  while(fTasks & Mask)
    delay(20);
}

// Wait until all tasks represented in arguments stop (should only be called by the mWaitForTasks macro)
void _waitForTasksBut(int cArgs, ...) {
  typeof(fTasks) Mask = 0;
  va_list TaskArgs;
  task_t Task;
  int i, TaskID;

  // Initialize for reading from the variadic arguments
  va_start(TaskArgs, cArgs);

  // Iterate through the variadic arguments
  for(i = 0; i < cArgs; i++) {
    // Read argument into Task variable
    Task = va_arg(TaskArgs, task_t);
    // Read ID for Task into TaskID variable
    getIDForTask(Task, &TaskID);
    // Add TaskID mask to Mask
    Mask |= mMask(Mask, TaskID);
  }

  // Deinitialize for reading from the variadic arguments
  va_end(TaskArgs);

  // Wait for specified tasks to deregister using generated mask
  while(fTasks & ~Mask)
    delay(20);
}

// Gets a specific parameter from a parameter array
param_t *getParameter(paramType_t ParamType, params_t *pParameters) {
  int i;

  for(i = 0; i < pParameters->cParams; i++)
    if(pParameters->Params[i].ID == ParamType)
      return (pParameters->Params + i);

  return NULL;
}


//                         Global Positioning Library                         //

// Global position of the robot, updated by the positionTracking task
position_t gPosition;
// Global rotation offset of the robot to the encoder offsets
float rotationOffset;

// Using a bunch of trigonometry, calculate the delta position of the robot using arc lengths and a circle approximation
void calculateMove(float al, float ar, position_t *Delta) {
  float
    t = (al - ar) / (kWheelWidth * 2) * kRotationFix, t2 = t * t,
    sum = 1, n = 1, c = 1;

  // Calculate limit of sin(t)/t for kTrackingPrecision loops
  for(int i = 0; i < kTrackingPrecision; i++) {
    n *= -t2 / (++c * ++c);
    sum += n;
  }

  float h = kWheelWidth * sin(t) + ar * sum;

  Delta->x = h * sin(t);
  Delta->y = h * cos(t);
  Delta->r = t;
}

// Rotate an (x,y) coordinate by Theta radians
void rotateCoordinate(position_t *Coord, float Theta) {
  // Cache the coordinate values for matrix multiplication
  float x = Coord->x, y = Coord->y;

  // Multiply by a matrix and output
  Coord->x = -cos(Theta)*x + sin(Theta)*y;
  Coord->y =  sin(Theta)*x + cos(Theta)*y;
}

// Convert a single encoder tick (degree) to millimeters for the tracking wheels
float encoderToMm(float value) {
  return value / 360.0 * kWheelDiameter * PI;
}

// Task which automatically tracks the position of the robot
void globalPositioningTask(params_t *parameter) {
  // We don't need parameter, so avoid compiler warnings
  (void)parameter;

  position_t DeltaMove;
  int LeftP = get(kEncoderLeft), RightP = get(kEncoderRight), LeftT, RightT;

  while(true) {
    // Wait for new data to come in (sensors only update every 20ms)
    delay(20);

    // Calculate the differences in the wheels over the past 20mx
    LeftT = encoderToMm(get(kEncoderLeft));
    RightT = encoderToMm(get(kEncoderRight));

    // Calculate the global rotation, based on the offset of the sides
    gPosition.r = (LeftT - RightT) / kWheelWidth * kRotationFix + rotationOffset;

    // Calculate relative delta (x,y)
    calculateMove(LeftT - LeftP, RightT - RightP, &DeltaMove);

    LeftP = LeftT;
    RightP = RightT;

    // Rotate relative delta (x,y) coordinate into global (x,y) coordinate
    rotateCoordinate(&DeltaMove, gPosition.r);

    // Update global position
    gPosition.x += DeltaMove.x;
    gPosition.y += DeltaMove.y;
  }
}

void setGlobalPosition(float x, float y, float r) {
  set(kEncoderLeft, 0);
  set(kEncoderRight, 0);
}
//
// // The handle for the only globalPositioningTask
// taskHandle_t TrackingTask;
//
// // Start and register the tracking task
// status_t startTracking() {
//   // Prevent creating multiple of the same globalPositioningTask
//   mAssert(!isTaskActive(globalPositioningTask), eAlreadySet, "The globalPositioningTask is already created");
//
//   registerTask(globalPositioningTask);
//   TrackingTask = taskCreate(globalPositioningTask, kTaskDefaultStackSize, NULL, kTaskPriorityDefault);
//
//   return eNone;
// }
//
// // Stop and deregister the tracking task
// status_t stopTracking() {
//   // Prevent stopping any other tasks at handle TrackingTask
//   mAssert(isTaskActive(globalPositioningTask), eAlreadySet, "The globalPositioningTask is already created");
//
//
//   deregisterTask(globalPositioningTask);
//   taskDelete(TrackingTask);
//
//   return eNone;
// }


//                     Arm Positioning and Locking Library                    //

// Calculated state of the arm, depending on the locks
armLockState_t ArmLockState;
// Calculated height of the arm motors, disregarding the locks
int ArmHeight;
// Flag variable for the different locks
uint8_t fLocks;

// Updates the ArmHeight variable
void updateArm() {
  ArmHeight = get(kArmPot) + kArmTrim;
}

// Sets the arm motor powers
void arm(int power) {
  set(kArmR0, power);
  set(kArmR1, power);
  set(kArmL0, power);
  set(kArmL1, power);
}

// Device Proxy Handler for setting the upper arm lock
void setUpperArmLock(int State) {
  // Use the lower-level call to set the pneumatic
  digitalWrite(kUpperArmLock - kDigital, !State);
  // Update the first bit in fLocks
  fLocks = (fLocks & ~mMask(fLocks, 0)) | (!State * mMask(fLocks, 0));

  if(State) {
    // If set to locked
    if(ArmHeight < kUpperLockPosition && ArmLockState != kLockedAtGround)
      // If below upper lock and not already locked at bottom, must be locked at launch
      ArmLockState = kLockedAtLaunch;
  } else if(ArmLockState == kLockedAtLaunch) {
    // If set to unlocked and was locked at launch
    ArmLockState = kUnlocked;
  }
}

// Device Proxy Hanlder for getting the upper arm lock
int getUpperArmLock() {
  return !!(fLocks & mMask(fLocks, 0));
}

// Device Proxy Handler for setting the lower arm lock
void setLowerArmLock(int State) {
  // Use the lower-level call to set the pneumatic
  digitalWrite(kLowerArmLock - kDigital, !State);
  // Update the second bit in fLocks
  fLocks = (fLocks & ~mMask(fLocks, 1)) | (!State * mMask(fLocks, 1));

  if(State) {
    // If set to locked
    if(ArmHeight < kLowerLockPosition)
      // If below lower lock, must be locked at ground
      ArmLockState = kLockedAtGround;
  } else if(ArmLockState == kLockedAtGround) {
    // If set to unlocked and was locked at ground
    if(ArmHeight < kUpperLockPosition && get(kUpperArmLock))
      // If below upper lock and upper lock is set, must now be locked at launch
      ArmLockState = kLockedAtLaunch;
    else
      // Otherwise, set to unlocked
      ArmLockState = kUnlocked;
  }
}

// Device Proxy Hanlder for getting the lower arm lock
int getLowerArmLock() {
  return !!(fLocks & mMask(fLocks, 1));
}

// Device Proxy Handler for settting the lifr lock
void setLiftLock(int State) {
  // Use the lower-level call to set the pneumatic
  digitalWrite(kLiftLock - kDigital, !State);
  // Update the third bit in fLocks
  fLocks = (fLocks & ~mMask(fLocks, 2)) | (!State * mMask(fLocks, 2));
}

// Device Proxy Hanlder for getting the lift lock
int getLiftLock() {
  return !!(fLocks & mMask(fLocks, 2));
}


//                             User-Defined Tasks                             //

void driveToTask(params_t *pParameters) {
  const int kIts = 20;

  float
    dX, dY, Distance, dTheta, DesiredRotation,
    DriveRight, DriveLeft, DriveForward, DriveRotate, DriveSideMax,
    DistanceP = 0, dThetaP = 0,
    DistanceI = 0, dThetaI = 0,
    DriveVel, RotateVel, // Averages of the arrays below
    ExtraPower = 0, ExtraPowerDirection;
  float DriveVelocities[kIts], RotateVelocities[kIts];
  int i;

  // Parameters
  param_t *pParam;
  // Defaults
  float
    kX = 0, kY = 0, kDirection = 0,
    kPDrive = 0.3,  kDDrive = 1.5,  kIDrive = 0,
    kPRotate = 500, kDRotate = 1,   kIRotate = 0,
    kStopRadius = 80, kAdjustRadius = 350;
  // Try loading from input
  if(pParameters != NULL) {
    mLoadParam(pParameters, X, pParam, kX);
    mLoadParam(pParameters, Y, pParam, kY);
    mLoadParam(pParameters, Direction, pParam, kDirection);
    mLoadParam(pParameters, KPDrive, pParam, kPDrive);
    mLoadParam(pParameters, KDDrive, pParam, kDDrive);
    mLoadParam(pParameters, KIDrive, pParam, kIDrive);
    mLoadParam(pParameters, KPRotate, pParam, kPRotate);
    mLoadParam(pParameters, KDRotate, pParam, kDRotate);
    mLoadParam(pParameters, KIRotate, pParam, kIRotate);
    mLoadParam(pParameters, StopRadius, pParam, kStopRadius);
    mLoadParam(pParameters, AdjustRadius, pParam, kAdjustRadius);
  }
  // Setup Parameters
  kDirection = sign(kDirection);
  // TODO: If kDirection is 0, automatically select the proper direction
  if(kDirection == 0)
    kDirection = 1;


  // Fill with zeroes
  for(i = 0; i < kIts; i++) {
    DriveVelocities[i] = 0;
    RotateVelocities[i] = 0;
  }

  while(true) {
    // Get the dimensions of the right triangle from current position to the destination
    dX = kDirection * (kX - gPosition.x);
    dY = kDirection * (kY - gPosition.y);
    Distance = sqrt(dX * dX + dY * dY);

    // Cheching distance here just in case it equal 0 ( preventind divide by 0 exception)
    // End move if we get close enough to the target
    if(Distance < kStopRadius || Distance == 0)
      break;

    // Figure out how much we want to rotate to face our destination (from facing global forward)
    DesiredRotation = asin(dX / Distance);

    // Inverse Sine only calculates for half of all possibilities (positive y), so calculate if we are in the other half
    if(dY < 0)
      DesiredRotation = PI - DesiredRotation;

    // Figure out how much we want to rotate from our current position, wrapping the number if outside +-180deg (and used to flip if facing backwards)
    dTheta = mod(DesiredRotation - gPosition.r + PI, 2 * PI) - PI;

    // Shift values in the velocity arrays by one
    for(i = 0; i < kIts - 1; i++) {
      DriveVelocities[i] = DriveVelocities[i + 1];
      RotateVelocities[i] = RotateVelocities[i + 1];
    }

    // Record the most recent distance difference
    DriveVelocities[kIts - 1] = Distance - DistanceP;
    // Record the most recent rotation difference
    RotateVelocities[kIts - 1] = dTheta - dThetaP;

    // Get a rolling average of all of the velocities
    DriveVel = RotateVel = 0;
    for(i = 0; i < kIts; i++) {
      DriveVel += DriveVelocities[i] * (i + 1);
      RotateVel += RotateVelocities[i] * (i + 1);
    }
    DriveVel /= kIts * (kIts + 1) / 2;
    RotateVel /= kIts * (kIts + 1) / 2;

    // Calculate integrals
    DistanceI += Distance;
    dThetaI += dTheta;

    // If robot is stopped, increase the integral util it moves.
    if(DistanceP == Distance)
      ExtraPower = 40;
    else if(ExtraPower > 0)
      ExtraPower--;

    // Hack to make sure that the robot doesn't try to dig its tail into the ground when driving backwards
    if(kDirection < 0)
      ExtraPowerDirection = 0;
    else
      ExtraPowerDirection = 1;

    // Drive PID controller
    DriveForward =
      kPDrive * Distance +
      DriveVel * kDDrive +
      bound(DistanceI * kIDrive, -10, 10) +
      ExtraPowerDirection * ExtraPower;
    DriveForward = kDirection * bound(DriveForward, -127, 127);

    // Rotate PID controller
    if(Distance > kAdjustRadius)
      DriveRotate = dTheta * kPRotate;
    else
      DriveRotate = dTheta * kPRotate * Distance/kAdjustRadius * Distance/kAdjustRadius;
    DriveRotate +=
      RotateVel * kDRotate +
      bound(dThetaI * kIRotate, -10, 10);

    // Get wheel powers
    DriveRight = DriveForward - DriveRotate;
    DriveLeft = DriveForward + DriveRotate;

    // Normalize wheel powers to not be greater than 127 (or less than -127)
    DriveSideMax = fabsMax(DriveRight, DriveLeft);
    if(DriveSideMax > 127) {
      DriveRight *= 127.0 / DriveSideMax;
      DriveLeft *= 127.0 / DriveSideMax;
    }

    // Run the motors
    set(kDriveBL, DriveLeft);
    set(kDriveFL, DriveLeft);
    set(kDriveBR, DriveRight);
    set(kDriveFR, DriveRight);

    // Record values for next calculations
    DistanceP = Distance;
    dThetaP = dTheta;

    // Give control to other tasks temporarily
    delay(20);
  }

  // Make sure the robot stops moving
  driveStop();

  // Register that the task has stopped
  deregisterTask(driveToTask);
}

void rotateToTask(params_t *pParameters) {
  const int kIts = 3;

  float
    dX, dY, Distance, dTheta, DesiredRotation,
    DriveRotate,
    dThetaP = 0,
    dThetaI = 0,
    RotateVel, // Average of the array below
    NotMoving = 0, ExtraPower = 0, ExtraPowerDirection;
  float RotateVelocities[kIts];
  int i;

  // Parameters
  param_t *pParam;
  // Defaults
  float
    kX = 0, kY = 0, kR = 0,
    kPRotate = 0, kDRotate = 0, kIRotate = 0,
    kStopRotation = 0.6,
    kCalculateFromVector = 0;
  // Try loading from input
  if(pParameters != NULL) {
    mLoadParam(pParameters, X, pParam, kX);
    mLoadParam(pParameters, Y, pParam, kY);
    mLoadParam(pParameters, R, pParam, kR);
    mLoadParam(pParameters, KPRotate, pParam, kPRotate);
    mLoadParam(pParameters, KDRotate, pParam, kDRotate);
    mLoadParam(pParameters, KIRotate, pParam, kIRotate);
    mLoadParam(pParameters, StopRotation, pParam, kStopRotation);
    mLoadParam(pParameters, CalculateFromVector, pParam, kCalculateFromVector);
  }
  // Setup Parameters
  if(kCalculateFromVector) {
    dX = kX - gPosition.x;
    dY = kY - gPosition.y;

    Distance = sqrt(dX * dX + dY * dY);

    DesiredRotation = asin(dX / Distance);

    if(dY < 0)
      DesiredRotation = PI - DesiredRotation;
  } else
    DesiredRotation = kR;

  // Fill with zeroes
  for(i = 0; i < kIts; i++) {
    RotateVelocities[i] = 0;
  }

  while(true) {
    // Figure out how much we want to rotate from our current rotation, wrapping the number if outside +-180deg
    dTheta = mod(DesiredRotation - gPosition.r + PI, 2 * PI) - PI;

    // End move if we get close enough to the target
    if(abs(dTheta) < kStopRotation)
      break;

    // Shift values in the velocity array by one
    for(i = 0; i < kIts + 1; i++)
      RotateVelocities[i] = RotateVelocities[i + 1];

    // Record the most recent rotation difference
    RotateVelocities[kIts - 1] = dTheta - dThetaP;

    // Get a rolling average of all of the velocities
    RotateVel = 0;
    for(i = 0; i < kIts; i++)
      RotateVel += RotateVelocities[i] * (i + 1);
    RotateVel /= kIts * (kIts + 1) / 2;

    // Calculate Integral
    dThetaI += dTheta;

    // If robot is stopped, increase the increase the integral until it moves
    // Also, timeout if we've been stopped for too long
    if(dThetaP == dTheta) {
      ExtraPower = 15; //80;
      NotMoving += 1;
    } else {
      if(ExtraPower > 0)
        ExtraPower -= 1;
      NotMoving = 0;
    }

    // Break from the timeout
    if(NotMoving > 50)
      break;

    if(dTheta > DesiredRotation)
      ExtraPowerDirection = -1;
    else
      ExtraPowerDirection = 1;

    // Rotate PID controller
    DriveRotate =
      dTheta * kPRotate +
      -RotateVel * kDRotate +
      bound(dThetaI * kIRotate, -10, 10) +
      ExtraPowerDirection * ExtraPower;
    DriveRotate = bound(DriveRotate, -127, 127);

    // Run the motors
    set(kDriveBL, DriveRotate);
    set(kDriveFL, DriveRotate);
    set(kDriveBR, -DriveRotate);
    set(kDriveFR, -DriveRotate);

    // Give control to other tasks temporarily
    delay(20);
  }

  // Make sure the robot doesn't keep moving
  driveStop();

  // Register that the task has stopped
  deregisterTask(rotateToTask);
}

void driveAndRotateTask(params_t *pParameters) {
  param_t
    *pParam,
    DriveParamList[3], RotateParamList[4];
  params_t DriveParams = {0, DriveParamList}, RotateParams = {0, RotateParamList};

  // Translate parameters (messy)
  pParam = getParameter(mP(DriveX), pParameters);
  if(pParam != NULL)
    DriveParams.Params[DriveParams.cParams++] = (param_t){mP(X), pParam->Value};

  pParam = getParameter(mP(DriveY), pParameters);
  if(pParam != NULL)
    DriveParams.Params[DriveParams.cParams++] = (param_t){mP(Y), pParam->Value};

  pParam = getParameter(mP(Direction), pParameters);
  if(pParam != NULL)
    DriveParams.Params[DriveParams.cParams++] = (param_t){mP(Direction), pParam->Value};


  pParam = getParameter(mP(RotateX), pParameters);
  if(pParam != NULL)
    RotateParams.Params[DriveParams.cParams++] = (param_t){mP(X), pParam->Value};

  pParam = getParameter(mP(RotateY), pParameters);
  if(pParam != NULL)
    RotateParams.Params[DriveParams.cParams++] = (param_t){mP(Y), pParam->Value};

  pParam = getParameter(mP(R), pParameters);
  if(pParam != NULL)
    RotateParams.Params[DriveParams.cParams++] = (param_t){mP(R), pParam->Value};

  pParam = getParameter(mP(CalculateFromVector), pParameters);
  if(pParam != NULL)
    RotateParams.Params[DriveParams.cParams++] = (param_t){mP(CalculateFromVector), pParam->Value};


  registerTask(driveToTask, &DriveParams);
  mWaitForTasks(driveToTask);

  delay(500);

  registerTask(rotateToTask, &RotateParams);

  deregisterTask(driveAndRotateTask);
}

void driveTwiceTask(params_t *pParameters) {
  param_t
    *pParam,
    FirstDriveParamList[3], SecondDriveParamList[3];
  params_t FirstDriveParams = {0, FirstDriveParamList}, SecondDriveParams = {0, SecondDriveParamList};

  // Translate parameters (messy)
  pParam = getParameter(mP(DriveX), pParameters);
  if(pParam != NULL)
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(X), pParam->Value};

  pParam = getParameter(mP(DriveY), pParameters);
  if(pParam != NULL)
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(Y), pParam->Value};

  pParam = getParameter(mP(Direction), pParameters);
  if(pParam != NULL)
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(Direction), pParam->Value};


  pParam = getParameter(mP(DriveX2), pParameters);
  if(pParam != NULL)
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(X), pParam->Value};

  pParam = getParameter(mP(DriveY2), pParameters);
  if(pParam != NULL)
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(Y), pParam->Value};

  pParam = getParameter(mP(Direction2), pParameters);
  if(pParam != NULL)
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){mP(Direction), pParam->Value};

  float kWaitTime = 500;

  mLoadParam(pParameters, WaitTime, pParam, kWaitTime);


  registerTask(driveToTask, &FirstDriveParams);
  mWaitForTasks(driveToTask);

  delay(kWaitTime);

  registerTask(driveToTask, &SecondDriveParams);
  mWaitForTasks(driveToTask);

  // Register that the task has stopped
  deregisterTask(driveTwiceTask);
}

void moveArmToTask(params_t *pParameters) {
  bool GoingUp;

  // Parameters
  param_t *pParam;
  // Defaults
  float kArmSet = 0;
  // Try loading from input
  if(pParameters != NULL) {
    mLoadParam(pParameters, ArmSet, pParam, kArmSet);
  }
  // Setup Parameters
  GoingUp = (ArmHeight < kArmSet);

  while(true) {
    updateArm();

    if(GoingUp) {
      arm(127);

      if(ArmHeight > kArmSet)
        break;
    } else {
      arm(-127);

      if(ArmHeight < kArmSet)
        break;
    }
  }

  // Make sure the arm doesn't keep moving
  armStop();

  // Register that the task has stopped
  deregisterTask(moveArmToTask);
}

void loadArmTask(params_t *pParameters) {
  //Parameters
  param_t *pParam;
  // Defaults
  bool kLockBackWhenDone = false;
  // Try loading from input
  if(pParameters != NULL) {
    mLoadParam(pParameters, LockBackWhenDone, pParam, kLockBackWhenDone);
  }
  // Setup Parameters
  // None to be setup

  params_t P1;

  // Move arm to ground height
  P1 = mParams(mParam(ArmSet, kGroundHeight));
  registerTask(moveArmToTask, &P1);
  mWaitForTasks(moveArmToTask);

  set(kLowerArmLock, true);
  // Push arm down
  arm(-80);
  delay(100);

  // Move arm to full launch
  P1 = mParams(mParam(ArmSet, kHardLaunchHeight));
  registerTask(moveArmToTask, &P1);
  mWaitForTasks(moveArmToTask);

  if(kLockBackWhenDone) {
    setLiftLock(true);

    // Wait for lock to engage
    delay(200);
  }

  // Register that the task has stopped
  deregisterTask(loadArmTask);
}

void unfoldTask(params_t *pParameters) {
  params_t P1;

  // Get ready to unfold arm
  P1 = mParams(mParam(ArmSet, 550));
  registerTask(moveArmToTask, &P1);
  mWaitForTasks(moveArmToTask);

  // Unfold arm
  arm(-127);
  delay(1000);
  armStop();

  // Register that the task has stopped
  deregisterTask(unfoldTask);
}


//                                 LCD Library                                //

bool getOptionCountFromScreen(screen_t Screen, int *Count) {
  *Count = Screen.hOptions.hcOptions;

  if(*Count == -1) {
    *Count = sizeof(aAutonomousFunctions);
    return true;
  }

  return false;
}

const char *getOptionFromScreen(screen_t Screen, int Index) {
  int cOptions;
  bool IsAuton = getOptionCountFromScreen(Screen, &cOptions);

  if(Index >= Screen.hOptions.hcOptions || Index < 0)
    return NULL;

  if(IsAuton)
    return aAutonomousFunctions[Index].Name;

  return Screen.hOptions.haOptions[Index];
}

void displayPreAutonScreen(screen_t Screen, int Index, int cOptions) {
  lcdClear(kLCD);

  // Display the question
  lcdSetText(kLCD, 0, Screen.hQuestion);

  const char
    *Prev = getOptionFromScreen(Screen, (Index - 1) % cOptions),
    *Current = getOptionFromScreen(Screen, Index & cOptions),
    *Next = getOptionFromScreen(Screen, (Index + 1) % cOptions);

  if(Prev == NULL)
    Prev = "Back";
  if(Current == NULL)
    Current = "Back";
  if(Next == NULL)
    Next = "Back";

  int
    CenterPosition = 7 - strlen(Current) / 2,
    LeftPosition = min(0, CenterPosition - 1 - strlen(Prev)),
    RightPosition = max(16 - strlen(Next), CenterPosition + 1 + strlen(Current));

  char Output[17] = {0};
  int i;

  // Display possibly truncated previous option
  for(i = LeftPosition; Prev[i] != 0 && i < LeftPosition + 8; i++)
    Output[i - LeftPosition] = Prev[i];

  // Display left arrow
  if(CenterPosition > 0)
    Output[CenterPosition - 1] = 0xf7;

  // Display current option (centered)
  for(i = 0; Current[i] != 0 && i < 16; i++)
    Output[CenterPosition + i] = Current[i];

  // Display right arrow
  if(CenterPosition + strlen(Current) < 16)
    Output[CenterPosition + strlen(Current)] = 0xf6;

  // Display possibly truncated next option
  for(i = RightPosition; i < 16 && Next[i - RightPosition] != 0; i++)
    Output[RightPosition] = Next[i - RightPosition];


  // Actually display the text
  lcdSetText(kLCD, 1, Output);
}

void runSetupQuestions() {
  struct {
    int Raw : 3;
    int Left : 2;
    int Middle : 2;
    int Right : 2;
  } Buttons;

  int iScreen = 0, Index = 0, cActualOptions, cOptions;

  getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
  cOptions = cActualOptions;

  bool ShowScreen = true;

  lcdSetBacklight(kLCD, true);

  while(iScreen < sizeof(aPreAutonScreens)) {
    // Skip all screens
    if(joystickGetDigital(1, 8, kBtnUp))
      break;

    // Decipher button inputs
    Buttons.Raw = lcdReadButtons(kLCD);

    if(Buttons.Raw == 1) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;

    if(Buttons.Raw == 2) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;

    if(Buttons.Raw == 4) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;

    // Update LCD screen if something changed
    if(ShowScreen) {
      displayPreAutonScreen(aPreAutonScreens[iScreen], Index, cOptions);
      ShowScreen = false;
    }

    // Handle button inputs
    if(Buttons.Left == 1) {
      // Scroll left in options
      Index = (Index - 1) % cOptions;
      ShowScreen = true;
    } else if(Buttons.Right == 1) {
      // Scroll right in options
      Index = (Index + 1) % cOptions;
      ShowScreen = true;
    } else if(Buttons.Middle == 1) {
      // Go back if the "Back" option is pressed
      if(Index == cActualOptions) {
        Index = 0;

        iScreen--;
        ShowScreen = true;

        getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
        if(iScreen > 0)
          cOptions = cActualOptions + 1;
        else
          cOptions = cActualOptions;

        // Skip running the rest of the code in the loop, as to avoid interference
        continue;
      }

      // Otherwise, let the programmer do things

      handleLCDOption(&iScreen, Index, aPreAutonScreens[iScreen]);

      // Show next screen now that an option has been pressed
      Index = 0;

      iScreen++;
      ShowScreen = true;

      getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
      cOptions = cActualOptions + 1;
    }
  }
}
