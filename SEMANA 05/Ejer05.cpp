#include <iostream>

using namespace std;

int main() {
    string cadena;
    int clave;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Ingrese la clave del cifrado Cesar (un numero entero): "; cin >> clave;

    for (char &caracter : cadena) {
        if (isalpha(caracter)) {
            char base = islower(caracter) ? 'a' : 'A';
            caracter = static_cast<char>((caracter - base + clave) % 26 + base);
        }
    }

    cout << "Cadena cifrada: " << cadena << endl;

    return 0;
}
