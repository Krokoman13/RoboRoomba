#include "VacFunc.h"
#include "mbed/mbed.h"

int main()
{
	enum State { start, wait, move, obstacle, stop};
	State states = start;
	int Angle = 0; 
	bool loop = true;

	while (loop == true) {		//The program stops when loop is set to false
		switch (states) {
		case start:
			initiate();		//Initiatates the period for pwm signal towards the motors
			states = wait;
			while (start() == true) {wait(0.1);};
			break;

		case wait:
			if (FrontDist.distance() > 15 || UnderDist.distance() < 15) {		//If there is a object or a drop
				Stop();		//Stop both motors
				states = obstacle;		//Go to the obstacle state
			}

			else if (start() == false) states = stop;

			else straight();	//if there is no obstacle just drive on
			break;

		case obstacle:
			if if (FrontDist.distance() > 15 || UnderDist.distance() < 15) {		//If there still an obstacle
			move(false, true, 0.1)		//Make a slight turn left
			Angle++;
			}

			else if (right.DistMM() > 30) {		//If there is no obstacle on the right
				motorL.set_dir(true);		//set the motors to turn right
				motorR.set_dir(false);
				move(true, false, Angle * 0.1);		//Make a right turn equal to the turn to the left
				Angle = 0;
				states = wait;		//go back to wait
			}

			else {		//If there is no object in front of the robot but there is one on the right
				straight();		//Drive straight
			}
			break;

		case stop:
			Stop();		//Stop robot
			loop = false;		//Stop the program
			break;
		}
	}
}
