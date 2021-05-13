// wskazniki z2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Napisz program w C ++, aby znaleźć największą liczbę całkowitą, która zostanie wprowadzona przez konsolę, 
//do dynamicznie powstałej tablicy. Program wyświetla na ekranie wskaźnik wskazujący na maksymalną wartość

#include <iostream>;
using namespace std;

void maxFunction(int* tab, int size) {
	int max = tab[0];
	for (int i = 0; i < size; i++) {
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	cout << "najwiejsza z tych liczb jest  " << max;
}

int main()
{
	cout << "Podaj ilosc elementow tablicy " << endl;
	int length;
	cin >> length;
	int* tab = new int[length];

	for (int i = 0; i < length; i++) {
		cout << "Podaj " << i + 1 << "  wartosc" << endl;
		cin >> tab[i];
	}
	maxFunction(tab, length);

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
