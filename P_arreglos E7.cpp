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

    int inicio = 0, fin = n - 1;
    while (inicio < fin) {
        int temp = vector[inicio];
        vector[inicio] = vector[fin];
        vector[fin] = temp;
        inicio++;
        fin--;
    }

    cout << "El vector invertido es:\n";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}

