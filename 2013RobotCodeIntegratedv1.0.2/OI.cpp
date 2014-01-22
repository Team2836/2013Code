#include "OI.h"
#include "Commands/ShootQuarter.h"
#include "Commands/ShootHalf.h"
#include "Commands/ShootThreeQuarter.h"
#include "Commands/FrisbeeSet.h"
#include "Commands/StartClimb.h"
#include "Commands/PickupBot.h"
#include "Commands/FrisbeeReset.h"
#include "Commands/TopFeeder.h"
#include "Commands/FeederMotor.h"

OI::OI() {
	// Process operator interface input here.
		joystick1 = new Joystick(1);	
			
		joystick2 = new Joystick(2);
			
		joystick3 = new Joystick(3);
		
				button1 = new JoystickButton(joystick3, 3);
				button1->WhileHeld(new ShootHalf());
							
				button2 = new JoystickButton(joystick3, 2);
				button2->WhileHeld(new ShootQuarter());
							
				button3 = new JoystickButton(joystick3, 4);
				button3->WhileHeld(new ShootThreeQuarter());
				
				button7 = new JoystickButton(joystick3, 9);
				button7->WhileHeld(new StartClimb());
							
				button8 = new JoystickButton(joystick3, 10);
				button8->WhileHeld(new PickupBot());
				
				//button9 = new JoystickButton(joystick3, 9);
				//button9->WhileHeld(new FrisbeeSet());
				
				button10 = new JoystickButton(joystick3, 1);
				button10->WhileHeld(new FrisbeeReset());
				
				button11 = new JoystickButton(joystick3, 11);
				button11->WhileHeld(new TopFeeder());
				
				button12 = new JoystickButton(joystick3, 12);
				button12->WhileHeld(new FeederMotor());
								
}
