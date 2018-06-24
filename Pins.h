#include "mbed/mbed.h"
#include "HCSR04.h" 

DigitalIn button(MyButton);

//MotorL
PwmOut Lspd(Pin);
Lspd.period(0.010);
DigitalOut LFrt(Pin);
DigitalOut LBck(Pin);

//MotorR
PwmOut Rspd(Pin);
Rspd.period(0.010);
DigitalOut RFrt(Pin);
DigitalOut RBck(Pin);

//Sensor
HCSR04 FrontDist(D10, D9);
HCSR04 RightDist(D12, D11);
HCSR04 UnderDist(D14, D13);

DigitalIn mybutton(USER_BUTTON);

//Define
double speed = 0.5; //this is the speed for the robot when driving straight
