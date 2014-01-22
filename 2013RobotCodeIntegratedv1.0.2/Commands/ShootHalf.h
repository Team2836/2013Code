#ifndef SHOOTHALF_H
#define SHOOTHALF_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Ron
 */
class ShootHalf: public CommandBase {
public:
	ShootHalf();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
