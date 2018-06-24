#include "VacClass.h"
 
//Motor
Motor::Motor() {
	Direction = 0;
	Speed = 0;
};

Motor::Motor(bool dir, int spd) {
	Direction = dir;
	Speed = spd;
};

bool Motor::get_dir(void) {
	return Direction;
};

void Motor::set_dir(bool dir) {
	Direction = dir;
};


int Motor::get_speed(void) {
	return Speed;
};

void Motor::set_speed(int spd) {
	Speed = spd;
};

void Motor::start() {
	//pwm = speed
};

void Motor::stop() {
	//pwm = 0
};

//Compass
void Compass::set_start() {
	//Startdir = returnvaluecompass
};

int Compass::get_current() {
	return Currentdir;		//Current Dir = Compass value - Startdir
};

int Compass::get_start() {
	return Startdir;
}

//Dist sensor
int DistSensor::DistMM() {
	return Dist;
};

//Cords
Cords::Cords() {
	int Angle = 0;
	int North = 0;
	int West = 0;
};

void Cords::set_angle(int inp) {
	Angle = inp;
};

void Cords::set_north(int inp) {
	North = inp;
};

void Cords::set_west(int inp) {
	West = inp;
};

int Cords::get_angle() {
	return Angle;
};

int Cords::get_North() {
	return Angle;
};

int Cords::get_angle() {
	return Angle;
};