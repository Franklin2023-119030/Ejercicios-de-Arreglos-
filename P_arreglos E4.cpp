#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_NOMBRES = 100;
    string nombres[MAX_NOMBRES];
    int cantidad;

    cout << "Ingrese la cantidad de nombres: ";
    cin >> cantidad;
    cin.ignore(); 

    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    for (int i = 0; i < cantidad - 1; ++i) {
        for (int j = i + 1; j < cantidad; ++j) {
            if (nombres[i] > nombres[j]) {
                string temp = nombres[i];
                nombres[i] = nombres[j];
                nombres[j] = temp;
            }
        }
    }

    cout << "Nombres ordenados alfabeticamente:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << nombres[i] << endl;
    }

    return 0;
}

