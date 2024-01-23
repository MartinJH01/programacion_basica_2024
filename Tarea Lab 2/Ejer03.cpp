#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float velocidad_Km, velocidad_Ms;

    cout<<"Ingrese la velocidad en (k/h): "; cin>>velocidad_Km;

    velocidad_Ms = velocidad_Km / 3.6;

    cout<<"\nLa velocidad de "<<velocidad_Km<<" (k/h), convertido seria de "<<velocidad_Ms<<" (m/s).";
    getch();
    return 0;
}