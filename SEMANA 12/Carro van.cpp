#include <iostream>
#include <string>
using namespace std;

class CarroVan 
{
    private:
        int id_van;
        int nroAsientos;
        string cilindrada;
        string motor;
    public:
        CarroVan()
        {

        }
        CarroVan(int _id,int _nroAsientos,string _cilindrada, string _motor)
        {
            id_van = _id;
            nroAsientos = _nroAsientos;
            cilindrada = _cilindrada;
            motor = _motor;
        }

    int GetId_van() const {
return id_van;
}

void SetId_van(int id_van) {
id_van = id_van;
}

        int GetNroAsientos() const {
                return nroAsientos;
        }

        void SetNroAsientos(int nroAsientos) {
                nroAsientos = nroAsientos;
        }

        string GetCilindrada() const {
                return cilindrada;
        }

        void SetCilindrada(string cilindrada) {
                cilindrada = cilindrada;
        }

        string GetMotor() const {
                return motor;
        }

        void SetMotor(string motor) {
                motor = motor;
        }
};