#include <iostream>
#include <string>

using namespace std;

class Avion {
    private:
        int tripulacion; 
        int combustible; //en 1k litros
    public:
        Avion(int tripulacion, int combustible) {
            this->combustible = combustible;
            this->tripulacion = tripulacion;
        }
        int getTripulacion() {
            return tripulacion;
        }
        int getCombustible() {
            return combustible;
        }
        void setTripulacion(int _tripulacion) {
            tripulacion = _tripulacion;
        }
        void setCombustible(int _combustible) {
            combustible = _combustible;
        }
};

class Mision {
    private:
        string destino; 
        float duracion;
        Avion avion;
    public:
        Mision(string destino, float duracion, int tripulacion, int combustible) : avion(tripulacion, combustible) {
            this->destino = destino;
            this->duracion = duracion;
        }
        string getDestino() {
            return destino;
        }
        float getDuracion() {
            return duracion;
        }
        void setDuracion(float _duracion) {
            duracion = _duracion;
        }
        void setDestino(string _destino) {
            destino = _destino;
        }
        bool calculoMision() {
            if (avion.getCombustible() < duracion) {
                return false;
            }
            else {
                return true;
            }
        }
        void datosMision(){
            cout << "La misión con los siguientes datos: " << endl;
            cout << "Destino: " << getDestino() << endl;
            cout << "Tripulación: " << avion.getTripulacion() << endl;
            cout << "Duración: " << getDuracion() << endl;
            if (calculoMision() == true) {
                cout << "Es posible de realizar" << endl;
            } else {
                cout << "Es imposible de realizar" << endl;
            }
        }
};

int main() {
    //iniciamos la clase
    Mision m1("Lima", 5, 10, 3);
    m1.datosMision();
    return 0;
}
