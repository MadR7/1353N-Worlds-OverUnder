#include "main.h"


void farSideWingRush(){
    chassis.setPose(-33, 55, 170);
    intake.move_voltage(120000);
    chassis.moveToPose(-13, 10, 135, 1700, {.chasePower = 8, .lead = 0.5, .minSpeed = 80});
    chassis.waitUntilDone();
    pros::delay(300);
    backRightWing.set_value(true);

/*
    chassis.setPose(-52, 55, 135);
    intake.move_voltage(12000);
    chassis.moveToPoint(-12, 9, 2000);
    chassis.waitUntilDone();
    backRightWing.set_value(true);
  */

/*
    chassis.setPose(-37, 55, 152);
    intake.move_voltage(12000);
    ///backRightWing.set_value(true);
    chassis.moveToPoint(-14.5, 7, 1000, {.minSpeed = 60});
    pros::delay(970);
    backRightWing.set_value(true);
    chassis.waitUntilDone();
    //chassis.turnToHeading(135, 1000, {.minSpeed = 60});
    //chassis.waitUntilDone();
    //backRightWing.set_value(true);
    pros::delay(150);  
    
    chassis.moveToPose(-43, 61, 210, 1900, {.forwards = false, .lead = 0, .maxSpeed = 120, .minSpeed = 40});
    pros::delay(200);
    backRightWing.set_value(false);
    //Outtake the ball
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(300);
    //Turn towards the triball under the Horizontal bar
    //chassis.turnToPoint(0, 57, 1000, {.minSpeed = 60});
    chassis.turnToHeading(90, 700);
    chassis.waitUntilDone();
    
    double x_val = backResetDist.get() * 0.0393701 + 12.5;
    double y_val = leftResetDist.get() * 0.0393701 + 5;

    chassis.setPose(-72 + x_val, 72-y_val, 90);

    //chassis.moveToPose(-23, 0, 180, 3000);

    intake.move_voltage(12000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-7, 59, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    
    chassis.moveToPose(-51, 50, 405, 1500, {.forwards = false, .lead = 0, .maxSpeed = 100, .minSpeed = 40});
    pros::delay(350);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();
    
    //push triballs into the goal
    chassis.turnToHeading(350, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    backRightWing.set_value(true);

    chassis.moveToPoint(-65, 20, 1000, {.forwards = false, .minSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    //reset position 
    chassis.setPose(-65, 32, chassis.getPose().theta);

    //move backwards 
    chassis.moveToPoint(-65, 40, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();

    //turn around 
    chassis.turnToHeading(165, 1000, {.maxSpeed = 80, .minSpeed = 20});
    chassis.waitUntilDone();

    //outtake the triball in the intake
    intake.move_voltage(-12000);
    pros::delay(300);

    //push the triball in the goal
    chassis.moveToPoint(-70, 20, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //reset position
    chassis.setPose(-65, 29, chassis.getPose().theta);

    //back up and turn towards the triball next to the barrier
    //chassis.moveToPose(-65, 43, 90, 1200, {.forwards = false, .lead = 0, .minSpeed = 80});
    chassis.moveToPoint(-65, 35, 1000, {.forwards = false, .minSpeed = 80});
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 700);
    chassis.waitUntilDone();

    double x_val2 = backResetDist.get() * 0.0393701 + 12.5;
    double y_val2 = leftResetDist.get() * 0.0393701 -1.5;

    chassis.setPose(-72 + x_val2, 72-y_val2, 90);
    //chassis.moveToPose(-24, 0, 180, 7000, {.maxSpeed = 70});
     //turn the intake on
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-14, 29, 1000);
    chassis.waitUntilDone();
    //turn around and score it in the goal
    //chassis.turnToPoint(-50, 0, 1000, {.minSpeed = 100});
     chassis.turnToHeading(247, 600);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(350);
    chassis.turnToHeading(67, 600, {.minSpeed = 60});
   /*
    chassis.waitUntilDone();
    chassis.moveToPoint(-14, 7, 1000, {.forwards = false, .minSpeed = 60});
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 2000, {.minSpeed = 60});
    */
    //backLeftWing.set_value(true);
    //backRightWing.set_value(true);
   
  //  chassis.moveToPoint(-45, 10, 1000, {.forwards = false});

}
void farSideWingRushex(){
/*
    chassis.setPose(-33, 55, 350);
    backLeftWing.set_value(true);
    chassis.moveToPose(-22, 23, 135, 1700, {.forwards = false, .lead = 0, .minSpeed = 110});
    pros::delay(900);
    backRightWing.set_value(true);
    backLeftWing.set_value(false);
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-15, 15, 1000);
    //backRightWing.set_value(false);
    */
    chassis.setPose(-33, 55, 170);
    intake.move_voltage(120000);
    chassis.moveToPose(-13, 8, 135, 1700, {.minSpeed = 80});
    chassis.waitUntilDone();
    backRightWing.set_value(true);
    intake.move_voltage(0);
    chassis.moveToPose(-30, 19, 270, 1000, {.forwards = false, .lead = 0, .minSpeed = 110});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    intake.move_voltage(-12000);
    pros::delay(500);
    chassis.turnToHeading(0, 500, {.minSpeed = 30});
    chassis.waitUntilDone();
    chassis.moveToPoint(-43, 62, 1200, {.minSpeed = 40});
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 1200);
    chassis.waitUntilDone();

    double x_val = backResetDist.get() * 0.0393701 + 12.5;
    double y_val = leftResetDist.get() * 0.0393701 + 5;

    chassis.setPose(-72 + x_val, 72-y_val, chassis.getPose().theta);
    intake.move_voltage(12000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-7, 63, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    chassis.moveToPose(-51, 50, 405, 1500, {.forwards = false, .lead = 0, .maxSpeed = 100, .minSpeed = 40});
    pros::delay(350);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();
    
    //push triballs into the goal
    chassis.turnToHeading(350, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    backRightWing.set_value(true);

    chassis.moveToPoint(-65, 20, 1000, {.forwards = false, .minSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    //reset position 
    chassis.setPose(-65, 32, chassis.getPose().theta);

    //move backwards 
    chassis.moveToPoint(-65, 40, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();

    //turn around 
    chassis.turnToHeading(165, 1000, {.maxSpeed = 80, .minSpeed = 20});
    chassis.waitUntilDone();

    //outtake the triball in the intake
    intake.move_voltage(-12000);
    pros::delay(300);

    //push the triball in the goal
    chassis.moveToPoint(-70, 20, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //reset position
    chassis.setPose(-65, 29, chassis.getPose().theta);

    //back up and turn towards the triball next to the barrier
    //chassis.moveToPose(-65, 43, 90, 1200, {.forwards = false, .lead = 0, .minSpeed = 80});
    chassis.moveToPoint(-65, 35, 1000, {.forwards = false, .minSpeed = 80});
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 700);
    chassis.waitUntilDone();

    double x_val2 = backResetDist.get() * 0.0393701 + 12.5;
    double y_val2 = leftResetDist.get() * 0.0393701 -1.5;

    chassis.setPose(-72 + x_val2, 72-y_val2, 90);
    //chassis.moveToPose(-24, 0, 180, 7000, {.maxSpeed = 70});
     //turn the intake on
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-14, 31, 1000);
    chassis.waitUntilDone();
    
    chassis.turnToHeading(50, 1000, {.minSpeed = 0});

    chassis.waitUntilDone();
    chassis.moveToPoint(-45, 15, 1000, {.forwards = false});
    backLeftWing.set_value(true);
    backRightWing.set_value(true);



/*
    double x_val = backResetDist.get() * 0.0393701 + 12.5;
    double y_val = leftResetDist.get() * 0.0393701 + 5;

    chassis.setPose(-72 + x_val, 72-y_val, chassis.getPose().theta);

    //chassis.moveToPose(-23, 0, 180, 3000);

    intake.move_voltage(12000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-7, 59, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    */
/*
    chassis.setPose(-33, 55, 170);
    chassis.moveToPose(-23, 19, 110, 2000, {.lead = 0, .minSpeed = 110});
    pros::delay(800);
    backRightWing.set_value(true);
*/

}