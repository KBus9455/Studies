// InsertSott.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	const int n = 6;
	int A[n] = { -2,0,4,-3,2,7 };
	cout << "Poczatkowa  " << endl;
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	};
	cout << endl;
	for (int i = 1; i < n - 1; i++) {
		int element = A[i];
		int j = i - 1;
		cout << endl;
		while (j >= 0 && A[j] > element) {
			cout << "Po zmianie " << endl;
			A[j + 1] = A[j];
			for (int i = 0; i < n; i++) {
				cout << A[i] << "  ";
			};	cout << endl;
			j -= 1;

		};
		A[j + 1] = element;
		cout << "*********************" << endl;
		for (int i = 0; i < n; i++) {
			cout << A[i] << "  ";
		};	cout << endl;
	};

	cout << "koniec " << endl;
	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	};
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
