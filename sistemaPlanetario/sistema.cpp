#include "sistema.h"

sistema::sistema()
{

}

void sistema::agregarCuerpo(cuerpo cuerpo_)
{
    this->cuerpos.push_back(cuerpo_);
}

void sistema::actualizarMovimiento()
{
    for (iter_i=cuerpos.begin();iter_i!=cuerpos.end();iter_i++) {
        iter_i->setAx(0); // La aceleracion deber ser reemplazada en cada iteracion
        iter_i->setAy(0);
        for (iter_j=cuerpos.begin();iter_j!=cuerpos.end();iter_j++) {
            if (iter_i != iter_j) {
                iter_i->calcularAceleracion(*iter_j);
            }
        }
        iter_i->calcularVelocidad();
        iter_i->calcularPosicion();
    }
}

void sistema::generarArchivo(unsigned int iteraciones)
{
    ofstream fout;
    fout.open("calculos.txt");
    for (unsigned int i=1;i<=iteraciones;i++) {
        for (iter_i=cuerpos.begin();iter_i!=cuerpos.end();iter_i++) {
            fout<<iter_i->getPosx()<<"\t"<<iter_i->getPosy()<<"\t";
        }
        actualizarMovimiento();
        fout<<endl;
    }
    fout.close();
    cout<<"Archivo generado"<<endl;

}
