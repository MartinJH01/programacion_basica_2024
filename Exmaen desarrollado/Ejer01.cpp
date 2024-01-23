#include <iostream>

using namespace std;

int main() {
    const int totalPreguntas = 20;
    int Correctas = 0, Incorrectas = 0, En_blanco = 0;

    for (int i = 1; i <= totalPreguntas; ++i) {
        char respuesta;
        cout << "Ingrese la respuesta para la pregunta " << i << " (C: correcta, I: incorrecta, B: blanco): "; cin >> respuesta;

        switch (respuesta) {
            case 'C':
            case 'c':
                Correctas += 4;
                break;
            case 'I':
            case 'i':
                Incorrectas -= 2;
                break;
            case 'B':
            case 'b':
                break;
            default:
                cout << "Respuesta no valida, se considerara como respuesta en blanco.\n";
                break;
        }
    }

    int puntajeTotal = Correctas + Incorrectas;

    cout << "\nPuntaje total del postulante: " << puntajeTotal << " puntos\n";

    return 0;
}
