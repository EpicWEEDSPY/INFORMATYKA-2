#include <iostream>
using namespace std;

int main() {
    int tab[3][3], suma = 0;
    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> tab[i][j];
            suma += tab[i][j];
        }
    }
    cout << "Suma elementow macierzy: " << suma << endl;
    return 0;
}