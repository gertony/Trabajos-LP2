#ifndef Facturas_H
#define Facturas_H
#include<string>
#include<iostream>
using namespace std;
class Facturas{
    private:
        string feEmision, nroFact;
        float monto;
    public:
        Facturas(string nroFact,string feEmision, float monto){
            this->feEmision=feEmision;
            this->nroFact=nroFact;
            this->monto=monto;
        }
        void setFeEmision(string Fe){feEmision=Fe;}
        string getFeEmision(){return feEmision;}
        void setNroFactura(string Nr){nroFact=Nr;}
        string getNroFactura(){return nroFact;}
        void setMonto(float m){monto=m;}
        float getMonto(){return monto;}
};
#endif
