#ifndef INVENTARIO_H 

#define INVENTARIO_H 

#include <iostream> 

#include <string> 

#include <vector> 

using namespace std; 

 

class Producto 

{ 

    private:  

        string nombre; 

        double precio; 

        int cantidad; 
 

    public: 

        Producto(string nombre, double precio, int cantidad) 

        { 

            this -> nombre = nombre; 

            this -> precio = precio; 

            this -> cantidad = cantidad; 

        } 

        string getNombre()  

        { 

        return nombre; 

        } 

        double getPrecio()  

        { 

        return precio; 

        }  

        int getCantidad()  

        { 

        return cantidad; 

        } 

        void setNombre(string n)  

        { 

        nombre = n; 

        } 

        void setPrecio(double p)  

        { 

        precio = p; 

        } 

        void setCantidad(int c)  

        { 

        cantidad = c; 

        } 

}; 

 

class Inventario 

{ 

    private:     

        vector <Producto> disponibles; 

        vector <Producto> agotados; 

        string buscado; 

    public: 

        void addproducto(Producto p) 

        { 

            if (p.getCantidad() > 0)  

                { 

                disponibles.push_back(p); 

                }   

            else  

                { 

                agotados.push_back(p); 

                } 

        } 

        void mostrarDisponibles()  

        { 

        cout << "Productos disponibles: " << endl; 

            for (int i = 0; i < disponibles.size(); i++)  

            { 

                cout<<"=================="<<endl<<disponibles[i].getNombre()<<" S/."<<disponibles[i].getPrecio()<<endl<<"Cantidad: "<<disponibles[i].getCantidad()<<endl; 

            } 

        } 

        void actualizar() 

        { 

            for (int i = 0; i < disponibles.size(); i++)  

            { 

                if (disponibles[i].getCantidad() == 0)  

                { 

                agotados.push_back(disponibles[i]); 

                disponibles.erase(disponibles.begin() + i); 

                i--; 

                } 

            } 

            for (int i = 0; i < agotados.size(); i++)  

            { 

                if (agotados[i].getCantidad() > 0)  

                { 

                disponibles.push_back(agotados[i]); 

                agotados.erase(agotados.begin() + i); 

                i--; 

                } 

            } 

        } 

        void comprar(string nombreProducto, int cantidadComprar)  

        { 

            bool encontrado = false; 

            for (int i = 0; i < disponibles.size(); i++)  

                { 

                if (disponibles[i].getNombre() == nombreProducto)  

                { 

                encontrado = true; 

                Producto productoComprar = disponibles[i]; 

                if (cantidadComprar <= productoComprar.getCantidad())  

                { 

                    productoComprar.setCantidad(cantidadComprar); 

      			disponibles[i].setCantidad(disponibles[i].getCantidad() - cantidadComprar); 

                    cout<<"=============================="<<endl; 

                    cout<<"Compra realizada exitosamente."<<endl; 

                    cout<<"Producto: "<<productoComprar.getNombre()<<endl<<"S/."<<productoComprar.getPrecio()<<endl<<"Cantidad: "<< productoComprar.getCantidad()<<endl<<"Total: S/. "<<productoComprar.getCantidad() * productoComprar.getPrecio()<< endl; 

                }  

                else  

                { 

                    cout<<"No hay suficientes unidades disponibles."<<endl; 

                } 

                break; 

                } 

            } 

            if (!encontrado)  

            { 

                cout<<"El producto no se encuentra disponible."<<endl; 

            } 

        } 

}; 

#endif 
