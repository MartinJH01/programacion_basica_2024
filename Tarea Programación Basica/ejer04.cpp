#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int opcion , n1 , n2 , resultado;

    cout<<"\n1.Sumar";
    cout<<"\n2.Restar";
    cout<<"\n3.Multiplicar";
    cout<<"\n4.Dividir";
    cout<<"\n5. Salir";
    cout<<"\nOpcion: "; cin>>opcion;
    cout<<"__________________________________"<<endl;

    switch (opcion) 
    {
    case 1: cout<<"Ingrese el primero numero: "; cin>>n1;
            cout<<"Ingrese el segundo numero: "; cin>>n2;
            resultado= n1 + n2;
            cout<<"El resultado es: "<<resultado;break;
    
    case 2: cout<<"Ingrese el primero numero: "; cin>>n1;
            cout<<"Ingrese el segundo numero: "; cin>>n2;
            resultado= n1 - n2;
            cout<<"El resultado es: "<<resultado;break;

    case 3: cout<<"Ingrese el primero numero: "; cin>>n1;
            cout<<"Ingrese el segundo numero: "; cin>>n2;
            resultado= n1 * n2;
            cout<<"El resultado es: "<<resultado;break;

    case 4: cout<<"Ingrese el primero numero: "; cin>>n1;
            cout<<"Ingrese el segundo numero: "; cin>>n2;
            resultado= n1 / n2;
            cout<<"El resultado es: "<<resultado;break; 

    case 5: break;
    }
    getch ();
    return 0;
}
