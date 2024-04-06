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
    chassis.setPose(39, 55, 195);
    backRightWing.set_value(true);
    intake.move_voltage(12000);
    chassis.moveToPoint(26, 16, 2000);
    pros::delay(200);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    pros::delay(250);
    intake.move_voltage(0);
    chassis.moveToPose(53, 58, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    chassis.moveToPose(48, 54, 250, 2000, {.lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPose(16, 60, 270, 1000, {.lead = 0.2});
    //chassis.turnToHeading(90, 2000, {.maxSpeed = 80});
}