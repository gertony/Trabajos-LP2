#ifndef Libro_H
#define Libro_H
#include<string>
#include<iostream>
using namespace std;
class Libros{
    private:
        string titulo, autor, genero;
    public:
        Libros(string titulo, string genero, string autor){
            this ->titulo=titulo;
            this ->genero=genero;
            this ->autor=autor;
        }
        void setTitulo(string t){titulo=t;}
        string getTitulo(){return titulo;}
        void setGenero(string g){genero=g;}
        string getGenero(){return genero;}
        void setAutor(string a){autor=a;}
        string getAutor(){return autor;}
};
#endif
