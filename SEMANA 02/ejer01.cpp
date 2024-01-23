#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    int n1, n2, resultado;

    cout<<"Ingrese el primer numero: "; cin>>n1;
    cout<<"Ingrese el segundo numero: "; cin>>n2;

    resultado= n1 + n2;

    cout<<"La suma de dos dichos numeros es: "<<resultado<<endl;

    if (n1 == n2)
    {cout<<n1<<" y "<<n2<<" son iguales.";}
    else
        { 
    if(n1 > n2)
        {cout<<n1<<" es mayor.";}

    else
        {cout<<n2<<" es mayor.";}
    }
    getch();
    return 0;
}