#ifndef DRIVESUBSYSTEM_H
#define DRIVESUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Ron
 */
class DriveSubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *LeftDriveVictor;
	Victor *RightDriveVictor;
public:
	DriveSubsystem();
	void InitDefaultCommand();
	void LDrive(float speed);
	void RDrive(float speed);
};

#endif
