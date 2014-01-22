#include "PotsCommand.h"

PotsCommand::PotsCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(pots);
}

// Called just before this Command runs the first time
void PotsCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void PotsCommand::Execute() {
	pots->PotsMethod();
}

// Make this return true when this Command no longer needs to run execute()
bool PotsCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PotsCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PotsCommand::Interrupted() {
}
