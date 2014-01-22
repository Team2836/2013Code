#include "AutonomousFeederCommand.h"
#include "../Subsystems/Hopper.h"

AutonomousFeederCommand::AutonomousFeederCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(hopper);
}

// Called just before this Command runs the first time
void AutonomousFeederCommand::Initialize() {
	hopper->AutoHopper();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousFeederCommand::Execute() {
	
	printf("AutoFeederCommand");
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousFeederCommand::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutonomousFeederCommand::End() {
	hopper->HopperRun();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousFeederCommand::Interrupted() {
	//hopper->HopperStop();
}
