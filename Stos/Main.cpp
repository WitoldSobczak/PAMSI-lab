/** Funkcja glowna programu opartego na bibliotece STL Standard Template Library  w programie uzywamy adapteras stosu
  * std::stack. Stos okreslany mianem LIFO Last In First Out .Adapter ten zawiera nastepujace funkcje ,ktore uzylem w programie:
  *
  * push - umieszczenie nowego elementu na szczycie stosu;
  * pop - zdjêcie istniej¹cego elementu ze szczytu stosu;
  * empty - informacja czy stos jest pusty;
  * size - zwraca iloœæ elementów umieszczonych na stosie;
  * top - zwraca wartoœæ szczytowego elementu na stosie.
  */

#include <iostream>
#include <stack>
#include "stdafx.h"
#include "Stos.h"

using namespace std;

int rozmiar;
int wartosc;

int main()
{
	stoss baza;
	int opcja;
	do{
		cout<<"0. Wyjscie z programu."<<endl;
		cout<<"1. Wpisz elementy do stosu."<<endl;
		cout<<"2. Wyswietl elementy ze stosu."<<endl;
		cout<<"3. Usun element ze stosu."<<endl;
		cout<<"4. Pokaz rozmiar stosu."<<endl;
		cout<<"5. Dodaj element na stos o wybranej wartosc."<<endl;
		cout<<"6. Wyczysc stos."<<endl;
		cout<<"Wybierz opcje: ";
		cin>>opcja;
		switch(opcja)
		{
		case 1:
			baza.push(wartosc);
			break;
		case 2:
			baza.top();
			baza.size();
			break;
		case 3:
			cout<<"Podaj ilosc usunietych elementow"<<endl;
			cin>>rozmiar;
			baza.pop(rozmiar);
			break;
		case 4:
			baza.size();
			baza.top();
			break;
		case 5:
			baza.push_jeden();
			break;
		case 6:
			baza.pop_zeruj();
			break;
		default:
			break;

		}
	}while(opcja!=0);

	system("pause");
	return 0;
}