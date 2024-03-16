#include<iostream>
using namespace std;

const double PI = 3.14159;  

class FromaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Circulo : public FromaGeometrica
{
private:
    double radio;

public:
    Circulo();
    Circulo(double r)
    {
        radio = r;
    }

    void dibujar() const override
    {
        cout << "dibujando el circulo" << endl;
    }

    double calcular_area() const override
    {
        return PI * radio * radio;
    }
};

