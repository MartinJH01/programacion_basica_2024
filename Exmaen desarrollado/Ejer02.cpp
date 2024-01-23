#include <iostream>

using namespace std;

int main() {
    const int totalPartidos = 20;
    int partidosGanados = 0, partidosEmpatados = 0;

    for (int i = 1; i <= totalPartidos; ++i) {
        char resultado;
        cout << "Ingrese el resultado para el partido " << i << " (G: Ganado, E: Empatado, P: Perdido): ";
        cin >> resultado;

        switch (resultado) {
            case 'G':
            case 'g':
                partidosGanados += 3;
                break;
            case 'E':
            case 'e':
                partidosEmpatados += 1;
                break;
            case 'P':
            case 'p':
                break;
            default:
                cout << "Resultado no valido, el partido se considerara como perdido.\n";
                break;
        }
    }

    int puntajeTotal = partidosGanados + partidosEmpatados;

    cout << "\nPuntaje total del equipo: " << puntajeTotal << " puntos\n";

    return 0;
}
