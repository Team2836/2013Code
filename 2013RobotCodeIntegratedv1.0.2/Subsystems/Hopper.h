#ifndef HOPPER_H
#define HOPPER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Talon.h"
#include "Servo.h"

/**
 *
 *
 * @author Ron
 */
class Hopper: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Jaguar *hopperMotorJaguar;
	//Talon *hopperMotorTalon;
	//Servo *dropServoServo;
	//Timer *timer;
	//Servo *backServoServo;
	Servo *topFeederServo;
public:
	Hopper();
	void InitDefaultCommand();
	void HopperRun();
	//void DropFrisbee();
	//void StopFrisbee();
	void HopperStop();
	void AutoHopper();
	void TopFeeder();
	void TopFeederStop();
};

#endif
