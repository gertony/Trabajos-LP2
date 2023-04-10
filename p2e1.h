#ifndef Carrera_H 

#define Carrera_H 

#include <iostream> 

using namespace std; 

class Carrera{ 

    private: 

        float disCarr; 

        int DifOponente; 

        double VOponente; 

    public: 

        Carrera(float disCarr, int DifOponente){ 

            this->disCarr=disCarr; 

            this->DifOponente=DifOponente; 

            this->VOponente=VOponente; 

        } 

        void setDisCarr(float dis){disCarr=dis;} 

        float getDisCarr(){return disCarr;} 

        void setDifiOponente(int dif){DifOponente=dif;} 

        int getDifOponente(){return DifOponente;} 

        void setVeloOponente(double velO){VOponente=velO;} 

        float getVeloOponente(){return VOponente;} 

        void IngresarDificultad(){ 

            int DifCa; 

            cout<<"Ingrese la dificultad de la computadora:"<<endl; 

            cout<<"1. Facil (20m/s)"<<endl; 

            cout<<"2. Media (30 m/s)"<<endl; 

            cout<<"3. Dificil (45m/s)"<<endl; 

            cin>>DifCa; 

            setDifiOponente(DifCa); 

        } 

}; 

class Auto{ 

    private: 

        double VelCarro; 

    public: 

        Auto(double VelCarro){ 

            this->VelCarro=VelCarro;    

        } 

        void setVelocidadCarro(double velC){VelCarro=velC;} 

        float getVelocidadCarro(){return VelCarro;} 

        void IngresarVelocidad(){ 

            double Velo; 

            cout<<"Ingrese una velocidad superior PERO en k/h."<<endl; 

            cin>>Velo; 

            setVelocidadCarro(Velo); 

        } 

}; 

 
 

#endif 
