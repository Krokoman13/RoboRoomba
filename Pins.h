#include "mbed/mbed.h"

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
DigitalIn svin(D9);
DigitalOut svout(D10);
DigitalIn srin(D11);
DigitalOut srout(D12);
DigitalIn soin(D13);
DigitalOut soout(D14);

DigitalIn mybutton(USER_BUTTON);

//Define
double speed = 0.5; //this is the speed for the robot when driving straight
