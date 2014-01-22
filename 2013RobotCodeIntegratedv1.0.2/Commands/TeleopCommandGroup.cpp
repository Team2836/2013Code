#include "TeleopCommandGroup.h"
#include "DriveCommand.h"
#include "FeederMotor.h"
#include "FrisbeeReset.h"
//#include "FrisbeeSet.h"
#include "PickupBot.h"
#include "ShooterAngleCommand.h"
//#include "ShooterDefault.h"
#include "ShootHalf.h"
#include "ShootQuarter.h"
#include "ShootThreeQuarter.h"
#include "StartClimb.h"
#include "TopFeeder.h"
#include "ShooterAngleCommand.h"

TeleopCommandGroup::TeleopCommandGroup() {
        // Add Commands here:
        // e.g. AddSequential(new Command1());
        //      AddSequential(new Command2());
        // these will run in order.
	AddParallel(new DriveCommand());
	//AddParallel(new FeederMotor());
	AddParallel(new FrisbeeReset());
	//AddParallel(new FrisbeeSet());
	AddParallel(new ShooterAngleCommand());
	//AddParallel(new PickupBot());
	//AddParallel(new ShooterAngleCommand());
	//AddParallel(new ShooterDefault());
	//AddParallel(new ShootHalf());
	//AddParallel(new ShootQuarter());
	//AddParallel(new ShootThreeQuarter());
	//AddParallel(new StartClimb());
	//AddParallel(new TopFeeder());
        // To run multiple commands at the same time,
        // use AddParallel()
        // e.g. AddParallel(new Command1());
        //      AddSequential(new Command2());
        // Command1 and Command2 will run in parallel.

        // A command group will require all of the subsystems that each member
        // would require.
        // e.g. if Command1 requires chassis, and Command2 requires arm,
        // a CommandGroup containing them would require both the chassis and the
        // arm.
}
