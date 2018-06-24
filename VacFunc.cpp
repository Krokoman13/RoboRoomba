
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

    
void move(bool left, bool right, double sec) {  //move(true, false, 0.47); is a 90 degreee turn right
    rspeed = 0.2;
    lspeed = 0.2;
    
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
