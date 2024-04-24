#include "autons.hpp"
#include "main.h"

void closeSideDoubleRush(){
    chassis.setPose(40, 56, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(25, 14, 2000);
    pros::delay(150);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    pros::delay(50);
    chassis.moveToPose(32, 18, 270, 1500, {.forwards = false, .lead = 0, .minSpeed = 70});
    pros::delay(300);
    intake.move_voltage(0);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPoint(15, 18, 1000);
    chassis.waitUntilDone();
    chassis.turnToHeading(245, 1000, {.maxSpeed = 60, .minSpeed = 30});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(8, 8, 1000);
    chassis.waitUntilDone();
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
/*    
    
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
    */
}

void exxxxxcloseSideDoubleRushExperimental(){
    chassis.setPose(40, 56, 195);
    intake.move_voltage(12000);
    chassis.moveToPoint(25, 14, 2000);
    chassis.waitUntilDone();
    pros::delay(50);
    

    chassis.moveToPose(23, 20, 270, 1000, {.forwards = false, .lead = 0, .minSpeed = 90});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(300);
    chassis.moveToPoint(10, 20, 2000);
    chassis.waitUntilDone();

    chassis.turnToHeading(180, 1000, {.minSpeed = 50});

    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(5, 10, 2000);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    //intake.move_voltage();
    //chassis.moveToPoint(13, )


//    chassis.moveToPose(23, 15, 0, 1500, {.forwards = false, .lead = 0, .minSpeed = 40});



    chassis.moveToPose(41, 54, 270, 3000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    
    double x_val = backResetDist.get() * 0.0393701 + 9;
    double y_val = rightResetDist.get() * 0.0393701 + 3;

    chassis.setPose(72 - x_val, 72-y_val, chassis.getPose().theta);
    
//    chassis.moveToPose(23, 0, 180, 3000, {.forwards = true, .minSpeed = 40});

    chassis.moveToPose(53, 51, 315, 1000, {.forwards = false, .lead = 0});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    chassis.moveToPose(40, 62, 250, 2000, {.lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    chassis.moveToPose(60, 46, 300, 2000, {.forwards = false, .lead = 0, .maxSpeed = 90});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPose(16, 65, 270, 3000, {.lead = 0.2});
}