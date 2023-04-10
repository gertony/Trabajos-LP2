#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <iostream>

using namespace std;

class Libro
{
    private:
        string nombre;
        string autor;
        int isbn;
        int edicionYear;
        bool prestamo;
    public:
        Libro(string nombre,string autor, int isbn, int edicionYear)
        {
            this->autor = autor;
            this->nombre = nombre;
            this->isbn = isbn;
            this->edicionYear = edicionYear;
            this->prestamo = false;
        }
        bool getPrestamo()
        {
            return prestamo;
        }
        void setPrestamo(bool estado)
        {
            prestamo = estado;
        }
        void devolverLibro()
        {
            prestamo = true;
        }
};

class Biblioteca
{
    public:
        void  prestarLibro(Libro* x)
        {
            x->setPrestamo(false);
        }

        void consultarPrestamo(Libro* y)
        {
            if (y->getPrestamo() == true)
            {
                cout << "El libro se encuentra en la biblioteca" << endl;
            }
            else
            {
                cout << "Lo sentimos el libro se encuentra en prestamo" << endl;
            }
        }
};

#endif
