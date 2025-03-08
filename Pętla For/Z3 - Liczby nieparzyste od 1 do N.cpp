#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe N: ";
    cin >> n;
    cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i += 2) cout << i << endl;
    return 0;
}