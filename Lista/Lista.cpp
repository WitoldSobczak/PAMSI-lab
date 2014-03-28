/** Funkcja glowna programu opartego na bibliotece STL Standard Template Library  w programie uzywamy adapteras listy
  * std::list. Adapter ten zawiera nastepujace funkcje ,ktore uzylem w programie:
  *
  * back	Zwraca referencjê na ostatni element listy;
  * begin	Zwraca iterator wskazuj¹cy na pierwszy element listy;
  * clear	Usuwa wszystkie elementy z kontenera;
  * empty	Sprawdza, czy kontener listy jest pusty;
  * end	Zwraca iterator wskazuj¹cy na element bêd¹cy za ostatnim elementem listy;
  * front	Zwraca referencjê na pierwszy element w kontenerze listy;
  * pop_back	Usuwa jeden element z kontenera listy, znajduj¹cy siê na jego koñcu;
  * pop_front	Usuwa jeden element z kontenera znajduj¹cy siê na pocz¹tku listy;
  * push_back	Dodaje nowy element na koñcu kontenera listy;
  * push_front	Dodaje nowy element na pocz¹tek kontenera listy;
  * size	Zwraca liczbê elementów przechowywanych przez listê. 
  */
#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <algorithm>
#include <functional>
#include <time.h>
#include "Lista.h"

using namespace std;

int wartosc;

int main()
{
	listaa baza;

	int opcja;
	do{
		cout<<"0. Koniec programu."<<endl;
		cout<<"1. Wypelnienie statycznej tablicy losowymi elementami."<<endl;
		cout<<"2. Tworzenie listy na podstawie powyzszej tablicy."<<endl;
		cout<<"3. Wyswietlenie ilosci elementow listy."<<endl;
		cout<<"4. Wyswietlenie k-tego elementu listy."<<endl;
		cout<<"5. Wyswietl elementy listy."<<endl;
		cout<<"6. Zapis do pliku."<<endl;
		cout<<"7. Sortowanie listy rosnaco."<<endl;
		cout<<"8. Sortowanie listy malejaco."<<endl;
		cout<<"Wybierz opcje: ";
		cin>>opcja;

		switch(opcja)
		{
		case 1:
			baza.wypelnienie_losowe();
			break;
		case 2:
			baza.push(wartosc);
			break;
		case 3:
			baza.size();
			break;
		case 4:
			baza.erase();
			break;
		case 5:
			baza.wyswietl();
			break;
		case 6:
			baza.zapis();
			break;
		case 7:
			baza.sort_niemalejaco(wartosc);
			break;
		case 8:
			baza.sort_nierosnaco(wartosc);
			break;
		default:
			break;
		}

	}while(opcja!=0);

	return 0;
}

