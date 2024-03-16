#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Cliente {
public:
    string telefono;
    string ruc;

    Cliente(string _telefono, string _ruc) : telefono(_telefono), ruc(_ruc) {}

    void mostrarInformacion() const {
        cout << "Telefono: " << telefono << "\n";
        cout << "RUC: " << ruc << "\n";
    }
};

class Producto {
public:
    int id_producto;
    string descripcion;
    string tipo;
    string fecha;
    double precio;

    Producto(int _id, string _descripcion, string _tipo, string _fecha, double _precio)
        : id_producto(_id), descripcion(_descripcion), tipo(_tipo), fecha(_fecha), precio(_precio) {}

    void mostrarInformacion() const {
        cout << "ID Producto: " << id_producto << "\n";
        cout << "Descripcion: " << descripcion << "\n";
        cout << "Tipo: " << tipo << "\n";
        cout << "Fecha: " << fecha << "\n";
        cout << "Precio: " << precio << "\n";
    }
};

class VentaDetalle {
public:
    Producto producto;
    int cantidad;
    double subtotal;

    VentaDetalle(Producto _producto, int _cantidad)
        : producto(_producto), cantidad(_cantidad), subtotal(_producto.precio * _cantidad) {}

    void mostrarInformacion() const {
        producto.mostrarInformacion();
        cout << "Cantidad: " << cantidad << "\n";
        cout << "Subtotal: " << subtotal << "\n";
    }
};

class Venta {
public:
    int id_venta;
    Cliente cliente;
    vector<VentaDetalle> detalles;
    string fecha;

    Venta(int _id, Cliente _cliente, string _fecha)
        : id_venta(_id), cliente(_cliente), fecha(_fecha) {}

    void agregarDetalle(VentaDetalle detalle) {
        detalles.push_back(detalle);
    }

    void mostrarInformacion() const {
        cout << "ID Venta: " << id_venta << "\n";
        cliente.mostrarInformacion();
        cout << "Fecha: " << fecha << "\n";
        cout << "Detalles de la venta:\n";
        for (const auto& detalle : detalles) {
            detalle.mostrarInformacion();
            cout << "-------------------\n";
        }
    }

    void guardarEnArchivo() const {
        ofstream archivo("ventas.txt", ios::app); 
        if (archivo.is_open()) {
            archivo << "ID Venta: " << id_venta << "\n";
            archivo << "Fecha: " << fecha << "\n";
            archivo << "Detalles de la venta:\n";
            for (const auto& detalle : detalles) {
                archivo << "-------------------\n";
                archivo << "Producto: ";
                archivo << "ID Producto: " << detalle.producto.id_producto << ", ";
                archivo << "Descripcion: " << detalle.producto.descripcion << ", ";
                archivo << "Cantidad: " << detalle.cantidad << ", ";
                archivo << "Subtotal: " << detalle.subtotal << "\n";
            }
            archivo << "-------------------\n";
            archivo.close();
            cout << "La informacion se ha guardado en el archivo 'ventas.txt'.\n";
        } else {
            cout << "No se pudo abrir el archivo para escritura.\n";
        }
    }
};

int main() {
    Cliente cliente("987654321", "12345678901");

    Producto producto1(101, "Laptop", "Electronico", "2024-03-04", 1200.0);
    Producto producto2(102, "Smartphone", "Electronico", "2024-03-05", 800.0);

    VentaDetalle detalle1(producto1, 2);
    VentaDetalle detalle2(producto2, 3);

    Venta venta(1001, cliente, "2024-03-06");
    venta.agregarDetalle(detalle1);
    venta.agregarDetalle(detalle2);

    venta.mostrarInformacion();

    venta.guardarEnArchivo();

    return 0;
}
