#include <iostream>
#include <string>

using namespace std;

int main() {
    int respuestasCorrectas = 0;

    // Pregunta 1
    cout << "En donde se encuentra la UNAS?" << endl;
    string respuesta1;
    cout << "Tu respuesta: ";
    getline(cin, respuesta1);
    if (respuesta1 == "Tingo" ||respuesta1 == "tingo"|| respuesta1 == "Tingo María" || respuesta1 == "tingo maria" || respuesta1 == "tingo maría" || respuesta1 == "Tingo maria"| respuesta1 == "Tingo Maria") respuestasCorrectas++;

    // Pregunta 2
    cout << "Cuando fue fundada la ciudad de Tingo Maria?" << endl;
    int respuesta2;
    cout << "Tu respuesta (en numeros): ";
    cin >> respuesta2;
    if (respuesta2 == 1938) respuestasCorrectas++;

    // Pregunta 3
    cout << "Cuanto tiempo de creancion tiene la FIIS?" << endl;
    int respuesta3;
    cout << "Tu respuesta (en numeros): ";
    cin >> respuesta3;
    if (respuesta3 == 24) respuestasCorrectas++;

    // Mostrar resultados
    cout << "\nResultados del juego:\n";
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << 3 - respuestasCorrectas << endl;

    return 0;
}
