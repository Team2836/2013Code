#ifndef SHOOTTHREEQUARTER_H
#define SHOOTTHREEQUARTER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class ShootThreeQuarter: public CommandBase {
public:
	ShootThreeQuarter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
