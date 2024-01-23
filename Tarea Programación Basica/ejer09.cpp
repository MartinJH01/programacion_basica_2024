#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int opcion , n1 , resultado;
    cout<<"\n1. Saber el cuadrado de un numero.";
    cout<<"\n2. Saber el cubo de un numero.";
    cout<<"\n3. Salir.";
    cout<<"\nOpcion: "; cin>>opcion;
    cout<<"_______________________________________";

    switch (opcion)
    {
    case 1: cout<<"\nIngrese dicho numero: "; cin>>n1;
            resultado= pow(n1,2);
            cout<<"El cuadrado de "<<n1<<" es: "<<resultado; break;
    
    case 2: cout<<"\nIngrese dicho numero: "; cin>>n1;
            resultado= pow(n1,3); 
            cout<<"El cube de "<<n1<<" es: "<<resultado; break;

    case 3: break;
    }

    getch();
    return 0;
}