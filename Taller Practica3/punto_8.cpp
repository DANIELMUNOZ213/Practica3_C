#include <iostream>
#include <cmath> // para ceil()
using namespace std;

int main() {
    double horaEntrada, horaSalida, horas, total;

    for (int i = 1; i <= 5; i++) {
        cout << "\nCarro " << i << ":\n";
        cout << "Hora de entrada (ej: 8.0 para 8:00): ";
        cin >> horaEntrada;
        cout << "Hora de salida (ej: 10.5 para 10:30): ";
        cin >> horaSalida;

        while (horaSalida <= horaEntrada) {
            cout << "Hora de salida invalida. Ingrese nuevamente: ";
            cin >> horaSalida;
        }

        horas = horaSalida - horaEntrada;
        horas = ceil(horas); // redondear hacia arriba

        if (horas <= 1)
            total = 3500;
        else
            total = 3500 + (horas - 1) * 5000;

        cout << "Total a pagar: $" << total << endl;
    }

}
