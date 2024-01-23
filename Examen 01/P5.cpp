#include <iostream>
#include <string>

using namespace std;

int main() {
    
    //declarar variables
    int na, tot=4000;
    double pa;
    //capturar y almacenar datos
    cout<<"Cuantos alumnos iran de viaje: "; cin>>na;
    //si el (na) es mayor que 100
    if(na>100)
    {
        cout<<"Cada alumno tendra que pagar: 65.00";
    }
    //si el (na) es mayor que 50 pero menor que 99
    if(na<99 && 50<na)
    {
        cout<<"Cada alumno tendra que pagar: 70.00";
    }
    //si el (na) es mayor que 49 pero menor que 30
    if(na<49 && 30<na)
    {
        cout<<"Cada alumno tendra que pagar: 95.00";
    }
    //si es menor que 30
    if(30>na)
    {
        pa=tot/na;

        cout<<"Cada alumno tendra que pagar: "<<pa<<".00";
    }
    return 0;
}