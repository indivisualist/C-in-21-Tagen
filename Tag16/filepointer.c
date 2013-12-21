#include <stdlib.h>
#include <stdio.h>

#define PUFFERLAENGE 6

char msg[] = "abcdefghijklmnopqrstuvwxyz";

int main() {

	FILE *fp;
	char puffer[PUFFERLAENGE];

	/* open file and write message */

	if ( (fp = fopen("text.txt", "w")) == NULL ) {
		fprintf(stderr, "Fehler beim Oeffnen der Datei.");
		exit(1);
	}

	if (fputs(msg, fp) == EOF) {
		fprintf(stderr, "Fehler beim Schreiben in die Datei.");
		exit(1);
	}

	fclose(fp);

	/* open file and read message */

	if ( (fp = fopen("text.txt", "r")) == NULL ) {
		fprintf(stderr, "Fehler beim Oeffnen der Datei.");
		exit(1);
	}
	
	printf("Position nach Oeffnen: %ld", ftell(fp));

	fgets(puffer, PUFFERLAENGE, fp);
	printf("\nnach dem einlesen von %s, position %ld", puffer, ftell(fp));

	fgets(puffer, PUFFERLAENGE, fp);
	printf("\nnach dem einlesen von %s, position %ld", puffer, ftell(fp));

	rewind(fp);

	printf("\nNach dem Zuruecksetzen ist die Position %ld", ftell(fp));

	fgets(puffer, PUFFERLAENGE, fp);
	printf("\nnach dem einlesen von %s, position %ld", puffer, ftell(fp));

	fclose(fp);
	return(0);

}
