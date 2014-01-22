#include "Shooter.h"
#include "../Commands/ShootHalf.h"
#include "../Robotmap.h"
#include "Talon.h"

Shooter::Shooter() : Subsystem("Shooter") {
	shooterMotorJaguar = new Jaguar(3);
	//ShooterMotorTalon = new Talon(3);
	//angleMotorJaguar = new Jaguar(4);
	//rpm = new Encoder(3, true, k4X);
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new ShootHalf());
	//SetDefaultCommand(new ShooterDefault());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
//void Shooter::ShooterDefault(){
	//shooterMotorTalon->Set(0.10);
//}
void Shooter::ShooterQuarter(){
	//rpm->Get();
	shooterMotorJaguar->Set(-0.25);

	//shooterMotorTalon->Set(-.25);
}
void Shooter::ShooterHalf(){
	shooterMotorJaguar->Set(-0.5);
	//shooterMotorTalon->Set(-0.5);


}
void Shooter::ShooterThreeQuarter(){
	shooterMotorJaguar->Set(-0.75);
	//shooterMotorTalon->Set(-0.75);
}
void Shooter::AutoShooter(){
	shooterMotorJaguar->Set(-0.75);
	//shooterMotorTalon->Set(-0.75);
}
//void Shooter::Stop(){
	//shooterMotorTalon->Set(0.0);
//}
//void Shooter::Angle(float angle){
	//angleMotorJaguar->Set(-angle);
//}
