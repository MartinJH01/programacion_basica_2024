#include <iostream>
#include <math.h> 
#include <conio.h>
using namespace std;
int main ()
{
    int l1, l2, l3;
    double pe, area;
    //capturamos y almacenamos los datos
    cout<<"Ingrese los lados del triangulo: "; cin>>l1;
    cout<<"Ingrese los lados del triangulo: "; cin>>l2;
    cout<<"Ingrese los lados del triangulo: "; cin>>l3;
    //si todos los angulos son iguales
    if(l1==l2 && l2==l3 && l1==l3)
    {
        cout<<"Es un triangulo equiladero.";
    }
    else
    {
        //verificar si todos los lados son diferentes
        if (l1!=l2 && l2!=l3 && l1!=l3)
            {cout<<"Es un triangulo escaleno.";}
        //verificar si dos de sus lados son iguales
        else{ 
            if(l1==l2)
            {cout<<"Es un triangulo isoceles.";}
            if(l3==l1)
            {cout<<"Es un triangulo isoceles";}
            if(l2==l3)
            {cout<<"Es un triangulo isoceles";}
        }
    }
    //formula para sacar el area de un trigangulo usando solo sus lados
    pe= (l1+l2+l3)/2;
    area=sqrt(pe*(pe-l1)*(pe-l2)*(pe-l3));
    //Imprimir el resultado dado 
    cout<<"\nEl area del trialgulo es de: "<<area<<"cm cuadrados.";
    getch();
    return 0;
}