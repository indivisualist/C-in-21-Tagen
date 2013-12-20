#include <stdio.h>

void strings_ausgeben(char *p[], int n);

main () {

	char *meldung[6] = { "Vor", "vier", "Generationen", "begannen", "unsere", "Vorvaeter" };
	int count;

	strings_ausgeben(meldung, 6);

	return(0);

}

void strings_ausgeben(char *p[], int n) {

	int count;

	for (count=0; count<n; count++)
		printf("%s ", p[count]);

}
