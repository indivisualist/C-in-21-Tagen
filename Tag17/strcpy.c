#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char quelle[] = "Der Quellstring.";

int main() {

	char ziel1[80];
	char *ziel2,
	     *ziel3;

	printf("Quelle: %s\n", quelle);

	strcpy(ziel1, quelle);
	printf("Ziel1: %s\n", ziel1);

	ziel2 = (char *)malloc(strlen(quelle+1));
	strcpy(ziel2, quelle);
	printf("Ziel2: %s\n", ziel2);

	/* do not do this!
	strcpy(ziel3, quelle); */

	return(0);

}
