#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n=0;
    int total_par=0, total_impar=0;

    cout<<"Ingrese el valor maximo: ";cin>>n;
    for(int i=0; i<=n; i++)
    {
        if(i%2==0)
        {
            total_par++;
        }
        else
        {
            total_impar++;
        }
    }

    cout<<"Total numeros pares: "<<total_par;
    cout<<"Total numeros impares: "<<total_impar;
    getch();
    return 0;
}