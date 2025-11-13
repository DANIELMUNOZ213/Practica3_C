#include <iostream>
using namespace std;

int main() {
    int entradaH, entradaM, salidaH, salidaM;
    double total, minutosTotales, minutosExtra;

    for (int i = 1; i <= 5; i++) {
        cout << "\nCarro " << i << ":\n";
        cout << "Hora de entrada (hh mm): ";
        cin >> entradaH >> entradaM;
        cout << "Hora de salida (hh mm): ";
        cin >> salidaH >> salidaM;

        int entradaMin = entradaH * 60 + entradaM;
        int salidaMin = salidaH * 60 + salidaM;

        while (salidaMin <= entradaMin) {
            cout << "Hora de salida invalida. Ingrese nuevamente: ";
            cin >> salidaH >> salidaM;
            salidaMin = salidaH * 60 + salidaM;
        }

        minutosTotales = salidaMin - entradaMin;

        if (minutosTotales <= 60)
            total = 3500;
        else {
            minutosExtra = minutosTotales - 60;
            total = 3500 + (minutosExtra * (5000.0 / 60));
        }

        cout << "Total a pagar: $" << total << endl;
    }

}
