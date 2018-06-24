#include "VacClass.h"
#include "mbed/mbed.h"

void Move(Motor motorL, Motor motorR) {
	

};

void Move(Motor motorL, Motor motorR, int sec) {
	Lspd = motorL.get_speed();
	wait(sec);

};

void Stop(Motor motor1, Motor motor2) {
	
};

bool DetectO(DistSensor dist) {

};

bool DetectD(DistSensor dist) {

};

bool Detect(DistSensor dist, DistSensor dist2, DistSensor dist3) {

};

int Battery() {
	//return battery level 0-100	
	return 0;
};

bool Charge() {
	return false;
};