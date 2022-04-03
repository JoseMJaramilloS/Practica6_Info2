#include <iostream>
#include "cuerpo.h"
#include "sistema.h"

using namespace std;

int main()
{
    sistema sistemaPlanetario;
    cuerpo cuerpo1(0,-7000,2,0,70,120);
    cuerpo cuerpo2(0,0,0,0,70000,300);
    cuerpo cuerpo3(4000,5000,-1.6,1.2,25,100);
    sistemaPlanetario.agregarCuerpo(cuerpo1);
    sistemaPlanetario.agregarCuerpo(cuerpo2);
    sistemaPlanetario.agregarCuerpo(cuerpo3);
    sistemaPlanetario.generarArchivo(10000);

    return 0;
}
