#include "inventario.h" 

#include <iostream> 

#include <string> 

 

using namespace std; 

int main()  

{ 

  Producto p1("Leche", 5.50, 5); 

  Producto p2("Pan", 2.0, 0); 

  Producto p4("Cereales", 22.5, 3); 

  Producto p5("Cafe", 7.0, 3); 

  Producto p6("Hamburguesa", 17.5, 3); 

   

  Inventario inv; 

  inv.addproducto(p1); 

  inv.addproducto(p2); 

  inv.addproducto(p4); 

  inv.addproducto(p5); 

  inv.addproducto(p6); 

 
 
 

  inv.mostrarDisponibles(); 

  string a; 

  a = "Si"; 

    while (a == "Si") 

    { 

      string nombreProducto; 

      int cantidadComprar; 

      cout<<"Ingrese el nombre del producto que desea comprar: "; 

      cin>>nombreProducto; 

      cout<<"Ingrese la cantidad que desea comprar: "; 

      cin>>cantidadComprar; 

 
 

      inv.comprar(nombreProducto, cantidadComprar); 

      inv.actualizar(); 

 
 

      cout<<"Desea seguir comprando? Si/No "; 

      cin>>a; 

    } 

  cout<<"Gracias por su compra, ADI0S"; 

  return 0; 

} 
