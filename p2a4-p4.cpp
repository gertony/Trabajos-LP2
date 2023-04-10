#include "p4Tienda.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Producto producto1("Jabon", 2.5 ,10);
    Producto producto2("Arroz", 6.7 ,15);
    Producto producto3("Azucar", 4.95 ,6);
    Tienda tienda1;
    Cliente cliente1(10);
    cliente1.agregarProducto(&producto1, &tienda1);
    cliente1.agregarProducto(&producto2, &tienda1);
    cliente1.pagarCuenta(&tienda1);
    cliente1.agregarProducto(&producto3, &tienda1);
    cliente1.pagarCuenta(&tienda1);
    return 0;
}
