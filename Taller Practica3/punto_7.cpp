#include <iostream>
using namespace std;

int main() {
    double valor, total;
    int opcion;

    for (int i = 1; i <= 10; i++) {
        cout << "\nEstudiante " << i << ":\n";
        cout << "Ingrese valor de la matricula: ";
        cin >> valor;

        cout << "Seleccione descuento:\n";
        cout << "1. Certificado de votacion (10%)\n";
        cout << "2. Bienestar universitario (7%)\n";
        cout << "3. Deportes (3%)\n";
        cout << "4. Auxiliar administrativo (10%)\n";
        cout << "5. Sin descuento\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: total = valor * 0.90; break;
            case 2: total = valor * 0.93; break;
            case 3: total = valor * 0.97; break;
            case 4: total = valor * 0.90; break;
            default: total = valor; break;
        }

        cout << "Total a pagar: $" << total << endl;
    }

}
