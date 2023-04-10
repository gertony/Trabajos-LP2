#include <iostream>
#include <string>
#include <vector>
#include "Banco.h"

using namespace std;

int main()
{
    vector <Banco> listaObjetos;

    Banco cuenta1(1000.40,"12345");
    Banco cuenta2(2000.30,"54321");
    Banco cuenta3(3000.50,"67891");

    listaObjetos.push_back(cuenta1);
    listaObjetos.push_back(cuenta2);
    listaObjetos.push_back(cuenta3);

    for (int i = 0; i < listaObjetos.size(); i++)
    {
        cout << "Numero de cuenta: "<< listaObjetos[i].getNumCuenta() <<endl;
        cout << "Saldo: " << listaObjetos[i].getSaldo() << endl;
    }
    return 0;
}
