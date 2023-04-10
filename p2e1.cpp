#include<iostream> 

#include "Carrera.h" 

using namespace std; 

int main(){ 

    bool win=false; 

    char opc='S'; 

    int DifOp; 

    double VDeJugador, VDeComp; 

    Carrera carrera1(5000.0,1); 

    Auto jugador1(45); 

    while (opc=='S' or opc=='s'){ 

            int op; 

        cout<<"Desea jugar?"<<endl; 

        cout<<"1. Nueva partida"<<endl; 

        cout<<"2. Salir"<<endl; 

        cin>>op; 

        if (op==2){break;} 

        carrera1.IngresarDificultad(); 

        DifOp=carrera1.getDifOponente(); 

        if (DifOp==1){carrera1.setVeloOponente(20);} 

        if (DifOp==2){carrera1.setVeloOponente(30);} 

        if (DifOp==3){carrera1.setVeloOponente(45);} 

        jugador1.IngresarVelocidad(); 

        VDeJugador=jugador1.getVelocidadCarro(); 

        VDeComp=carrera1.getVeloOponente(); 

        cout<<"Velocidad del jugador(k/h): "<<VDeJugador<<endl; 

        cout<<"Velocidad del oponente(m/s): "<<VDeComp<<endl; 

        cout<<"Tu velocidad en m/s es: "<<VDeJugador*5/18<<endl; 

        if (VDeJugador*5/18 > VDeComp){ 

        win=true; 

        } 

    if (win==true){ 

        cout<<"FELICIDADES, LE GANASTE A LA MAQUINA"<<endl; 

        } 

    if (win==false){ 

        cout<<"QUE PENA, INTENTALO CON MAS GANAS A LA PROXIMA"<<endl; 

    } 

    } 

    return 0; 

} 
