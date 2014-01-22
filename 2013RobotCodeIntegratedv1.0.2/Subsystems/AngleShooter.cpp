#include "AngleShooter.h"
#include "../Commands/ShooterAngleCommand.h"
#include "../Robotmap.h"

AngleShooter::AngleShooter() : Subsystem("AngleShooter") {
	angleMotorVictor = new Victor(4);
}
    
void AngleShooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand (new ShooterAngleCommand());
}
void AngleShooter::TeleopAngle(float angle){
	angleMotorVictor->Set(0.5*angle);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
