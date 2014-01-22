#ifndef STARTCLIMB_H
#define STARTCLIMB_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class StartClimb: public CommandBase {
public:
	StartClimb();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
