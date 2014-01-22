#ifndef FRISBEERESET_H
#define FRISBEERESET_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class FrisbeeReset: public CommandBase {
public:
	FrisbeeReset();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
