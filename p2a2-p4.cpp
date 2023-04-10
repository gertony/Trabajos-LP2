#include<iostream>
#include<string>
#include "Facturas.h"
using namespace std;
int main(){
    string NroFactura, FeEmision, NroF, FeE, opc;
    float Monto, m;
    Facturas fact1("324DS12G", "27/04/2020", 300.50);
    NroFactura=fact1.getNroFactura();
    FeEmision=fact1.getFeEmision();
    Monto=fact1.getMonto();
    cout<<"El numero de factura es "<<NroFactura<<" y se emitio el "<<FeEmision<<" y tiene un monto de: "<<Monto<<" soles."<<endl;
    cout<<"Desea modificar la factura? (S/N)"<<endl;
    cin>>opc;
    while(opc=="s" or opc=="S"){
        cout<<"Ingrese el numero de factura"<<endl;
        cin>>NroF;
        fact1.setNroFactura(NroF);
        NroFactura=fact1.getNroFactura();
        cout<<"Ingrese la fecha de emision"<<endl;
        cin>>FeE;
        fact1.setFeEmision(FeE);
        FeEmision=fact1.getFeEmision();
        cout<<"Ingrese el monto"<<endl;
        cin>>m;
        fact1.setMonto(m);
        Monto=fact1.getMonto();
        cout<<"Ahora el numero de factura es "<<NroFactura<<" y se emitio el "<<FeEmision<<" y tiene un monto de: "<<Monto<<" soles."<<endl;
        cout<<"Desea volver a modificar? (S/N)"<<endl;
        cin>>opc;
    }
    return 0;
}
