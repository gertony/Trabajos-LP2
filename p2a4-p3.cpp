#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Rueda
{
    private:
       int size;
    public:
        Rueda(int size)
        {
            this->size = size;
        }
        int getSize()
        {
            return size;
        }
};

class Carro 
{
    private:
        int opc0;
        Rueda* opc1;
        Rueda* opc2;
        Rueda* opc3;
        Rueda* opc4;
        float distanciatotal;
        vector <Rueda*> listaruedas;

    public:
        Carro(Rueda* opc1, Rueda* opc2, Rueda* opc3, Rueda* opc4)
        {   
            this->opc1 = opc1;
            this->opc2 = opc2;
            this->opc3 = opc3;
            this->opc4 = opc4;
            this->distanciatotal = 0.0;
        }

        void moverCarro(float distancia,char dr) // dr se refiere a Drive y Reverse que seran las unicas direcciones para el carro
        {
            if (distanciatotal - distancia < 0 and dr == 'r')
            {
                cout << "No puede retroceder mas a llegado al limite";
            }
            else
            {
                if (dr == 'd')
                {
                    distanciatotal = distanciatotal + distancia;
                }
                if (dr == 'r')
                {
                    distanciatotal = distanciatotal - distancia;
                }
                cout << "Distancia Actual del punto de partida: " <<  distanciatotal << " metros " << endl;
            }
        }

        void cambioRuedas()
        {   
            int opc = -1;
            listaruedas.push_back(opc1);
            listaruedas.push_back(opc2);
            listaruedas.push_back(opc3);
            listaruedas.push_back(opc4);

            cout << "Lista de ruedas:\n";
            for(int i = 0; i < 4; i++)
            {
                cout << "Tamaño "<<i+1<<": "<<listaruedas[i]->getSize()<<endl;
            }
            cout<<"Elija Una Opcion 1-4: ";
            cin >> opc;

            switch (opc)
            {
            case 1:
                opc0 = opc1->getSize();
                break;
            case 2:
                opc0 = opc2->getSize();
                break;
            case 3:
                opc0 = opc3->getSize();
                break;
            case 4:
                opc0 = opc4->getSize();
                break;
            default: 
                    cout << "Opción inválida, se mantendrá la rueda actual.\n"; 
            }
            cout << "El tamaño de sus ruedas es: " << opc0 << " pulgadas"<<endl;
        }

};


#endif
