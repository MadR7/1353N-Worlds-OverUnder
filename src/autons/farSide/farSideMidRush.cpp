#include "config.hpp"
#include "main.h"

/*
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
    chassis.moveToPose(-39, 57, 210, 1500, {.forwards = false, .lead = 0, .maxSpeed = 120, .minSpeed = 40});
    pros::delay(900);

    //Outtake the ball
    intake.move_voltage(-12000);
    pros::delay(300);
    chassis.waitUntilDone();

    //Turn towards the triball under the Horizontal bar
    chassis.turnToPoint(0, 57, 1000, {.minSpeed = 60});
    intake.move_voltage(12000);
    chassis.waitUntilDone();

    //Move towards the triball under the Horizontal bar to intake it
    chassis.moveToPoint(-4, 60, 2500);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //Move backwards to descore the ball in the matchload zone
//    chassis.moveToPose(-51, 54, 405, 1500, {.forwards = false, .lead = 0, .maxSpeed = 100, .minSpeed = 40});

    chassis.moveToPose(-49, 47, 350, 1500, {.forwards = false, .lead = 0, .maxSpeed = 100});
    pros::delay(500);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();

    //push triballs into the goal
    chassis.turnToHeading(55, 1000, {.minSpeed = 50});
    chassis.moveToPoint(-65, -100000, 1200, {.forwards = false, .minSpeed = 127});
    pros::delay(150);
    backLeftWing.set_value(false);
    chassis.waitUntilDone();

    //reset position 
    chassis.setPose(-65, 32, 0);

    //move backwards 
    chassis.moveToPoint(-65, 40, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();

    //turn around 
    chassis.turnToHeading(180, 1000, {.maxSpeed = 100, .minSpeed = 40});
    chassis.waitUntilDone();

    //outtake the triball in the intake
    intake.move_voltage(-12000);
    pros::delay(300);

    //push the triball in the goal
    chassis.moveToPoint(-65, 20, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);

    //reset position
    chassis.setPose(-65, 29, 180);

    //back up and turn towards the triball next to the barrier
    chassis.moveToPose(-65, 43, 110, 1200, {.forwards = false, .lead = 0, .minSpeed = 80});
    chassis.waitUntilDone();

    //turn the intake on
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-22, 27, 1000);
    chassis.waitUntilDone();

    //turn around and score it in the goal
    //chassis.turnToPoint(-50, 0, 1000, {.minSpeed = 100});
    chassis.turnToHeading(245, 600);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(250);
    //turn around to intake the triball close the barrier in the middle
    //chassis.turnToPoint(-8, 0, 1000, {.minSpeed = 40});
    chassis.turnToHeading(165, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-6, -2, 3000);
    chassis.waitUntilDone();   

    chassis.turnToHeading(270, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    chassis.moveToPoint(-50, -2, 1500);

    chassis.waitUntilDone();

    chassis.moveToPoint(-35, 0, 3000, {.forwards = false});
   /*
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-8, 16, 2000);
    //turn around to score the triball in the goal
    chassis.turnToPoint(-50, 10, 1000, {.minSpeed = 100});
    chassis.waitUntilDone();
    chassis.moveToPoint(-50, 10, 2000);
    intake.move_voltage(-12000);
    }
    */


