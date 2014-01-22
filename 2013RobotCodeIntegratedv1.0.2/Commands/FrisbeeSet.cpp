/*#include "FrisbeeSet.h"
//#include "../Subsystems/Hopper.h"

FrisbeeSet::FrisbeeSet() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frisbeeservos);
}

// Called just before this Command runs the first time
void FrisbeeSet::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void FrisbeeSet::Execute() {
	frisbeeservos->DropFrisbee();
	Wait(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool FrisbeeSet::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FrisbeeSet::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FrisbeeSet::Interrupted() {
	frisbeeservos->Stop();
}
*/
