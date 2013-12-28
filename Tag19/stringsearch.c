#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int vergl(const void *s1, const void *s2);

int main(void) {

	char *daten[MAX],
	     puffer[80],
	     *zgr,
	     *suche,
	     **suche1;
	int count;

	printf("Geben Sie %d Woerter ein.\n", MAX);

	for (count=0; count<MAX; count++) {
		printf("Wort %d: ", count+1);
		gets(puffer);
		daten[count] = malloc(strlen(puffer)+1);
		strcpy(daten[count], puffer);
	}

	/* sort the pointers in the array ascending */
	qsort(daten, MAX, sizeof(daten[0]), vergl);

	for (count=0; count<MAX; count++)
		printf("\n%d: %s", count+1, daten[count]);

	printf("\nGeben Sie einen Suchbegriff ein: ");
	gets(puffer);

	/* suche1 becomes the pointer to the pointer to the string */
	suche = puffer;
	suche1 = &suche;
	zgr = bsearch(suche1, daten, MAX, sizeof(daten[0]), vergl);

	if (zgr != NULL)
		printf("%s gefunden", puffer);
	else
		printf("%s nicht gefunden", puffer);

	return(0);

}

int vergl(const void *s1, const void *s2) {
	return (strcmp(*(char **)s1, *(char **)s2));
}

