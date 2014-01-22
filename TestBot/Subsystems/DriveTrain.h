#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Encoder.h"

/**
 *
 *
 * Mike
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *LeftDriveVictor;
	Victor *RightDriveVictor;
	//Encoder *FirstEncoder;
	//Encoder *SecondEncoder;
	
public:
	DriveTrain();
	void InitDefaultCommand();
	void LDrive (float speed);
	void RDrive (float speed);
};

#endif