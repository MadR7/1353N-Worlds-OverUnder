#include "main.h"

/*
void closeSideMidRush(){
    chassis.setPose(39, 55, 195);
    backRightWing.set_value(true);
    intake.move_voltage(12000);
    chassis.moveToPoint(27, 15, 1000);
    pros::delay(300);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    pros::delay(100);
    intake.move_voltage(0);
    chassis.moveToPoint(52, 54, 4000, {.forwards = false});
    chassis.waitUntilDone();
    backLeftWing.set_value(true);
    chassis.turnToHeading(130, 1000, {.maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.moveToPoint(41, 53, 2000, {.forwards = false, .maxSpeed = 90});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(270, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(18, 53, 1000, { .maxSpeed = 90,.minSpeed = 70});
    pros::delay(300);
    intake.move_voltage(-12000);
    chassis.waitUntilDone();
    pros::delay(1500);
    intake.move_voltage(0);
}*/

void closeSideMidRush(){
    chassis.setPose(40, 56, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(25, 14, 2000);
    pros::delay(150);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    pros::delay(50);
    
    chassis.moveToPose(52, 51, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    intake.move_voltage(0);
    chassis.moveToPose(46, 56, 250, 2000, {.lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    intake.move_voltage(-12000);
    chassis.moveToPose(11, 60, 270, 3500, {.lead = 0.4});
    chassis.waitUntilDone();
    //chassis.moveToPose(50, 53, 300, 2000, {.forwards = false, .maxSpeed = 90});
    //chassis.turnToHeading(90, 2000, {.maxSpeed = 80});
}

void closeSideMidRushExperimental(){
    chassis.setPose(40, 56, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(25, 14, 2000);
    pros::delay(150);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    pros::delay(50);
    intake.move_voltage(0);
    chassis.moveToPose(41, 54, 270, 3000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    
    double x_val = backResetDist.get() * 0.0393701 + 9;
    double y_val = rightResetDist.get() * 0.0393701 + 3;

    chassis.setPose(72 - x_val, 72-y_val, 270);
    chassis.moveToPose(53, 51, 315, 1000, {.forwards = false, .lead = 0});
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