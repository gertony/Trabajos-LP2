#include "Facturas.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Facturas factura1("01","05/04/2023",500.30);
    Facturas factura2("01","05/04/2023",500.30);
    Facturas factura3("02","06/04/2023",500.30);

    factura1.compararObjetos(&factura1,&factura2);
    factura3.compararObjetos(&factura1,&factura3);
}
