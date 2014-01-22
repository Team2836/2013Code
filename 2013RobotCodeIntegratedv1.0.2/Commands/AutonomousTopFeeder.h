#ifndef AUTONOMOUSTOPFEEDER_H
#define AUTONOMOUSTOPFEEDER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class AutonomousTopFeeder: public CommandBase {
public:
	AutonomousTopFeeder();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

