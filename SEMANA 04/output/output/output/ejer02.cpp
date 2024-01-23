#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1;

    cout<<"Ingrese el numero: ";cin>>n1;

    if(20>=n1 && n1>=19)
    {cout<<"La nota es: A";}
    else
    if(18>=n1 && n1>=16)
    {cout<<"La nota es: B";}
    else
    if(15>=n1 && n1>=13)
    {cout<<"La nota es: C";}
    else
    if(12>=n1 && n1>=10)
    {cout<<"La nota es: D";}
    else
    if(9>=n1 && n1>=1)
    {cout<<"La nota es: E";}

    getch();
    return 0;
}