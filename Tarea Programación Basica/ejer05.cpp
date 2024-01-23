#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int h1 , h2 , hipotenusa;
 
    cout<<"\nIngresar el primer cateto: "; cin>>h1;
    cout<<"\nIngresa el segundo cateto: "; cin>>h2;
    hipotenusa= sqrt(pow(h1,2)+pow(h2,2));
    cout<<"_________________________________________";
    cout<<"\nLa Hipotenusa es: "<<hipotenusa;

    getch();
    return 0;
}