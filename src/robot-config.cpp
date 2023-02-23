#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor fl = motor(PORT1, ratio18_1, false);
motor fr = motor(PORT2, ratio18_1, true);
motor bl = motor(PORT3, ratio18_1, false);
motor br = motor(PORT4, ratio18_1, true);
gps GPS = gps(PORT18, 0.00, 0.00, mm, 180);
inertial Inertial = inertial(PORT21);
optical Optical = optical(PORT19);
/*vex-vision-config:begin*/
signature Vision20__SIG_1 = signature (1, 0, 0, 0, 0, 0, 0, 3, 0);
vision Vision = vision (PORT20, 50, Vision20__SIG_1);
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