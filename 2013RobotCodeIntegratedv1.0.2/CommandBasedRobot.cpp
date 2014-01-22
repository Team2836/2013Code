#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "Commands/AutonomousGroup.h"
//#include "Commands/AutonomousFeederCommand.h"
//#include "Commands/AutonomousServoDrop.h"
//#include "Commands/AutonomousShootCommand.h"
//#include "Commands/AutonomousTopFeeder.h"
#include "CommandBase.h"
//#include "Vision/AxisCamera.h"

class CommandBasedRobot : public IterativeRobot {
private:
	
	Command *autonomousCommand;
	//SmartDashboard *dash;
	
	//ColorImage *image;
			
	LiveWindow *lw;
	
	virtual void RobotInit() {
		CommandBase::init();
		//AxisCamera &camera = AxisCamera::GetInstance();
		//SmartDashboard.PutData(camera);
		//SmartDashboard::PutData("Camera", AxisCamera &camera = AxisCamera::GetInstance(););
		lw->GetInstance();
		//dash = new SmartDashboard();
		//dash-> SendData(camera);
		//camera.GetImage(image);
		
		autonomousCommand = new ExampleCommand();
		autonomousCommand = new AutonomousGroup();
		//autonomousCommand = new AutonomousFeederCommand();
		//autonomousCommand = new AutonomousServoDrop();
		//autonomousCommand = new AutonomousShootCommand();
		//autonomousCommand = new AutonomousTopFeeder();
		
		lw = LiveWindow::GetInstance();
	}
	
	virtual void AutonomousInit() {
		autonomousCommand->Start();
		
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
		
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

