#include <stdio.h> /* dolaczenie biblioteki standardowej input-output */

/* y = f(x) */
/*     f() => 0 */

int main() /* funkcja glowna programu */
/* int -> typ typ zwracanej wartosci (int - wartosc calkowita) */
{
	puts("Pierwszy program"); /* puts - funkcja z biblioteki standardowej*/
				  /* puts -> put string */
				  /* wyswietlajaca ciag znakow */
				  /*automatycznie przechodzi do nowej linii */
	putchar('g');
	putchar('\n'); /*znak konca linii*/
	putchar('\t'); /*tabulator*/
/*	putchar('\r');*/ /*powrot karetki - kursor powraca na poczatek linii*/
	putchar('\\'); /*wypisuje \ */
	return 0;
} /* klamry oznaczaja blok programu, zwykle cialo funkcji */
