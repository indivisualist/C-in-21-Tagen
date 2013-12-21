#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char quelle[] = "Der Quellstring.";

int main() {

	char *ziel;
	
	/* strdup is not ANSI C ... but should work */
	if ((ziel = strdup(quelle)) == NULL) {
		fprintf(stderr, "Fehler bei der Speicherreservierung.");
		exit(1);
	}

	printf("Das Ziel = %s", ziel);

	return(0);

}
