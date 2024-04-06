#include "main.h"

ASSET(farSideTopRush1_txt);

void farSideTopRush(){
    chassis.setPose(-50, 56, 135);
    intake.move_voltage(12000);
    chassis.moveToPoint(-16, 7, 2000);
    chassis.waitUntilDone();
    pros::delay(500);
    intake.move_voltage(0);
    chassis.moveToPose(-45, 58,225, 3000, {.forwards = false, .lead = 0});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(400);
    chassis.turnToPoint(10000, 58, 1000);
    intake.move_voltage(12000);
    chassis.waitUntilDone();
    chassis.moveToPoint(12, 58, 1000);
    chassis.waitUntilDone();
    pros::delay(200);
    intake.move_voltage(0);
    chassis.follow(farSideTopRush1_txt, 10, 3000, false);
    chassis.waitUntil(48);
    chassis.cancelMotion();
    backLeftWing.set_value(true);

}