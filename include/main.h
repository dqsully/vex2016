#ifndef _fMainH
#define _fMainH

#include <API.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>

//=================================  Global ==================================//

//                               Generic Macros                               //

// Wrap code for macros (it's a hack, really)
#define mWrapCode(code) do{code}while(0)

// Get the mask for a certain flag (for size) and bit
#define mMask(flag, bit) ((typeof(flag))1 << (bit))

// Count the number of arguments in a macro
#define mCountArgs(...) (sizeof((int[]){0, ##__VA_ARGS__})/sizeof(int)-1)
// Count the number of arguments in a macro, using pointers to avoid certain warnings
#define mCountPointerArgs(...) (sizeof((void *[]){NULL, ##__VA_ARGS__})/sizeof(int)-1)

// Uncomment the next line only when debug output is necessary, as it slows down the robot
#define mDebug

#define PI 3.141592653589793

#define kBtnUp JOY_UP
#define kBtnDown JOY_DOWN
#define kBtnLeft JOY_LEFT
#define kBtnRight JOY_RIGHT

//                              Errors and Such                               //

// Any function that could possibly make an error should return one of these (if it needs to output something, use an output parameter)
// Also, functions may work properly but still return an error value (like registerTask, for example)
typedef enum {
  eNone = 0,
  eGeneric, // Try your best not to use this
  eTooMany,
  eNotEnough,
  eTooLarge,
  eTooSmall,
  eAlreadySet,
  eNonexistant,
} status_t;

#ifdef mDebug

  // A variable pointing to the message for the last-produced error
  char *gErrorMessage;

  // Returns an error and sets the error message
  status_t _error(status_t Status, char *Message);
  // Return an error and store the message
  #define mError(status, message) _error(status, message)

#else // mDebug

  // Return an error, but discard the message
  #define mError(status, message) return (status)

#endif // mDebug

// Return an error if boolean is not true, with the status and message passed to mError
#define mAssert(boolean, status, message) mWrapCode(if(!(boolean)) \
  return mError(status, message);)

// Set error and goto error label if boolean is not true, with the status and message passed to mError
#define mCheck(boolean, status, message) mWrapCode(if(!(boolean)) { \
  ErrorCode = mError(status, message); \
  goto error; \
})



//=============================== extensions.c ===============================//

// Override the old motorGet code
int _motorGet(uint8_t channel);
#define motorGet(channel) _motorGet(channel)
// Override the old motorSet code
void _motorSet(uint8_t channel, int speed);
#define motorSet(channel, speed) _motorSet(channel, speed);
// Sets the encoder to a specified value
void encoderSet(Encoder enc, int32_t value);



//================================ library.c =================================//

typedef struct {
  const char *Name;
  void (*Func)(void);
} autonFunc_t;

// Array of autonomous functions
extern const autonFunc_t aAutonomousFunctions[];

#define mAutonFunc(func) {#func, func}

//                            Extra Math Functions                            //

int min(int a, int b);
int max(int a, int b);
// Returns max(abs(a), abs(b))
float fabsMax(float a, float b);
// Returns min(abs(a), abs(b))
float fabsMin(float a, float b);
// Returns min(max(f, a), b), if a is low and b is high
float bound(float f, float a, float b);
// Returns the sign (-1, 0, 1) of the input float
int sign(float n);
// Returns the modulo of the division operation
float mod(float Divisor, float Dividend);


//                        Universalizing Device Library                       //

#define kAnalog 0
#define kDigital 10
#define kMotor 30

typedef struct {
  int DeviceID;
  int (*get)(void);
  void (*set)(int Value);
} deviceProxy_t;
typedef Encoder encoder_t;

// Gets the value for the appropriate device
int get(int DeviceID);
// Sets the value for the appropriate device, if possible
void set(int DeviceID, int Value);

void drive(int power);
#define driveStop() drive(0)


//                           Revamped Motor Library                           //

#define NORMAL 0
#define REVERSED 1

// Set the direction of a motor
void motorSetDirection(uint8_t channel, bool direction);
// Get the direction of a motor
bool motorGetDirection(uint8_t channel);


//                                Task Library                                //

// Rename PROS' task-related macros to things conformant to our coding conventions
#define kTaskDefaultStackSize TASK_DEFAULT_STACK_SIZE
#define kTaskMinimalStackSize TASK_MINIMAL_STACK_SIZE
#define kTaskPriorityDefault TASK_PRIORITY_DEFAULT
#define kTaskPriorityLowest TASK_PRIORITY_LOWEST
#define kTaskPriorityHighest TASK_PRIORITY_HIGHEST
#define kTaskMaxPriorities TASK_MAX_PRIORITIES
enum {
  kTaskDead,
  kTaskRunning,
  kTaskRunnable,
  kTaskSleeping,
  kTaskSuspended
};

#define mP(Type) kParam##Type

