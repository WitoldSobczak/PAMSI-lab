/** Funkcja glowna programu Kopiec ,w ktorej wykonywane sa wszystkie funkcje programu
  */

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Kopiec.h"

using namespace std;

int zmienna;

int main()
{
	Kopiec baza;
	int opcja;
	do{
		cout<<"0. Koniec programu."<<endl;
		cout<<"1. Wypelninie tablicy dynamicznej losowymi wartosciami."<<endl;
		cout<<"2. Wygeneruj kopiec."<<endl;
		cout<<"3. Wyswietl kopiec."<<endl;
		cout<<"Wybierz opcje: ";
		cin>>opcja;
		switch(opcja)
{
		case 1:
			baza.Wypelnij();
			break;
		case 2:
			baza.Dzialaj();
			break;
		case 3:
			baza.Wyswietl_(0);
			break;
		default:
			break;
}
	}while(opcja!=0);
	return 0;
}

