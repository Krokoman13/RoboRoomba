#include "VacClass.h"

void Move(Motor motorL, Motor motorR);		//Actually move the motors based on the speed and direction given
void Move(Motor motorL, Motor motorR, int sec);
void Stop(Motor motor1, Motor motor2);		//Stop the motor
bool Detect(DistSensor dist, DistSensor dist2, DistSensor dist3);
bool DetectO(DistSensor dist);
bool DetectD(DistSensor dist);
int Battery();
bool Charge();
void driveto(Cords, Motor, Motor);
