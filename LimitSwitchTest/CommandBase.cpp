#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/LimitSwitches.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
LimitSwitches* CommandBase::limitswitches =NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	limitswitches = new LimitSwitches();
	
	oi = new OI();
}
