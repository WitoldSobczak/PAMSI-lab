#include "Lista.h"



/** Definicja metody klasy wypelniajaca tablice losowymi liczbami void wypelnij_losowe()
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::wypelnienie_losowe()
{
	
	for(int i=0;i<8;i++)
	{
		tab[i]=rand()%10;
	}
	for(int i=0;i<8;i++)
	{
		cout<<tab[i]<<"\n";
	}
}

/** Definicja metody klasy tworzaca liste na podstawie powyzszej tablicy void push()
  *
  * Parametry:
  * list - pomocnicza lista do wyswietlania elemento glownej listy
  * wartosc - zmienna typu int zawirajaca wartosc umieszczana na liscie
  * i - zmienna typu int indeksujaca kolejne elementy listy
  * 
  * Zwraca:
  * Funkcja zwraca void 
  */
void listaa::push(int wartosc)
{
	for(int i=0;i<8;i++)
	{
		wartosc=tab[i];
		lista.push_back(wartosc);
	}
	int i=1;
	for(list<int> list=lista;!list.empty();list.pop_front())
	{
		cout<<"Element nr. :"<<i<<" "<<list.front()<<"\n";
		i++;
	}
}

/** Definicja metody klasy wyswietlajaca ilosc elementow na liscie void size()
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::size()
{
	if(lista.empty())
	{
		cerr<<"Blad lista jest pusta"<<endl;
	}
	else
	{
		cout<<"Ilosc elementow na liscie: ";
		cout<<lista.size()<<"\n";
	}
}

/** Definicja metody klasy wyswietlajacy element z x pozycji listy void erase()
  *
  * Parametry:
  * pozycja - zmienna typu int przechowujaca pozycje ktora chcemy wyswietlic
  * j - zmienna typu int liczaca pozycje do wyswietlenia
  * listt - pomocnicza lista 
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::erase()
{
	int pozycja;
	int j=1;
	cout<<"Wpisz pozycje elementu ,ktory chcesz wyswietlisc: ";
	cin>>pozycja;
	for(list<int> listt=lista;j<=pozycja;listt.pop_front())
	{
		if(j==pozycja)
		{
		cout<<"Element nr. "<<pozycja<<" "<<listt.front()<<"\n";
		}
		j++;
	}
	
	
}

/** Definicja metody klasy wyswietlajacej wszystkie elementy listy void wyswietl()
  *
  * Parametry:
  * listaa - pomocnicza lista ,dzieki ktorej wyswietlamy kolejne elementy listy
  * i - zmienna typu int indeksujaca kolejne elementy listy
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::wyswietl()
{
	int i=1;
	for(list<int>listaa=lista;!listaa.empty();listaa.pop_front())
	{
		cout<<"Element nr. "<<i<<" "<<listaa.front()<<endl;
		i++;
	}
}
/** Definicja metody klasy zapiujacej zawractos listy do pliku tektowego void zapis()
  *
  * Parametry:
  * zapis - obiekt kalsy ofstream dzieki ktoremu zapsiujemy zawartosc listy do pliku txt
  * plik_a - zmienna typu string przechowujaca nazwe pliku do zapisu
  * listaa - pomocnicza lista
  *
  * Zwraca:
  * Funkcja zwraca vi=oid
  */
void listaa::zapis()
{
	string plik_a;
	cin>>plik_a;
	ofstream zapis;
	zapis.open(plik_a.c_str());
	if(!zapis.good())
	{
		cerr<<"Blad"<<endl;
	}
	for(list<int>listaa=lista;!listaa.empty();listaa.pop_front())
	{
	zapis<<listaa.front()<<" ";
	}
	zapis.close();

}

/** Definicja metody klasy sortujacej tablice niemalejaco void niemalejaco()
  *
  * Parametry:
  * wartosc - zmienna typu int przechowujaca wartosc listy
  * licznik - zmienna typu int indeksujaca kolejne lementy listy
  * listaa - pomocnicza lista
  * po - pomocnicza lista
  * tab - tablica statyczna int przechowujaca posortowane dane
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::sort_niemalejaco(int wartosc)
{
	int licznik=1;
	if(lista.empty())
	{
		cerr<<"Lista pusta nie mo¿na posortowaæ!"<<endl;
	}
	else
	{
	cout<<"Lista przed sortowaniem."<<endl;
	for(list<int>listaa=lista;!listaa.empty();listaa.pop_front())
	{
		cout<<"Element nr."<<licznik<<" "<<listaa.front()<<"\n";
		licznik++;
	}
	licznik=1;

	sort(tab,tab+8);
	
	cout<<"Lista po posortowaniu."<<endl;
	lista.clear();
	for(int i=0;i<8;i++)
	{
		wartosc=tab[i];
		lista.push_back(wartosc);
	}
	
	for(list<int>poo=lista;!poo.empty();poo.pop_front())
	{
		cout<<"Element nr."<<licznik<<" "<<poo.front()<<endl;
		licznik++;
	}
	}
}

/** Definicja metody klasy sortujacej tablice nierosnaco void nierosnaco()
  *
  * Parametry:
  * wartosc - zmienna typu int przechowujaca wartosc listy
  * licznik - zmienna typu int indeksujaca kolejne lementy listy
  * listaa - pomocnicza lista
  * po - pomocnicza lista
  * tab - tablica statyczna int przechowujaca posortowane dane
  *
  * Zwraca:
  * Funkcja zwraca void
  */
void listaa::sort_nierosnaco(int wartosc)
{
	int licznik=1;
	if(lista.empty())
	{
		cerr<<"Lista pusta nie mo¿na posortowaæ!"<<endl;
	}
	else
	{
	cout<<"Lista przed sortowaniem."<<endl;
	for(list<int>listaa=lista;!listaa.empty();listaa.pop_front())
	{
		cout<<"Element nr."<<licznik<<" "<<listaa.front()<<"\n";
		licznik++;
	}
	licznik=1;

	sort(tab,tab+8,greater < int >());
	
	cout<<"Lista po posortowaniu."<<endl;
	lista.clear();
	for(int i=0;i<8;i++)
	{
		wartosc=tab[i];
		lista.push_back(wartosc);
	}
	
	for(list<int>poo=lista;!poo.empty();poo.pop_front())
	{
		cout<<"Element nr."<<licznik<<" "<<poo.front()<<endl;
		licznik++;
	}
	}
}