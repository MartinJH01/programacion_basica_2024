#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int opcion , altura , base , area , lado;
    
    cout<<"\n1. Area de un triangulo";
    cout<<"\n2. Area de un cuadrado";
    cout<<"\n3. Area de un rectangulo";
    cout<<"\n4.Salir";
    cout<<"\nopcion: "; cin>>opcion;

    switch (opcion)
    {
    case 1: cout<<"Cuanto mide altura del triangulo: "; cin>>altura;
            cout<<"Cuanto mide la base del triangulo "; cin>>base;
            area= (base * altura) / 2;
            cout<<"El area del triangulo es: "<<area<<" cm cuadrados";break;

    case 2: cout<<"Cuanto mide el lado del cuadrado: "; cin>>lado;
            area= lado * lado;
            cout<<"El area del cuadrado es: "<<area<<" cm cuadrados";break;

    case 3: cout<<"Cuanto mide altura del rectangulo: "; cin>>altura;
            cout<<"Cuanto mide la base del rectangulo: "; cin>>base;
            area= base * altura;
            cout<<"El area del rectangulo es: "<<area<<" cm cuadrados";break;

    case 4: break;
    }
	getch();
    return 0; 
}
