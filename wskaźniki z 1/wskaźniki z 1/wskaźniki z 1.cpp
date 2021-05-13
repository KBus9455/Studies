// wskaźniki z 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Napisz program, który prosi użytkownika o wprowadzenie liczb całkowitych jako danych wejściowych, 
//które mają być przechowywane odpowiednio w zmiennych „a” i „b”. 
//Istnieją również dwa wskaźniki całkowitoliczbowe o nazwach ptrA i ptrB. 
//Przypisz wartości „a” i „b” odpowiednio do ptrA i ptrB i wyświetl je.

#include <iostream>
using namespace std;

void function(int a, int b) {
	int* ptrA;
	int* ptrB;
	ptrA = &a;
	ptrB = &b;

	cout << "Wskaznik ptrA wynosi " << *ptrA << endl;
	cout << "Wskaznik ptrB wynosi " << *ptrB << endl;
}

int main()
{
	int a, b;
	cout << "Podaj a  ";
	cin >> a;
	cout << "Podaj b  ";
	cin >> b;

	function(a, b);

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
