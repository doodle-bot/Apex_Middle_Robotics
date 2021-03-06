#pragma config(Motor,  port2,           LeftMotor,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           RightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           TopMotor,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
  //The robot moves forward
	motor(LeftMotor) = 127;
	motor(RightMotor) = 127;
	wait1Msec(1400);

//The robot stops
	motor(LeftMotor) = 0;
	motor(RightMotor) = 0;
	wait1Msec(500);

//The robot arm rises
	motor(TopMotor) = 127;
	wait1Msec(250);

//The robot arm stops
	motor(TopMotor) = 0;
	wait1Msec(300);

//The robot drives forward
	motor(LeftMotor) = 127;
	motor(RightMotor) = 127;
	wait1Msec(100);

//The robot stops
	motor(LeftMotor) = 0;
	motor(RightMotor) = 0;
	wait1Msec(100);

//The robot arm lowers
	motor(TopMotor) = -127;
	wait1Msec(250);

//The robot arm stops
	motor(TopMotor) = 127;
	wait1Msec(300);

//The robot drives backward
	motor(TopMotor) = -127;
	motor(LeftMotor) = -127;
	motor(RightMotor) = -127;
	wait1Msec(300);


//The robot stops
	motor(TopMotor) = 0;
	motor(LeftMotor) = 0;
	motor(RightMotor) = 0;
	wait1Msec(200);
  AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
  // User control code here, inside the loop

  while (true)
  {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.
	while(1==1)
	{
		if(vexRT[Btn6U] == 1)
{
			motor[TopMotor] = - 90;
}
		else if(vexRT[Btn6D] == 1)
{
			motor[TopMotor] = + 60;
}
		else
{
    motor[TopMotor] = 0;
}



    motor(RightMotor) = vexRT[Ch3] - vexRT[Ch1];
    motor(LeftMotor) = vexRT[Ch3] + vexRT [Ch1];
    UserControlCodePlaceholderForTesting();
  }
}
}
