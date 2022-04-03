#ifndef CUERPO_H
#define CUERPO_H
#include <iostream>
#include <math.h>
#include <cmath>
#define G 1 //Constante gravitacional
#define dt 1 //Tamanio de paso
using namespace std;

class cuerpo
{
private:
    double posx;
    double posy;
    double velx;
    double vely;
    double ax;
    double ay;
    double radio;
    double masa;
public:
    cuerpo();
    cuerpo(double posx_,double posy_, double velx_, double vely_, double masa_, double radio_);

    void calcularAceleracion(cuerpo cuerpo2);
    void calcularVelocidad();
    void calcularPosicion();

    double getPosx() const;
    void setPosx(double value);
    double getPosy() const;
    void setPosy(double value);
    double getVelx() const;
    void setVelx(double value);
    double getVely() const;
    void setVely(double value);
    double getAx() const;
    void setAx(double value);
    double getAy() const;
    void setAy(double value);
    double getMasa() const;
};

#endif // CUERPO_H
