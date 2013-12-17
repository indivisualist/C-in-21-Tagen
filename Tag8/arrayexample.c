#include <stdio.h>

float ausgaben[13];
int count;

int main(void) {
	/* skipping index 0 is intentional! */

	for (count=1; count<13; count++) {
		printf("Ausgaben fuer Monat %d: ", count);
		scanf("%f", &ausgaben[count]);
	}

	for (count=1; count<13; count++) {
		printf("Monat %d = %.2f DM\n", count, ausgaben[count]);
	}

	return 0;
}
