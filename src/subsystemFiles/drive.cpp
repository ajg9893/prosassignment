#include "main.h"

void setDrive() {
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

void setDriveMotors() {
    int leftJoystick = controller.getanalog(pros::E_CONTROLLER_MASTER_LEFT_Y);
    int leftJoystick = controller.getanalog(pros::E_CONTROLLER_MASTER_RIGHT_Y);
    if(abs(leftJoystick) < 10)
        leftJoystick = 0;
    if(abs(rightJoystick) < 10)
        rightJoystick = 0;
    setDrive(leftJoyStick, rightJoystick);        
}