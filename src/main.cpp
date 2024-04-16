#include "main.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
ez::Drive ezchassis (
  // Left Chassis Ports (negative port will reverse it!)
  //   the first port is used as the sensor
  {-18, -19, -20}

  // Right Chassis Ports (negative port will reverse it!)
  //   the first port is used as the sensor
  ,{11, 12, 13}

  // IMU Port
  ,17

  // Wheel Diameter (Remember, 4" wheels without screw holes are actually 4.125!)
  ,3.25

  // Cartridge RPM
  ,400

  // External Gear Ratio (MUST BE DECIMAL) This is WHEEL GEAR / MOTOR GEAR
  // eg. if your drive is 84:36 where the 36t is powered, your RATIO would be 84/36 which is 2.333
  // eg. if your drive is 36:60 where the 60t is powered, your RATIO would be 36/60 which is 0.6
  ,0.75
);

void initialize() {

  pros::lcd::initialize();
 /*
  ez::as::auton_selector.autons_add({
    Auton("Autonomous 1\nDoes Something", auto1),
    Auton("Autonomous 2\nDoes Something Else", auto2),
    Auton("Autonomous 3\nDoes Something More", auto3),
  });
*/
chassis.calibrate();
 // ez::as::initialize();
  //ez::as::auton_selector.selected_auton_print();
  //pros::Task robotaction(robotActions);
    pros::Task screenTask([&]() {
        lemlib::Pose pose(0, 0, 0);
        while (true) {
            // print robot location to the brain screen
            pros::lcd::print(0, "X: %f", chassis.getPose().x); // x
            pros::lcd::print(1, "Y: %f", chassis.getPose().y); // y
            pros::lcd::print(2, "Theta: %f", chassis.getPose().theta); // heading
            // log position telemetry
            lemlib::telemetrySink()->info("Chassis pose: {}", chassis.getPose());
            // delay to save resources
            pros::delay(50);
        }
    });
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
* on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
// chassis.setPose(0, 0, 0);
  //chassis.turnToHeading(180, 3000);
 // chassis.moveToPoint(0, 23.5, 1000);
 //chassis.moveToPose(0, 23.5, 90, 2000, {.lead = 0});
  //closeSideDoubleRush2();


 /*
 chassis.arcade(100, 0);
 pros::delay(500);
 chassis.arcade(0, 0);
 */
 // farSideSafe();
// farSideMidRush();
 
 //farSideSafeExperimental();
    closeSideDoubleRushExperimental();
    //closeSideMidRushExperimental();
  // farSideMidRush();
  //ez::as::auton_selector.selected_auton_call();
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
  bool hangState = false;
  bool backLeftWingState = false;
  bool backRightWingState = false;

  bool backLeftWingToggle = false;
  bool backRightWingToggle = false;
  bool hangon = true;
	while (true) {
        
          // get joystick positions
        double leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        double rightX = 1.12* controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
        // move the chassis with curvature drive
        chassis.arcade(leftY, rightX);
        // delay to save resources
        hangPistons.set_value(hangState);
        backLeftWing.set_value(backLeftWingState);
        backRightWing.set_value(backRightWingState);
        if (controller.get_digital(DIGITAL_L2) & !controller.get_digital(DIGITAL_L1) & !controller.get_digital(DIGITAL_R1) & !controller.get_digital(DIGITAL_R2)) {
          intake.move_voltage(12000);
        }
        else if (controller.get_digital(DIGITAL_R2) & !controller.get_digital(DIGITAL_L1) & !controller.get_digital(DIGITAL_R1) & !controller.get_digital(DIGITAL_L2)) {
          intake.move_voltage(-12000);
        }
        else if (controller.get_digital(DIGITAL_R1) & controller.get_digital(DIGITAL_R2)){
          backRightWingState = true;
          intake.move_voltage(-12000);
        }else if (controller.get_digital(DIGITAL_L1) & controller.get_digital(DIGITAL_L2)){
          backLeftWingState = true;
          intake.move_voltage(-12000);
        }else if(backLeftWingToggle){
          backLeftWingState = true;
        }else if(backRightWingToggle){
          backRightWingState = true;
        }else{
          backRightWingState = false;
          backLeftWingState = false;
          intake.move_voltage(0);
        }
        if (controller.get_digital(DIGITAL_R1) & controller.get_digital_new_press(DIGITAL_L1)){
          hangState = !hangState;
        }
        if (controller.get_digital_new_press(DIGITAL_Y) & !controller.get_digital(DIGITAL_L2) & !controller.get_digital(DIGITAL_R1) & !controller.get_digital(DIGITAL_R2)) {
          backLeftWingToggle = !backLeftWingToggle;
        }
        if (controller.get_digital_new_press(DIGITAL_A) & !controller.get_digital(DIGITAL_L1) & !controller.get_digital(DIGITAL_R2) & !controller.get_digital(DIGITAL_L2)) {
          backRightWingToggle= !backRightWingToggle;
        }
        

        
        if (hangDist.get()<=5 && hangon){
       //   pros::delay(100);
          hangState = false;
          hangon = false;
          } 
        pros::delay(10);
    
	}
}
