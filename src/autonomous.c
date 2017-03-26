#include "main.h"

//------------------------ Local Forward Declarations ------------------------//

void launchPreloads();


//---------------------------- Autonomous Routines ---------------------------//

void autonomous() {
  stopAllTasks();

  setGlobalPosition(0, 0, gPosition.r);
  registerTask(globalPositioningTask, NULL);

  AutonSettings.determiner = AutonSettings.color ^ AutonSettings.side;

  set(kUpperArmLock, false);
  set(kLowerArmLock, false);
  set(kLiftLock, false);

  (*SelectedAuton.Func)();

  driveStop();
  armStop();
}

void autoScore() {
  drive(70);
  delay(200);

  set(kLiftLock, false);
  drive(-127);
  delay(3000);

  drive(127);
  delay(500);

  driveStop();
}

void autoHang() {

}

void autoSkills() {
  params_t P1, P2;

  launchPreloads();

  // Lock down back
  set(kLiftLock, true);
  // Wait for back lock to engage
  delay(200);

  // Reset arm to ground
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  P1 = mParams(
    mParam(X, 0),
    mParam(Y, -930),
    mParam(R, 0)
  );
  registerTask(driveAndRotateTask, &P1);
  mWaitForTasks(moveArmToTask, driveAndRotateTask);

  set(kUpperArmLock, true);
  //Let back launch stars from fence
  set(kLiftLock, false);
  registerTask(loadArmTask, NULL);
  // Wait for back to finish launch
  delay(500);

  // Reset arm and load rubber band power
  P1 = mParams(
    mParam(X, 400),
    mParam(Y, -400),
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);

  // Rotate to face wall
  P1 = mParams(
    mParam(R, 0)
  );
  registerTask(rotateToTask, &P1);
  mWaitForTasks(rotateToTask);

  // ?
  P1 = mParams(
    mParam(X, 400),
    mParam(Y, -200)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);
  drive(127);
  delay(200);
  driveStop();

  // Pick up stars
  set(kLowerArmLock, false);
  delay(300);

  // Drive away from wall
  P1 = mParams(
    mParam(X, 0),
    mParam(Y, -1000),
    mParam(Direction, -1)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);
  P1 = mParams(
    mParam(R, 0)
  );
  registerTask(rotateToTask, &P1);
  mWaitForTasks(rotateToTask);

  // Wait for proximity to fence
  drive(-127);
  delay(600);
  drive(-127);

  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);
  // Launch stars
  set(kUpperArmLock, false);
  // Wait for launch to finish
  delay(800);
  driveStop();

  // Lock down back
  set(kLiftLock, true);
  // Wait for back lock to engage
  delay(200);

  // Drive forward to prepare to hit the stars off the fence
  P1 = mParams(
    mParam(X, 0),
    mParam(Y, -930),
    mParam(R, 0)
  );
  registerTask(driveAndRotateTask, &P1);

  // Reset arm to ground
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(driveAndRotateTask, moveArmToTask);
  set(kUpperArmLock, true);

  // Let back launch stars from fence
  set(kLiftLock, false);
  // Wait for back to finish launch
  delay(500);

  // Turn to pick up the 4 stars
  P1 = mParams(
    mParam(R, -1.5)
  );
  registerTask(rotateToTask, &P1);
  P2 = mParams(
    mParam(ArmSet, kGroundHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(rotateToTask);
  set(kLowerArmLock, true);

  // Drive to the wwall to pick up 4 stars
  P1 = mParams(
    mParam(X, -2000),
    mParam(Y, -970)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);
  drive(127);
  delay(500);

  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);

  // Start pickup sequence for 4 stars
  set(kUpperArmLock, true);
  set(kLowerArmLock, false);
  delay(300);

  // Drive away from wall to allow for a turn
  P1 = mParams(
    mParam(X, -1800),
    mParam(Y, -950),
    mParam(Direction, -1)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask, moveArmToTask);

  // Turn to dump 4 stars
  P1 = mParams(
    mParam(R, 0)
  );
  registerTask(rotateToTask, &P1);
  mWaitForTasks(rotateToTask);

  // Ensure robot is secure against the wall
  drive(-127);
  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);
  set(kUpperArmLock, false);
  delay(800);
  driveStop();

  // Lock down back
  set(kLiftLock, true);
  // Wait for back lock to engage
  delay(200);

  // Reset arm to prepare to hit second set of stars
  P1 = mParams(
    mParam(X, -1800),
    mParam(Y, -900),
    mParam(R, 0)
  );
  registerTask(driveAndRotateTask, &P1);
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(driveAndRotateTask, moveArmToTask);
  set(kUpperArmLock, true);

  // Let back launch stars from fence
  set(kLiftLock, false);
  // Wait for back to finish launch
  delay(500);


  // Sart sequence for launching 1st floor cube
  P2 = mParams(
    mParam(ArmSet, 0)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);

  P1 = mParams(
    mParam(X, -1500),
    mParam(Y, -300)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);
  drive(127);
  delay(300);

  set(kUpperArmLock, true);
  set(kLowerArmLock, false);

  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P1);
  mWaitForTasks(moveArmToTask);

  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);

  P1 = mParams(
    mParam(X, -1500),
    mParam(Y, -1000),
    mParam(Direction, -1)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(moveArmToTask, driveToTask);
  drive(-127);
  delay(300);

  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);
  drive(-127);
  delay(300);
  // Launch stars
  set(kUpperArmLock, false);
  // Wait for launch to finish
  delay(800);
  driveStop();

  // Move arm to ground to pick up a second cube
  P2 = mParams(
    mParam(ArmSet, 0)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);

  // Drive to cube
  P1 = mParams(
    mParam(X, -1000),
    mParam(Y, -800)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);

  // Pick up cube
  set(kUpperArmLock, true);
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);
  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);

  // Rotate to fence
  P1 = mParams(
    mParam(R, 0)
  );
  registerTask(rotateToTask, &P1);
  mWaitForTasks(rotateToTask); // You forgot to put this line here

  // Drive to fence
  P1 = mParams(
    mParam(X, -800),
    mParam(Y, -1150),
    mParam(Direction, -1)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask); // You also forgot to put this line here

  // Launch
  drive(-127); // Otherwise this line is wrong
  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);
  set(kUpperArmLock, false);
  delay(800);
  driveStop();

  // Lock down back
  set(kLiftLock, true);
  // Wait for back lock to engage
  delay(200);

  // Reset arm to prepare to hit second set of stars
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask);
  set(kUpperArmLock, true);

  P1 = mParams(
    mParam(X, -700),
    mParam(Y, -1020),
    mParam(R, 0)
  );
  registerTask(driveAndRotateTask, &P1);
  mWaitForTasks(driveAndRotateTask);

  // Let back launch stars from fence
  set(kLiftLock, false);
  // Wait for back to finish launch
  delay(500);

  // Prepare for lift
  P1 = mParams(
    mParam(X, -2400),
    mParam(Y, 200),
    mParam(CalculateFromVector, true)
  );
  registerTask(rotateToTask, &P1);
  mWaitForTasks(rotateToTask);

  // Drive forward towards star in corner
  P1 = mParams(
    mParam(X, -2100),
    mParam(Y, -100)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);

  // Rotate to pull star out of the corner
  P1 = mParams(
    mParam(R, 2.4)
  );
  registerTask(rotateToTask, &P1); // I have no idea what you wanted from this line, it used to be this:
  // rotate(2.4);
  mWaitForTasks(rotateToTask);

  // Drive back towards the lifting corner
  P1 = mParams(
    mParam(X, -2400),
    mParam(Y, -200),
    mParam(Direction, -1)
  );
  registerTask(driveToTask, &P1);
  mWaitForTasks(driveToTask);

  // Make sure front locks aren't locked
  set(kUpperArmLock, false);
  set(kLowerArmLock, false);

  // Push back and lift
  P2 = mParams(
    mParam(ArmSet, kHardLaunchHeight)
  );
  registerTask(moveArmToTask, &P2);
  drive(-50);
  mWaitForTasks(moveArmToTask);
  arm(127);
  delay(100);
  set(kLiftLock, true);
  delay(200);
  driveStop();
  armStop();
}


