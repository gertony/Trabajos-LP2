#ifndef FACTURA_H
#define FACTURA_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Producto
{
    private:
        string nombre;
        int stock;
        float precio;

    public:
        Producto() : nombre(""),stock(0),precio(0.0) {}
        Producto(string nombre,int stock,float precio)
        {
            this-> nombre = nombre;
            this->stock = stock;
            this->precio = precio;
        }
        void mostrarStock()
        {
            cout << "Stock de " << nombre << ": " << stock<<endl;
        }
        void establecerPrecio()
        {
            int precio1;
            cout << "Establezca el precio de " << nombre << ": ";
            cin >> precio1;
            precio  = precio1;
        }
        void setNombre(string nombre)
        {
            this->nombre = nombre;
        }
        void setPrecio(float nuevoPrecio)
        {
            this->precio = nuevoPrecio;
        }
        void setStock(int nuevoStock)
        {
            this->stock = nuevoStock;
        }
        float getPrecio()
        {
            return precio;
        }
        int getStock()
        {
            return stock;
        }
        string getNombre()
        {
            return nombre;
        }
};

class Factura
{   
    private:
    vector <Producto *> listaProductos;

    public:
        void agregarProducto(Producto* x,int cantidad)
        {
            listaProductos.push_back(x);
            x->setStock(x->getStock() - cantidad);
        }
        void imprimirFactura()
        {   
            cout << endl;
            cout << "Factura"<<endl;
            for (int i = 0; i < listaProductos.size();i++)
            {
                cout << "Producto: " << listaProductos[i]->getNombre() <<  " - Precio: " << listaProductos[i]->getPrecio()<<endl;
            }
        }
};



#endif
