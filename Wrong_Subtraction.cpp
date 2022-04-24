/*
	Zadanie z platformy codeforces.com
	Nazwa zadania: Wrong Subtraction
	Link do zadania: https://codeforces.com/problemset/problem/977/A
	Wynik: 100/100
*/
#include <iostream>	//Dolaczenie biblioteki wejscia/wyjscia
using namespace std;

int main()
{
	long long int liczba_n;
	int liczba_k;
	
	cin >> liczba_n;	//Wczytanie liczby n
	cin >> liczba_k;	//Wcztyanie liczby k
	
	for (int i = 0; i < liczba_k; ++i )
	{
		if ( liczba_n % 10 == 0 )	//Jesli ostania cyfra liczby jest 0 to musimy "wymazac" to zero czyli podzielic liczbe przez 10
		{
			liczba_n /= 10;
		}
		else
			liczba_n -= 1;	//Jesli ostania cyfra nie jest zerem to po prstu odejmujemy 1 od liczby
	}
	
	cout << liczba_n;	//Na koniec trzeba wypisac uzyskana liczbe
	
	return 0;
}
