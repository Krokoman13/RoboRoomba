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

//Front Ultrasone
