#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double lado1, lado2, lado3;

    cout << "Ingrese la longitud del lado 1: ";
    cin >> lado1;

    cout << "Ingrese la longitud del lado 2: ";
    cin >> lado2;

    cout << "Ingrese la longitud del lado 3: ";
    cin >> lado3;

    double s = (lado1 + lado2 + lado3) / 2;

    double area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "El triangulo es isosceles." << endl;
    } else {
        cout << "El triangulo es escaleno." << endl;
    }

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
