/** Plik naglowkowy programu opartego na STL . Plik ten zawiera klase kolejkaa ,w ktorej znajduja sie pola i metody tej kalsy.
  */
#ifndef KOLEJKA_H
#define KOLEJKA_H
#include <iostream>
#include <queue>

using namespace std;

class kolejkaa
{
private:
	// Utworzenie kolejki na podstawie adapteru kolejki std::queue ,który zawiera dane typu int
	queue<int> kolejka;
	// Zmienna typu int ,ktora sluzy do umieszczania kolejnych danych na kolejke
	int wartosc;
public:
	// Deklaracja metody klasy umieszczaj¹cej wartosci po koleji na kolejce
	void push(int wartosc);
	// Deklaracaja metody klasy wyswietlajacej kolejne elementy kolejki
	void wyswietl();
	// Deklaracja metody klasy wyswietlajacej pierwszy element kolejki
	void wyswietl_poczatek();
	// Deklaracja metody klasy wyswietlajacej ostani element kolejki
	void wyswietl_koniec();
	// Deklaracja metody klasy dodajaca kolejny element o wartosci x (x- podawane z konsoli)
	void push_jeden(int wartosc);
	// Deklaracja metody klasy usuwajacej pierwszy element kolejki
	void pop_poczatek();
	// Deklaracja metody klasy usuwajacej koncowy element kolejki
	void pop_koniec();
};

#endif