#include <iostream>
#include <string>
#include"Bancos.h"
using namespace std;
int main(){
    string opc, numbAccount, n;
    float AccBalance, a;
    Banco Cuenta1(2000, "3246565478");
    numbAccount=Cuenta1.getNumCuenta();
    AccBalance=Cuenta1.getSaldo();
    cout<<"El numero de cuenta es "<<numbAccount<<" y tiene "<<AccBalance<<" soles de saldo."<<endl;
    cout<<"Desea modificar la tarjeta? (S/N)"<<endl;
    cin>>opc;
    while (opc=="s" or opc=="S"){
        cout<<"Ingrese el nuevo numero de cuenta"<<endl;
        cin>>n;
        Cuenta1.setNumCuenta(n);
        cout<<"Ingrese el saldo"<<endl;
        cin>>a;
        Cuenta1.setSaldo(a);
        numbAccount=Cuenta1.getNumCuenta();
        AccBalance=Cuenta1.getSaldo();
        cout<<"Ahora el nuevo de cuenta es "<<numbAccount<<" y tiene "<<AccBalance<<" soles de saldo."<<endl;
        cout<<"Desea modificar de nuevo? (S/N)"<<endl;
        cin>>opc;
    }
    return 0;
}
