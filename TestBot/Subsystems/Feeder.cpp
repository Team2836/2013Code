#include "Feeder.h"
#include "../Robotmap.h"
#include "../Commands/FeederCommand.h"

Feeder::Feeder() : Subsystem("Feeder") {
	FeederJag = new Jaguar(3);
}
    
void Feeder::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new FeederCommand());
}
void Feeder::DriveFeeder(float FeederSpeed){
	FeederJag->Set(FeederSpeed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
