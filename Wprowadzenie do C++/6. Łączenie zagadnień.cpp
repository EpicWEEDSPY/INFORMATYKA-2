#include <iostream>
using namespace std;

int main() {
    int a, b, suma;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    suma = a + b;
    cout << "Suma: " << suma << endl;
    cout << "Suma jest liczba " << (suma % 2 == 0 ? "parzysta" : "nieparzysta") << "." << endl;
    return 0;
}