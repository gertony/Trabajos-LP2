#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Producto                      // Esta clase se agrego para que el ejercicio tenga mas logica
{
    private:
        string nombre;
        float precio;
        int stock;
    public:
        Producto(string nombre, float precio, int stock)
        {
            this->nombre = nombre;
            this->precio = precio;
            this->stock = stock;
        }
        string getNombre()
        {
            return nombre;
        }
        float getPrecio()
        {
            return precio;
        }
        int returnStock()
        {
            return stock;
        }

};

class Tienda
{   
    public:
        vector <Producto *> listaProductos;
        vector <Producto *> comprasCliente;
   
};

class Cliente
{
    private:
        float saldo;
        float total;
    public:
        Cliente(float saldo)
        {
            this->saldo = saldo;
            this->total = 0;
        }
        void agregarProducto(Producto * x, Tienda* y)
        {
           y->comprasCliente.push_back(x);
        }

        void pagarCuenta(Tienda*x)
        {   
            total = 0;
            cout << "\nCuenta "<< endl;
            for (int i = 0 ; i < x->comprasCliente.size();i++)
            {
                cout << "Producto: " << x->comprasCliente[i]->getNombre() << " - Precio: " << x->comprasCliente[i]->getPrecio()<<endl;
                total = total + x->comprasCliente[i]->getPrecio();   
            }
            cout << "Total: " << total<<endl;

            if (total > saldo)
            {
                cout << "Error en la transaccion no tiene suficientes fondos"<<endl;
                cout << "Saldo: "<<saldo<<endl;
            }
            else 
            {   
                saldo = saldo - total;
                x->comprasCliente.clear();
                cout << "La transaccion se a realizado con exito"<<endl;
                cout << "Saldo: "<<saldo<<endl;
            }
        }
};
#endif 
