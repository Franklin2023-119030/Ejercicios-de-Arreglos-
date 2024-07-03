#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int suma_positivos = 0;
    int suma_negativos = 0;

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] > 0) {
            suma_positivos += arr[i];
        } else {
            suma_negativos += arr[i];
        }
    }

    cout << "Suma de elementos positivos: " << suma_positivos << endl;
    cout << "Suma de elementos negativos: " << suma_negativos << endl;

    return 0;
}

