#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %d\n", a * b);return a*b; }

int dodaj(int a, int b){
	printf("Wynik dodawania: %d\n", a + b); return a+b; }

int odejmij(int a, int b){
	printf("Wynik odejmowania: %d\n", a - b); return a-b; }

int dziel(int a, int b){
	printf("Wynik dzielenia: %d\n", a / b); return a/b; }

int main(void)
{
	int a = 2, b = 5; /* deklaracja wraz z inicjalizacja */
	char wybor ;
	scanf("%c", &wybor); /*czytaj z konsoli i zapisz wartosc pod wybor */
	/*if(wyrazenie {blok jesli wyrazenie prawdziwe}
	else {blok jesli wyrazenie falszywe}*/

	if(wybor == '*'){ /*sprawdzenie czy rowne, to nie jest '=' */

	mnoz(a, b);
	}else if(wybor == '+')
{
		dodaj(a, b);
	} /* ten srednik jest opcjonalny jesli wystepuje klamra*/

	else if(wybor =='/')
{
		dziel(a, b);
								}

	else if(wybor == '-')
{
		odejmij(a, b);
								}

	return 0;
}
