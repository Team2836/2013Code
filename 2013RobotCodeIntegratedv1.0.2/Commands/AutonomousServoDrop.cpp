#include "AutonomousServoDrop.h"
//#include "../Subsystems/FrisbeeServos.h"

AutonomousServoDrop::AutonomousServoDrop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frisbeeservos);
}

// Called just before this Command runs the first time
void AutonomousServoDrop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonomousServoDrop::Execute() {
	frisbeeservos->Stop();
	Wait(7.0);
	frisbeeservos->DropFrisbee();
	Wait(1.0); //First Frisbee
	frisbeeservos->Stop();
	Wait(0.5);
	frisbeeservos->StopFrisbee();
	Wait(1.0);
	frisbeeservos->Stop();
	Wait(1.0);
	frisbeeservos->DropFrisbee();
	Wait(1.0);
	frisbeeservos->Stop();
	Wait(0.5);//Second Frisbee
	frisbeeservos->StopFrisbee();
	Wait(1.0);
	frisbeeservos->Stop();
	Wait(1.0);
	frisbeeservos->DropFrisbee();
	Wait(0.5); //Third Frisbee
	
	
	
	//Timer timer = new Timer();
	//timer->Get();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousServoDrop::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutonomousServoDrop::End() {
	frisbeeservos->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousServoDrop::Interrupted() {
	//frisbeeservos->Stop();
}
