#include "Kopiec.h"
/** Metoda klasy Kopiec wypelnia tablice dynamiczna losowymi wartosciami
  */
int Kopiec::Wypelnij()
{
	int wartosci;
	srand((unsigned)time(NULL));
	for(int i=0;i<rozmiar;i++)
	{
		wartosci=rand()%40;
		tab[i]=wartosci;	
	}
	cout<<"Sprawdzenie czy wypelnila."<<endl;
	for(int i=0;i<rozmiar;i++)
	{
	cout<<tab[i]<<"\n";
	}
	return 1;

}


/** Metoda klasy Kopiec  inline int Lewy_syn() zwraca  numer lewego syna
  */
 inline int Kopiec::Lewy_syn(int i)
{
	return 2*i+1;
}
 /** Metoda klasy Kopiec  inline int Prawy_syn() zwraca  numer prawego syna
  */
inline int Kopiec::Prawy_syn(int i)
{
	return 2*i+2;
}

/* Metoda klasy Kopiec void Napraw_Kopiec() funkcja rekurencyjna naprawiajaca kopiec wzgledem wezla
 *
 */

void Kopiec::Napraw_Kopiec( int *t, int i, int rozmiar )
{
	int lewy = Lewy_syn(i);
	int prawy = Prawy_syn(i);
	int tmp, czolowy;

	if( lewy < rozmiar )
	{
	if( t[lewy] > t[i] )  
		czolowy = lewy;
	else   
	 czolowy = i;

	if( prawy < rozmiar  &&  t[prawy] > t[czolowy] )
	 czolowy = prawy;
	}
	else                
	czolowy = i;     

	if( czolowy != i )
	{
	tmp = t[czolowy];
	t[czolowy] = t[i];
	t[i] = tmp;

	Napraw_Kopiec( t, czolowy, rozmiar );
}

}

/** Metoda klasy Kopiec generujaca kopiec
  */
void Kopiec::Generuj_Kopiec(int *t,int rozmiar)
{
	for(int i=(rozmiar/2)-1;i>=0;i--)
	{
		Napraw_Kopiec(t,i,rozmiar);
	}

}
/** Metoda klasy Kopiec Uruchamaijaca kopiec
  */
void Kopiec::Dzialaj()
{
	Generuj_Kopiec(tab,rozmiar);
	cout<<"Wygenerowany kopiec: "<<endl;
	for(int i = 0; i < rozmiar;i++){

	cout<<tab[i]<<"\n";
	}
	cout<<"\n"<<endl;
}
/** Metoda kalasy Kopiec wyswietlajace koejne elementy kopca
  */
void Kopiec::Wyswietl_(int i)
{
	int j=0;
	for(int i =0;i<rozmiar;i++)
	{
		cout<<j<<" : "<<tab[i]<<endl;
		j++;
	}
	
}

	




