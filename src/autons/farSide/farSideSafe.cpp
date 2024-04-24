#include "config.hpp"
#include "main.h"

void farSideSafe(){
    chassis.setPose(-17, 59, 90);
    backRightWing.set_value(true);
    pros::delay(350);
    backRightWing.set_value(false);
    pros::delay(400);
    
    intake.move_voltage(12000);
    chassis.moveToPoint(-9, 59, 1000);
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

    chassis.moveToPoint(-65, 20, 1000, {.forwards = false, .minSpeed = 90});
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
    chassis.moveToPoint(-22, 25, 1000);
    chassis.waitUntilDone();

    //turn around and score it in the goal
    //chassis.turnToPoint(-50, 0, 1000, {.minSpeed = 100});
    chassis.turnToHeading(240, 600);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(400);
    //turn around to intake the triball close the barrier in the middle
    //chassis.turnToPoint(-8, 0, 1000, {.minSpeed = 40});
    chassis.turnToHeading(165, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-6, -5, 3000);
    chassis.waitUntilDone();   

    chassis.turnToHeading(90, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();

    backLeftWing.set_value(true);
    backRightWing.set_value(true);
//    intake.move_voltage(-12000);
    chassis.moveToPoint(-50, 4, 1500, {.forwards = false});

    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    backRightWing.set_value(false);

    chassis.moveToPoint(-35, 5 , 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);

    chassis.moveToPoint(-50, 5, 1500, {.forwards = true});
    chassis.waitUntilDone();
    chassis.moveToPoint(-35, 5, 3000, {.forwards = false});

}

void farSideSafeExperimental(){
    chassis.setPose(-17, 59, 90);
    intake.move_voltage(12000);
    pros::delay(400);
    
    chassis.moveToPoint(-9, 59, 1000);
    chassis.waitUntilDone();
    intake.move_voltage(0);
    
    chassis.moveToPose(-51, 50, 405, 1500, {.forwards = false, .chasePower = 5, .lead = 0, .maxSpeed = 100, .minSpeed = 40});
    pros::delay(350);
    backLeftWing.set_value(true);
    chassis.waitUntilDone();
    
    //push triballs into the goal
    chassis.turnToHeading(350, 600, {.minSpeed = 50});
    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    chassis.turnToHeading(45, 600, {.minSpeed = 50});
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

    double x_val = backResetDist.get() * 0.0393701 + 12.5;
    double y_val = leftResetDist.get() * 0.0393701 -1.5;

    chassis.setPose(-72 + x_val, 72-y_val, 90);
    //chassis.moveToPose(-24, 0, 180, 7000, {.maxSpeed = 70});
     //turn the intake on
    intake.move_voltage(12000);

    //move to that triall to intake it
    chassis.moveToPoint(-14, 29, 1000);
    chassis.waitUntilDone();

    //turn around and score it in the goal
    //chassis.turnToPoint(-50, 0, 1000, {.minSpeed = 100});
    chassis.turnToHeading(240, 800);
    chassis.waitUntilDone();
    intake.move_voltage(-12000);
    pros::delay(400);
    //turn around to intake the triball close the barrier in the middle
    //chassis.turnToPoint(-8, 0, 1000, {.minSpeed = 40});
    chassis.turnToHeading(165, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    intake.move_voltage(12000);
    chassis.moveToPoint(-6, -1, 3000);
    chassis.waitUntilDone();   

    chassis.turnToHeading(90, 1000, {.minSpeed = 50});
    chassis.waitUntilDone();

    backLeftWing.set_value(true);
    backRightWing.set_value(true);
//    intake.move_voltage(-12000);
    chassis.moveToPoint(-50, 4, 1500, {.forwards = false});

    chassis.waitUntilDone();
    backLeftWing.set_value(false);
    backRightWing.set_value(false);

    chassis.moveToPoint(-28, 8 , 1000, {.minSpeed = 50});
    chassis.waitUntilDone();
    chassis.turnToHeading(270, 1000, {.minSpeed = 30});
    chassis.waitUntilDone();
    intake.move_voltage(-12000);

    chassis.moveToPoint(-50, 8, 1500, {.forwards = true});
    chassis.waitUntilDone();
    chassis.moveToPose(-8, 40, 270, 3000, {.forwards = false, .chasePower = 6,  .minSpeed = 70});
    backRightWing.set_value(true);
    //chassis.moveToPoint(-30, 0, 1000, {.forwards = false,.minSpeed = 60});
    chassis.waitUntilDone();
    //chassis.turnToHeading(90, 1000);

}