// Define a list of all possible task parameters
typedef enum {
  mP(X) = 1, // Make sure a param type of 0 is never matched
  mP(Y),
  mP(R),
  mP(Direction),
  mP(KPDrive),
  mP(KDDrive),
  mP(KIDrive),
  mP(KPRotate),
  mP(KDRotate),
  mP(KIRotate),
  mP(StopRadius),
  mP(StopRotation),
  mP(AdjustRadius),
  mP(CalculateFromVector),
  mP(DriveX),
  mP(DriveY),
  mP(RotateX),
  mP(RotateY),
  mP(ToRotation),
  mP(DriveX2),
  mP(DriveY2),
  mP(Direction2),
  mP(ArmSet),
  mP(LockBackWhenDone),
  mP(WaitTime),
} paramType_t;

// Allow any number of parameters for the tasks
typedef struct {
  paramType_t ID;
  float Value;
} param_t;
typedef struct {
  int cParams;
  param_t *Params; // <- this is an array
} params_t;

// Rename PROS's TaskCode in their API to something conformant to our coding conventions
typedef void (*task_t)(params_t *pParameters);
typedef TaskHandle taskHandle_t;

#define mParam(ParamType, Value) {mP(ParamType), Value}
#define mParams(...) (params_t){sizeof((param_t []){__VA_ARGS__}), (param_t []){__VA_ARGS__}}
#define mLoadParam(pParameters, ParamType, pParamStore, Output) mWrapCode( \
  (pParamStore) = getParameter(mP(ParamType), (pParameters)); \
  if((pParamStore) != NULL) \
    (Output) = (pParamStore)->Value; \
)


// A flag variable, allowing for up to 32 registered tasks
extern uint32_t fTasks;

// Make an fTasks bit true, based on the provided task
status_t registerTask(task_t pTask, void *Parameter);
// Make an fTasks bit false, based on the provided task
status_t deregisterTask(task_t pTask);
// Read an fTasks bit, based on the provided task
bool isTaskActive(task_t pTask);
// Resets task registration, but does not actually stop any tasks
void stopAllTasks();
// Wait for a list of tasks to stop
#define mWaitForTasks(...) _waitForTasks(mCountPointerArgs(__VA_ARGS__), __VA_ARGS__)
// Wait until all tasks represented in arguments stop (should only be called by the mWatiForTasks macro)
void _waitForTasks(int cArgs, ...);
// Wait for a list of tasks to stop
#define mWaitForTasksBut(...) _waitForTasks(mCountPointerArgs(__VA_ARGS__), __VA_ARGS__)
// Wait until all tasks represented in arguments stop (should only be called by the mWatiForTasks macro)
void _waitForTasksBut(int cArgs, ...);

// Gets a specific parameter from a parameter array
param_t *getParameter(paramType_t ParamType, params_t *pParameters);


//                         Global Positioning Library                         //

// Generic struct to hold positional DATA
typedef struct {
  float x, y, r;
} position_t;

// Global position of the robot, updated by the positionTracking task
extern position_t gPosition;

// Set the current global position
void setGlobalPosition(float x, float y, float r);
//
// // Start and register the tracking task
// status_t startTracking();
// // Stop and deregister the tracking task
// status_t stopTracking();


//                     Arm Positioning and Locking Library                    //

// Different heights
extern const int kGroundHeight, kLockHeight, kSoftLaunchHeight, kHardLaunchHeight;

// Different possible states of the arm, depending on the locks
typedef enum {
  kLockedAtGround,
  kLockedAtLaunch,
  kUnlocked,
} armLockState_t;

// Calculated state of the arm, depending on the locks
extern armLockState_t ArmLockState;
// Calculated height of the arm motors, disregarding the locks
extern int ArmHeight;

// Updates the ArmHeight variable
void updateArm();
// Sets the arm motor powers
void arm(int power);
// Shortcut way for defining an alias; stops all arm motors
#define armStop() arm(0);
/*
  Note: the setUpperArmLock, setLowerArmLock, and setLiftLock functions are now
    bundled into the Universalizing Device Library using Device Proxies
*/


//                             User-Defined Tasks                             //

