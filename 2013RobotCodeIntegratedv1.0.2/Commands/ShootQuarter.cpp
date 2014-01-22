#include "ShootQuarter.h"

ShootQuarter::ShootQuarter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ShootQuarter::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootQuarter::Execute() {
	shooter->ShooterQuarter();
	printf("quarter speed");
}

// Make this return true when this Command no longer needs to run execute()
bool ShootQuarter::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootQuarter::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootQuarter::Interrupted() {
	shooter->ShooterQuarter();
}
