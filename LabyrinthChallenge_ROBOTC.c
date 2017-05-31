//Labyrinth Challenge

task main()
{
//move forward full power for 4 seconds
	motor[port2] = 127; 
	motor[port3] = 127; 

	wait1Msec(3500); 
//stop
	motor[port2] = 0; 
	motor[port3] = 0; 

	wait1Msec(1000); 
//turn left
	motor[port2] = 127; 
	motor[port3] = 0; 

wait1Msec(1500); 
//stop
	motor[port2] = 0; 
	motor[port3] = 0; 
	
	wait1Msec(1000); 
//END OF FIRST LENGTH

//move Forward for 3.5 seconds
	motor[port2] = 127;
	motor[port3] = 127;
	
	wait1Msec(2300);
//stop
	motor[port2] = 0;
	motor[port3] = 0;

	wait1Msec(1000);
//turn right	
	motor[port2] = 0;
	motor[port3] = 127;
	
	wait1Msec(1500);
//stop
	motor[port2] = 0;
	motor[port3] = 0;

	wait1Msec(1000);
//END OF SECOND LENGTH

//move forward for 1.5 seconds
	motor[port2] = 127;
	motor[port3] = 127;

	wait1Msec(1500);
//stop
	motor[port2] = 0;
	motor[port3] = 0;

	wait1Msec(1000);
//turn right
	motor[port2] = 0;
	motor[port3] = 127;

	wait1Msec(1500);
//stop
	motor[port2] = 0;
	motor[port3] = 0;

	wait1Msec(1000);
	
//END OF THIRD LENGTH
  motor[port2] = 127; 
  motor[port3] = 127; 

	wait1Msec(1500);

}