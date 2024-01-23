#include <iostream>
using namespace std;
int main()
{
    int TotalEstudiantes=10;

    for(int i=0; i<=TotalEstudiantes; i++)
    {
        float nota;
        do
        {
            cout<<"Ingrese la nota del estudiante "<<i+1<<" : "; cin>>nota;
            if(nota<0||nota>20)
                {
                    cout<<"La nota debe estar en el rango (0-20)"<<endl;
                }
        } while ((nota<0)||(nota>20));
        
    }

    return 0;
}