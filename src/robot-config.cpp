#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Motor1 = motor(PORT1, ratio18_1, false);
gps GPS18 = gps(PORT18, 0.00, 0.00, mm, 180);
inertial Inertial21 = inertial(PORT21);
optical Optical19 = optical(PORT19);
/*vex-vision-config:begin*/
signature Vision20__SIG_1 = signature (1, 0, 0, 0, 0, 0, 0, 3, 0);
vision Vision20 = vision (PORT20, 50, Vision20__SIG_1);
/*vex-vision-config:end*/

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}