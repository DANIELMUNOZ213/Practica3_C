#include <iostream>
using namespace std;

int main() {
    double distancia, dias, precioKm, total;
    char opcion;

    do {
        cout << "\nIngrese la distancia a recorrer (km): ";
        cin >> distancia;
        cout << "Ingrese los dias de estancia: ";
        cin >> dias;
        cout << "Ingrese el precio por km: ";
        cin >> precioKm;

        total = distancia * precioKm;

        if (distancia > 500 && dias > 5) {
            total -= total * 0.25;
            cout << "Aplica descuento del 25%\n";
        }

        cout << "Precio total del billete: $" << total << endl;

        cout << "\nDesea comprar otro billete? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

}
