#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1, n2, n3, promedio;

    cout<<"Ingrese la primera nota: "; cin>>n1;
    cout<<"Ingrese la sengunda nota: "; cin>>n2;
    cout<<"Ingrese la tercera nota: "; cin>>n3;

    promedio= (n1*0.15 + n2*0.35 + n3*0.50);

    cout<<"El promedio final es: "<<promedio;
    getch();
    return 0;
}