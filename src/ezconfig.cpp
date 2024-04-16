#include "main.h"

/////
// For installation, upgrading, documentations and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;  
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;

///
// Constants
///
void default_constants() {
  ezchassis.pid_heading_constants_set(3, 0, 20);
  ezchassis.pid_drive_constants_set(10, 0, 100);
  ezchassis.pid_turn_constants_set(3, 0, 20);
  ezchassis.pid_swing_constants_set(5, 0, 30);

  ezchassis.pid_turn_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  ezchassis.pid_swing_exit_condition_set(300_ms, 3_deg, 500_ms, 7_deg, 750_ms, 750_ms);
  ezchassis.pid_drive_exit_condition_set(300_ms, 1_in, 500_ms, 3_in, 750_ms, 750_ms);

  ezchassis.slew_drive_constants_set(7_in, 80);
}




