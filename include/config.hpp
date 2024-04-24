#pragma once

#include "api.h"
#include "config.hpp"
#include "lemlib/api.hpp"
#include "EZ-Template/api.hpp"
#include "pros/imu.hpp"

extern pros::Imu imu;

extern pros::Controller controller;
extern lemlib::Chassis chassis;

extern bool backLeftWingState;
extern bool backRightWingState;


extern pros::ADIDigitalIn leftBumper;
extern pros::ADIDigitalIn rightBumper;

extern pros::Distance backResetDist;
extern pros::Distance leftResetDist;
extern pros::Distance rightResetDist;

extern pros::ADIDigitalOut backLeftWing;
extern pros::ADIDigitalOut backRightWing;
extern pros::Motor intakemtr1;
extern pros::Motor intakemtr2;
extern pros::MotorGroup intake;
extern pros::ADIDigitalOut hangPistons;
extern bool hangState;
extern pros::Distance hangDist;
extern pros::Distance backResetDist;
extern ez::Drive ezchassis;



extern const int DRIVE_SPEED;
extern const int TURN_SPEED;
extern const int SWING_SPEED;