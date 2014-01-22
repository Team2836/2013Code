#ifndef AUTONOMOUSSERVODROP_H
#define AUTONOMOUSSERVODROP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class AutonomousServoDrop: public CommandBase {
public:
	AutonomousServoDrop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

