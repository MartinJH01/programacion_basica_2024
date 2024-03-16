#include <iostream>
#include <string>
#include <ctime>
#include "persona.cpp"
#include "facultad.cpp"

using namespace std;

class Alumno : public Persona
{
private:
    /* data */
    string codigo;
    int año_ingreso;
    string facultad;

public:
    Alumno(/* args */);

    Alumno(string _codigo_alumno, int _año, string _facultad, int _codigo, string _apellidos, string _nombre, int _edad) : Persona(_codigo, _apellidos, _nombre, _edad)
    {
        codigo = _codigo_alumno;
        año_ingreso = _año;
        facultad = _facultad;
    }

    string GetCodigo() const
    {
        return codigo;
    }

    void SetCodigo(string codigo)
    {
        codigo = codigo;
    }

    int GetAño_ingreso() const
    {
        return año_ingreso;
    }

    void SetAño_ingreso(int año_ingreso)
    {
        año_ingreso = año_ingreso;
    }

    string GetFacultad() const
    {
        return facultad;
    }

    void SetFacultad(string facultad)
    {
        facultad = facultad;
    }
};