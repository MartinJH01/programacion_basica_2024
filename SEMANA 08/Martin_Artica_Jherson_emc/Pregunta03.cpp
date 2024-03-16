#include <iostream>
using namespace std;

float SueldoSemanal(int horasTrabajadas) {
    const int horasNormales = 40;
    const float pagoPorHoraNormal = 20.0;
    const float pagoPorHoraExtra = 25.0;

    if (horasTrabajadas <= horasNormales) {
        return horasTrabajadas * pagoPorHoraNormal;
    } else {
        int horasNormalesTrabajadas = horasNormales;
        int horasExtrasTrabajadas = horasTrabajadas - horasNormales;

        float sueldoNormal = horasNormalesTrabajadas * pagoPorHoraNormal;
        float sueldoExtra = horasExtrasTrabajadas * pagoPorHoraExtra;

        return sueldoNormal + sueldoExtra;
    }
}

int main() {
    int horasTrabajadas;

    cout << "Ingrese las horas trabajadas esta semana: ";
    cin >> horasTrabajadas;

    float sueldo = SueldoSemanal(horasTrabajadas);
    cout << "El sueldo semanal es: $" << sueldo << endl;

    return 0;
}

