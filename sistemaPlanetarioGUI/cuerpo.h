#ifndef CUERPO_H
#define CUERPO_H
#include <iostream>
#include <math.h>
#include <cmath>
#include <QGraphicsItem>
#include <QPainter>
#include <cstdlib>

#define G 1 //Constante gravitacional
#define dt 1 //Tamanio de paso

using namespace std;

class cuerpo : public QGraphicsItem
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
    double factor =0.04; // 400/10000 : graphicsView/realidad
    QColor color;

public:
    cuerpo();
    cuerpo(double posx_,double posy_, double velx_, double vely_, double masa_, double radio_);

    void calcularAceleracion(cuerpo *cuerpo2);
    void calcularVelocidad();
    void calcularPosicion();

    virtual QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    QColor randomColor();

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
