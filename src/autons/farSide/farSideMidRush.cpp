#include "main.h"

void farSideMidRush(){
    //setting position 
    chassis.setPose(-33, 55, 170);

    //deploying intake
    backRightWing.set_value(true);
    
    //staring intake
    intake.move_voltage(12000);
    
    //rushing towards the middle triball to intake it
    chassis.moveToPoint(-25, 12, 2000);
    pros::delay(200);
    backRightWing.set_value(false);
    chassis.waitUntilDone();

    //Ryushing back and turning towards the goal with intake in ball
    chassis.moveToPose(-43, 58, 210, 1600, {.forwards = false, .lead = 0, .maxSpeed = 120, .minSpeed = 30});
    pros::delay(1100);

    //Outtake the ball
    intake.move_voltage(-12000);
    pros::delay(300);
    chassis.waitUntilDone();

    //Turn towards the triball under the Horizontal bar
    chassis.turnToPoint(0, 62, 1000, {.minSpeed = 60});
    intake.move_voltage(12000);
    chassis.waitUntilDone();

    //Move towards the triball under the Horizontal bar to intake it
    chassis.moveToPoint(-4, 62, 2000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //Move backwards to descore the ball in the matchload zone
    chassis.moveToPose(-51, 54, 405, 1500, {.forwards = false, .lead = 0, .maxSpeed = 100, .minSpeed = 40});
    pros::delay(350);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();


    /*
    chassis.turnToHeading(350, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
   */
    
    //push triballs into the goal
    chassis.moveToPoint(-65, 20, 1000, {.forwards = false, .minSpeed = 90});
    pros::delay(150);
    backLeftWing.set_value(false);
    chassis.waitUntilDone();

    //reset position 
    chassis.setPose(-65, 32, 0);

    //move backwards 
    chassis.moveToPoint(-65, 40, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();

    //turn around 
    chassis.turnToHeading(180, 1000, {.maxSpeed = 120, .minSpeed = 40});
    chassis.waitUntilDone();

    //outtake the triball in the intake
    intake.move_voltage(-12000);
    pros::delay(300);

    //push the triball in the goal
    chassis.moveToPoint(-65, 20, 1500);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //reset position
    chassis.setPose(-65, 27, 180);

    //back up and turn towards the triball next to the barrier
    chassis.moveToPose(-65, 45, 110, 1200, {.forwards = false, .lead = 0, .minSpeed = 80});
    chassis.waitUntilDone();

    //turn the intake on
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-20, 27, 1000);
    chassis.waitUntilDone();

    //turn around and score it in the goal
    chassis.moveToPose(-50, 6, 270, 1400, {.minSpeed = 100});
    intake.move_voltage(-12000);
    chassis.waitUntilDone();

    //turn around to intake the triball close the barrier in the middle
    chassis.moveToPose(-10, 0, 90, 2000, {.minSpeed = 100});
    intake.move_voltage(12000);
    pros::delay(300);

    //turn around to score the triball in the goal
    chassis.turnToHeading(270, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    chassis.moveToPoint(-50, 5, 1000);
    intake.move_voltage(-12000);
}

void farSideMidRushuh(){
    chassis.setPose(-33, 55, 170);
    backRightWing.set_value(true);
    intake.move_voltage(12000);
    chassis.moveToPoint(-26, 12, 2000);
    pros::delay(300);
    backRightWing.set_value(false);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    chassis.moveToPose(-43, 60, 225, 2000, {.forwards = false, .lead = 0, .maxSpeed = 100});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(300);
    intake.move_voltage(0);
    chassis.turnToPoint(0, 62, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-4, 62, 2000);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    chassis.moveToPose(-51, 57, 405, 3000, {.forwards = false, .lead = 0, .maxSpeed = 70});
    chassis.waitUntilDone();
    backLeftWing.set_value(true);
    pros::delay(200);
    chassis.turnToHeading(0, 2000);
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-65, 20, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.setPose(-65, 32, 0);
    chassis.moveToPoint(-65, 40, 1000);
    chassis.turnToHeading(180, 1000, {.maxSpeed = 60});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(300);
    chassis.moveToPoint(-65, 20, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    chassis.setPose(-65, 32, 180);
    chassis.moveToPose(-65, 40, 110, 1000, {.forwards = false, .lead = 0});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-17, 27, 1000);
    chassis.waitUntilDone();
    pros::delay(300);
    intake.move_voltage(0);
    chassis.moveToPoint(-60, 10, 2000);
    pros::delay(400);
    intake.move_voltage(-12000);
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-16, 0, 1000);
    chassis.waitUntilDone();
    pros::delay(300);
    intake.move_voltage(0);
    chassis.moveToPoint(-55, 10, 3000);
    pros::delay(400);
    intake.move_voltage(-12000);
}