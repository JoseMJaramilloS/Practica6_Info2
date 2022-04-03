#include <iostream>
#include "cuerpo.h"
#include "sistema.h"

using namespace std;

int main()
{
    sistema sistemaPlanetario1;
    cuerpo cuerpo1(0,-7000,2,0,70,120);
    cuerpo cuerpo2(0,0,0,0,70000,300);
    cuerpo cuerpo3(4000,5000,-1.6,1.2,25,100);
    sistemaPlanetario1.agregarCuerpo(cuerpo1);
    sistemaPlanetario1.agregarCuerpo(cuerpo2);
    sistemaPlanetario1.agregarCuerpo(cuerpo3);
    sistemaPlanetario1.generarArchivo("ejemplo1.txt",10000);

    sistema sistemaPlanetario2;
    cuerpo cuerpo4(0,0,0,0,50000,200);
    cuerpo cuerpo5(-5000,0,0,-2,70,70);
    cuerpo cuerpo6(5000,0,0,2,70,70);
    cuerpo cuerpo7(0,-5000,2,0,70,70);
    cuerpo cuerpo8(0,5000,-2,0,70,70);
    sistemaPlanetario2.agregarCuerpo(cuerpo4);
    sistemaPlanetario2.agregarCuerpo(cuerpo5);
    sistemaPlanetario2.agregarCuerpo(cuerpo6);
    sistemaPlanetario2.agregarCuerpo(cuerpo7);
    sistemaPlanetario2.agregarCuerpo(cuerpo8);
    sistemaPlanetario2.generarArchivo("ejemplo2.txt",10000);

    return 0;
}
