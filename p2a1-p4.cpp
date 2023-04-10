#include "tienda.h"

// Constructor
Tienda::Tienda(std::string nombre, std::string direccion, std::string tipo)
    : m_nombre(nombre), m_direccion(direccion), m_tipo(tipo) {}

// Método para vender un producto
void Tienda::venderProducto(std::string producto) {
    bool encontrado = false;

    // Buscar el producto en el inventario
    for (int i = 0; i < m_inventario.size(); i++) {
        if (m_inventario[i].first == producto) {
            encontrado = true;
            if (m_inventario[i].second > 0) {
                std::cout << "Producto vendido: " << producto << std::endl;
                m_inventario[i].second--;
            } else {
                std::cout << "Lo siento, no queda suficiente inventario de " << producto << std::endl;
            }
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Producto no encontrado en el inventario." << std::endl;
    }
}

// Método para agregar un producto al inventario
void Tienda::agregarProducto(std::string producto, int cantidad) {
    bool encontrado = false;

    // Buscar el producto en el inventario
    for (int i = 0; i < m_inventario.size(); i++) {
        if (m_inventario[i].first == producto) {
            encontrado = true;
            m_inventario[i].second += cantidad;
            break;
        }
    }

    if (!encontrado) {
        m_inventario.push_back(std::make_pair(producto, cantidad));
    }

    std::cout << cantidad << " unidades de " << producto << " agregadas al inventario." << std::endl;
}

// Método para mostrar el inventario actual
void Tienda::mostrarInventario() {
    std::cout << "Inventario de la tienda " << m_nombre << ":" << std::endl;
    for (int i = 0; i < m_inventario.size(); i++) {
        std::cout << m_inventario[i].first << ": " << m_inventario[i].second << std::endl;
    }
}
int main() {
    Tienda tienda("Mi Tienda", "123 Calle Principal", "Ropa");

    tienda.agregarProducto("Camisa", 20);
    tienda.agregarProducto("Pantalon", 15);
    tienda.agregarProducto("Vestido", 10);

    tienda.mostrarInventario();

    tienda.venderProducto("Camisa");
    tienda.venderProducto("Vestido");
    tienda.venderProducto("Corbata");

    tienda.mostrarInventario();

    return 0;
}
