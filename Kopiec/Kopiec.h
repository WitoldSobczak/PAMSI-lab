/** Plik naglowkowy zawierajacy klase class Kopiec posiadajaca metody i pola 
  * 
  * Paramtery:
  * tab - dynamiczna tablica typu int ja wypelniamy losowymi wartosciami
  * rozmiar - rozmiar dynmicznej tablicy 
  * i - zmienna typu int okreslajacanumer ojca 
  * *t - wskaznik na tablice 
  */

#ifndef KOPIEC_H
#define KOPIEC_H
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Kopiec.h"

using namespace std;

class Kopiec
{
private:
	int *tab;
	int rozmiar;
	int i;
	int *t;
public:
	// Konstruktor klasy Kopiec pyta jak duza ma byc tablica 
	Kopiec()
	{
		cout<<"Podaj rozmiar tabliy: ";
		cin>>rozmiar;
		tab=new int[rozmiar];
	}
	// Metoda klasy int Wypelnij() wypelnia tablice dynamiczna losowymi wartosciami
	int Wypelnij();
	// Metoda klasy zwracajaca numer wezla lewego syna 
	inline int Lewy_syn(int i);
	// Metoda klasy zwracajaca numer wezla prawego syna
	inline int Prawy_syn(int i);
	// Metoda klasy naprawiajacy kopiec wzgledem wezla
	void Napraw_Kopiec(int *t,int i,int rozmiar);
	// Metoda klasy generujaca kopiec
	void Generuj_Kopiec(int *t,int rozmiar);
	// Metoda klasy uruchamiajaca generowanie kopca
	void Dzialaj();
	// Metoda klasy wyswietlajaca kopiec
	void Wyswietl_(int poczatek);
	// Destruktor klasy usuwajacy tablice dynamiczna
	~Kopiec()
	{
		delete tab;
	}
};

#endif