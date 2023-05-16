/*
	Zadanie z platformy szkopul.edu.pl
	Nazwa zadania: zegarek
	Link do zadania: https://szkopul.edu.pl/problemset/problem/A859_vuqciUBllN7vf9w2NYL/site/?key=statement
	Wynik: 100/100
*/
#include <iostream> //Dolaczenie biblioteki wejscia/wyjscia
#include <string>	//Dolaczenie biblioteki zmiennej tekstowej
#include <vector>	//Dolaczenie biblioteki vectorow (dynamicznej tablicy)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);						// 3 linijki przyspieszajace kod
	cout.tie(0);
	
	vector<int>czas;  // utworzenie vectora (dynamicznej tablicy)
	
	czas.resize(3);
	
	for(int i=0; i<3; ++i)	//dodawanie do vectora danych wejsciowych
	{
		cin>>ws; cin>>czas[i];	//cin>>ws; pomija "biale" znaki (pusta przestrzen)
	}
	
	++czas[2];	//zwiekszenie sekund o 1
	if(czas[2]==60)	//sprawdzanie, czy liczba jest poprawna w zapisie zegarkowym (nie może być np. 60 sekund)
	{
		czas[2]=0;
		++czas[1];
		if(czas[1]==60)
		{
			czas[1]=0;
			++czas[0];
				if(czas[0]==24)
				{
					czas[0]=0;
				}
		}
	}
	
	for(int i=0; i<3; ++i)
	{
		if(i==2)
		{
			if(czas[i]<10)		//wypisanie sekund (z wiodacym zerem jesli liczba jest jedno cyfrowa)
				cout<<"0"<<czas[i];
			else
				cout<<czas[i];
		}
		
		if(i<2)
		{
			if(czas[i]<10)	//wypisanie godzin i minut (z wiodacym zerem jesli liczba jest jedno cyfrowa oraz z dwukropkiem miedzy liczbami)
				cout<<"0"<<czas[i]<<":";
			else
				cout<<czas[i]<<":";
		}
			
	}
	
	return 0;
}
