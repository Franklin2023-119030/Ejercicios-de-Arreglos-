#include <iostream>

using namespace std;

int main() {
    int vector[100], sumaPares = 0, sumaImpares = 0, n;

    cout << "Ingrese la cantidad de datos: "; 
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": "; 
        cin >> vector[i];
    }

    for (int j = 0; j < n; ++j) {
        if (j % 2 == 0) {
            sumaPares += vector[j];
        } else {
            sumaImpares += vector[j];
        }
    }

    cout << "La suma de los elementos de indice par es: " << sumaPares << endl;
    cout << "La suma de los elementos de indice impar es: " << sumaImpares << endl;

    return 0;
}


