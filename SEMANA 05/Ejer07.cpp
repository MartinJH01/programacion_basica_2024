#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;

    // Solicitar al usuario ingresar los elementos del vector
    cout << "Ingrese los elementos del vector (ingrese listo para finalizar):" << endl;
    while (true) {
        int elemento;
        char listo;
        cout << "Elemento: ";
        cin >> elemento;

        if (elemento == listo) {
            break;  // Terminar la entrada cuando se ingresa -1
        }

        numeros.push_back(elemento);
    }

    // Ordenar el vector
    sort(numeros.begin(), numeros.end());

    // Eliminar elementos duplicados
    numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());

    // Mostrar el vector sin duplicados
    cout << "Vector sin elementos duplicados: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
