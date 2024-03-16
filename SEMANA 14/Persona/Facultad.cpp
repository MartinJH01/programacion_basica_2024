#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Facultad
{
private:
    /* data */
    string cod_facultad;
    string nombre;
    string siglas;

public:
    Facultad(string _codigo, string _nombre, string _siglas)
    {

    }

string GetCod_facultad() const {
return cod_facultad;
}

void SetCod_facultad(string cod_facultad) {
cod_facultad = cod_facultad;
}

    string GetNombre() const {
        return nombre;
    }

    void SetNombre(string nombre) {
        nombre = nombre;
    }

    string GetSiglas() const {
        return siglas;
    }

    void SetSiglas(string siglas) {
        siglas = siglas;
    }

    string to_string()
    {
        return " " + nombre + " " + siglas;
    }
};
    
