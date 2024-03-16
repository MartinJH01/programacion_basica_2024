#include<iostream>
using namespace std;

class FromaGeometrica
{
    public:
        virtual void dibujar() const = 0;
        virtual double calcular_area() const = 0;
};

class Rectangulo: public FromaGeometrica
{
    private:
        double base;
        double altura;
    public:
        Rectangulo();
        Rectangulo(double l, double a)
        {
            base = l;
            altura = a;
        }

        void dibujar() const override
        {
            cout<<"dibujando el rectangulo"<<endl;
        }
        double calcularArea() const 
        {
            return base * altura;
        }
};