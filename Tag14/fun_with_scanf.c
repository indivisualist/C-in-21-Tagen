#include <stdio.h>

main() {

	int i1,
	    i2;
	long l1;
	double d1;
	char puffer1[80],
	     puffer2[80];

	puts("Geben Sie einen Integer und eine Gleitkommazahl ein.");
	scanf("%ld %lf", &l1, &d1);
	printf("\nIhre Eingabe lautete %ld und %f.\n", l1, d1);

	fflush(stdin);

	puts("Geben Sie einen Integer aus 5 Ziffern ein.");
	scanf("%2d%3d", &i1, &i2);
	printf("\nIhre Eingabe lautete %d und %d.\n", i1, i2);

	fflush(stdin);

	puts("Geben Sie Vor- und Nachname ein, getrennt mit Space.");
	scanf("%[^ ]%s", puffer1, puffer2);
	printf("\nIhr Vorname lautet %s\n", puffer1);
	printf("Ihr Nachname lautet %s\n", puffer2);

	return 0;

}
