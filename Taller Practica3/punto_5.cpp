#include <iostream>
using namespace std;

int main() {
    double horas, precio, salud, pension, bruto, neto;
    int altos = 0, medios = 0, bajos = 0;

    cout << "Ingrese porcentaje de descuento por salud: ";
    cin >> salud;
    cout << "Ingrese porcentaje de descuento por pension: ";
    cin >> pension;

    for (int i = 1; i <= 10; i++) {
        cout << "\nEmpleado " << i << ":\n";
        cout << "Horas trabajadas: ";
        cin >> horas;
        cout << "Precio por hora: ";
        cin >> precio;

        bruto = horas * precio;
        neto = bruto - (bruto * (salud + pension + 7) / 100);

        cout << "Salario neto: $" << neto << endl;

        if (neto > 2000000) altos++;
        else if (neto >= 900000 && neto <= 1500000) medios++;
        else if (neto < 900000) bajos++;
    }

    cout << "\nSalarios altos: " << altos;
    cout << "\nSalarios medios: " << medios;
    cout << "\nSalarios bajos: " << bajos << endl;

}
