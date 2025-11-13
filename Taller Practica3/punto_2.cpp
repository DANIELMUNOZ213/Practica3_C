#include <iostream>
using namespace std;

int main() {
    int num, pos = 0, neg = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero (no puede ser 0): ";
        cin >> num;
        while (num == 0) {
            cout << "El 0 no es valido. Ingrese otro: ";
            cin >> num;
        }

        if (num > 0)
            pos++;
        else {
            neg++;
            cout << num << " es negativo.\n";
        }
    }

    cout << "\nCantidad de positivos: " << pos;
    cout << "\nCantidad de negativos: " << neg << endl;
    
}
