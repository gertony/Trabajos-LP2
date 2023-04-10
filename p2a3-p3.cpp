#include "Libro.h"
#include <iostream>
#include <string>
#include <vector>

using  namespace std;

int main()
{
    vector <Libros> listaLibros;

    Libros libro1("Harry Potter","J.K Rowling","Novela");
    Libros libro2("El bazar de los malos sueños ","Stephen King","Cuento");
    Libros libro3("1000 años de soledad","Gabriel Garcia Marquez","Novela");

    listaLibros.push_back(libro1);
    listaLibros.push_back(libro2);
    listaLibros.push_back(libro3);

    for (int i = 0; i < listaLibros.size(); i++)
    {
        cout << "Nombre: "<< listaLibros[i].getTitulo() <<endl;
    }

    listaLibros.pop_back();
    cout << "\n";
    for (int i = 0; i < listaLibros.size(); i++)
    {
        cout << "Nombre: "<< listaLibros[i].getTitulo() <<endl;
    }

    listaLibros[1].setTitulo("Materia Gris");
    cout << "\n";
    for (int i = 0; i < listaLibros.size(); i++)
    {
        cout << "Nombre: "<< listaLibros[i].getTitulo() <<endl;
    }

}
