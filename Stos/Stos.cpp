#include "Stos.h"

/** Definicja metody umieszczajacej kolejne elementy na stosie void push()
  *
  * Parametry:
  * wartosc - zmienna typu int zawiera wartosci kolejnych elementow stosu
  * licznik - zmienna typu int zlicza ile razy umiescilismy liczbe na stosie
  * znak - zmienna typu char sprawdza czy nadal chcemy umieszczac elementu na stosie
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::push(int wartosc)
{
	int licznik=1;
	char znak;
	while(true)
	{
		if(licznik==5)
		{
	cout<<"Czy nadal chcesz wprowadzac liczby? - t/n"<<endl;
	cin>>znak;
	licznik=0;
	if(znak!='t')
	{
		break;
	}
	
	}
		else
		{
		cin>>wartosc;
	stos.push(wartosc);
	licznik=licznik+1;
		}
	}
}

/** Definicja metody wyswietlajacej kolejne elementu stosu void top()
  *
  * Parametry:
  * stosik - tworzymy pomocniczy stos o danych typu int do ktorego przypisujemy glowny stos i kolejno zdejmujewy i wyswietlamy elementy
  * zmienna - typu int ideksujaca eleemntu na stosie
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::top()
{
	if(stos.empty())
	{
		cerr<<"Stos jest pusty!"<<endl;
	}
	else
	{
	int licznik=1;
	for(stack<int> stosik=stos;!stosik.empty();stosik.pop())
	{
		cout<<"Element nr."<<licznik<<":"<<stosik.top()<<endl;
		licznik=licznik+1;
	}
	}
}

/** Deinicja metody usuwajacej x elementow ze stosu void pop()
  *
  * Parametry:
  * rozmiar - zmienna typu int zawiera liczbe usuwanych elementow  ze stosu
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::pop(int rozmiar)
{
	if(stos.empty())
	{
		cout << "Stos jest pusty" << endl << endl;
	}
	else{
	
		for(int i= 0;i<rozmiar;i++)

	{
		stos.pop();
		cout << "Udalo sie usunac!"<< endl;
	}
	}
	cout<<"\n";
}

/** Definicja metody zwracajacej ilosc elemetow na stosie void size()
  * 
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::size()
{
	if(stos.empty())
	{
		cout<<"Stos jest pusty"<<endl;
	}
	else
	{
		cout<<"Rozmiar stosu: ";
		cout<<stos.size()<<endl;
	}
	cout<<"\n";
}

/** Definicja metody umieszczajacej element o wartsci x (x-podawane z konsoli) void push_jeden()
  *
  * Parametry:
  * wartosc - zmienna typu int zawiera wartosc umieszczanego elementu
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::push_jeden()
{
	cout<<"Wprowadz wybrana wartosc"<<endl;
	cin>>wartosc;
	stos.push(wartosc);
	cout<<"\n";
}

/** Definicja metody czyszczacej stos void pop_zeruj()
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void stoss::pop_zeruj()
{
	while(stos.size()!=0)
	{
	stos.pop();
	}
	cout<<"Stos jest wyczyszczony"<<"\n";
}

