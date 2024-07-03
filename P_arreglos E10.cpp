#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int calcularModa(int arreglo[], int n) {
    sort(arreglo, arreglo + n);

    int moda = arreglo[0];
    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < n; ++i) {
        if (arreglo[i] == arreglo[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                moda = arreglo[i - 1];
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
        moda = arreglo[n - 1];
    }

    return moda;
}

int main() {
    const int TAMANO = 30;
    int numeros[TAMANO];
    int suma = 0;

    srand(time(0));

    for (int i = 0; i < TAMANO; ++i) {
        numeros[i] = rand() % 901 + 100;
        suma += numeros[i];
    }

    double media = static_cast<double>(suma) / TAMANO;

    sort(numeros, numeros + TAMANO);
    double mediana;
    if (TAMANO % 2 == 0) {
        mediana = (numeros[TAMANO / 2 - 1] + numeros[TAMANO / 2]) / 2.0;
    } else {
        mediana = numeros[TAMANO / 2];
    }

    int moda = calcularModa(numeros, TAMANO);

    cout << "Estadisticas de tendencia central:" << endl;
    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda: " << moda << endl;

    return 0;
}