void farSideMidRushExperimental(){
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

    //Rushing back and turning towards the goal with intake in ball
    chassis.moveToPose(-39, 59, 210, 1500, {.forwards = false, .chasePower = 8, .lead = 0, .maxSpeed = 120, .minSpeed = 60});
    pros::delay(900);

    //Outtake the ball
    intake.move_voltage(-12000);
    pros::delay(200);
    chassis.waitUntilDone();

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
    chassis.moveToPoint(-6, 59, 1300);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    
    chassis.moveToPose(-51, 50, 405, 1500, {.forwards = false, .chasePower = 5, .lead = 0, .maxSpeed = 100, .minSpeed = 60});
    pros::delay(350);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();
    
    //push triballs into the goal
    chassis.turnToHeading(350, 1000, {.minSpeed = 40});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 1000, {.minSpeed = 40});
    chassis.waitUntilDone();
    backRightWing.set_value(true);

    chassis.moveToPoint(-65, 20, 1000, {.forwards = false, .minSpeed = 90});
    chassis.waitUntilDone();
    backRightWing.set_value(false);
    //reset position 
    chassis.setPose(-65, 32, chassis.getPose().theta);

    //move forwards  
    chassis.moveToPoint(-65, 40, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();

    //turn around 
    chassis.turnToHeading(165, 1000, {.maxSpeed = 80, .minSpeed = 50});
    chassis.waitUntilDone();

    //outtake the triball in the intake
    intake.move_voltage(-12000);
    pros::delay(300);

    //push the triball in the goal
    chassis.moveToPoint(-70, 20, 500);
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
    

   // chassis.moveToPose(-23, 0, 180, 20000);
    
    
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-14, 29, 1000);
    chassis.waitUntilDone();
   

    chassis.moveToPoint(-26, 15, 1200, {.forwards = false, .minSpeed = 60});

    chassis.waitUntilDone();
   // chassis.turnToHeading(270, 1000, {.minSpeed = 60});
    chassis.turnToPoint(-10000, 15, 500);
    pros::delay(180);
    intake.move_voltage(-12000);
    chassis.waitUntilDone();    
    chassis.turnToPoint(-5 , 0, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-5,0, 1200);
    chassis.waitUntilDone();
    chassis.turnToPoint(-10000, 0, 600, {.minSpeed = 70});
    chassis.waitUntilDone();
    chassis.moveToPoint(-45, 0, 1500, {.minSpeed = 90});
    intake.move_voltage(-12000);
    
    /*
    chassis.turnToHeading(90, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();
    chassis.moveToPoint(-11, 6, 1000, {.minSpeed = 60});
    intake.move_voltage(12000);
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000, {.minSpeed = 60});
    chassis.waitUntilDone();
    chassis.moveToPoint(-45, 10, 1000);
    intake.move_voltage(-12000);

*/
    /*
    chassis.moveToPose(-13, 0, 90, 1200, {.forwards=false, .chasePower = 5, .minSpeed = 60});
    intake.move_voltage(12000);
    pros::delay(150);
    chassis.moveToPose(-37, 8, 270, 1500, {.forwards = false, .chasePower=5, .minSpeed = 60});
    intake.move_voltage(-12000);
    */
    //turn around and score it in the goal
    //chassis.turnToPoint(-50, 0, 1000, {.minSpeed = 100});
    /*
    
    chassis.turnToHeading(250, 600, {.minSpeed = 40});
    pros::delay(360);
    intake.move_voltage(-12000);
    chassis.waitUntilDone();
    pros::delay(150);
    //turn around to intake the triball close the barrier in the middle
    //chassis.turnToPoint(-8, 0, 1000, {.minSpeed = 40});
    chassis.turnToHeading(165, 600, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-2, -5, 3000);
    chassis.waitUntilDone();   
    //chassis.turnToHeading(270, 1000, {.minSpeed = 70});
    chassis.turnToPoint(-1000, 0, 1000, {.minSpeed = 30});
    
    //chassis.moveToPose(-13, 10, 270, 1500, {.forwards =false, .chasePower = 8, .minSpeed = 90});
    //chassis.turnToHeading(180, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(150);

    chassis.turnToHeading(90, 600, {.minSpeed = 60});
    backRightWing.set_value(true);
    backLeftWing.set_value(true);

    chassis.waitUntilDone();
    chassis.moveToPoint(-45, -5, 3000, {.forwards = false});
    chassis.waitUntilDone();
    
    backRightWing.set_value(false);
    backLeftWing.set_value(false);
    /*
    
    chassis.moveToPoint(-50, 0, 1200, {.forwards = true});
    chassis.waitUntilDone();
    chassis.moveToPoint(-30, 0, 1000, {.forwards = false,.minSpeed = 60});
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 1000);
    */
    
}
