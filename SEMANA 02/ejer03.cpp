#include <iostream>

using namespace std;

int main() 
{
    int suma = 0;
    for (int i = 1; i <= 10; ++i) {
        suma += i;
    }
    cout << "La suma de los primeros 10 numeros es: " << suma << endl;

    return 0;
}

