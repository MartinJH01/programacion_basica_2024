#include <iostream>
using namespace std;
int main()
{
    const int numAlumnos=4;
    const int numNotas=4;

    double notas[numAlumnos][numNotas];

    for(int i=0; i<numAlumnos; i++)
    {
        cout<<"Ingrese las 4 notas para el alumno "<<i+1<<":"<<endl;
        for(int j=0; j<numNotas; j++)
        {
            cout<<"Nota "<<j+1<<":"; cin>>notas[i][j];
        }
    }

    cout<<"Promedio de notas por alumno:"<<endl;
    for(int i=0; i<numAlumnos; i++)
    {
        double suma=0;
        for(int j=0; j<numNotas; j++)
        {
            suma += notas[i][j];
        }

        double promedio = suma/numNotas;

        cout<<"Alumno"<<i+1<<promedio<<endl;
    }
    return 0;
}