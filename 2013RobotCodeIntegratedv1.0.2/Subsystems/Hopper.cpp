#include "Hopper.h"
#include "../Robotmap.h"
#include "../Commands/FeederMotor.h"
#include "Servo.h"

Hopper::Hopper() : Subsystem("Hopper") {
	hopperMotorJaguar = new Jaguar(5);

	//hopperMotorTalon = new Talon(5);
	//dropServoServo = new Servo(6);
	//timer = new Timer();
	//backServoServo = new Servo(7);
	topFeederServo = new Servo(9);
}
void Hopper::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand(new FeederMotor());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Hopper::HopperRun(){
	hopperMotorJaguar->Set(1.0);
	//hopperMotorTalon->Set(1.0);
}
void Hopper::HopperStop(){
	hopperMotorJaguar->Set(0.0);

	//hopperMotorTalon->Set(0.0);
}
void Hopper::AutoHopper(){
	hopperMotorJaguar->Set(1.0);
	//hopperMotorTalon->Set(1.0);
}
/*void Hopper::DropFrisbee(){
	//timer->Start();
	//dropServoServo->SetAngle(90);
	//timer->;
	//Wait(2.0);
	//dropServoServo->SetAngle(-90);
	//printf("This is the front servo loop");
}
void Hopper::StopFrisbee(){
	timer->Start();
	backServoServo->SetAngle(90);
	Wait(2.0);
	//if (backServoServo->GetAngle() == -45){
	backServoServo->SetAngle(-90);
	//printf("I am caught in a continuous loop");
	//}
	//else{
		//backServoServo->Set(0.0);
	//}
}
void Hopper::Stop(){
	dropServoServo->Set(0.0);
	backServoServo->Set(0.0);
	//time->Reset();
}*/
void Hopper::TopFeeder(){
	topFeederServo->Set(-1.0);
}
void Hopper::TopFeederStop(){
	topFeederServo->Set(0.0);
}
