#include <iostream>
using namespace std;

struct Cliente {
    int tipoTarjeta;
    bool tieneDeuda;
};

float calcularAumentoCredito(const Cliente& cliente) {
    float aumento = 0.0;
    switch (cliente.tipoTarjeta) {
        case 1:
            aumento = cliente.tieneDeuda ? 0.25 / 2 : 0.25;
            break;
        case 2:
            aumento = cliente.tieneDeuda ? 0.35 / 2 : 0.35;
            break;
        case 3:
            aumento = 0.40;
            break;
        default:
            aumento = 0.50;
            break;
    }

    return aumento;
}
int main() {
    const int cantidadClientes = 3; 
    Cliente clientes[cantidadClientes];

    for (int i = 0; i < cantidadClientes; ++i) {
        cout << "Cliente " << i + 1 << ":\n";
        cout << "Tipo de tarjeta (1, 2, 3 u otro): ";
        cin >> clientes[i].tipoTarjeta;

        cout << "Tiene alguna deuda? (1 para si, 0 para no): ";
        cin >> clientes[i].tieneDeuda;

        cout << endl;
    }

    for (int i = 0; i < cantidadClientes; ++i) {
        float aumento = calcularAumentoCredito(clientes[i]);
        cout << "Cliente " << i + 1 << " - Aumento del limite de credito: " << (aumento * 100) << "%\n";
    }

    return 0;
}

