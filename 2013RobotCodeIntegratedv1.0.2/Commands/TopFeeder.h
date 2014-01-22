#ifndef TOPFEEDER_H
#define TOPFEEDER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class TopFeeder: public CommandBase {
public:
	TopFeeder();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
