#include "AutonomousShootCommand.h"
//#include "../Subsystems/Shooter.h"

AutonomousShootCommand::AutonomousShootCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void AutonomousShootCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonomousShootCommand::Execute() {
	shooter->ShooterHalf();
	printf("Autonomous Shooter");
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousShootCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousShootCommand::End() {
	//shooter->ShooterThreeQuarter();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousShootCommand::Interrupted() {
	//shooter->ShooterQuarter();
}

