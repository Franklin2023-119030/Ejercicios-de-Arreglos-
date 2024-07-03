#include <iostream>

using namespace std;

int main() {
    const int MAX_NUMEROS = 100;
    int numeros[MAX_NUMEROS];
    int cantidad;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0], menor = numeros[0];
    int repeticionesMayor = 0, repeticionesMenor = 0;

    for (int i = 1; i < cantidad; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    for (int i = 0; i < cantidad; ++i) {
        if (numeros[i] == mayor) {
            repeticionesMayor++;
        }
        if (numeros[i] == menor) {
            repeticionesMenor++;
        }
    }

    cout << "El mayor numero es " << mayor << " y se repite " << repeticionesMayor << " veces." << endl;
    cout << "El menor numero es " << menor << " y se repite " << repeticionesMenor << " veces." << endl;

    return 0;
}

