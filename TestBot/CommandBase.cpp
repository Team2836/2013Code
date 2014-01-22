#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Feeder.h"
#include "Subsystems/LimitSwitches.h"
//#include "Subsystems/Pots.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
DriveTrain* CommandBase::drivetrain = NULL;
Feeder* CommandBase::feeder =NULL;
LimitSwitches* CommandBase::limitswitches =NULL;
//Pots* CommandBase::pots =NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	drivetrain = new DriveTrain();
	feeder = new Feeder();
	limitswitches = new LimitSwitches();
	//pots = new Pots();
	oi = new OI();
}
