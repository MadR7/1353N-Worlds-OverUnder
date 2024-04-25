#include "config.hpp"
#include "main.h"


void closeSideSafe(){
    chassis.setPose(41, 53, 270);
    chassis.moveToPose(53, 49, 315, 1000, {.forwards = false, .lead = 0});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    chassis.moveToPose(40, 58, 250, 2000, {.lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPose(16, 60, 270, 1000, {.lead = 0.2});
}

    

void closeSideSafe1ball(){
    chassis.setPose(41, 53, 270);
    intake.move_voltage(12000);
    chassis.moveToPose(53, 51, 315, 1000, {.forwards = false, .lead = 0});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    intake.move_voltage(0);
    chassis.moveToPose(40, 58, 195, 1500, {.lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
  //  chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
   // chassis.waitUntilDone();
   /// chassis.turnToHeading(195, 1000, {.minSpeed = 50});
    intake.move_voltage(12000);

    chassis.moveToPoint(25, 8, 3000);
    pros::delay(150);
    chassis.waitUntilDone();
    chassis.moveToPoint(41, 53, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPose(14, 58, 270, 4000, {.lead = 0.2});
    
    /*
    
    chassis.moveToPose(40, 56, 270, 1000, {.lead = 0});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    

*/
}


void closeSideSafe2ball(){
    chassis.setPose(41, 53, 270);
    intake.move_voltage(12000);
    chassis.moveToPose(53, 51, 315, 1000, {.forwards = false, .lead = 0, .minSpeed = 40});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    intake.move_voltage(0);
    chassis.moveToPose(40, 58, 195, 1500, {.lead = 0, .maxSpeed = 90, .minSpeed = 40});
    intake.move_voltage(-12000);
    chassis.waitUntilDone();
    backRightWing.set_value(false);
  //  chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
   // chassis.waitUntilDone();
   /// chassis.turnToHeading(195, 1000, {.minSpeed = 50});
    intake.move_voltage(12000);
    chassis.moveToPoint(25, 8, 3000);
    pros::delay(150);
    chassis.waitUntilDone();
    chassis.moveToPoint(41, 53, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 600);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(250);
    chassis.turnToHeading(215, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(14, 7, 1200);
    chassis.waitUntilDone();
    pros::delay(100);
    chassis.moveToPoint(44, 51, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 600);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPose(14, 54, 270, 4000, {.lead = 0.2});
    
    /*
    
    chassis.moveToPose(40, 56, 270, 1000, {.lead = 0});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    

*/
}