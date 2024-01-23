#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero positivo: "; cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1;
    }

    cout << "Secuencia de Collatz para " << numero << ":\n";

    while (numero != 1) {
        cout << numero << " ";

        if (numero % 2 == 0) {
            numero /= 2;
        } else {
            numero = 3 * numero + 1;
        }
    }

    cout << "1\n";

    return 0;
}

