#ifndef SHOOTERANGLECOMMAND_H
#define SHOOTERANGLECOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class ShooterAngleCommand: public CommandBase {
public:
	ShooterAngleCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
