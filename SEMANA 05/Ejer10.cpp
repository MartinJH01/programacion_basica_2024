#include <iostream>

using namespace std;

int main() {
    string oracion;

    // Solicitar al usuario ingresar una oración
    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    int conteoVocales[5] = {0}; // Inicializar el arreglo para contar las vocales

    // Contar las vocales en la oración
    for (char caracter : oracion) {
        switch (tolower(caracter)) {
            case 'a':
                conteoVocales[0]++;
                break;
            case 'e':
                conteoVocales[1]++;
                break;
            case 'i':
                conteoVocales[2]++;
                break;
            case 'o':
                conteoVocales[3]++;
                break;
            case 'u':
                conteoVocales[4]++;
                break;
        }
    }

    // Mostrar resultados
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; ++i) {
        cout << "Cantidad de vocales '" << vocales[i] << "': " << conteoVocales[i] << endl;
    }

    return 0;
}
