#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std; 

class Triangulo {
private:
    double lado1, lado2, lado3;

public:
    Triangulo(double a, double b, double c) : lado1(a), lado2(b), lado3(c) 
    {
        if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) 
        {
            throw invalid_argument("Los lados deben ser mayores que cero.");
        }
    }

    double perimetro() const 
    {
        return lado1 + lado2 + lado3;
    }
};

int main() 
{
    try 
    {
        Triangulo miTriangulo(10, 20, 30);

        cout << "Sus lados del Triangulo son de: 10, 20 y 30." << endl;
        cout << "Perimetro: " << miTriangulo.perimetro() << endl;
    } 
    catch (const invalid_argument & e) 
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
