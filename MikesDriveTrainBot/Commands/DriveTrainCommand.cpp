#include "DriveTrainCommand.h"

DriveTrainCommand::DriveTrainCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(drivetrain);
	
}

// Called just before this Command runs the first time
void DriveTrainCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveTrainCommand::Execute() {
	//drivetrain->LDrive(oi->joystick1->GetY());
	//drivetrain->RDrive(oi->joystick2->GetY());
	drivetrain->Drive(oi->joystick1->GetY(), oi->joystick2->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTrainCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveTrainCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTrainCommand::Interrupted() {
}
