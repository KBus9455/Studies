// Prog lab2z1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Stwórz tablicę, która zawiera dziesięć liczb całkowitych, liczby niech zostaną wpisane przez użytkownika 
//z konsoli, wyświetl te wartości na ekranie. Następnie poproś użytkownika o podanie liczby całkowitej. 
//Przeszukaj tablicę i policz, ile razy element został znaleziony.

#include <iostream>
using namespace std;


void giveTenNumbers(int _arr[10]) {
	cout << "Give ten numbers" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> _arr[i];
	}
}
int main()
{
	int arr[10];
	giveTenNumbers(arr);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "    ";
	}

	cout << "Write integer number: " << endl;
	int numberToFind;
	cin >> numberToFind;
	int counter = 0;
	for (int i = 0; i < 10; i++) {
		if (numberToFind == arr[i]) {

			counter++;
		}
	}
	cout << "This number appears in array:  " << counter << " times" << endl;
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
