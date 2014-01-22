#include "DriveTrain.h"
#include "../Robotmap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	//LeftDriveTalon = new Talon(1);
	//RightDriveTalon = new Talon(2);
	drive = new RobotDrive(1,2);
	
}
    
void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}
//void DriveTrain::LDrive(float speed){
//	LeftDriveTalon->Set(speed);
//}
//void DriveTrain::RDrive(float speed){
//	RightDriveTalon->Set(-speed);
//}
void DriveTrain::Drive(float leftspeed, float rightspeed){
	drive->TankDrive(leftspeed, rightspeed);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
