#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeroDias, anos, meses, dias;

    cout << "Ingrese el numero de dias: ";
    cin >> numeroDias;

    anos = numeroDias / 365;
    meses = (numeroDias % 365) / 30;
    dias = (numeroDias % 365) % 30;

    cout << "Equivalente a: " << anos << " anos, " << meses << " meses y " << dias << " dias." << endl;
    
    getch();
    return 0;
}
