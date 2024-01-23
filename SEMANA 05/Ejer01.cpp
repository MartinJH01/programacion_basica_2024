#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    const int cantidadNumeros = 10;
    int numeros[cantidadNumeros];
    int suma = 0;

    // Solicitar al usuario ingresar 10 números enteros
    cout << "Ingresa " << cantidadNumeros << " numeros enteros:" << endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / cantidadNumeros;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    // Contar cuántos números son mayores que el promedio
    int mayoresQuePromedio = 0;
    for (int i = 0; i < cantidadNumeros; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    cout << "Hay " << mayoresQuePromedio << " numeros mayores que el promedio." << endl;

    getch();
    return 0;
}
