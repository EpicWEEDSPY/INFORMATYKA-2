#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe N: ";
    cin >> n;
    cout << "Liczby parzyste od 2 do " << n << ": " << endl;
    
    int i = 2;
    while (i <= n) {
        cout << i << endl;
        i += 2;
    }
    return 0;
}