#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numerosPares;
    vector<int> numerosImpares;

    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            numerosPares.push_back(i);
        } else {
            numerosImpares.push_back(i);
        }
    }

    cout << "Numeros Pares: ";
    for (int numero : numerosPares) {
        cout << numero << " ";
    }
    cout << endl;

    cout << "Numeros Impares: ";
    for (int numero : numerosImpares) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
