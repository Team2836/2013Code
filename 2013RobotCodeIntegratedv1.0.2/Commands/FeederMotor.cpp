#include "FeederMotor.h"

FeederMotor::FeederMotor() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(hopper);
}

// Called just before this Command runs the first time
void FeederMotor::Initialize() {
	hopper->HopperRun();
}

// Called repeatedly when this Command is scheduled to run
void FeederMotor::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool FeederMotor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FeederMotor::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FeederMotor::Interrupted() {
	hopper->HopperStop();
}
