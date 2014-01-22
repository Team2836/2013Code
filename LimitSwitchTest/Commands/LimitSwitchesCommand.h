#ifndef LIMITSWITCHESCOMMAND_H
#define LIMITSWITCHESCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class LimitSwitchesCommand: public CommandBase {
public:
	LimitSwitchesCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
