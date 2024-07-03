#include <iostream>

using namespace std;

int main() {
    const int MAX_ELEMENTOS = 100;
    int vector[MAX_ELEMENTOS];
    int n;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    cout << "Ingrese los " << n << " elementos del vector:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int temp = vector[n - 1];

    for (int i = n - 1; i > 0; --i) {
        vector[i] = vector[i - 1];
    }

    vector[0] = temp;

    cout << "El vector rotado hacia la derecha es:\n";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}

