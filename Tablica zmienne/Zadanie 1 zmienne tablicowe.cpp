#include <iostream>

using namespace std;

int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];
    int suma = 0;
    
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
        suma += tablica[i];
    }
    
    double srednia = static_cast<double>(suma) / ROZMIAR;
    
    
    cout << "Srednia liczb: " << srednia << endl;
    
    return 0;
}
