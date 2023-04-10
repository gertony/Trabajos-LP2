#ifndef Bancos_H
#define Bancos_H
#include <string>
using namespace std;
class Banco{
    private:
        float saldo;
        string numCuenta;
    public:
        Banco(float saldo, string numCuenta){
            this->saldo=saldo;
            this->numCuenta=numCuenta;
        }
        void setSaldo(float s){saldo=s;}
        float getSaldo(){return saldo;}
        void setNumCuenta(string n){numCuenta=n;}
        string getNumCuenta(){return numCuenta;}
};
#endif
