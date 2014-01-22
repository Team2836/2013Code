#include "FeederCommand.h"

FeederCommand::FeederCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(feeder);
}

// Called just before this Command runs the first time
void FeederCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void FeederCommand::Execute() {
	feeder->DriveFeeder(oi->joystick3->GetY());
	
}

// Make this return true when this Command no longer needs to run execute()
bool FeederCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FeederCommand::End() {
	feeder->DriveFeeder(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FeederCommand::Interrupted() {
}
