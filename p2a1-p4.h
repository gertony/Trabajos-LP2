#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <string>
#include <vector>

class Tienda {
public:
    // Constructor
    Tienda(std::string nombre, std::string direccion, std::string tipo);

    // Métodos
    void venderProducto(std::string producto);
    void agregarProducto(std::string producto, int cantidad);
    void mostrarInventario();

private:
    std::string m_nombre;
    std::string m_direccion;
    std::string m_tipo;
    std::vector<std::pair<std::string, int>> m_inventario;
};

#endif
