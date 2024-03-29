#include "Pots.h"
#include "../Robotmap.h"
#include "AnalogPotentiometer.h"
#include "../Commands/PotsCommand.h"

Pots::Pots() : Subsystem("Pots") {
	Pots1 = new AnalogPotentiometer(5);
	
}
    
void Pots::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new PotsCommand());
}

void Pots::PotsMethod()
{
	double PotsOutput = Pots1->Get();
	printf("%lf", PotsOutput);
	if(PotsOutput == 0){
		
	}
}	

// Put methods for controlling this subsystem
// here. Call these from Commands.
