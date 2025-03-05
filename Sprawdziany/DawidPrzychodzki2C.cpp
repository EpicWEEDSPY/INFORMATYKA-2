#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Ile liczb chcesz wprowadzic kolego: ";
    cin >> s;

    if (s < 1) {
        cout << "podales nieprawidlowa wartosc. Sprobuj ponownie nie wiem" << endl;
     	return 0;
    }

    int suma = 0;
    cout << "Wprowadz liczby ktore chcesz podac i elo: " << endl;
	
	for (int i = 1; i <= s; i++) {
        int numer;
        cin >> numer;
        suma += numer;
}
   double wynik = static_cast<double>(suma) / s;
    cout << "Srednia podanych liczb wynosi: " << wynik << endl;

    return 0;
    
}













