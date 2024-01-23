#include <iostream>
#include <conio.h>

using namespace std;

const int MAX_FILAS_COLUMNAS = 100;

int main() {
    int matriz[MAX_FILAS_COLUMNAS][MAX_FILAS_COLUMNAS];
    int filas, columnas;

    // Solicitar al usuario el tamaño de la matriz (n x n)
    cout << "Ingrese el numero de filas y columnas de la matriz cuadrada: ";
    cin >> filas;

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la matriz transpuesta
    int transpuesta[MAX_FILAS_COLUMNAS][MAX_FILAS_COLUMNAS];
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz original
    cout << "\nMatriz original:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Imprimir la matriz transpuesta
    cout << "\nMatriz transpuesta:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    getch();
    return 0;
}
