#include "FrisbeeReset.h"
//#include "../Subsystems/Hopper.h"

FrisbeeReset::FrisbeeReset() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frisbeeservos);
}

// Called just before this Command runs the first time
void FrisbeeReset::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void FrisbeeReset::Execute() {
	frisbeeservos->StopFrisbee();
	Wait(1.0);
	frisbeeservos->Stop();
	Wait(1.0);
	frisbeeservos->DropFrisbee();
	Wait(1.0);
	
}

// Make this return true when this Command no longer needs to run execute()
bool FrisbeeReset::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FrisbeeReset::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FrisbeeReset::Interrupted() {
	frisbeeservos->Stop();
}
