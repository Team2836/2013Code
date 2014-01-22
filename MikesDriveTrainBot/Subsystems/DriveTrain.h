#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author rdeast3
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	//Talon *LeftDriveTalon;
	//Talon *RightDriveTalon;
	RobotDrive *drive;
public:
	DriveTrain();
	void InitDefaultCommand();
	//void LDrive (float speed);
	//void RDrive (float speed);
	void Drive(float leftspeed, float rightspeed);
};

#endif
