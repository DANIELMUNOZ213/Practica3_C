#include <iostream>
using namespace std;

int main() {
    double precio, iva, total, euro, dolar;
    char opcion;

    do {
        cout << "Ingrese precio del articulo: ";
        cin >> precio;

        iva = precio * 0.19;
        total = precio + iva;

        if (total > 100000) total -= total * 0.07;

        cout << "Ingrese valor del euro en pesos: ";
        cin >> euro;
        cout << "Ingrese valor del dolar en pesos: ";
        cin >> dolar;

        cout << "\nTotal en pesos: $" << total;
        cout << "\nEn euros: " << total / euro;
        cout << "\nEn dolares: " << total / dolar << endl;

        cout << "\nDesea realizar otra compra? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

}
