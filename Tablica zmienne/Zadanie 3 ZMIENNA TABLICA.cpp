#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    

    cout << "Podaj " << ROZMIAR << " liczb calkowitych:" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }
    
    
    int najmniejsza = tablica[0];
    for (int i = 1; i < ROZMIAR; i++) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }
    
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
    
    return 0;
}
