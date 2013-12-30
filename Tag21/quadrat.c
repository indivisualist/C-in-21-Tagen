#include <stdio.h>
#include "kalkul.h"

int main(void) {

	int x;

	printf("Geben Sie einen Integer-Wert ein: ");
	scanf("%d", &x);

	printf("Das Quadrat von %d ist %ld.", x, sqr(x));

	return 0;

}
