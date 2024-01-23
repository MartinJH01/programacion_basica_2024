#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char nota;

    cout<<"Ingrese la Letra de tu nota (Mayuscula): "; cin>>nota;

    switch (nota)
    {
    case 'A': cout<<"\nTu nota esta entre el 19 y 18.";
        break;
    case 'B': cout<<"\nTu nota esta entre el 17 y 14.";
        break;
    case 'C': cout<<"\nTu nota esta entre el 14 y 11.";
        break;
    case 'D': cout<<"\nTu nota esta entre el 10 y 5.";
        break;
    case 'E': cout<<"\nTu nota esta entre el 5 y 0.";
        break;
    
    default: cout<<"\nERROR"<<endl;
        break;
    }

    getch();
    return 0;
}