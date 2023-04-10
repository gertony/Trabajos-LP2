#include "Animal.h"

Animal::Animal(std::string n, int a, std::string t) {
    nombre = n;
    edad = a;
    tipo = t;
}
void Animal::alimento() {
    std::cout << nombre << " esta siendo alimentada.\n";
}
void Animal::hacerSonido() {
    if (tipo == "perro") {
        std::cout << nombre << " esta ladrando\n";
    } else if (tipo == "gato") {
        std::cout << nombre << " hace meow!\n";
    } else {
        std::cout << nombre << " hace un sonido indesciptible.\n";
    }
}
void Animal::setNombre(std::string n) {
    nombre = n;
}
void Animal::setTipo(std::string t) {
    tipo = t;
}
int main() {
    std::string nombre, tipo;
    int edad;
    std::cout << "Enter the nombre of the animal: ";
    std::cin >> nombre;
    std::cout << "Enter the tipo of the animal: ";
    std::cin >> tipo;
    std::cout << "Enter the edad of the animal: ";
    std::cin >> edad;
    Animal animal(nombre, edad, tipo);
    animal.alimento();
    animal.hacerSonido();
    std::cout << "Enter a new nombre for the animal: ";
    std::cin >> nombre;
    animal.setNombre(nombre);
    std::cout << "Enter a new tipo for the animal: ";
    std::cin >> tipo;
    animal.setTipo(tipo);
    animal.alimento();
    animal.hacerSonido();
    return 0;
}
