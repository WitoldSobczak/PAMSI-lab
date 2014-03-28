#include "Kolejka.h"

/** Definicja metody umieszczajace kolejne elementu w kolejce podawane z konsoli void push()
  *
  * Parametry:
  * licznik - zmienna typu int ,ktora zlicza ile liczb wpisalismy
  * znak - zmienna typu char ,sprawdza czy nadal chcemy wpisywac dane
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::push(int wartosc)
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
	kolejka.push(wartosc);
	licznik=licznik+1;
		}
	}
}

/** Definicja metody wyswietlajacej kolejne elementu kolejki void wyswietl()
 * 
 * Parametry:
 * kolejeczka - tworzymy pomocnicza kolejke o danych typu int do ktorego przypisujemy glowna kolejke i kolejno zdejmujewy i wyswietlamy elementy
 * zmienna - typu int ideksujaca eleemntu na stosie
 *
 * Zwraca:
 */
void kolejkaa::wyswietl()
{
	int licznik = 1;
	if(kolejka.empty())
	{
		cerr<<"Kolejka jest pusta!"<<endl;
	}
	else
	{
	cout<<"Zawartosc kolejki"<<endl;
	for(queue<int> kolejeczka=kolejka;!kolejeczka.empty();kolejeczka.pop())
	{
		cout<<"Element nr."<<licznik<<" :"<<kolejeczka.front()<<" \n";
		licznik+=1;
	}
	}
	cout<<"Ilosc elementow  w kolejce to: "<<kolejka.size();
	cout<<"\n";
}

/** Definicja metody wysietlajacej poczatkowy element kolejki void wyswietl_poczatek()
  * 
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::wyswietl_poczatek()
{ 
	if(kolejka.empty())
	{
		cerr<<"Blad kolejka pusta"<<endl;
	}
	else
	{
	cout<<kolejka.front();
	cout<<"\n";
	}
}

/** Definicja metody wyswietlajacej koncowy element kolejki void wyswietl_koniec()
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::wyswietl_koniec()
{
	if(kolejka.empty())
	{
		cerr<<"Blad kolejka pusta"<<endl;
	}
	else
	{
	cout<<kolejka.back();
	cout<<"\n";
	}
}

/** Definicja metody dodajacej element o wartosci x do kolejki
  *
  * Parametry:
  * wartosc - zmienna typu int zawierajaca wartosc wpisywanego elementu void push_jeden()
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::push_jeden(int wartosc)
{
	cout<<"Podaj wartosc: ";
	cin>>wartosc;
	kolejka.push(wartosc);

}

/** Definicja funkcji usuwajacej pierwszy element kolejki void pop_poczatek()
  * 
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::pop_poczatek()
{
	if(kolejka.empty())
	{
		cerr<<"Kolejka jest pusta!"<<endl;
	}
	else
	{
	cout<<"Usuwa pierwszy element kolejki"<<endl;
	kolejka.pop();
	}
}

/** Definicja funkcji usuwajacej koncowy element kolejki void pop_koniec()
  *
  * Zwraca:
  * Funkcja nic nie zwraca
  */
void kolejkaa::pop_koniec()
{
	int wartosc;
	cout<<"Usuwa koncowy element kolejki"<<endl;
	queue <int> kolejk=kolejka;
	int rozmiar=kolejka.size();
	for(int i=0;i<rozmiar;i++)
	{
		kolejka.pop();
	}
	for(int i=1;i<rozmiar;i++)
	{
		wartosc=kolejk.front();
		kolejka.push(wartosc);
		kolejk.pop();
	}
}