#ifndef FEEDERMOTOR_H
#define FEEDERMOTOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class FeederMotor: public CommandBase {
public:
	FeederMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
