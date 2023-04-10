#include "p4Biblioteca.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    Biblioteca Biblio1;
    Libro libro1("Harry Potter y la Piedra Filosofal", "J.K Rowling",978849838266,2010);
    Biblio1.prestarLibro(&libro1);
    Biblio1.consultarPrestamo(&libro1);
    libro1.devolverLibro();
    Biblio1.consultarPrestamo(&libro1);
    return 0;
}
