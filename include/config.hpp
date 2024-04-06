#pragma once

#include "api.h"
#include "lemlib/api.hpp"

extern pros::Controller controller;
extern lemlib::Chassis chassis;
extern pros::ADIDigitalOut backLeftWing;
extern pros::ADIDigitalOut backRightWing;
extern pros::Motor intakemtr1;
extern pros::Motor intakemtr2;
extern pros::MotorGroup intake;
extern pros::ADIDigitalOut hangPistons;
extern bool hangState;
extern pros::Distance hangDist;
