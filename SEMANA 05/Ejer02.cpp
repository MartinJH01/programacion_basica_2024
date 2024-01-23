#include <iostream>
#include <conio.h>
#include <cctype>

using namespace std;

bool esPalindromo(const string& palabra) {
    // Eliminar espacios y convertir a minúsculas para hacer la comparación sin distinción de mayúsculas y minúsculas
    string palabraFormateada;
    for (char c : palabra) {
        if (!isspace(c)) {
            palabraFormateada += tolower(c);
        }
    }

    // Verificar si la palabra original es igual a la palabra invertida
    for (size_t i = 0; i < palabraFormateada.length() / 2; ++i) {
        if (palabraFormateada[i] != palabraFormateada[palabraFormateada.length() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string entradaUsuario;
    
    // Solicitar la entrada del usuario
    cout << "Ingresa una palabra para verificar si es un palindromo: ";
    getline(cin, entradaUsuario);

    // Llamar a la función esPalindromo y mostrar el resultado
    if (esPalindromo(entradaUsuario)) {
        cout << entradaUsuario << " es un palindromo." << endl;
    } else {
        cout << entradaUsuario << " no es un palindromo." << endl;
    }

    getch();
    return 0;
}
