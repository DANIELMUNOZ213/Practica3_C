#include <iostream>
using namespace std;

int main() {
    int num, mayor, menor, contMult4 = 0;
    cout << "Ingrese 10 numeros (no se permite el 0):\n";

    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> num;
        while (num == 0) {
            cout << "El 0 no es valido. Ingrese otro numero: ";
            cin >> num;
        }

        if (i == 0) {  // Primer número inicializa mayor y menor
            mayor = menor = num;
        } else {
            if (num > mayor) mayor = num;
            if (num < menor) menor = num;
        }

        if (num % 4 == 0) contMult4++;
        if (num % 3 == 0) cout << num << " es divisible por 3\n";
    }

    cout << "\nMayor: " << mayor;
    cout << "\nMenor: " << menor;
    cout << "\nCantidad de multiplos de 4: " << contMult4 << endl;
}
