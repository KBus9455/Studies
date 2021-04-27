// Tablice - zadanie 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//1. Zadeklaruj tablicę 20-elementową do przechowywania liczb całkowitych.
//2.Następnie uzupelnij ją kolejnymi wartościami : 10, 20, 30, …
//3. Wyświetl elementy tablicy.
//4. Wartości podzielne przez 3 zwiększ o 3, a niepodzielne zmniejsz o 3.
//5. Policz ile teraz jest w tablicy elementów podzielnych przez 7 .
//6. Sprawdź, czy suma wszytkich elementów jest liczbą parzysta, czy nieparzystą.

#include <iostream>
using namespace std;
int main()
{
	const int n = 20;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = ((i + 1) * 10);
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < n; i++) {
		if ((arr[i] % 3) == 0) {
			arr[i] += 3;
		}
		else{ arr[i] -= 3; }
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	int podz7 = 0;
	long long suma = 0;
	for (int i = 0; i < n; i++) {
		if ((arr[i] % 7) == 0) {
			podz7++;
		}
		suma = suma + arr[i];
	}
	cout <<"Liczb podzielnych przez 7 jest: "<< podz7 << endl;


	if (suma % 2 == 0) {
		cout <<"Suma tych licz jest parzysta i wynosi:  "<< suma << endl;
	}
	else {
		cout << "Suma tych licz jest nieparzysta i wynosi:  " << suma << endl;
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
