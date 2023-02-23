using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern controller Controller1;
extern motor Motor1;
extern gps GPS18;
extern inertial Inertial21;
extern optical Optical19;
extern signature Vision20__SIG_1;
extern signature Vision20__SIG_2;
extern signature Vision20__SIG_3;
extern signature Vision20__SIG_4;
extern signature Vision20__SIG_5;
extern signature Vision20__SIG_6;
extern signature Vision20__SIG_7;
extern vision Vision20;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );