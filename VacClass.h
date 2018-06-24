#include "mbed/mbed.h"

class Motor {
	bool Direction = true; //True is forward false is backwards
	int Speed = 0;	//0.0-1.0

public:
	Motor();
	Motor(bool, int);
	bool get_dir();
	void set_dir(bool);
	int get_speed();
	void set_speed(int);
	void start();
	void stop();
};

class Compass {
	int Startdir = -1;
	int Currentdir = -1;

public:
	void set_start(void);
	int get_current(void);
	int get_start(void);
};

class DistSensor {
	int Dist;

public:
	int DistMM();
};

class Cords {
	int Angle;
	int North;
	int West;

public:
	Cords();
	int get_angle();
	int get_north();
	int get_south();
	void set_angle(int);
	void set_north(int);
	void set_west(int);
};

class Lights {};