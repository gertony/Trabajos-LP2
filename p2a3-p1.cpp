#include<iostream>
#include<string>
#include "Personas.h"
using namespace std;
int main(){
    Persona persona1("Luis Torres","Masculino", 17);
    Persona persona2("Juan Perez","Maculino",15);
    Persona persona3("Roberto Jimenez","Masculino",13);

    cout << persona1.getNombre() <<endl; 
    cout << persona1.getGenero() <<endl; 
    cout << persona1.getEdad() <<endl ;


    return 0;
}
