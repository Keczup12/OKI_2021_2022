/*
	Zadanie z platformy szkopul.edu.pl
	Nazwa zadania: Poziome serca
	Link do zadania: https://szkopul.edu.pl/problemset/problem/lw5UT-NoSzVkV5rZdEG7QRuP/site/?key=statement
	Wynik: 100/100
*/
#include <iostream>	//Dolaczenie biblioteki wejscia/wyjscia
#include <string>	//Dolaczenie biblioteki zmiennej tekstowej
using namespace std;

class rysuj_serce{	//Klasa pozwalajaca narysowac serce (programowanie obiektowe, urzycie klasy nie bylo konieczne)
public:
	string pasek_1()	//Nazwa funkcji okreslajaca pierwszy "pasek" serca od gory
	{
		string pasek_1;
		pasek_1+=" @@@   @@@ ";
		return pasek_1;	//Zwrocenie pierszwego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_2()	//Nazwa funkcji okreslajaca drugi "pasek" serca od gory
	{
		string pasek_2;
		pasek_2+="@   @ @   @";
		return pasek_2;	//Zwrocenie drugiego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_3()	//Nazwa funkcji okreslajaca trzeci "pasek" serca od gory
	{
		string pasek_3;
		pasek_3+="@    @    @";
		return pasek_3;	//Zwrocenie trzeciego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_4()	//Nazwa funkcji okreslajaca czwarty "pasek" serca od gory
	{
		string pasek_4;
		pasek_4+="@         @";
		return pasek_4;	//Zwrocenie czwartego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_5()	//Nazwa funkcji okreslajaca piaty "pasek" serca od gory
	{
		string pasek_5;
		pasek_5+=" @       @ ";
		return pasek_5;	//Zwrocenie piatego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_6()	//Nazwa funkcji okreslajaca szosty "pasek" serca od gory
	{
		string pasek_6;
		pasek_6+="  @     @  ";
		return pasek_6;	//Zwrocenie szostego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_7()	//Nazwa funkcji okreslajaca siodmy "pasek" serca od gory
	{
		string pasek_7;
		pasek_7+="   @   @   ";
		return pasek_7;	//Zwrocenie siodmego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_8()	//Nazwa funkcji okreslajaca osmy "pasek" serca od gory
	{
		string pasek_8;
		pasek_8+="    @ @    ";
		return pasek_8;	//Zwrocenie osmego "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
	string pasek_9()	//Nazwa funkcji okreslajaca dziewiaty (ostatni) "pasek" serca od gory
	{
		string pasek_9;
		pasek_9+="     @     ";
		return pasek_9;	//Zwrocenie dziewiatego (ostatniego) "paska" serca (po wywolaniu funkcji zostanie on napisany)
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);						// 3 linijki przyspieszajace kod
	cout.tie(0);
	
	rysuj_serce serce;	//Utworzenie zmiennej typu "rysuj serce". Dzieki temu mozemy sie dostac to utworzonych funkcji
	
	int ilosc_serc;	//Utworzenie zmiennej ktora pomoze nam wczytac ile serc musimy narysowac
	
	cin>>ilosc_serc;
	
	for(int i=0; i<ilosc_serc; ++i)	//Poniewaz serca musza byc obok siebie to zaczynamy od wypisania danej ilosc pierwszych "paskow" serc
	{
		cout<<serce.pasek_1()<<" ";
	}
	cout<<"\n";	//Po wypisaniu konkretnej ilosci pierszego "paska" serca, przechodzimy do nastepnej linii i robimy do samo dla innych "paskow"
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_2()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_3()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_4()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_5()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_6()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_7()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_8()<<" ";
	}
	cout<<"\n";
	for(int i=0; i<ilosc_serc; ++i)
	{
		cout<<serce.pasek_9()<<" ";
	}
	
	return 0;
}
