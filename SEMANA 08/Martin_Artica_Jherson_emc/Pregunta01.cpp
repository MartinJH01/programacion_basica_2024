#include <iostream>
using namespace std;
int main()
{
    int dato, numero, contador=0;

    srand(time(NULL));
    dato = 1 + rand()%(100);

    cout<<"Bienvenido al juego de adivinar el numero entre 1 y 100."<<endl;
    cout<<"Solo tendras 5 intentos, SUERTE! :)"<<endl;

    do
    {
        cout<<"Ingrese un numero: "; cin>>numero;

        if(numero==dato)
        {
            cout<<"FELICIDADES ADIVINASTE EL NUMERO"<<endl;
            cout<<"Tu numero de intentos fue de: "<<contador++<<endl; break;

        }
        else if (numero<dato)
        {
            cout<<"Ingrese un numero mayor"<<endl;
        }
        else
        {
            cout<<"Ingrese un numero menor"<<endl;
        }
        contador++;

        if(contador>4)
        {
            cout<<"USTED EXCEDIO EL NUMERO DE INTENTOS, VUELVE A INTENTARLO."<<endl;
            cout<<"El numero fue: "<<dato<<endl; break;
        }
        
    } while (numero!=dato);

    return 0;
}