#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) suma += i;
    cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;
    return 0;
}