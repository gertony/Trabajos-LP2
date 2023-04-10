#ifndef Personas_H
#define Personas_H
#include <string>
using namespace std;
class Persona{
    private:
        string nombre, genero;
        int edad;
    public:
        Persona(string nombre, string genero, int edad){
            this->nombre=nombre;
            this->genero=genero;
            this->edad=edad;
        }
        void setNombre(string n){nombre=n;}
        string getNombre(){return nombre;}
        void setGenero(string g){genero=g;}
        string getGenero(){return genero;}
        void setEdad(int e){edad=e;}
        int getEdad(){return edad;}
};
#endif
