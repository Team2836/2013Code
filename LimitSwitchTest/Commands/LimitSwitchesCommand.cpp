#include "LimitSwitchesCommand.h"

LimitSwitchesCommand::LimitSwitchesCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(limitswitches);
}

// Called just before this Command runs the first time
void LimitSwitchesCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LimitSwitchesCommand::Execute() {
	limitswitches->ServoMotorMethod();
		
}

// Make this return true when this Command no longer needs to run execute()
bool LimitSwitchesCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LimitSwitchesCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LimitSwitchesCommand::Interrupted() {
}