/*
  Global positioning task
  Parameters: (none)
*/
void globalPositioningTask(params_t *parameter);
/*
  Task to automatically drive to a point, not caring about ending rotation
  Parameters:
    X: x coordinate
    Y: y coordinate
    [Direction]: direction to drive (forwards [+] or backwards [-])
    [KPDrive]: kP for drive PID controller
    [KIDrive]: kI for drive PID controller
    [KDDrive]: kD for drive PID controller
    [KPDrive]: kP for rotate PID controller
    [KIDrive]: kI for rotate PID controller
    [KDDrive]: kD for rotate PID controller
    [StopRadius]: acceptable radius for which to stop the robot in
    [AdjustRadius]: radius to parabolically ramp down rotation
*/
void driveToTask(params_t *pParameters);
/*
  Task to automatically rotate to face a specific point or rotation
  Parameters:
    [X]: x coordinate
    [Y]: y coordinate
    [R]: rotation to face
    [CalculateFromVector]: (boolean) indicating whether to use X and X (true) or R (false) to calculate desired rotation
    *Note* - (X and Y and CalculateFromVector) or (R) must be defined to function properly
    [KPRotate]: kP for rotate PID controller
    [KPRotate]: kI for rotate PID controller
    [KPRotate]: kD for rotate PID controller
    [StopRotation]: acceptable range for which to stop the robot in
*/
void rotateToTask(params_t *pParameters);
/*
  Task to automatically drive to a point, and then rotate to face another point or rotation
  Parameters:
    DriveX: x coordinate to drive to
    DriveY: y coordinate to drive to
    [Direction]: direction to drive (forwards [+] or backwards [-])
    [RotateX]: x coordinate to rotate to face
    [RotateY]: y coordinate to rotate to face
    [R]: rotation to face
    [CalculateFromVector]: (boolean) indicating whether to use RotateX and RotateY (true) or R (false) to calculate desired rotation
    *Note* (RotateX and RotateY and CalculateFromVector) or (R) must be defined to function properly
*/
void driveAndRotateTask(params_t *pParameters);
/*
  Task to automatically drive to two separate points, one after another
  Parameters:
    DriveX: first x coordinate to drive to
    DriveY: first y coordinate to drive to
    [Direction]: first direction to drive (forwards [+] or backwards [-])
    DriveX2: second x coordinate to drive to
    DriveY2: second y coordinate to drive to
    [Direction2]: second direction to drive (forwards [+] or backwards [-])
*/
void driveTwiceTask(params_t *pParameters);
/*
  Task to automatically move the arm to a specific position
  Parameters:
    ArmSet: the desired ArmHeight value
*/
void moveArmToTask(params_t *pParameters);
/*
  Task to automatically reset the arm to ground height and load the rubber bands (and optionally lock the back)
  Parameters:
    [LockBackWhenDone]: (boolean) indicating if the lift lock should be set at the end of the move
*/
void loadArmTask(params_t *pParameters);
/*
  Task to automatically unfold the arm at the beginning of the competition
  Parameters:
    (none)
*/
void unfoldTask(params_t *pParameters);



//                                 LCD Library                                //

typedef struct {
  const int hcOptions;
  const char * const *haOptions;
} screenOptions_t;
typedef struct {
  const char *hQuestion;
  const screenOptions_t hOptions;
} screen_t;

// Macro for creating screenOptions_t structs
#define mOptions(...) {mCountPointerArgs(__VA_ARGS__), (const char * const []){__VA_ARGS__}}

// Array of screens for the LCD to display
// Currently defined in init.c
extern const screen_t aPreAutonScreens[];

// Callback function, should be user-defined, handles options picked in the screen, defined in init.c
void handleLCDOption(int *iScreen, int iOption, screen_t Screen);

// Same as old pre-auton question system, with different setup and ui
void runSetupQuestions();


//================================== init.c ==================================//

#define kRedSide 1
#define kBlueSide 0
#define kAudienceSide 1
#define kDriverSide 0

// Struct to hold all of the settings information
typedef struct {
  bool color : 1;
  bool side : 1;
  bool determiner : 1;
} autonSettings_t;

extern autonSettings_t AutonSettings;
extern autonFunc_t SelectedAuton;

// Encoder references are more than just ports, and aren't constant, hence why the port numbers aren't here
// Also, these are techincally pointers, but casted to ints for ease-of-use
extern int kEncoderLeft, kEncoderRight;

// Analog Ports
#define kArmPot 1 + kAnalog
#define kExpander 2 + kAnalog
// Digital Ports
#define kEncoderL1 1 + kDigital
#define kEncoderL2 2 + kDigital
#define kEncoderR1 5 + kDigital
#define kEncoderR2 6 + kDigital
#define kLiftLock 8 + kDigital
#define kUpperArmLock 9 + kDigital
#define kLowerArmLock 11 + kDigital
// Motor Ports
#define kArmR1 2 + kMotor
#define kDriveBR 3 + kMotor
#define kDriveFR 4 + kMotor
#define kArmR0 5 + kMotor
#define kArmL0 6 + kMotor
#define kDriveFL 7 + kMotor
#define kDriveBL 8 + kMotor
#define kArmL1 9 + kMotor
// LCD Ports
#define kLCD uart1

// For setting pin modes and USART states
void initializeIO();
// For actually initializing all of the other sensors
void initialize();
// Function to handle LCD Options during the LCD Selection Routine
void handleLCDOption(int *iScreen, int iOption, screen_t Screen);



//=============================== autonomous.c ===============================//

void autoScore();
void autoHang();
void autoSkills();

void autonomous();



//================================ operator.c ================================//

typedef enum {
  kNormalState,
  kGroundState,
  kAutoGroundState,
  kLockState,
  kKnockOff,
} userState_t;

void readMacroButtons();
void doMacros();
void doKnockOff();

void operatorControl();



#endif
