#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Departamento;

// Clase TipoContacto
class TipoContacto {
public:
    int id;
    string correo;
    string telefono;

    TipoContacto(int _id, string _correo, string _telefono)
        : id(_id), correo(_correo), telefono(_telefono) {}

    void mostrarInformacion() const {
        cout << "ID: " << id << "\n";
        cout << "Correo: " << correo << "\n";
        cout << "Telefono: " << telefono << "\n";
    }
};

// Clase Persona
class Persona {
public:
    int identificador;
    string apellidos;
    string nombres;
    string direccion;
    vector<TipoContacto> tiposContacto;

    Persona(int _identificador, string _apellidos, string _nombres, string _direccion)
        : identificador(_identificador), apellidos(_apellidos), nombres(_nombres), direccion(_direccion) {}

    void agregarTipoContacto(TipoContacto tipoContacto) {
        tiposContacto.push_back(tipoContacto);
    }

    void mostrarInformacion() const {
        cout << "ID: " << identificador << "\n";
        cout << "Apellidos: " << apellidos << "\n";
        cout << "Nombres: " << nombres << "\n";
        cout << "Direccion: " << direccion << "\n";
        cout << "Tipos de Contacto:\n";
        for (const auto& tipo : tiposContacto) {
            tipo.mostrarInformacion();
            cout << "-------------------\n";
        }
    }
};

// Clase Departamento
class Departamento {
public:
    int codigo_dep;
    string nombre_dep;

    Departamento(int _codigo, string _nombre)
        : codigo_dep(_codigo), nombre_dep(_nombre) {}

    void mostrarInformacion() const {
        cout << "Codigo del Departamento: " << codigo_dep << "\n";
        cout << "Nombre del Departamento: " << nombre_dep << "\n";
    }
};

// Clase Empleado
class Empleado {
public:
    int codigo;
    float costo_hh;
    Departamento departamento;
    float salario;

    Empleado(int _codigo, float _costo_hh, Departamento _departamento)
        : codigo(_codigo), costo_hh(_costo_hh), departamento(_departamento), salario(0.0) {}

    virtual float CalcularSalario() = 0;

    void mostrarInformacion() const {
        cout << "Codigo del Empleado: " << codigo << "\n";
        cout << "Costo por Hora: " << costo_hh << "\n";
        cout << "Departamento:\n";
        departamento.mostrarInformacion();
        cout << "Salario: " << salario << "\n";
    }
};

// Clase Gerente
class Gerente : public Empleado {
public:
    float bono;

    Gerente(int _codigo, float _costo_hh, Departamento _departamento, float _bono)
        : Empleado(_codigo, _costo_hh, _departamento), bono(_bono) {}

    float CalcularSalario() override {
        return salario = costo_hh * 40 + bono;
    }

    void mostrarInformacion() const {
        Empleado::mostrarInformacion();
        cout << "Bono: " << bono << "\n";
    }
};


// Clase Ingeniero
class Ingeniero : public Empleado {
public:
    int horas_extra;

    Ingeniero(int _codigo, float _costo_hh, Departamento _departamento, int _horas_extra)
        : Empleado(_codigo, _costo_hh, _departamento), horas_extra(_horas_extra) {}

    float CalcularSalario() override {
        return salario = costo_hh * (40 + horas_extra);
    }

    void mostrarInformacion() const {
        Empleado::mostrarInformacion();
        cout << "Horas Extra: " << horas_extra << "\n";
    }
};


// Main del programa
int main() {
    // Crear personas
    Persona persona1(1001, "Garcia Perez", "Alan", "Av. Lima");
    Persona persona2(1002, "Marquillo Lopez", "Ana", "Jr. Huanuco");

    // Crear TipoContacto para las personas
    TipoContacto contacto1(1, "Garcia123@jdgeb.com", "942 485 164");
    TipoContacto contacto2(2, "Lopez2@gub.com", "948 246 214");

    persona1.agregarTipoContacto(contacto1);
    persona2.agregarTipoContacto(contacto2);

    // Crear Departamento
    Departamento departamento(101, "Ventas");

    // Crear Empleados
    Gerente gerente(2001, 20.0, departamento, 1500.0);
    Ingeniero ingeniero(2002, 15.0, departamento, 14);

    // Asignar empleados a personas
    persona1.mostrarInformacion();
    cout << "Salario final del Ingeniero: " << ingeniero.CalcularSalario() << "\n\n";

    persona2.mostrarInformacion();
    cout << "Salario final del Gerente: " << gerente.CalcularSalario() << "\n";

    // Cambiar el bono del gerente
    gerente.bono = 2500.0;
    cout << "Nuevo salario final del Gerente: " << gerente.CalcularSalario() << "\n";

    return 0;
}
