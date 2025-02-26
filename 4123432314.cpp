// Deklaracja tablicy o rozmiarze 5
int tablica[5];

// Pobieranie wartosci od uzytkownika
cout << "Podaj 5 liczb calkowitych:\n";
for (int i = 0; i < 5; i++) {
	cout << "Podaj liczbe nr " << i+1 << ": ";
	cin >> tablica[i];
}

// Wyswietlanie wartosci z tablicy
cout << "\nPodane liczby to:\n";
for (int i = 0; i < 5; i++) {
	cout << tablica[i] << " ";
}