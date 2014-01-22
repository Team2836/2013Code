#ifndef SHOOTQUARTER_H
#define SHOOTQUARTER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class ShootQuarter: public CommandBase {
public:
	ShootQuarter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
