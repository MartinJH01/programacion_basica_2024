#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    vector<int> primos;

    for (int num = inicio; num <= fin; ++num) {
        if (esPrimo(num)) {
            primos.push_back(num);
        }
    }

    cout << "Numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
