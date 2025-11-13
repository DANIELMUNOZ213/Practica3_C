#include <iostream>
using namespace std;

int main() {
    int num, sumPar = 0, sumImpar = 0, contPar = 0, contImpar = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> num;

        if (num % 2 == 0) {
            sumPar += num;
            contPar++;
        } else {
            sumImpar += num;
            contImpar++;
        }
    }

    double promPar = (contPar > 0) ? (double)sumPar / contPar : 0;
    double promImpar = (contImpar > 0) ? (double)sumImpar / contImpar : 0;

    cout << "\nPromedio pares: " << promPar;
    cout << "\nPromedio impares: " << promImpar;

    if (promPar > promImpar)
        cout << "\nEl promedio de pares es mayor.\n";
    else if (promImpar > promPar)
        cout << "\nEl promedio de impares es mayor.\n";
    else
        cout << "\nAmbos promedios son iguales.\n";
    
}
