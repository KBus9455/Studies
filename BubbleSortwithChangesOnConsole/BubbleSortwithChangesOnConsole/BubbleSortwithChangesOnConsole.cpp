// BubbleSortwithChangesOnConsole.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	const int n = 7;
	int tab[n] = { -2,0,4,-3,2,7,1 };
	cout << "Tablica poczatkowa " << endl;
	for (int m = 0; m < n; m++) {
		cout << tab[m] << "  ";
	};
	cout <<endl;
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (tab[j] > tab[j + 1]) {
				cout << endl;
				cout << "SWAP " << tab[j] << "  z  " << tab[j + 1]<< endl;
				int temp = tab[j];
				tab[j] = tab[j+1];
				for (int m = 0; m < n; m++) {
					cout << tab[m] << "  ";
				};
				cout << endl;
				tab[j+1] = temp;
				cout << endl;

				for (int m = 0; m<n; m++) {
					cout << tab[m] << "  ";
				}

				cout << endl;
			}
		};
		
	}
	cout << "tablica koncowa" << endl;
	for (int i = 0; i < n; i++) {
		cout << tab[i] << "  ";
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
