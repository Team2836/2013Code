#ifndef ANGLESHOOTER_H
#define ANGLESHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 2836
 */
class AngleShooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *angleMotorVictor;
public:
	AngleShooter();
	void InitDefaultCommand();
	void TeleopAngle(float angle);
};

#endif
