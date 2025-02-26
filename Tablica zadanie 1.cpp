#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 5;
    int liczby[ROZMIAR];   
    int suma = 0;          
    double srednia;        

   
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        suma += liczby[i]; 
    }
	srednia = static_cast<double>(suma) / ROZMIAR;
	cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
