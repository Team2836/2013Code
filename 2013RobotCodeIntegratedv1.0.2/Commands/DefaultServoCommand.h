#ifndef DEFAULTSERVOCOMMAND_H
#define DEFAULTSERVOCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 2836
 */
class DefaultServoCommand: public CommandBase {
public:
	DefaultServoCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
