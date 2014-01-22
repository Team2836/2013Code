#ifndef DRIVETRAINCOMMAND_H
#define DRIVETRAINCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author rdeast3
 */
class DriveTrainCommand: public CommandBase {
public:
	DriveTrainCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
