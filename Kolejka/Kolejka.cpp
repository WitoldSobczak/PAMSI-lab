/** Funkcja glowna programu opartego na bibliotece STL Standard Template Library  w programie uzywamy adapteras kolejki
  * std::queue.  okreslany mianem  FIFO First In First Out.Adapter ten zawiera nastepujace funkcje ,ktore uzylem w programie:
  *
  * back	Zwraca referencj� na ostatni element w kolejce;
  * empty	Sprawdza czy kolejka jest pusta;
  * front	Zwraca referencj� na pierwszy element w kolejce;
  * pop	    Usuwa element z pocz�tku kolejki;
  * push	Umieszcza nowy element na ko�cu kolejki;
  * size	Zwraca liczb� element�w znajduj�cych si� w kolejce;
  *
  */
#include <iostream>
#include <queue>
#include "Kolejka.h"

using namespace std;

int wartosc;

int main()
{
	kolejkaa baza;
	int opcja;
	do{
		cout<<"0. Koniec programu."<<endl;
		cout<<"1. Umie�� elementy w kolejce."<<endl;
		cout<<"2. Wyswietl elementy koleki."<<endl;
		cout<<"3. Wyswietlenie pierwszego i ostatniego elementu kolejki."<<endl;
		cout<<"4. Umie�� element na stosie."<<endl;
		cout<<"5. Usun pierwszy element kolejki."<<endl;
		cout<<"6. Usun koncowy element kolejki."<<endl;
		cout<<"Wybierz opcje: ";
		cin>>opcja;

		switch(opcja)
		{
		case 1:
			baza.push(wartosc);
			break;
		case 2:
			baza.wyswietl();
			break;
		case 3:
			cout<<"Pierwszy element kolejki: ";
			baza.wyswietl_poczatek();
			cout<<"Koncowy element kolejki: ";
			baza.wyswietl_koniec();
			break;
		case 4:
			baza.push_jeden(wartosc);
			break;
		case 5:
			baza.pop_poczatek();
			break;
		case 6:
			baza.pop_koniec();
			break;
		default:
			break;
		}


	}while(opcja!=0);
	
	return 0;
}

