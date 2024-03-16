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
        double lado;
    public:
        Trapecio();
        Trapecio(double l)
        {
            lado = l;
        }

        void dibujar() const override
        {
            cout<<"Dibujando el cuadrado"<<endl;
        }
        double calcuarArea() const
        {
            return lado * lado;
        }
};