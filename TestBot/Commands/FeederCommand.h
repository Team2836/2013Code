#ifndef FEEDERCOMMAND_H
#define FEEDERCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class FeederCommand: public CommandBase {
public:
	FeederCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
