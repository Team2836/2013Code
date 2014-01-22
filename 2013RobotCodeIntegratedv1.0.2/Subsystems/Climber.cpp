#include "Climber.h"
#include "../Robotmap.h"
//#include "../Commands/DefaultClimber.h"

Climber::Climber() : Subsystem("Climber") {
	climbMotorVictor = new Victor(8);
}
    
void Climber::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand(new DefaultClimber());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Climber::ClimbStart(){
	climbMotorVictor->Set(1.0);
}
void Climber::Pickup(){
	climbMotorVictor->Set(-1.0);
}
void Climber::Stop(){
	climbMotorVictor->Set(0.0);
}
