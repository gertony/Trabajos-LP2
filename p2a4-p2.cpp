#include "p4Factura.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Factura factura1;
    Producto producto1("Leche",10,4.5);     
    Producto producto2("Cafe",11,2.3);
    producto1.mostrarStock();                       // Mostramos el stock antes de agregar el producto
    factura1.agregarProducto(&producto1,3);         // Agregamos el producto mediante el metodo correspondiente de la clase Factura
    producto1.mostrarStock();                       // Volvemos a mostrar el stock para comprobar el cambio
    factura1.imprimirFactura();                     // Mostramos los elementos de la lista de productos
    producto1.establecerPrecio();                   // Cambiamos el precio del producto mediante el metodo correspondiente de la clase producto
    factura1.agregarProducto(&producto2,3);         // Agregamos un nuevo producto al arreglo
    factura1.imprimirFactura();                     // Imprimos nuevamente la factura para evidenciar el cambio de precio y la adicion del nuevo producot
    return 0;
}
