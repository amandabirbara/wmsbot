#pragma config(Motor,  port1,           collectleft,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           elevateleft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driverightback, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           driveleftfront, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           shootleft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           shootright,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           driveleftback,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           driverightfront,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           elevateright,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          collectright,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()	{




// THis is new code. Hooray!

	while (true) {
    

		//////////////////////////////////////////////////////////	  
		//
		// DRIVE 
		//

		// RIGHT SIDE

		// TODO: Write code to listen to Channel 2
		//       move motors driverightfront and driverightback



		// LEFT SIDE

		// TODO: Write code to move Channel 3 forward and back
		//       move motors driveleftfront and driveleftback



		//////////////////////////////////////////////////////////
		//
		// COLLECTOR MECHANISM
		//	

		// motors: collectleft, collectright
		//

		// TODO: Forward. Reverse. Stop.
		// Press 5U for foward. Release to stop
		// Press 5D for reverse. Release to stop
		// motors: collectleft & collectright

		// POTENTIAL BUG! What happens if 5U and 5D are pressed at the same time


		//////////////////////////////////////////////////////////
		//
		// ELEVATOR 
		// TODO: Forward. Reverse. Stop.
		// Press 6U for foward. Release to stop
		// Press 6D for reverse. Release to stop
		// motors: elevateleft & elevateright


		//////////////////////////////////////////////////////////
		//
		// SHOOTER 
		//		
		// motors: shootleft, shootright

		// todo: stop. start
		//        warmup code

		// 7u to start
		// 7D to stop
		
			
		

	} // END while (true)

} // END task main