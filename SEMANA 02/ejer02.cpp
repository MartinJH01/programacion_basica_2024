#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ 
    int n1, n2, n3;

    cout<<"Ingrese el primer numero: "; cin>>n1;
    cout<<"Ingrese el segundo numero: "; cin>>n2;
    cout<<"Ingrese el tercer numero: "; cin>>n3;
    cout<<"__________________________________________________\n"<<endl;

    if (n1!=n2||n2!=n3||n3!=n1)
    { 
        if(n1 != n2)
        {
            if(n1 != n3)
            {
                if(n2 != n3)
                { 
                    if(n1 > n2)
                    {
                        if(n1 > n3)
                        {
                            if(n2 > n3)
                            { cout<<n1<<" es el mayor."<<endl;
                            cout<<n3<<" es el menor."<<endl;}
                        }
                        else
                            if(n1 > n2)
                            { cout<<n3<<" es el mayor."<<endl;
                              cout<<n2<<" es el menor."<<endl;}
                    }
                    else
                    {
                        if(n2 > n3)
                        {
                            if(n1 > n3)
                            { cout<<n2<<" es el mayor."<<endl;
                            cout<<n3<<" es el menor."<<endl;}
                        }
                        else
                            if(n2 > n1)
                        { cout<<n3<<" es el mayor."<<endl;
                          cout<<n1<<" es el menor."<<endl;}
                    }
                }
                else
                {cout<<"el segundo y el tercero son iguales.";}
            }
            else
            {cout<<"El primer y el tercer numero son iguales.";}
        }
        else
        {cout<<"El primer y el segundo numero son iguales.";}
    }
    else
    {cout<<"Todos los numeros son iguales.";}

    getch();
    return 0;
}