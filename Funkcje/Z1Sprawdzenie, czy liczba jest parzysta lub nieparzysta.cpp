#include <iostream>
using namespace std;

bool liczba(int a){
if ( a % 2==0){
	 return true;
}
else{
	 return false;
}
}
int main(){
	int b;
	bool suma;
		cout << "podaj liczbe calkowita: " ;
	cin >> b;
	suma = liczba(b);
	if (suma == true){
	cout << "liczba " << b << " jest parzysta";
}
else{
	cout << "liczba " << b <<  " nie jest parzysta ";	
}
}


