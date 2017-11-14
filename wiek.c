	/*Program przelicza lata na sekundy
	wykonal Przemeyslaw Jezutek
	Szczytno 2017*/


#include <stdio.h>	//wloczenie bibliotek obslugujacych poszczegulne funkcje
#include <stdlib.h>
#include <math.h>


int main()		//definicja funkcji glownej zawartej w nawiasach {}

{
int wiek;		//deklarowanie zmiennych programu
int twoj_wiek_w_sekundach;
double ilosc_sek_w_roku=3.156e7;


	printf("Podaj swoj wiek:");	/*funkcja wyswietlajaca na ekranie 
					 tresc pomiedzy ""*/
	scanf("%d", &wiek);		/*funkcja przypisujaca wpisana wartosc
					 z klawiatury do zmiennej wiek*/
	if (wiek !=0)			/*instrukcja warunkowa jesli podana wartość
					jest rozna od zera*/
	twoj_wiek_w_sekundach = wiek*3.156e7;

	printf("Twoj wiek w sekundach to:%d", twoj_wiek_w_sekundach=wiek*
	ilosc_sek_w_roku);		//funkcja wypisuje na ekranie tresc miedzy "" 
	return 0;			//instrukcja zakonczenia programu
}
