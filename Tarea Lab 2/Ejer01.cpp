#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    const int cantidadNumeros=4;
    int numeros[cantidadNumeros];

    for(int i=0; i<cantidadNumeros; ++i)
    {
        cout<<"Ingrese numero "<<(i+1)<<": "; cin>>numeros[i];
    }
    for(int i=0; i<cantidadNumeros - 1; ++i)
    {
        for(int j=0; j<cantidadNumeros - i - 1; ++j)
        {
            if(numeros[j] > numeros[j+1])
            {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    cout<<"Los numeros ordenados del menor al mayor son: ";
    for (int  i = 0; i < cantidadNumeros; ++i)
    {
        cout<<numeros[i]<<" ";
    }
    
    getch();
    return 0;
}