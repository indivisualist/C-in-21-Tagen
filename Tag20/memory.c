#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCKGROESSE 30000

int main(void) {

	void *zgr1,
	     *zgr2;

	zgr1 = malloc(BLOCKGROESSE);

	if (zgr1 != NULL)
		printf("Erste Reservierung von %d Byte erfolgreich.\n", BLOCKGROESSE);
	else {
		printf("Reservierung von %d Byte fehlgeschlagen.\n", BLOCKGROESSE);
		exit(1);
	}

	zgr2 = malloc(BLOCKGROESSE);

	if (zgr2 != NULL) {
		printf("Zweite Reservierung von %d Byte erfolgreich.\n", BLOCKGROESSE);
		exit(0);
	}

	/* if not successful, free first block and try again */
	printf("Zweiter Versuch, %d Byte zu reservieren misslungen.\n", BLOCKGROESSE);
	free(zgr1);
	printf("Erster Block freigegeben.\n");

	zgr2 = malloc(BLOCKGROESSE);

	if (zgr2 != NULL)
		printf("Nach free, Reservierung von %d Byte erfolgreich.", BLOCKGROESSE);

	return(0);

}
