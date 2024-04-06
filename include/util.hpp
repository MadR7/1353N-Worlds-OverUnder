#pragma once


enum intakestate {NEUTRAL = 0, INTAKE = 1, OUTTAKE = 2};
enum wingstate {CLOSEBOTH = 0, CLOSELEFT = 1, CLOSERIGHT = 2, OPENBOTH = 3, OPENLEFT = 4, OPENRIGHT = 5};

extern wingstate wing_state;
extern intakestate intake_state;

extern void robotActions();
