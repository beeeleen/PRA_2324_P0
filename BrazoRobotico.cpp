#include "BrazoRobotico.h"



BrazoRobotico::BrazoRobotico(double x, double y, double z,bool s){
        this->x = x;
        this->y = y;
        this->z = z;
        this->s = s;
}
    double BrazoRobotico::getx(){
            return x;
    }
    double BrazoRobotico::gety(){
            return y;
    }
    double BrazoRobotico::getz(){
            return z;
    }
    bool BrazoRobotico::se_sujeta(){
            return s;
    }
    void BrazoRobotico::coger(){
            s=true;
    }
    void BrazoRobotico::soltar(){
            s=false;
    }
    void BrazoRobotico::mover(double x_, double y_, double z_){
            x += x_;
            y += y_;
            z += z_;
    }
