#include "FrisbeeServos.h"
//#include "../Commands/DefaultServoCommand.h"
#include "../Robotmap.h"

FrisbeeServos::FrisbeeServos() : Subsystem("FrisbeeServos") {
		dropServoServo = new Servo(6);
		timer = new Timer();
		backServoServo = new Servo(7);
}
    
void FrisbeeServos::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand (new DefaultServoCommand());
}
void FrisbeeServos::DropFrisbee(){
	//timer->Start();
	dropServoServo->Get();
	dropServoServo->Set(0.5);
	//timer->Get();
	//printf("%d", timer->Get());
	//Wait(2.0);
	//dropServoServo->Set(0.0);
	printf("This is the front servo loop");
}
void FrisbeeServos::StopFrisbee(){
	//timer->Start();
	//backServoServo->GetAngle();
	backServoServo->Get();
	backServoServo->Set(0.5);
	//Wait(2.0);
	//if (backServoServo->GetAngle() == -45){
	//backServoServo->Set(0.0);
	
	//printf("I am caught in a continuous loop");
	//}
	//else{
		//backServoServo->Set(0.0);
	//}
}
void FrisbeeServos::Stop(){
	dropServoServo->Set(0.15);
	backServoServo->Set(0.0);
	//dropServoServo->StopMotor();
	//backServoServo->StopMotor();
	//time->Reset();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
