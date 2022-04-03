#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include "cuerpo.h"
#include <list>
#include <fstream>

using namespace std;

class sistema
{
    list<cuerpo>cuerpos;
    list<cuerpo>::iterator iter_i;
    list<cuerpo>::iterator iter_j;
public:
    sistema();
    void agregarCuerpo(cuerpo cuerpo_);
    void actualizarMovimiento();
    void generarArchivo(string nombre,unsigned int iteraciones);
};

#endif // SISTEMA_H
