#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Talon.h"
//#include "../Commands/ShooterDefault.h"
/**
 *
 *
 * @author Ron
 */
class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Jaguar *shooterMotorJaguar;
	//Talon *shooterMotoTalon;

	//Jaguar *angleMotorJaguar;
	//Encoder *rpm;
public:
	Shooter();
	void InitDefaultCommand();
	void ShooterDefault();
	void ShooterQuarter();
	void ShooterHalf();
	void ShooterThreeQuarter();
	void AutoShooter();
	//void Stop();
	//void Angle(float angle);
};

#endif
