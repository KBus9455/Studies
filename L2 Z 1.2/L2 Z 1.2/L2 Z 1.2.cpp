// L2Z 1.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Napisz program który zawiera tablicę z sześcioma liczbami całkowitymi ( 1,2,3,4,5,6). 
//Następnie poproś użytkownika o podanie liczby czałkowitej. 
//Liczba ta ma być wstawiona we wskazany indeks tablicy, a wszyskie numery powyżej indeksu, przesunięte o jeden.

using namespace std;
#include <iostream>

int main()
{
	int index, number;
	cout << "Give number" << endl;
	cin >> number;
	cout << "Give index form 0 to 5 " << endl;
	cin >> index;
	int tab[6] = { 1,2,3,4,5,6 };


	for (int i = 5; i > index; i--) {
		int x;
		x = tab[i];
		tab[i] = tab[i - 1];
		tab[i - 1] = x;
	}
	tab[index] = number;
	for (int i = 0; i < 6; i++) {
		cout << tab[i] << "   ";
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
