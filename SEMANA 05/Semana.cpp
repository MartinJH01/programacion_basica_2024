#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Dia_semana;

    cout<<"Ingrese un numero del 1 al 7: "; cin>>Dia_semana;

    while (Dia_semana>7)
    {
        cout<<"Ingrese un numero del 1 al 7: "; cin>>Dia_semana;  
    }
    
    switch (Dia_semana)
    {
    case 1: cout<<"El nombre del dia numero 1 es: LUNES."; break;
    case 2: cout<<"El nombre del dia numero 2 es: MARTES."; break;
    case 3: cout<<"El nombre del dia numero 3 es: MIERCOLES."; break;
    case 4: cout<<"El nombre del dia numero 4 es: JUEVES."; break;
    case 5: cout<<"El nombre del dia numero 5 es: VIERNES."; break;
    case 6: cout<<"El nombre del dia numero 6 es: SABADO."; break;
    case 7: cout<<"El nombre del dia numero 7 es: DOMINGO."; break;
    default: cout<<"ERROR"<<endl; break;
    }
    getch();
    return 0;
}