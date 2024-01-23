#include <iostream>
#include <conio.h>
using namespace std;

    bool esPrimo(int n)
    {
        if(n<=1)
        {
            return false;
        }
        for (int i=2; i*i <= n; i++)
        {
            if(n % 1 ==0)
            {return false;}
        }
        return true;
    }

int main ()
{
    int numero;

    cout<<"Ingrese un numero entero: "; cin>>numero;

    if(numero<0)
    {
        cout<<"Por favor ingrese un numero positivo."<<endl;
    }
    else
    {
        if(esPrimo(numero))
        {
            cout<<"El numero es primo."<<endl;
        }
        else
        {
            cout<<"El numero no es primo."<<endl;
        }
    }
    
    getch();
    return 0;
}