#include "LimitSwitches.h"
#include "../Robotmap.h"
#include "../Commands/LimitSwitchesCommand.h"

LimitSwitches::LimitSwitches() : Subsystem("LimitSwitches") 
{
	
	ServoMotor = new Relay(1);
	LimitSwitch1 = new DigitalInput(1);
	LimitSwitch2 = new DigitalInput(2);

}
    
void LimitSwitches::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new LimitSwitchesCommand());
}

void LimitSwitches::ServoMotorMethod()
{
	bool LimitSwitchBool2 = LimitSwitch1->Get();
	bool LimitSwitchBool1 = LimitSwitch2->Get();
	
	if(LimitSwitchBool1 == true && LimitSwitchBool2 == false)
	{
		ServoMotor->Set(Relay::kForward);
	}
	else if(LimitSwitchBool1 == false && LimitSwitchBool2 == true)
	{
		ServoMotor->Set(Relay::kReverse);
	}
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
