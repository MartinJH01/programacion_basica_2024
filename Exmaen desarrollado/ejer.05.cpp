#include <iostream>

using namespace std;

int main() {
    int numeroAlumnos;
    double costoPorAlumno, costoTotal;

    cout << "Ingrese el numero de alumnos: ";
    cin >> numeroAlumnos;

    if (numeroAlumnos >= 100) {
        costoPorAlumno = 65.00;
    } else if (numeroAlumnos >= 50 && numeroAlumnos <= 99) {
        costoPorAlumno = 70.00;
    } else if (numeroAlumnos >= 30 && numeroAlumnos <= 49) {
        costoPorAlumno = 95.00;
    } else {
        costoPorAlumno = 0;  
        costoTotal = 4000.00;
    }

    if (costoPorAlumno != 0) {
        costoTotal = numeroAlumnos * costoPorAlumno;
    }

    cout << "\nCosto por alumno: $" << costoPorAlumno << endl;
    cout << "Costo total del viaje: $" << costoTotal << endl;

    return 0;
}
