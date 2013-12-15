/* Praefix- und Postfix-Modus fuer unaere Operatoren */

#include <stdio.h>

int a, b;

int main(void) {
	a = b = 5;
	printf("\nPost Prae");
	printf("\n %d   %d", a--, --b);
	printf("\n %d   %d", a--, --b);
	printf("\n %d   %d", a--, --b);
	printf("\n %d   %d", a--, --b);
	printf("\n %d   %d\n", a--, --b);

	return 0;
}
