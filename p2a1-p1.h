#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
class Animal {
private:
    std::string nombre;
    int edad;
    std::string tipo;
public:

    void setNombre(std::string n);
    void setTipo(std::string t);
    Animal(std::string n, int a, std::string t);
    void alimento();
    void hacerSonido();
};  

#endif
