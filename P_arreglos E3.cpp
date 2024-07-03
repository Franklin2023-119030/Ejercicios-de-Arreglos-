#include <iostream>

using namespace std;

int main() 
{
    char texto[1000];
    char caracter;
    int longitud = 0, ocurrencias = 0;

    cout << "Ingrese un texto: "; 
    cin.getline(texto, 1000);

    cout << "Ingrese la letra a verificar: "; 
    cin >> caracter;

    while (texto[longitud] != '\0')
    {
        longitud++;
    }

    for (int i = 0; i < longitud; i++)
    {
        if (texto[i] == caracter)
        {
            ocurrencias++;
        }
    }

    cout << "La ocurrencia de la letra " << caracter << " es: " << ocurrencias << endl;
    
    return 0;
}


