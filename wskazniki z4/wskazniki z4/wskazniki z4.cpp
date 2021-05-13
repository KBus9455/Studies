// wskazniki z4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Stwórz tablice znaków (char[]) która zawiera tekst "A string."
//Wydrukuj w jednym wierszu literę indeksu 0, wskazując ja w tablicy, 
//oraz przy pomocy wsaźnika.Wyświetl literę ‘t’ z tablicy znaków.Zwiększ wskaźnik o tyle żeby, 
//wskazywał na literę trzecią(‘s’).Wypisz literę trzecią i piątą z tablicy.


#include <iostream>;
using namespace std;
int main()
{
	char text[10] = "A string.";
	char* a;
	a = &text[0];
	cout << "Wyswietlenie poprzez tablice  "<< text[0] << " oraz wyswietlenie poprzez wskaznik " << *a << endl;
	cout << " na czwartej pozycji tablicy znajduje sie " << text[3] << endl;
	cout << "Po zwiekszeniu wskaznika o 2 zostanie wyswietlona litera trzecia, czyli  '" << *(a + 2)<<"'" << endl;
	cout << "trzecia litera jest '" << text[2] << "', a piata jest '" << text[4] << "'" << endl;



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
