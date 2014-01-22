#include "ShooterAngleCommand.h"
#include "../Subsystems/AngleShooter.h"

ShooterAngleCommand::ShooterAngleCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(angleshooter);
}

// Called just before this Command runs the first time
void ShooterAngleCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShooterAngleCommand::Execute() {
	angleshooter->TeleopAngle(oi->joystick3->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterAngleCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShooterAngleCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterAngleCommand::Interrupted() {
}
