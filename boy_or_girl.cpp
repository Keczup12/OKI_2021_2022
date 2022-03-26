/*
	Zadanie z platformy codeforces.com
	Nazwa zadania: Boy or Girl
	Link do zadania: https://codeforces.com/problemset/problem/236/A
	Wynik: 100/100
*/
#include <iostream> //Dolaczenie biblioteki wejscia/wyjscia
#include <vector>	//Dolaczenie biblioteki vectorow (dynamicznej tablicy)
#include <string>	//Dolaczenie biblioteki zmiennej tekstowej
#include <map>		//Dolaczenie biblioteki map (dynamicznej tablicy)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);						// 3 linijki przyspieszajace kod
	cout.tie(0);
	
	map< vector<char>, int >liczba_znakow;	//Utworzenie mapy (indeksami/kluczami sa vectory charow, a wartosciami inty)
	vector<char>znak;	//Utworzenie vectora charow
	string nick;	//Utworzenie zmiennej tekstowej
	int i=0, ilosc=0;	//Utworzenie zmiennej 'i'(iterator do petli "for") oraz zmiennej "ilosc" (zlicza ilosc nie takich samych znakow)
	
	cin>>nick;	//Wczytanie nicku (tekstu podanego na wejsciu)
	 	
	for(i=0; i<nick.length(); ++i)
	{	
		znak.clear();	//Czyszczenie vectora
		znak.push_back(nick[i]);	//Dodanie do vectora znaku z tekstu wejsciowego (jesli tekst ma 3 znaki to odpowiednie wczytuja sie one po koleji
		if(liczba_znakow[znak]==0)	//Sprawdzanie warunku (jesli by³oby nawet 20 takich samych znakow, to zadaniu naliczane s¹ tylko rozne znaki)
		{
			++liczba_znakow[znak];	//Zwiekszenie o 1 mapy o indeksie/kluczu takim jaki jest w danej chwili vector (np. w, s, itd;)
			++ilosc;	//Jesli zwieksza sie mapa to tylko wtedy kiedy jest nowy znak. Potrzebuje do rozwiazania zadania wiedziec czy liczba tych znakow jest aprzysta czy nie, wiec ta zmienna zlicza ta ilosc
		}		
		else
			continue;	//Jesli jakis znak byl juz wczesniej to program ma po prostu kontynuowac prace;
	}
	
	if(ilosc%2==0)	//W zadaniu byly podane warunki: jesli liczba roznych znakow jest parzysta wto trzeba wypisac: "CHAT WITH HER!" a jesli ni to: "IGNORE HIM!"
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
		
	return 0;
}
