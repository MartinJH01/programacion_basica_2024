#include <iostream>
#include <string>
using namespace std;

struct Alumno
{
    string Nombre;
    int edad;
    float notas[3];
    float promedio;

    //Funcion para ver si es mayor de edad
    bool MayorDeEdad()
    {
        return edad >=18;
    }
    //Funcion para calcular el promedio 
    void CalcularPromedio()
    {
        float suma = 0; 
        for (int i = 0; i < 3; i++)
        {
            suma += notas[i];
        }
        promedio = suma / 3;
    }
    //Funcion ver si aprobo
    bool Aprobo()
    {
        CalcularPromedio();
        return promedio >=10;
    }
};

int main() {
    Alumno alumno1;

    // Solicitar información del alumno al usuario
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno1.Nombre);

    cout << "Ingrese la edad del alumno: ";
    cin >> alumno1.edad;

    cout << "Ingrese las notas del alumno";
    for (int i = 0; i < 3; ++i) {
        cout<<"\nIngrese la nota "<<i+1<<": ";
        cin >> alumno1.notas[i];
    }

    //Se imprime la informacion del alumno 1
    cout << "\nInformacion del alumno:\n";
    cout << "Nombre: " << alumno1.Nombre << "\nEdad: " << alumno1.edad << "\nNotas: ";
    for (int i = 0; i < 3; ++i) {
        cout << alumno1.notas[i] << " ";
    }
    cout << endl;

    if (alumno1.MayorDeEdad()) {
        cout << "Es mayor de edad" << endl;
    } else {
        cout << "No es mayor de edad" << endl;
    }

    alumno1.CalcularPromedio();
    cout << "Promedio: " << alumno1.promedio << endl;

    if (alumno1.Aprobo()) {
        cout << "Aprobo" << endl;
    } else {
        cout << "No aprob" << endl;
    }

    return 0;
}