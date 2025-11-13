#include <iostream>
using namespace std;

int main() {
    int duracion, totalTiempo = 0;
    double pagoTotal = 0, pago;

    for (int i = 1; i <= 5; i++) {
        cout << "\nPersona " << i << ":\n";
        cout << "Duracion de la llamada (minutos): ";
        cin >> duracion;

        if (duracion <= 3)
            pago = 100;
        else
            pago = 100 + (duracion - 3) * 120;

        pagoTotal += pago;
        totalTiempo += duracion;

        cout << "Pago de la llamada: $" << pago << endl;
    }

    cout << "\nTotal a pagar por las 5 llamadas: $" << pagoTotal;
    cout << "\nTiempo de espera de la ultima persona: " << totalTiempo - duracion << " minutos\n";

}
