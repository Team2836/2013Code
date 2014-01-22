#include "DriveSubsystem.h"
#include "../Commands/DriveCommand.h"
#include "../Robotmap.h"

DriveSubsystem::DriveSubsystem() : Subsystem("DriveSubsystem") {
LeftDriveVictor = new Victor(1);
RightDriveVictor = new Victor(2);
}
    
void DriveSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveCommand());
}

void DriveSubsystem::LDrive(float speed){
	LeftDriveVictor->Set(speed);
}

void DriveSubsystem::RDrive(float speed){
	RightDriveVictor->Set(-speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
