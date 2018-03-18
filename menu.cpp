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
			cout<<"1"<<endl;
			odczyt_zapis();
			break;
			
		case 2:
			cout<<"2"<<endl;
			wprowadzanie_danych();
			break;
		
		case 3:
			cout<<"3"<<endl;
			wyswietlanie();
			break;

		case 4:
			cout<<"4"<<endl;
			dzialania();
			break;
		default:
			cout << "Bleden dane wpisz 1, 2, 3 lub 4" << endl;
			break;
		}
	}
}
