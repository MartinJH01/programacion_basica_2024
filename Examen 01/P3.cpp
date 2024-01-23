#include <iostream>

using namespace std;

int calcularIncentivo(int produccionDiaria[]) {
    const int produccionMinima = 100;
    const int incentivoBase = 50;  // Incentivo base diario
    const int incentivoAdicional = 20;  // Incentivo adicional por superar la producción mínima

    int incentivoSemanal = 0;
    // Lunes a Viernes
    for (int i = 0; i < 5; ++i) {  
        if (produccionDiaria[i] >= produccionMinima) {
            incentivoSemanal += incentivoBase + incentivoAdicional * (produccionDiaria[i] - produccionMinima);
        }
    }

    return incentivoSemanal;
}

int main() {
    int produccionDiaria[5];

    // Pedir al usuario que ingrese la producción diaria para cada día de la semana
    for (int dia = 1; dia <= 5; ++dia) {
        cout << "Ingrese la producción del día " << dia << ": ";
        cin >> produccionDiaria[dia - 1];
    }

    int incentivoSemanal = calcularIncentivo(produccionDiaria);

    cout << "\nEl incentivo semanal para el operario es: $" << incentivoSemanal << endl;

    return 0;
}
