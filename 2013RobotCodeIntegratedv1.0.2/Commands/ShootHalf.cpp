#include "ShootHalf.h"

ShootHalf::ShootHalf() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ShootHalf::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootHalf::Execute() {
	shooter->ShooterHalf();
	printf("half speed");
}

// Make this return true when this Command no longer needs to run execute()
bool ShootHalf::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootHalf::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootHalf::Interrupted() {
	shooter->ShooterQuarter();
}
