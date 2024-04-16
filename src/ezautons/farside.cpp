#include "main.h"


void ezfarSideSafe(){
    ezchassis.drive_angle_set(90_deg); //set the initial starting angle of your robot
    ezchassis.pid_drive_set(-50_in, DRIVE_SPEED, true); // setting the first param to 50 because that is way over what I want the robot to go
    ezchassis.pid_wait_until(-40_in); // I Set this to 40 inches because that's the actual distance I want the robot to travel backwards. And after that movement it will move on to the next movement in the line
    ezchassis.pid_swing_set(ez::LEFT_SWING, 0_deg, SWING_SPEED, 0); // Now I just have a swing movement as an example, i do not think you need to use pid_wait() since we don't want the robot to go the full 50 inches
}

