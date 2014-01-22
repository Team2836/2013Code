#include "OI.h"
#include "Commands/FeederCommand.h"
#include "Commands/DriveTrainCommand.h"

OI::OI() {
	// Process operator interface input here.
	joystick1 = new Joystick(1);
	joystick2 = new Joystick(2);
	joystick3 = new Joystick(3);
	//button1 = new JoystickButton(joystick3, 1);
	//button2 = new JoystickButton(joystick1, 1);
	//button1->WhileHeld(new FeederCommand());
	//button2->WhileHeld(new DriveTrainCommand());
}
