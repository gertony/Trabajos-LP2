#include<iostream>
#include<string>
#include "Libro.h"
using namespace std;
int main(){
    string title, gender, author, t, g, a, opc;
    Libros libro1("La palabra del mudo","Julio Ramon Ribeyro","Narrativo");
    title=libro1.getTitulo();
    gender=libro1.getGenero();
    author=libro1.getAutor();
    cout<<"El libro es "<<title<<", es de genero "<<gender<<" y el autor es "<<author<<endl;
    cout<<"Modificar los atributos del libro? (S/N)"<<endl;
    getline(cin, opc);
    while (opc=="s" or opc=="S"){
        cout<<"Ingrese el nombre del libro"<<endl;
        getline(cin,t);
        libro1.setTitulo(t);
        title=libro1.getTitulo();
        cout<<"Ingrese a que genero pertenece"<<endl;
        getline(cin,g);
        libro1.setGenero(g);
        gender=libro1.getGenero();
        cout<<"Ingrese a que autor pertence"<<endl;
        getline(cin,a);
        libro1.setAutor(a);
        author=libro1.getAutor();
        cout<<"El nuevo libro es "<<title<<", es de genero "<<gender<<" y el autor es "<<author<<endl;
        cout<<"Desea modificar de nuevo? (S/N)"<<endl;
        cin>>opc;
    }
    return 0;
}
