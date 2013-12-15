/* Auswertung relationaler Ausdruecke */

#include <stdio.h>

int a;

int main(void) {
	a = (5 == 5);
	printf("a = (5 == 5) ..... a = %d\n", a);

	a = (5 != 5);
	printf("a = (5 != 5) ..... a = %d\n", a);

	a = (12 == 12) + (5 != 1);
	printf("a = (12 == 12) + (5 != 1) ..... a = %d\n", a);

	return 0;
}
