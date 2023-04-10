#include<iostream>
#include<string>
#include "Personas.h"
using namespace std;
int main(){
    Persona persona1("Luis Torres","Masculino", 17);
    string name, gender,no, g, opc,z;
    int age, a;
    name=persona1.getNombre();
    gender=persona1.getGenero();
    age=persona1.getEdad();
    cout<<"El nombre de la persona es "<<name<<", es del genero "<<gender<<" y tiene "<<age<<" abriles."<<endl;
    cout<<"Desea Modificar los datos? (S/N)"<<endl;
    getline(cin, opc);
    while (opc=="S" or opc=="s"){
        cout<<"Ingrese el nuevo nombre: ";
        getline(cin,no);
        persona1.setNombre(no);
        cout<<"Ingrese el genero: ";
        getline(cin, g);
        persona1.setGenero(g);
        cout<<"Ingrese la edad: ";
        cin>>a;
        persona1.setEdad(a);
        name=persona1.getNombre();
        gender=persona1.getGenero();
        age=persona1.getEdad();
        cout<<"Ahora la persona es "<<name<<", es del genero "<<gender<<" y tiene "<<age<<" abriles."<<endl;
        cout<<"Volver a modificar? (S/N)";
        cin>>opc;
    }
    return 0;
}
