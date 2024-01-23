//calculaar la hipotenusa
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float cateto1,cateto2;
    cout<<"dime el valor del primer cateto "; cin>>cateto1;
    cout << "dime el valor del segunda cateto: "; cin>>cateto2;
    float hipotenusa=sqrt(pow(cateto1,2)+ pow(cateto2,2));
    cout << "la hipotenusa es "<<hipotenusa;
    return 0;

}