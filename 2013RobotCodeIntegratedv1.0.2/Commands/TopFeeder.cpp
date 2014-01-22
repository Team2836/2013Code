#include "TopFeeder.h"

TopFeeder::TopFeeder() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(hopper);
}

// Called just before this Command runs the first time
void TopFeeder::Initialize() {
	hopper->TopFeeder();
}

// Called repeatedly when this Command is scheduled to run
void TopFeeder::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool TopFeeder::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TopFeeder::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TopFeeder::Interrupted() {
	hopper->TopFeederStop();
}
