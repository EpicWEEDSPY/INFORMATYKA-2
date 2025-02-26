#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;

   
cout << "Podaj liczbe calkowita N: ";
    
	cin >> N;

  
    if (N > 0) {
        cout << "Kwadraty liczb od 1 do " << N << ":\n";
        
    for (int i = 1; i <= N; ++i) {
            cout << i << "^2 = " << (i * i) << endl;
        }
    } else{
        cout << "Podana liczba musi byc dodatnia." << endl;
    }

    return 0;
}
