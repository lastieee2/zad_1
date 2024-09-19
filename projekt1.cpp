#include <iostream>

using namespace std;

int silnia(int n) {
   if (n <= 1) return 1;
    else return n * silnia(n - 1);
}
bool czyPierwsza(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;

}


int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Oblicz silnie liczby" << endl;
	cout << "2. Sprawdz czy liczba jest pierwsza" << endl;
        cin >> wyjscie;

	if (wyjscie == 1) {
		int liczba;
		cout << "Podaj liczbe do liczenia silni: ";
		cin >> liczba;
		cout << "Silnia liczby " << liczba << "to: " << silnia(liczba) << endl;
	}
	else if (wyjscie == 2) {
		int liczba;
		cout << "Podaj liczbe do sprawdzenia, czy pierwsza: ";
		cin >> liczba;
	if (czyPierwsza(liczba)){
			cout << "liczba " << liczba << "jest pierwsza" << endl;
		} else {
			cout << "liczba" << liczba << " nie jest pierwsza " << endl;
		}
	}


    } while(wyjscie != 0);
    return 0;
    }
