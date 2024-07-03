#include <iostream>

using namespace std;

bool estaOrdenado(int arr[], int longitud) {
    for (int i = 1; i < longitud; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 1, 4, 2, 5};

    int longitud1 = sizeof(arr1) / sizeof(arr1[0]);
    int longitud2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "El arreglo arr1 " << (estaOrdenado(arr1, longitud1) ? "esta ordenado." : "no esta ordenado.") << endl;
    cout << "El arreglo arr2 " << (estaOrdenado(arr2, longitud2) ? "esta ordenado." : "no esta ordenado.") << endl;

    return 0;
}

