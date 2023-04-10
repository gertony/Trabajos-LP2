#include "Coche.h"
#include <iostream>

Coche::Coche(const std::string& modelo, int anio)
    : modelo_(modelo), anio_(anio), velocidad_(0)
{
}

void Coche::acelerar(int cantidad)
{
    velocidad_ += cantidad;
}

void Coche::frenar(int cantidad)
{
    if (velocidad_ - cantidad < 0) {
        std::cerr << "el coche no puede ir a menos de 0 km/h" << std::endl;
        return;
    }
    velocidad_ -= cantidad;
}

void Coche::setVelocidad(int velocidad)
{
    velocidad_ = velocidad;
}

const std::string& Coche::getModelo() const
{
    return modelo_;
}

int Coche::getAnio() const
{
    return anio_;
}

int Coche::getVelocidad() const
{
    return velocidad_;
}
#include <iostream>
#include "Coche.h"

int main() {
    std::string modelo;
    int anio;
    int velocidad;

    std::cout << "Ingrese el modelo del coche: ";
    std::getline(std::cin, modelo);

    std::cout << "Ingrese el año del coche: ";
    std::cin >> anio;

    std::cout << "Ingrese la velocidad inicial del coche: ";
    std::cin >> velocidad;

    Coche miCoche(modelo, anio);
    miCoche.setVelocidad(velocidad);

    std::cout << "Modelo: " << miCoche.getModelo() << ", Año: " << miCoche.getAnio() << ", Velocidad: " << miCoche.getVelocidad() << std::endl;

    int aceleracion;
    std::cout << "Ingrese la aceleración del coche: ";
    std::cin >> aceleracion;
    miCoche.acelerar(aceleracion);

    int frenado;
    std::cout << "Ingrese el frenado del coche: ";
    std::cin >> frenado;
    miCoche.frenar(frenado);

    std::cout << "Velocidad después de acelerar y frenar: " << miCoche.getVelocidad() << std::endl;

    return 0;
}
