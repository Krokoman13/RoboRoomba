#include "mbed/mbed.h"
#include "HCSR04.h" 

//Motor L
PwmOut lspeed(D6);
DigitalOut lfor(D7);
DigitalOut lback(D8);

//Motor R
PwmOut rspeed(D5);
DigitalOut rfor(D2);
DigitalOut rback(D4);

//Sensor
HCSR04 FrontDist(D10, D9);
HCSR04 RightDist(D12, D11);
HCSR04 UnderDist(D14, D13);

DigitalIn mybutton(USER_BUTTON);

//Define
double speed = 0.5; //this is the speed for the robot when driving straight
