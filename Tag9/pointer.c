#include <stdio.h>

int var = 1;
int *zgr;

int main(void) {
	zgr = &var; /* zgr als Zeiger auf var initialisieren */
	printf("\nDirekter Zugriff, var = %d", var);
	printf("\nIndirekter Zugriff, var = %d", *zgr);

	printf("\nDie Adresse von var = %lu", (unsigned long)&var);
	printf("\nDie Adresse von var = %lu", (unsigned long)zgr);

	return 0;
}
