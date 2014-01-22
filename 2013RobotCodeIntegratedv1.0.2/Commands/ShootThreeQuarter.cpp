#include "ShootThreeQuarter.h"

ShootThreeQuarter::ShootThreeQuarter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ShootThreeQuarter::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootThreeQuarter::Execute() {
	shooter->ShooterThreeQuarter();
	printf("three quarter speed");
}

// Make this return true when this Command no longer needs to run execute()
bool ShootThreeQuarter::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootThreeQuarter::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootThreeQuarter::Interrupted() {
	shooter->ShooterQuarter();
}
