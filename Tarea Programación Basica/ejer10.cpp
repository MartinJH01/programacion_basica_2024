#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;
int main()
{
    int a , b , c , dato=0;
    float discriminante , x1 , x2;

  
    cout<<"\nDigite el numero a: "; cin>>a;
    cout<<"\nDigite el numero b: "; cin>>b;
    cout<<"\nDigite el numero c: "; cin>>c;
    cout<<"___________________________________________";

    discriminante= sqrt(pow(b,2)- (4 * a * c));

    if (discriminante>=dato)
    {
        x1= (-b + discriminante) / 2 * a;
        cout<<"\nx1= "<<x1;

        x2= (-b - discriminante) / 2 * a;
        cout<<"\nx2= "<<x2;
    }
    else
    {
        cout<<"La discriminante es menor que 0, por lo tanto no hay respuesta";
    }
    getch();
    return 0;
}