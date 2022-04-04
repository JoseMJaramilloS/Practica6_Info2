#include "cuerpo.h"

double cuerpo::getPosx() const{
    return posx;
}

void cuerpo::setPosx(double value){
    posx = value;
}

double cuerpo::getPosy() const{
    return posy;
}

void cuerpo::setPosy(double value){
    posy = value;
}

double cuerpo::getVelx() const{
    return velx;
}

void cuerpo::setVelx(double value){
    velx = value;
}

double cuerpo::getVely() const{
    return vely;
}

void cuerpo::setVely(double value){
    vely = value;
}

double cuerpo::getAx() const{
    return ax;
}

void cuerpo::setAx(double value){
    ax = value;
}

double cuerpo::getAy() const{
    return ay;
}

void cuerpo::setAy(double value){
    ay = value;
}

double cuerpo::getMasa() const
{
    return masa;
}

cuerpo::cuerpo()
{
    this->posx= 0;
    this->posy= 0;
    this->velx= 0;
    this->vely= 0;
    this->masa= 1;
    this->radio= 1;
    this->ax=0;
    this->ay=0;
    setPos(800/2+posx*factor,800/2-posy*factor); // Se multiplica por el factor
    this->color=randomColor();
}

cuerpo::cuerpo(double posx_, double posy_, double velx_, double vely_, double masa_, double radio_)
{
    this->posx= posx_;
    this->posy= posy_;
    this->velx= velx_;
    this->vely= vely_;
    this->masa= masa_;
    this->radio= radio_;
    this->ax=0;
    this->ay=0;
    setPos(800/2+posx*factor,800/2-posy*factor); // Se multiplica por el factor
    this->color=randomColor(); // Se le da un color diferente
}

void cuerpo::calcularAceleracion(cuerpo *cuerpo2)
{
    double x2= (*cuerpo2).getPosx();
    double y2= (*cuerpo2).getPosy();
    double m2= (*cuerpo2).getMasa();
    double r2= pow(x2-posx,2)+pow(y2-posy,2); // Distancia de cuerpo1 a cuerpo2 AL CUADRADO (r^2)
    double theta= atan2(y2-posy,x2-posx); // theta en radianes
    this->ax +=(G*m2)/r2*cos(theta);
    this->ay +=(G*m2)/r2*sin(theta);
//    cout<<"aceleracion en x: "<<ax<<endl;
//    cout<<"aceleracion en y: "<<ay<<endl;
}

void cuerpo::calcularVelocidad()
{
    velx += ax*dt;
    vely += ay*dt;
}

void cuerpo::calcularPosicion()
{
    posx += velx*dt + 0.5*ax*pow(dt,2);
    posy += vely*dt + 0.5*ay*pow(dt,2);
    setPos(800/2+posx*factor,800/2-posy*factor); // Usar el centro de la escena como (0,0)=(800/2,800/2)
}

QRectF cuerpo::boundingRect() const
{
    return QRectF(-radio*factor,-radio*factor,radio*2*factor,radio*2*factor); // El boundingRect se multiplica por el factor de escala
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(color);
    //painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

QColor cuerpo::randomColor()
{
    // Generacion de colores aleatorios
    int r=rand()%256;
    int g=rand()%256;
    int b=rand()%256;
    int a=rand()%256;
    QColor color(r,g,b,a);
    return color;
}
