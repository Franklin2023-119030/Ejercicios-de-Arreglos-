#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Introduce una linea de texto: ";
    getline(cin, input);

    stringstream ss(input);
    string word;
    string words[100];
    int count = 0;

    while (ss >> word) {
        words[count++] = word;
    }

    for (int i = 0; i < count; ++i) {
        cout << words[i] << endl;
    }

    return 0;
}

