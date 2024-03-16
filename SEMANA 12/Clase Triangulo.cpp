#include<iostream>
using namespace std;

class Triangulo
{
private:
    float lado1;
    float lado2;
    float lado3;
public:
    //consturctor
    Triangulo(float l1,float l2,float l3){
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }
    Triangulo () {}
    //getter and setter --> para manipular variables
    float getlado1()
    {
        return lado1;
    }
    void setlado1(float l1)
    {
        lado1 = l1;
    }
    float getlado2()
    {
        return lado2;
    }
    void setlado2(float l2)
    {
        lado2 = l2;
    }
    float getlado3()
    {
        return lado3;
    }
    void setlado3(float l3)
    {
        lado3 = l3; 
    }
     
    //metodos del Triangulo
    float calcular_area()
    {
        return lado1*lado2*lado3;
    }
    float calcular_perimetro()
    {
        return lado1 + lado2 + lado3;
    }

};

int main()
{

    Triangulo rect(5.0,2.5,7.5);
    Triangulo rect_02;

    rect_02.setlado1(5.0);
    rect_02.setlado2(2.5);
    rect_02.setlado3(7.5);

    cout<<"El valor de sus lados del Triangulo 2 es: ";
    cout<<rect_02.getlado1()<<endl;
    cout<<rect_02.getlado2()<<endl;
    cout<<rect_02.getlado3()<<endl;
}
