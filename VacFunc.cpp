
#include "mbed/mbed.h"
#include "functions.h"
#include "pins.h"

void initiate() {
    lspeed.period(0.010);
    rspeed.period(0.010);
    };
    
bool start() {
    return mybutton;
    };

void straight() {
    rspeed = speed ;
    lspeed =  speed * 0.85;
    
    rfor = true;
    lfor = true;
    };
    
void stop(){
    rfor = false;
    lfor = false;
    rback = false;
    lback = false;
    };

    
void move(bool left, bool right, double sec) {  //move(true, false, 0.47);
    rspeed = speed * 0.5;
    lspeed = speed * 0.5;
    
    rfor = right;
    lfor = left;
    rback = !right;
    lback = !left;
    wait(sec);
    rback = false;
    lback = false;
    rfor = false;
    lfor = false;
    };
