#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "Subsystems/DriveSubsystem.h"
#include "Subsystems/Hopper.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Climber.h"
#include "Subsystems/AngleShooter.h"
#include "Subsystems/FrisbeeServos.h"


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
	static OI* CommandBase::oi;
	static DriveSubsystem* CommandBase::drivesubsystem;
	static Hopper* CommandBase::hopper;	
	static Shooter* CommandBase::shooter;
	static Climber* CommandBase::climber;
	static AngleShooter* CommandBase::angleshooter;
	static FrisbeeServos* CommandBase::frisbeeservos;
};

#endif
