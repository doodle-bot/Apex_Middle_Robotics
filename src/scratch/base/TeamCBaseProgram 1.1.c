#pragma config(Motor,  port2,           LeftMotor,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port3,           RightMotor,    tmotorVex393_MC29, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Used for testing *Not for comp. use
task main()
{

  while (true)
  {


    motor(RightMotor) = vexRT[Ch3];
    motor(LeftMotor) = vexRT[Ch2];
}
}
