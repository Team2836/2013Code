#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Feeder.h"
#include "Subsystems/LimitSwitches.h"
//#include "Subsystems/Pots.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem* examplesubsystem;
	static DriveTrain* CommandBase::drivetrain;
	static Feeder* CommandBase::feeder;
	static LimitSwitches* CommandBase::limitswitches;
	//static Pots* CommandBase::pots;
	static OI *oi;
};

#endif
