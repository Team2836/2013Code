#ifndef FRISBEESET_H
#define FRISBEESET_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class FrisbeeSet: public CommandBase {
public:
	FrisbeeSet();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
