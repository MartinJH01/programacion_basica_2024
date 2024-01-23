#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int saldo_inicial=500, opcion;
	float extra , saldo , retiro, transferencia;
    char nombre[10];
	
	cout<<"\t Bienvenida a tu Cajero automatico."<<"\t\t El saldo de su cuenta es de: "<<saldo_inicial<<endl;
	cout<<"\n1. Despositar dinero en la cuenta";
	cout<<"\n2. Retirar dinero de la cuenta";
    cout<<"\n3. Realizar una transferencia";
	cout<<"\n4. Salir";
	cout<<"\nOpcion: "; cin>>opcion;
	
	switch (opcion)
	{ 
	case 1: cout<<"Cuanto desea depositar: "; cin>>extra;
			saldo= saldo_inicial + extra;
			cout<<"La operacion se relizo con exito."<<"\t\t El saldo actual de su enta es de: "<<saldo;break;
	case 2: cout<<"\nCuanto desa retirar? "; cin>>retiro;
		if(saldo_inicial<retiro)
		{
			cout<<"\nNo tiene esa cantidad en la cuenta"; break;
		}	
		else 
		{ 
			saldo= saldo_inicial - retiro;
			cout<<"La operacion relizo con exito."<<"\t\t El saldo actual de su enta es de: "<<saldo; break;
		}
	case 3: cout<<"A quien se le hara la transferencia: "; cin>>nombre;
            cout<<"Cuanto desea transferir:"; cin>>transferencia;
                if(transferencia<=saldo_inicial)
                {
                    saldo= saldo_inicial-transferencia;
                    cout<<"\nLa transferencia para "<<nombre<<" se relizo con exito."<<"\t\t El saldo actual de su enta es de: "<<saldo;
                }
                
                else
                {cout<<"Usted no cuenta con dinero suficiente para realizar esta transferencia."; break; }
    case 4: break;
	}
	getch();
	return 0;
}