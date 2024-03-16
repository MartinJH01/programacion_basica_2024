#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float notas[3];
    float promedio;
};

bool esMayorDeEdad(const Alumno& alumno) {
    return alumno.edad >= 18;
}

void calcularPromedio(Alumno& alumno) {
    float sumaNotas = 0.0;
    for (int i = 0; i < 3; ++i) {
        sumaNotas += alumno.notas[i];
    }
    alumno.promedio = sumaNotas / 3;
}

bool aprobo(const Alumno& alumno) {
    return alumno.promedio >= 6.0;
}

int main() {
    Alumno alumnos[2];  

    for (int i = 0; i < 2; ++i) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin, alumnos[i].nombre);

        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        cin >> alumnos[i].edad;

        cout << "Ingrese las tres notas del alumno " << i + 1 << " separadas por espacios: ";
        for (int j = 0; j < 3; ++j) {
            cin >> alumnos[i].notas[j];
        }

        cin.ignore();  
    }

    cout << "\nInformacion de los dos alumnos:\n";
    for (int i = 0; i < 2; ++i) {
        if (esMayorDeEdad(alumnos[i])) {
            cout << alumnos[i].nombre << " es mayor de edad." << endl;
        } else {
            cout << alumnos[i].nombre << " no es mayor de edad." << endl;
        }

        calcularPromedio(alumnos[i]);
        cout << "El promedio de notas de " << alumnos[i].nombre << " es: " << alumnos[i].promedio << endl;

        if (aprobo(alumnos[i])) {
            cout << alumnos[i].nombre << " aprobo." << endl;
        } else {
            cout << alumnos[i].nombre << " no aprobo." << endl;
        }

        cout << endl;  
    }

    return 0;
}
