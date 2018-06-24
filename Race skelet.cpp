#include "VacFunc.h"
#include "mbed/mbed.h"

int main()
{
	enum State { start, wait, move, obstacle, stop};
	State states = start;

	Motor motorR(true, 1.0);
	Motor motorL(true, 1.0);

	DistSensor front;
	DistSensor under;
	DistSensor right;

	DigitalIn button();

	bool second -
	int Angle = 1; 
	bool loop = true;

	while (loop == true) {		//The program stops when loop is set to false
		switch (states) {
		case start:
			states = wait;
			break;

		case wait:
			if (under.DistMM() > 20 || front.DistMM() < 20) {		//If there is a object or a drop
				Stop(motorL, motorR);		//Stop both motors
				states = obstacle;		//Go to the obstacle state
			}

			else if (button == true) states = stop;

			else Move(motorL, motorR);	//if there is no obstacle just drive on
			break;

		case obstacle:
			if (under.DistMM() > 20 || front.DistMM() < 20) {		//If there still an obstacle
				motorL.set_dir(false);		//Set the motors to turn left
				motorR.set_dir(true);
				Move(motorL, motorR);		//Make a slight turn left
				Angle++;
			}

			else if (right.DistMM() > 30) {		//If there is no obstacle on the right
				motorL.set_dir(true);		//set the motors to turn right
				motorR.set_dir(false);
				Move(motorL, motorR, Angle);		//Make a turn equal to the turn to the left
				Angle = 0;
				states = wait;		//go back to wait
			}

			else {		//If there is no object in front of the robot but there is one on the right
				motorL.set_dir(true);		//set the motors to drive staight
				motorR.set_dir(true);
				Move(motorL, motorR);		//Drive straight
			}
			break;

		case stop:
			Stop(motorL, motorR);		//Stop robot
			loop = false;		//Stop the program
			break;
		}
	}
}
