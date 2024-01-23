#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int numero;
    cout<<"\nQuieres saber si un numero es par o impar?";
    cout<<"\nSolo ingresa el numero: "; cin>>numero;
    cout<<"____________________________________________";
    
    if (numero%2 == 0)
    {
        cout<<"\nEl numero es par";
    }
    else
    {
        cout<<"\nEl numero no es par";
    }
    
    getch ();
    return 0;
}