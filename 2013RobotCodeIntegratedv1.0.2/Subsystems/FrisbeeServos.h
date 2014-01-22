#ifndef FRISBEESERVOS_H
#define FRISBEESERVOS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 2836
 */
class FrisbeeServos: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Servo *dropServoServo;
	Servo *backServoServo;
	Timer *timer;
			
public:
	FrisbeeServos();
	void InitDefaultCommand();
	void DropFrisbee();
	void StopFrisbee();
	void Stop();
};

#endif
