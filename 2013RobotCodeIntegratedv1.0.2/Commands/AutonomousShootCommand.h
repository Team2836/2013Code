#ifndef AUTONOMOUSSHOOTCOMMAND_H
#define AUTONOMOUSSHOOTCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class AutonomousShootCommand: public CommandBase {
public:
	AutonomousShootCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

