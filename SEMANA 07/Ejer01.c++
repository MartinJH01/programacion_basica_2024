#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    const int tamano=5;

    int notas[tamano];

    cout << "Ingresa " << tamano << " numeros en el rango 0-20:" << endl;

    for (int i = 0; i < tamano; ++i) {
        do {
            cout << "Numero " << i + 1 << ": ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 20);
    }
    
    sort(notas,notas+tamano,greater<int>());

    cout<<"\nEl resultado final en letras y notasado seria:"<<endl;

    for (int i = 0; i < tamano; i++)
    {
        if(notas[i]>=18)
        {
            cout<<"A"<<endl;
        }
        if(notas[i]<18 && notas[i]>=14)
        {
            cout<<"B"<<endl;
        }
        if(notas[i]<14 && notas[i]>=1)
        {
            cout<<"C"<<endl;
        }

    }
    return 0;
}
