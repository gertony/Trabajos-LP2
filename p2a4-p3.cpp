#include "p4Carro.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Rueda rueda1(13);
    Rueda rueda2(15);
    Rueda rueda3(20);
    Rueda rueda4(23);
    Carro carro1(&rueda1,&rueda2,&rueda3,&rueda4);
    carro1.cambioRuedas();
    carro1.moverCarro(45,'d');
    carro1.moverCarro(45,'r');
    carro1.moverCarro(45,'r');
}
