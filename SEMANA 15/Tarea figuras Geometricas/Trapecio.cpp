#include <iostream>
using namespace std;

class FormaGeometrica
{
    public:
        virtual void dibujar() const = 0;
        virtual void calcular_area() const = 0;
};

class Trapecio: public FormaGeometrica
{
    private:
        double base;
        double altura;
    public:
        Trapecio();
        Trapecio(double b, double h)
        {
            base = b;
            altura = h;
        }

        void dibujar() const override
        {
            cout<<"Dibujando el triangulo"<<endl;
        }
        double calcuarArea() const
        {
            return (base * altura) / 2;
        }
};