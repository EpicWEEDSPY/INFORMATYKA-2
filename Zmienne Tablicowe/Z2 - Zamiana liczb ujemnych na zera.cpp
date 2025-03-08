#include <iostream>
using namespace std;

int main() {
    int tab[5];
    cout << "Wprowadz 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
        if (tab[i] < 0) tab[i] = 0;
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 4; i++) cout << tab[i] << ", ";
    cout << tab[4] << endl;
    return 0;
}