#ifndef PICKUPBOT_H
#define PICKUPBOT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class PickupBot: public CommandBase {
public:
	PickupBot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
