#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

int main() {
    string nombre, grado;
    int edad;
    float nota;
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;
    cout << "Ingrese el grado del estudiante: ";
    cin.ignore();
    getline(cin, grado);
    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;
    Estudiante estudiante(nombre, edad, grado, nota);
    estudiante.notafinal(nota);
    return 0;
}
