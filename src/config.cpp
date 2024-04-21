#include "main.h"

pros::Controller controller(pros::E_CONTROLLER_MASTER);

// drive motors
pros::Motor lF(-18, pros::E_MOTOR_GEARSET_06); // left front motor. port 12, reversed
pros::Motor lM(-19, pros::E_MOTOR_GEARSET_06); // left middle motor. port 11, reversed
pros::Motor lB(-20, pros::E_MOTOR_GEARSET_06); // left back motor. port 1, reversed
pros::Motor rF(11, pros::E_MOTOR_GEARSET_06); // right front motor. port 2
pros::Motor rM(12, pros::E_MOTOR_GEARSET_06); // right middle motor. port 11
pros::Motor rB(13, pros::E_MOTOR_GEARSET_06); // right back motor. port 13

// motor groups
pros::MotorGroup leftMotors({lF, lM, lB}); // left motor group
pros::MotorGroup rightMotors({rF, rM, rB}); // right motor group

pros::Motor intakemtr1(-15);
pros::Motor intakemtr2(16);

pros::MotorGroup intake({intakemtr1, intakemtr2});
pros::ADIDigitalOut backLeftWing('D');
pros::ADIDigitalOut backRightWing('E');
pros::ADIDigitalOut hangPistons('C');
// Inertial Sensor on port 2
pros::Imu imu(17);

pros::Distance hangDist(1);
pros::Distance backResetDist(9);
pros::Distance leftResetDist(10);
pros::Distance rightResetDist(2);

pros::ADIDigitalIn leftBumper('F');
pros::ADIDigitalIn rightBumper('G');


// tracking wheels
// horizontal tracking wheel encoder. Rotation sensor, port 15, reversed (negative signs don't work due to a pros bug)
// horizontal tracking wheel. 2.75" diameter, 3.7" offset, back of the robot (negative)
//lemlib::TrackingWheel horizontal(&horizontalEnc, lemlib::Omniwheel::NEW_275, -3.7);

// drivetrain settings
lemlib::Drivetrain drivetrain(&leftMotors, // left motor group
                              &rightMotors, // right motor group
                              12.5, // 10 inch track width
                              lemlib::Omniwheel::NEW_325, // using new 3.25" omnis
                              450, // drivetrain rpm is 360
                              2 // chase power is 2. If we had traction wheels, it would have been 8
);
lemlib::ControllerSettings linearController(12, // proportional gain (kP)
                                            0, // integral gain (kI)
                                            4, // derivative gain (kD)
                                            0, // anti windup
                                            1, // small error range, in inches
                                            100, // small error range timeout, in milliseconds
                                            3, // large error range, in inches
                                            250, // large error range timeout, in milliseconds
                                            20 // maximum acceleration (slew)
);

// angular motion controller
lemlib::ControllerSettings angularController(2, // proportional gain (kP)
                                             0, // integral gain (kI)
                                             12, // derivative gain (kD)
                                             3, // anti windup
                                             1, // small error range, in degrees
                                             100, // small error range timeout, in milliseconds
                                             1, // large error range, in degrees
                                             250, // large error range timeout, in milliseconds
                                             0 // maximum acceleration (slew)
);

// sensors for odometry
// note that in this example we use internal motor encoders (IMEs), so we don't pass vertical tracking wheels
lemlib::OdomSensors sensors(nullptr, // vertical tracking wheel 1, set to null
                            nullptr, // vertical tracking wheel 2, set to nullptr as we are using IMEs
                            nullptr, // horizontal tracking wheel 1
                            nullptr, // horizontal tracking wheel 2, set to nullptr as we don't have a second one
                            &imu // inertial sensor
);

// create the chassis
lemlib::Chassis chassis(drivetrain, linearController, angularController, sensors);
