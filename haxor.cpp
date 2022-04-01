/*
	Zadanie z platformy szkopul.edu.pl
	Nazwa zadania: H4x0r
	Link do zadania: https://szkopul.edu.pl/problemset/problem/-sW59iNCsLGhh8xyFPEmtn7F/site/?key=statement
	Wynik: 100/100
*/
#include <iostream> //Dolaczenie biblioteki wejscia/wyjscia
#include <string>	//Dolaczenie biblioteki zmiennej tekstowej
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);						// 3 linijki przyspieszajace kod
	cout.tie(0);
	
	string napis;	//Utworzenie zmiennej tekstowej
	
	cin>>napis;		//Wczytanie napisu
	
	for(int i=0; i<napis.length(); ++i)
	{
		switch (napis[i])	//Uzycie struktury switch i case (sruktury podobnej do if i else)
		{
			case 'a':		//Jesli znak jest 'a' to zmieniany go na '4'
				napis[i]='4';
				break;
			case 'e':		//Jesli znak jest 'e' to zmieniany go na '3'
				napis[i]='3';
				break;
			case 'i':		//Jesli znak jest 'i' to zmieniany go na '1'
				napis[i]='1';
				break;
			case 'o':		//Jesli znak jest 'o' to zmieniany go na '0'
				napis[i]='0';
				break;
			case 's':		//Jesli znak jest 's' to zmieniany go na '5'
				napis[i]='5';
				break;
			default:
				break;
		}
	}
	
	cout<<napis;	//Wypisanie zmienionego napisu
	
	return 0;
}
