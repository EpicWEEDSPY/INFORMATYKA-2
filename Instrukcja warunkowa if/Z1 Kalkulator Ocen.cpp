#include <iostream>
using namespace std;

int main() {
    int p;
    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> p;
    
    if (p < 0 || p > 100) {
        cout << "Blad: Wprowadzono nieprawidłowa liczbe punktow. Wynik powinien byc w zakresie 0-100." << endl;
        return 1;
    }
    
    cout << "Ocena: " << (p <= 49 ? "Niedostateczna" :
     p <= 69 ? "Dostateczna" :
     p <= 84 ? "Dobra" :
     p <= 99 ? "Bardzo dobra" : "Celujaca") << endl;
    
    return 0;
}
