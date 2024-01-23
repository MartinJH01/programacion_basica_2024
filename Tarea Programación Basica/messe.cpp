#include <iostream>
using namespace std;
int main() {
    float nota1,nota2,nota3,nota4,sumatoria;
    cout << "dime la primera nota: "; cin>>nota1;
    cout << "dime la segunda nota: "; cin>>nota2;
    cout << "dime la tercera nota: "; cin>>nota3;
    cout << "dime la cuarta nota: "; cin>>nota4;
    sumatoria=nota1+nota2+nota3+nota4;
    cout << "el promedio de tu nota es "<<sumatoria/4;
    return 0;
 }
