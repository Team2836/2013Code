#include "AutonomousTopFeeder.h"
//#include "../Subsystems/Hopper.h"

AutonomousTopFeeder::AutonomousTopFeeder() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(hopper);
}

// Called just before this Command runs the first time
void AutonomousTopFeeder::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonomousTopFeeder::Execute() {
	hopper->TopFeeder();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousTopFeeder::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AutonomousTopFeeder::End() {
	hopper->TopFeeder();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousTopFeeder::Interrupted() {
}

