#include "main.h"



void closeSideDoubleRush2(){
    chassis.setPose(39, 55, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(27, 11, 1000);
    chassis.waitUntilDone();
    pros::delay(300);
    intake.move_voltage(0);
    chassis.moveToPoint(41, 53, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(300);
    chassis.turnToHeading(205, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(17, 14, 1000);
    chassis.waitUntilDone();
    pros::delay(600);
    intake.move_voltage(0);
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
    chassis.moveToPose(11, 61, 270, 3500, {.lead = 0.4});
    chassis.waitUntilDone();


} 



















void exxxxcloseSideDoubleRush2(){
    chassis.setPose(39, 55, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(27, 11, 1000);
    chassis.waitUntilDone();
    pros::delay(300);
    intake.move_voltage(0);
    chassis.moveToPoint(27, 27, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(150);
    chassis.moveToPoint(10, 27, 1000);
    
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.turnToPoint(2, -1, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(6, 9, 1000);
    chassis.waitUntilDone();
    //intake.move_voltage
    pros::delay(300);
    intake.move_voltage(0);
    chassis.moveToPoint(51, 52.5, 4000, {.forwards = false});
    chassis.waitUntilDone();
    backLeftWing.set_value(true);
    chassis.turnToHeading(130, 1000, {.maxSpeed = 70});
    chassis.waitUntilDone();
    chassis.moveToPoint(40, 51, 1000, {.forwards = false});
    backLeftWing.set_value(false);
    chassis.turnToHeading(270, 1000);
    chassis.waitUntilDone();
    chassis.moveToPose(12, 58, 270, 2000);
    pros::delay(300);
    intake.move_voltage(-12000);

}