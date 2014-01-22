#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

public:
	OI();
		Joystick *joystick1;
		Joystick *joystick2;
		Joystick *joystick3;
		JoystickButton *button1;
		JoystickButton *button2;
};

#endif
