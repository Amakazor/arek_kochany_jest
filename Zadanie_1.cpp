// Zadanie_1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ConvertFromSymbolic(string str)
{
	string str1;
	char str2;
	string output;

	for (int i = 0; i < str.length(); i++)
	{

		if (isdigit(str[i]))
		{
			str1 += str[i];
		}
		else
		{
			if (i != 0)
			{
				if(str[i]=='.')
				{
					str1 += str[i];
				}
				else
				{
					str2 = str[i];
					break;
				}
				
			}
		}
	}

	switch (str2)
	{
		case 'M':
		{
			output = str1 + "000000";
			return output;
			break;
		}		
		case 'B':
		{
			output = str1 + "000000000";
			return output;
			break;
		}		
		case 'T':
		{
			output = str1 + "000000000000";
			return output;
			break;
		}		
		case 'Qa':
		{
			output = str1 + "000000000000000";
			return output;
			break;
		}		
		case 'Qi':
		{
			output = str1 + "000000000000000000";
			return output;
			break;
		}		
		case 'Sx':
		{
			output = str1 + "000000000000000000000";
			return output;
			break;
		}		
		case 'Sp':
		{
			output = str1 + "000000000000000000000000";
			return output;
			break;
		}		
		case 'Oc':
		{
			output = str1 + "000000000000000000000000000";
			return output;
			break;
		}
	}

}

int main()
{
	cout << ConvertFromSymbolic("4M") << endl;
	cout << ConvertFromSymbolic("54T") << endl;
	cout << ConvertFromSymbolic("5.434B") << endl;
	
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
