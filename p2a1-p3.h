#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;
    float nota;
public:
    Estudiante() {
        nombre = "";
        edad = 0;
        grado = "";
        nota = 0.0;
    }
    Estudiante(string n, int e, string g, float nt) {
        nombre = n;
        edad = e;
        grado = g;
        nota = nt;
    }
    void setNombre(string n) {
        nombre = n;
    }
    void setEdad(int e) {
        edad = e;
    }
    void setGrado(string g) {
        grado = g;
    }
    void setNota(float nt) {
        nota = nt;
    }
    string getNombre() {
        return nombre;
    }
    int getEdad() {
        return edad;
    }
    string getGrado() {
        return grado;
    }
    float getNota() {
        return nota;
    }
    void notafinal(float notaFinal) {
        nota = notaFinal;
        if (nota >= 7.0) {
            cout << nombre << " ha aprobado con una nota de " << nota << endl;
        } else {
            cout << nombre << " ha reprobado con una nota de " << nota << endl;
        }
    }
};
