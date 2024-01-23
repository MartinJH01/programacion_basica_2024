#include <iostream>

using namespace std;

int main() {
    const int diasTrabajados = 6;
    const int produccionMinima = 100;
    const float incentivoPorUnidad = 0.5; 

    int produccionDiaria;
    float incentivoTotal = 0;

    for (int dia = 1; dia <= diasTrabajados; dia++) {
        cout << "Ingrese la produccion del dia " << dia << ": "; cin >> produccionDiaria;

        if (produccionDiaria >= produccionMinima) {
            float incentivoDia = produccionDiaria * incentivoPorUnidad;
            incentivoTotal += incentivoDia;

            cout << "Incentivo para el dia " << dia << ": $" << incentivoDia << endl;
        } else {
            cout << "Produccion insuficiente. No hay incentivo para el dia " << dia << endl;
        }
    }

    cout << "\nIncentivo total semanal: $" << incentivoTotal << endl;

    return 0;
}
