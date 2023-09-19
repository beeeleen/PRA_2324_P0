#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool s;

public:
    BrazoRobotico(double x, double y, double z,bool s);
    double getx();
    double gety();
    double getz();
    bool se_sujeta();
    void coger();
    void soltar();
    void mover(double x_, double y_, double z_);
};
#endif
