#pragma config(Motor,  port2,           LeftMotor,     tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           RightMotor,    tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port6,           TopMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           ClawMotor,     tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Created for testing *Not for comp. use
task main()
{
 	while(1==1)
	{
		if(vexRT[Btn6U] == 1)
{
			motor[TopMotor] = -127;
}
		else if(vexRT[Btn6D] == 1)
{
			motor[TopMotor] = 127;
}
		else
{
    motor[TopMotor] = 0;
}



    motor(RightMotor) = vexRT[Ch3] + vexRT[Ch1];
    motor(LeftMotor) = vexRT[Ch3] - vexRT [Ch1];

   if(vexRT[Btn5U] == 1)

 			motor(ClawMotor) = -127;

 		else if(vexRT[Btn5D] == 1)

 			motor(ClawMotor) = 127;

 		else

			motor(ClawMotor) = 0;


}

}
