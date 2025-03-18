#include <iostream>
#include <string>
using namespace std;

int main() {
    string ciag;
    char znak;
    int licznik = 0;
    
  
    cout << "Podaj ciag znakow: ";
    
	getline(cin, ciag);
    
   
    cout << "Podaj znak do zliczenia: ";
    
	cin >> znak;
    
   
    int pozycje[ciag.length()];
for(int i = 0; i < ciag.length(); i++) {
        if(ciag[i] == znak) {
            pozycje[licznik] = i + 1; 
            licznik++;
        }
    }
    
 cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;
    
    if(licznik > 0) {
        cout << "Pozycje wystapien: ";
        for(int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            if(i < licznik - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    
    return 0;
}