void launchPreloads() {
  params_t P1, P2;

  P1 = mParams(
    mParam(DriveX, 0),
    mParam(DriveY, 100),
    mParam(DriveX2, 0),
    mParam(DriveY2, -400)
  );
  registerTask(driveTwiceTask, &P1);
  mWaitForTasks(driveTwiceTask);

  registerTask(unfoldTask, NULL);

  // Make sure lower lock is clear
  set(kLowerArmLock, false);
  // Make sure upper lock is locked
  set(kUpperArmLock, true);
  mWaitForTasks(unfoldTask);

  // Move arm to above wall for launching
  P2 = mParams(
    mParam(ArmSet, kLockHeight)
  );
  registerTask(moveArmToTask, &P2);
  mWaitForTasks(moveArmToTask/*, driveTwiceTask*/);

  // Do three launches
  for(int i = 0; i < 3; i++) {
    if(ArmHeight > kLockHeight + 20) {
      P2 = mParams(
        mParam(ArmSet, kLockHeight - 20)
      );
      registerTask(moveArmToTask, &P2);
      mWaitForTasks(moveArmToTask);
    }

    // Move to wall for loading
    P1 = mParams(
      mParam(X, 0),
      mParam(Y, -230)
    );
    registerTask(driveToTask, &P1);
    mWaitForTasks(driveToTask);

    delay(500);

    // Drive to fence
    P1 = mParams(
      mParam(X, 0),
      mParam(Y, -1000),
      mParam(Direction, -1)
    );
    registerTask(driveToTask, &P1);
    mWaitForTasks(driveToTask);

    P2 = mParams(
      mParam(ArmSet, kHardLaunchHeight)
    );
    registerTask(moveArmToTask, &P2);
    drive(-127); // Make sure wall supports robot
    delay(500);

    // Launch
    set(kUpperArmLock, false);

    // Wait for arm to finish launch
    delay(800);
    armStop();
    driveStop();
  }
}
