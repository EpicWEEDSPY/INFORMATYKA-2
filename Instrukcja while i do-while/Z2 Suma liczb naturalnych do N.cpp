#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        suma += i;
        i++;
    }
    cout << "Suma liczb naturalnych do " << n << ": " << suma << endl;
    return 0;
}