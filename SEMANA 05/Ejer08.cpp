#include <iostream>
#include <vector>

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

    // Encontrar el mayor elemento
    int mayor = numeros[0];  // Suponemos que el primer elemento es el mayor inicialmente

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            // Usar break para salir del bucle tan pronto como se encuentra el mayor elemento
            break;
        }
    }

    // Mostrar el resultado
    cout << "El mayor elemento en el vector es: " << mayor << endl;

    return 0;
}
