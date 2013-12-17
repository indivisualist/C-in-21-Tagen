#include <stdio.h>

float ausgaben[13];
int count;

int main(void) {
	for (count=1; count<13; count++) {
		printf("Ausgaben fuer Monat %d: ", count);
		scanf("%f", &ausgaben[count]);
	}

	for (count=1; count<13; count++) {
		printf("Monat %d = %.2f DM\n", count, ausgaben[count]);
	}

	return 0;
}
