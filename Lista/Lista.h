#ifndef LISTA_H
#define LISTA_H
#include <iostream>
/** Plik naglowkowy programu opartego na STL . Plik ten zawiera klase listy ,w ktorej znajduja sie pola i metody tej kalsy.
  */
#include <list>
#include <fstream>
#include <string>
#include <algorithm>
#include <functional>
#include <time.h>

using namespace std;

class listaa
{
private:
	// Utworzenie listy na podstawie adapterulisty std::list o nazwie lista ,ktory zawiera dane typu int
	list <int> lista;
	// Deklaracja tablicy statycznej 8 elementowej do której przypisujemy losowe wartosci
	int tab[8];
public:
	// Deklaracja metody wypelniajaca tablice statyczna losowymi elementami
	void wypelnienie_losowe();
	// Deklaracja metody klasy wypelnia liste na podstawie powyzszej tablicy
	void push(int wartosc);
	// Deklaracja metosy klasy wyswietlajacej ilosc elementow listy
	void size();
	// Deklaracja metody klasy wyswietlajacy element z x-pozycji
	void erase();
	// Deklaracja metody klasy wyswietlajacej elementy listy
	void wyswietl();
	// Deklaracja metody klasy zapisujacej stan listy
	void zapis();
	// Deklaracja metody klasy sortujacej liste niemalejaco
	void sort_niemalejaco(int wartosc);
	// Deklaracja metody klasy sortujacej liste nierosnaco
	void sort_nierosnaco(int wartosc);
};

#endif