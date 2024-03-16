#include <iostream>
#include <string>
using namespace std;

class Clase 
{
private:
    int id;
    string Color;
    int año_Fabricacion;
    int nroAsientos;
    string color;
    string marca;
    string cilindrada;
    string motor;
    float velocidad;
    bool encendido;
public:
    Clase Carro(int _id,string _Color,int _año_Fabricacion,int _nroAsientos,string _color,string _marca,string _cilindrada,string _motor)
    {
        id = _id;
        Color = _Color;
        año_Fabricacion = _año_Fabricacion;
        color = _color;
        marca = _marca;
        velocidad = 0;
        encendido = true;
    }
    
    //Getter and Setter
    int getId()
    {
        return id;
    }
    void setId(int _id)
    {
        id = _id;
    }

    string getColor()
    {
        return Color;
    }
    void setColor(string _Color)
    {
        Color = _Color;
    }
    int getAñoFabricacio()
    {
        return año_Fabricacion;
    }
    void setAñoFabricacion(int _año)
    {
        año_Fabricacion = _año;
    }
    string getColor()
    {
        return Color;
    }
    void setColor(string _color)
    {
        color = _color;
    }
    string getMarca()
    {
        return marca;
    }
    void setMarca(string _marca)
    {
        marca = _marca;
    }
    float getVelocidad(float _velocidad)
    {
        velocidad = _velocidad;
    }
    //Metodos del carro
    void acelerar(float _velocidad)
    {
        if(encendido != false)
        { 
            velocidad = velocidad + _velocidad;
        }
    }

    void frenar(float _velocidad)
    {
        if (velocidad != 0 && _velocidad < velocidad)
        {
            velocidad = velocidad - _velocidad;
        }
        else
        {
            cout<<"El vehiculo se encuentra detenido.";
        }
        
    }

    void encender()
    {
        encendido = true;
    }

    void apagar()
    {
        encendido = false;
    }
};


