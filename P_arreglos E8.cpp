#include <iostream>

using namespace std;

int main() {
    const int NUM_CIFRAS = 10;
    int numero[NUM_CIFRAS];

    cout << "Ingrese un n�mero de 10 cifras: ";
    for (int i = 0; i < NUM_CIFRAS; ++i) {
        cin >> numero[i];
    }

    bool esCapicua = true;
    for (int i = 0; i < NUM_CIFRAS / 2; ++i) {
        if (numero[i] != numero[NUM_CIFRAS - 1 - i]) {
            esCapicua = false;
            break;
        }
    }

    if (esCapicua) {
        cout << "El n�mero es capic�a." << endl;
    } else {
        cout << "El n�mero no es capic�a." << endl;
    }

    return 0;
}

