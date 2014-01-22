#include "DefaultServoCommand.h"
//#include "../Subsystems/FrisbeeServos.h"

DefaultServoCommand::DefaultServoCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frisbeeservos);
}

// Called just before this Command runs the first time
void DefaultServoCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DefaultServoCommand::Execute() {
	frisbeeservos->Stop();
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultServoCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DefaultServoCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultServoCommand::Interrupted() {
}
