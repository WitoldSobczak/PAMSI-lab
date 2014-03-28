/** Plik naglowkowy programu opartego na STL . Plik ten zawiera klase stosu ,w ktorej znajduja sie pola i metody tej kalsy.
  */

#ifndef STOS_H
#define STOS_H
#include <iostream>
#include <stack>

using namespace std;

class stoss
{
private:
	// Utworzenie stosu na podstawie adapteru stosu std::stack o nazwie stos ,ktory zawiera dane typu int
	stack<int> stos;
	// Zmienna typu int ,ktora sluzy do umieszczania kolejnych danych na stos
	int wartosc;
public:
	// Deklaracja metody klasy umieszczaj¹cej wartosci po kolejne na stosie
	void push(int wartosc);
	// Deklaracaja metody klasy wyswietlajacej kolejne elementy stosu
	void top();
	// Deklaracja metody klasy usuwajacej x elementow ze stosu (x-podajemy z konsoli)
	void pop(int rozmiar);
	// Deklaracja metody klasy ilosc elementow bedacych na stosie
	void size();
	// Deklaracja metody klasy umieszczajacej element o wybranej wartosci x na stos (x-podawane z konsol)
	void push_jeden();
	// Deklaracja metody klasy czyszczacej stos
	void pop_zeruj();
};

#endif
