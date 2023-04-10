#ifndef COCHE_H
#define COCHE_H

#include <string>

class Coche {
public:
    Coche(const std::string& modelo, int anio);

    void acelerar(int cantidad);
    void frenar(int cantidad);
    void setVelocidad(int velocidad);

    const std::string& getModelo() const;
    int getAnio() const;
    int getVelocidad() const;

private:
    std::string modelo_;
    int anio_;
    int velocidad_;
};

#endif // COCHE_H
