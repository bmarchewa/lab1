#include <iostream>
#include "funkcje.h"

using namespace std;

void menu()
{
	cout<<"1.Odczyt/Zapis"<<endl;
	cout<<"2.Wprowadzanie danych"<<endl;
	cout<<"3.Wyświetlanie arkusza"<<endl;
	cout<<"4.Działania na arkuszu"<<endl;
	while (true)
	{
		int liczba;
		cin>>liczba;

		switch(liczba)
		{
		case 1:
			odczyt_zapis();
			break;
			
		case 2:
			wprowadzanie_danych();
			break;
		
		case 3:
			wyswietlanie();
			break;

		case 4:
			dzialania();
			break;
		default:
			cout << "Błędne dane wpisz 1, 2, 3 lub 4" << endl;
			break;
		}
	}
}
