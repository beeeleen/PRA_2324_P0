#include<iostream>
#include "BrazoRobotico.h"


int main(){
        BrazoRobotico Brazo(0.0,0.0,0.0,false);
        Brazo.mover(5.0,15.0,20.0);
        Brazo.coger();
        return 0;
}
