#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
DriveSubsystem* CommandBase::drivesubsystem = NULL;
Hopper* CommandBase::hopper = NULL;
Shooter* CommandBase::shooter = NULL;
Climber* CommandBase::climber = NULL;
AngleShooter* CommandBase::angleshooter = NULL;
FrisbeeServos* CommandBase::frisbeeservos = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	
	oi = new OI();
	drivesubsystem = new DriveSubsystem();
	hopper = new Hopper();
	shooter = new Shooter();
	climber = new Climber();
	angleshooter = new AngleShooter();
	frisbeeservos = new FrisbeeServos();
}
