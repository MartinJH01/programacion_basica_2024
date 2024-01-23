#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std; 
int main()
{
    int opcion , lado , volumen , radio , h;
    float pi=3.14;
  
    cout<<"\n1. Cubo";
    cout<<"\n2. Esfera";
    cout<<"\n3. Cono"; 
    cout<<"\n4. Cilindro";
    cout<<"\n5. Salir"; 
    cout<<"\nOpcion: "; cin>>opcion;
    cout<<"_________________________________________________________"<<endl;
    
    switch(opcion)
    {
        case 1: cout<<"Ingrese cuanto esquivale uno de sus lados: "; cin>>lado;
                volumen= pow(lado,3);
                cout<<"El volumen de dicho cubo es de: "<<volumen<<"cm cuadrados"; break;

        case 2: cout<<"Ingrese cuanto esquivale el radio: "; cin>>radio;
                volumen= pow(radio,3) * pi * 4/3;
                cout<<"El volumen de dicha esfera es de: "<<volumen<<"cm cuadrados"; break;
        
        case 3: cout<<"Ingrese cuanto esquivale el radio: "; cin>>radio;
                cout<<"ingrese la altura: "; cin>>h;
                volumen= pow(radio,2) * h * pi * 1/3;
                cout<<"El volumen de dicho cono es de: "<<volumen<<"cm cuadrados"; break;

        case 4: cout<<"Ingrese cuanto esquivale el radio: "; cin>>radio;
                cout<<"ingrese la altura: "; cin>>h;
                volumen= pow(radio,2) * h * pi;
                cout<<"El volumen de dicho cono es de: "<<volumen<<"cm cuadrados"; break;

        case 5: break;

    }  
    getch();
    return 0;
}