#ifndef FEEDER_H
#define FEEDER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author rdeast3
 */
class Feeder: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Jaguar *FeederJag;
public:
	Feeder();
	void InitDefaultCommand();
	void DriveFeeder(float FeederSpeed);
};

#endif
