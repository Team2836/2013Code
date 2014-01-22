#ifndef CLIMBER_H
#define CLIMBER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Victor.h"

/**
 *
 *
 * @author Ron
 */
class Climber: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *climbMotorVictor;
public:
	Climber();
	void InitDefaultCommand();
	void ClimbStart();
	void Pickup();
	void Stop();
};

#endif
