#include "config.hpp"
#include "main.h"
intakestate intake_state = NEUTRAL;
wingstate wing_state = CLOSEBOTH;

void automaticA(){
  imu.tare_roll();
  int rollval = 20; //I need to figure out what the actual value would be, this is just a placeholder
  while(imu.get_roll() < rollval){
    chassis.arcade(50, 0);
  }
  backRightWing.set_value(true);
  chassis.arcade(0, 0);
}

void wingState(){
  if (backLeftWingState){
    backLeftWing.set_value(true);
  }else{
    backLeftWing.set_value(false);
  }

  if (backRightWingState){
    backRightWing.set_value(true);
  }else{
    backRightWing.set_value(false);
    
  }
}


void robotActions(){
  if (intake_state == NEUTRAL){
    intake.move_voltage(0);
  }else if (intake_state == INTAKE){
    intake.move_voltage(12000);
  }else if (intake_state == OUTTAKE){
    intake.move_voltage(-12000);
  }
  
  if (wing_state = CLOSEBOTH){
    backLeftWing.set_value(false);
    backRightWing.set_value(false);
  }else if (wing_state = CLOSELEFT){
    backLeftWing.set_value(false);
  }else if (wing_state = CLOSERIGHT){
    backRightWing.set_value(false);
  }else if (wing_state = OPENBOTH){
    backLeftWing.set_value(true);
    backRightWing.set_value(true);
  }else if (wing_state = OPENLEFT){
    backLeftWing.set_value(true);
  }else if (wing_state = OPENRIGHT){
    backRightWing.set_value(true);
  }
}


void backReset(){

}
