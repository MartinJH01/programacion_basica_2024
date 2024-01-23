#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int edad;
	float altura;
	char nombre[50] , comida[50]; 
    cout<<"Cual es tu nombre?: "; cin>>nombre;
    cout<<"Cual es tu edad?: "; cin>>edad;
    cout<<"Cuanto mides? (cm): "; cin>>altura; 
    cout<<"Cual es tu comida favorita?: "; cin>>comida;
    
    cout<<"________________________________________________________________";
    cout<<"\nHola! "<<nombre<<" Bienvenido.";
    cout<<"\nYa sabemos un poco de ti"<<endl;
    cout<<"\nTu edad es: "<<edad;
    cout<<"\nMides "<<altura<<" cm de altura";
    cout<<"\nTe gusta mucho el "<<comida<<" ya que es tu comida favorita.";
    
    getch();
    return 0;
}
