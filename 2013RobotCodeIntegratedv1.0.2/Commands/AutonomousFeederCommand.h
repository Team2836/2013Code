#ifndef AUTONOMOUSFEEDERCOMMAND_H
#define AUTONOMOUSFEEDERCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class AutonomousFeederCommand: public CommandBase {
public:
	AutonomousFeederCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

